// license:BSD-3-Clause
// copyright-holders:Roger Broadbent
/***************************************************************************

	vvfwrite.cpp

	VVF (Vector Video Format) writer for MAME
	Records vector graphics in native format with audio

***************************************************************************/

#include "vvfwrite.h"
#include "screen.h"
#include "emuopts.h"
#include <cmath>
#include <limits>

//**************************************************************************
//  HELPER FUNCTIONS
//**************************************************************************

static void write_u32(std::ofstream &file, uint32_t value)
{
	file.write(reinterpret_cast<const char *>(&value), sizeof(value));
}

static void write_u64(std::ofstream &file, uint64_t value)
{
	file.write(reinterpret_cast<const char *>(&value), sizeof(value));
}

//**************************************************************************
//  VVF WRITER IMPLEMENTATION
//**************************************************************************

vvf_write::vvf_write(running_machine &machine, s32 width, s32 height)
	: m_machine(machine)
	, m_recording(false)
	, m_width(width)
	, m_height(height)
	, m_frame_rate(60000)  // Default 60 Hz
	, m_frame_count(0)
	, m_start_time(attotime::zero)
	, m_audio_sample_rate(48000)
	, m_audio_channels(2)
#ifdef MAME_FFMPEG
	, m_opus_context(nullptr)
	, m_opus_frame(nullptr)
	, m_swr_context(nullptr)
	, m_opus_frame_size(0)
#endif
	, m_current_color(rgb_t::white())
	, m_current_intensity(255)
	, m_last_x(0)
	, m_last_y(0)
	, m_current_palette_index(0)
	, m_stats{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  // counts including beam_moves_count and beam_draws_count
		std::numeric_limits<double>::max(), 0.0,  // min_draw_distance, max_draw_distance
		std::numeric_limits<double>::max(), 0.0,  // min_move_distance, max_move_distance
		{0, 0, 0, 0, 0, 0, 0},  // draws_per_color[7] - all zeros
		0,  // draws_other_colors
		0, 0, 0, 0,  // max_draw coords
		0, 0, 0, 0}  // max_move coords
	, m_last_stats_print(attotime::zero)
{
	// Get actual frame rate from first screen if available
	screen_device_enumerator screens(machine.root_device());
	if (screens.first())
	{
		m_frame_rate = uint32_t(ATTOSECONDS_TO_HZ(screens.first()->frame_period().m_attoseconds) * 1000);
	}

	// Get audio sample rate from machine
	m_audio_sample_rate = machine.sample_rate();
	m_audio_channels = (machine.sound().outputs_count() > 1) ? 2 : 1;

	osd_printf_verbose("VVF: Initialized %dx%d @ %.2f Hz, audio: %d Hz %d ch\n",
		width, height, m_frame_rate / 1000.0, m_audio_sample_rate, m_audio_channels);
}

vvf_write::~vvf_write()
{
	if (m_recording)
		stop();

#ifdef MAME_FFMPEG
	cleanup_opus_encoder();
#endif
}

void vvf_write::record(std::string_view filename)
{
	if (m_recording)
		stop();

	// Open file for binary writing
	m_file.open(std::string(filename), std::ios::binary | std::ios::trunc);
	if (!m_file.is_open())
	{
		osd_printf_error("VVF: Failed to open file '%s' for writing\n", std::string(filename).c_str());
		return;
	}

	// Write placeholder header (we'll update it when finalizing)
	write_header();

	m_recording = true;
	m_frame_count = 0;
	m_start_time = m_machine.time();
	m_frame_index.clear();
	m_audio_buffer.clear();

#ifdef MAME_FFMPEG
	// Initialize Opus encoder
	if (!init_opus_encoder())
	{
		osd_printf_warning("VVF: Failed to initialize Opus encoder, audio will not be recorded\n");
	}
#else
	osd_printf_warning("VVF: Compiled without FFmpeg support, audio will not be recorded\n");
#endif

	osd_printf_info("VVF: Started recording to '%s'\n", std::string(filename).c_str());
}

void vvf_write::stop()
{
	if (!m_recording)
		return;

	osd_printf_info("VVF: Stopping recording (%u frames)\n", m_frame_count);

	// Finalize the file (write index, update header)
	finalize();

	m_file.close();
	m_recording = false;
}

void vvf_write::write_header()
{
	vvf_header header{};
	header.magic = VVF_MAGIC;
	header.version = VVF_VERSION;
	header.width = m_width;
	header.height = m_height;
	header.frame_rate = m_frame_rate;
	header.total_frames = m_frame_count;  // Will be updated in finalize()
	header.audio_sample_rate = m_audio_sample_rate;
	header.audio_channels = m_audio_channels;
	header.audio_codec = static_cast<uint16_t>(vvf_audio_codec::PCM);  // TODO: Opus support
	header.frame_index_offset = 0;  // Will be updated in finalize()
	header.audio_data_offset = 0;   // Not used yet (audio interleaved with frames)
	header.duration_us = 0;         // Will be updated in finalize()

	m_file.write(reinterpret_cast<const char *>(&header), sizeof(header));
}

void vvf_write::begin_frame()
{
	if (!m_recording)
		return;

	// Clear frame buffer for new frame
	m_frame_buffer.clear();
}

void vvf_write::draw_line(s32 x1, s32 y1, s32 x2, s32 y2, rgb_t color, uint8_t intensity)
{
	if (!m_recording)
		return;

	// If line doesn't start at our current position, move beam there (intensity=0)
	if (x1 != m_last_x || y1 != m_last_y)
	{
		line_to(x1, y1, m_current_color, 0);
	}

	// Now draw to the endpoint
	line_to(x2, y2, color, intensity);
}

void vvf_write::end_frame()
{
	if (!m_recording)
		return;

	// Write end-of-frame marker with timestamp
	write_end_frame_command();

	// Record frame index entry (every 30th frame for seeking)
	if (m_frame_count % 30 == 0)
	{
		frame_index_entry entry;
		entry.frame_number = m_frame_count;
		entry.file_offset = m_file.tellp();
		m_frame_index.push_back(entry);
	}

	// Write frame buffer to file
	m_file.write(reinterpret_cast<const char *>(m_frame_buffer.data()), m_frame_buffer.size());

	m_frame_count++;
}

void vvf_write::line_to(s32 x, s32 y, rgb_t color, uint8_t intensity)
{
	// Calculate deltas from current position to target (x, y)
	int dx = x - m_last_x;
	int dy = y - m_last_y;
	int abs_dx = abs(dx);
	int abs_dy = abs(dy);

	// Calculate distance for statistics
	double distance = sqrt(double(dx) * dx + double(dy) * dy);

	if (distance > 0.0)
	{
		if (intensity == 0)
		{
			// Beam move (invisible line)
			m_stats.beam_moves_count++;
			if (distance < m_stats.min_move_distance)
				m_stats.min_move_distance = distance;
			if (distance > m_stats.max_move_distance)
			{
				m_stats.max_move_distance = distance;
				m_stats.max_move_x1 = m_last_x;
				m_stats.max_move_y1 = m_last_y;
				m_stats.max_move_x2 = x;
				m_stats.max_move_y2 = y;
			}
		}
		else
		{
			// Visible line (drawing)
			m_stats.beam_draws_count++;
			if (distance < m_stats.min_draw_distance)
				m_stats.min_draw_distance = distance;
			if (distance > m_stats.max_draw_distance)
			{
				m_stats.max_draw_distance = distance;
				m_stats.max_draw_x1 = m_last_x;
				m_stats.max_draw_y1 = m_last_y;
				m_stats.max_draw_x2 = x;
				m_stats.max_draw_y2 = y;
			}

			// Track draws per color (ignoring intensity) - classify into basic colors
			uint8_t r = color.r();
			uint8_t g = color.g();
			uint8_t b = color.b();

			// Check for basic colors (using threshold for "close enough")
			const uint8_t threshold = 32;
			const uint8_t min_rgb = threshold;
			const uint8_t max_rgb = 255 - threshold;
			if (r >= max_rgb && g < min_rgb && b < min_rgb)
				m_stats.draws_per_color[COLOR_RED]++;
			else if (r < min_rgb && g >= max_rgb && b < min_rgb)
				m_stats.draws_per_color[COLOR_GREEN]++;
			else if (r < min_rgb && g < min_rgb && b >= max_rgb)
				m_stats.draws_per_color[COLOR_BLUE]++;
			else if (r >= max_rgb && g >= max_rgb && b < min_rgb)
				m_stats.draws_per_color[COLOR_YELLOW]++;
			else if (r < min_rgb && g >= max_rgb && b >= max_rgb)
				m_stats.draws_per_color[COLOR_CYAN]++;
			else if (r >= max_rgb && g < min_rgb && b >= max_rgb)
				m_stats.draws_per_color[COLOR_MAGENTA]++;
			else if (r >= max_rgb && g >= max_rgb && b >= max_rgb)
				m_stats.draws_per_color[COLOR_WHITE]++;
			else
				m_stats.draws_other_colors++;
		}
	}

	// Check if we need to add color+intensity to palette
	uint8_t palette_index = find_or_add_palette_entry(color, intensity);
	bool needs_palette_switch = (palette_index != m_current_palette_index);

	// Choose command based on distance
	if (abs_dx <= 7 && abs_dy <= 7)
	{
		// LINE_TO4 or LINE_TO4_PAL
		if (needs_palette_switch)
		{
			// LINE_TO4_PAL: 3 bytes
			m_frame_buffer.push_back(static_cast<uint8_t>(vvf_command::LINE_TO4_PAL));
			m_frame_buffer.push_back(static_cast<uint8_t>((dx & 0x0F) | ((dy & 0x0F) << 4)));
			m_frame_buffer.push_back(palette_index); // 8-bit palette index (256 entries)
			m_stats.line_to4_pal_count++;
			m_stats.total_bytes += 3;
		}
		else
		{
			// LINE_TO4: 2 bytes
			m_frame_buffer.push_back(static_cast<uint8_t>(vvf_command::LINE_TO4));
			m_frame_buffer.push_back(static_cast<uint8_t>((dx & 0x0F) | ((dy & 0x0F) << 4)));
			m_stats.line_to4_count++;
			m_stats.total_bytes += 2;
		}
	}
	else if (abs_dx <= 127 && abs_dy <= 127)
	{
		// LINE_TO8 or LINE_TO8_PAL
		if (needs_palette_switch)
		{
			// LINE_TO8_PAL: 4 bytes
			m_frame_buffer.push_back(static_cast<uint8_t>(vvf_command::LINE_TO8_PAL));
			m_frame_buffer.push_back(static_cast<uint8_t>(dx & 0xFF));
			m_frame_buffer.push_back(static_cast<uint8_t>(dy & 0xFF));
			m_frame_buffer.push_back(palette_index); // 8-bit palette index (256 entries)
			m_stats.line_to8_pal_count++;
			m_stats.total_bytes += 4;
		}
		else
		{
			// LINE_TO8: 3 bytes
			m_frame_buffer.push_back(static_cast<uint8_t>(vvf_command::LINE_TO8));
			m_frame_buffer.push_back(static_cast<uint8_t>(dx & 0xFF));
			m_frame_buffer.push_back(static_cast<uint8_t>(dy & 0xFF));
			m_stats.line_to8_count++;
			m_stats.total_bytes += 3;
		}
	}
	else if (abs_dx <= 2047 && abs_dy <= 2047)
	{
		// LINE_TO12 or LINE_TO12_PAL
		// Pack 12-bit values: dx (bits 0-11), dy (bits 12-23)
		uint32_t packed = ((dx & 0x0FFF) | ((dy & 0x0FFF) << 12));

		if (needs_palette_switch)
		{
			// LINE_TO12_PAL: 5 bytes
			m_frame_buffer.push_back(static_cast<uint8_t>(vvf_command::LINE_TO12_PAL));
			m_frame_buffer.push_back(static_cast<uint8_t>(packed & 0xFF));
			m_frame_buffer.push_back(static_cast<uint8_t>((packed >> 8) & 0xFF));
			m_frame_buffer.push_back(static_cast<uint8_t>((packed >> 16) & 0xFF));
			m_frame_buffer.push_back(palette_index); // 8-bit palette index (256 entries)
			m_stats.line_to12_pal_count++;
			m_stats.total_bytes += 5;
		}
		else
		{
			// LINE_TO12: 4 bytes
			m_frame_buffer.push_back(static_cast<uint8_t>(vvf_command::LINE_TO12));
			m_frame_buffer.push_back(static_cast<uint8_t>(packed & 0xFF));
			m_frame_buffer.push_back(static_cast<uint8_t>((packed >> 8) & 0xFF));
			m_frame_buffer.push_back(static_cast<uint8_t>((packed >> 16) & 0xFF));
			m_stats.line_to12_count++;
			m_stats.total_bytes += 4;
		}
	}
	else
	{
		// Distance too large for LINE_TO12 - split into multiple segments
		// Calculate number of segments needed (Pythagoras)
		double distance = sqrt(double(dx) * dx + double(dy) * dy);
		int num_segments = int(ceil(distance / 2047.0));

		osd_printf_verbose("VVF: Splitting long line (dx=%d, dy=%d, dist=%.1f) into %d segments\n",
			dx, dy, distance, num_segments);

		// Split the line into equal segments
		for (int i = 0; i < num_segments; i++)
		{
			s32 seg_dx = dx / num_segments;
			s32 seg_dy = dy / num_segments;
			s32 target_x = m_last_x + seg_dx;
			s32 target_y = m_last_y + seg_dy;

			// Last segment gets any remainder
			if (i == num_segments - 1)
			{
				target_x = x;
				target_y = y;
			}

			// Recursive call for each segment (will use LINE_TO12 or smaller)
			line_to(target_x, target_y, color, intensity);
		}
		return;
	}

	// Update state
	m_last_x = x;
	m_last_y = y;
	m_current_color = color;
	m_current_intensity = intensity;
	m_current_palette_index = palette_index;
}

void vvf_write::write_end_frame_command()
{
	// END_FRAME command: 5 bytes total
	m_frame_buffer.push_back(static_cast<uint8_t>(vvf_command::END_FRAME));

	// Timestamp in milliseconds
	attotime elapsed = m_machine.time() - m_start_time;
	uint32_t timestamp_ms = uint32_t(elapsed.as_double() * 1000.0);
	m_frame_buffer.insert(m_frame_buffer.end(),
		reinterpret_cast<uint8_t*>(&timestamp_ms),
		reinterpret_cast<uint8_t*>(&timestamp_ms) + 4);
}

void vvf_write::audio_frame(const s16 *samples, int num_samples)
{
	if (!m_recording)
		return;

#ifdef MAME_FFMPEG
	if (m_opus_context)
	{
		encode_opus_frame(samples, num_samples);
	}
#else
	// No audio encoding available
	(void)samples;
	(void)num_samples;
#endif
}

void vvf_write::write_frame_index()
{
	// Write frame index count
	uint32_t count = static_cast<uint32_t>(m_frame_index.size());
	write_u32(m_file, count);

	// Write each index entry
	for (const auto &entry : m_frame_index)
	{
		write_u32(m_file, entry.frame_number);
		write_u64(m_file, entry.file_offset);
	}
}

void vvf_write::finalize()
{
	if (!m_file.is_open())
		return;

#ifdef MAME_FFMPEG
	// Flush Opus encoder
	if (m_opus_context)
	{
		avcodec_send_frame(m_opus_context, nullptr); // Flush
		AVPacket *pkt = av_packet_alloc();
		while (avcodec_receive_packet(m_opus_context, pkt) == 0)
		{
			uint32_t size = pkt->size;
			m_opus_buffer.insert(m_opus_buffer.end(),
				reinterpret_cast<uint8_t*>(&size),
				reinterpret_cast<uint8_t*>(&size) + 4);
			m_opus_buffer.insert(m_opus_buffer.end(),
				pkt->data,
				pkt->data + pkt->size);
			av_packet_unref(pkt);
		}
		av_packet_free(&pkt);
	}
#endif

	// Save current position (end of frame data)
	uint64_t frame_index_offset = m_file.tellp();

	// Write frame index
	write_frame_index();

	// Write Opus audio data
	uint64_t audio_data_offset = 0;
#ifdef MAME_FFMPEG
	if (!m_opus_buffer.empty())
	{
		audio_data_offset = m_file.tellp();
		m_file.write(reinterpret_cast<const char*>(m_opus_buffer.data()), m_opus_buffer.size());
		osd_printf_info("VVF: Wrote %zu bytes of Opus audio data\n", m_opus_buffer.size());
	}
#endif

	// Calculate total duration
	attotime elapsed = m_machine.time() - m_start_time;
	uint64_t duration_us = uint64_t(elapsed.as_double() * 1000000.0);

	// Update header with final values
	m_file.seekp(0);
	vvf_header header{};
	header.magic = VVF_MAGIC;
	header.version = VVF_VERSION;
	header.width = m_width;
	header.height = m_height;
	header.frame_rate = m_frame_rate;
	header.total_frames = m_frame_count;
	header.audio_sample_rate = m_audio_sample_rate;
	header.audio_channels = m_audio_channels;
#ifdef MAME_FFMPEG
	header.audio_codec = static_cast<uint16_t>(m_opus_context ? vvf_audio_codec::OPUS : vvf_audio_codec::NONE);
#else
	header.audio_codec = static_cast<uint16_t>(vvf_audio_codec::NONE);
#endif
	header.frame_index_offset = frame_index_offset;
	header.audio_data_offset = audio_data_offset;
	header.duration_us = duration_us;

	m_file.write(reinterpret_cast<const char *>(&header), sizeof(header));

	// Print statistics
	uint32_t total_commands = m_stats.line_to4_count + m_stats.line_to4_pal_count +
							  m_stats.line_to8_count + m_stats.line_to8_pal_count +
							  m_stats.line_to12_count + m_stats.line_to12_pal_count;

	osd_printf_info("VVF: %u frames, %.2fs, %.2f KB (%.2f KB/frame), %u palette entries\n",
		m_frame_count, duration_us / 1000000.0, m_stats.total_bytes / 1024.0,
		(m_stats.total_bytes / 1024.0) / m_frame_count, m_stats.new_color_count);

	// Commands (compact single line)
	osd_printf_info("VVF: Commands: LINE_TO4=%u(%.1f%%) LINE_TO4_PAL=%u(%.1f%%) LINE_TO8=%u(%.1f%%) LINE_TO8_PAL=%u(%.1f%%) LINE_TO12=%u(%.1f%%) LINE_TO12_PAL=%u(%.1f%%)\n",
		m_stats.line_to4_count, 100.0 * m_stats.line_to4_count / total_commands,
		m_stats.line_to4_pal_count, 100.0 * m_stats.line_to4_pal_count / total_commands,
		m_stats.line_to8_count, 100.0 * m_stats.line_to8_count / total_commands,
		m_stats.line_to8_pal_count, 100.0 * m_stats.line_to8_pal_count / total_commands,
		m_stats.line_to12_count, 100.0 * m_stats.line_to12_count / total_commands,
		m_stats.line_to12_pal_count, 100.0 * m_stats.line_to12_pal_count / total_commands);

	// Movement stats
	uint32_t total_line_to_calls = m_stats.beam_moves_count + m_stats.beam_draws_count;
	osd_printf_info("VVF: Moves=%u(%.1f%%) Draws=%u(%.1f%%)\n",
		m_stats.beam_moves_count, 100.0 * m_stats.beam_moves_count / total_line_to_calls,
		m_stats.beam_draws_count, 100.0 * m_stats.beam_draws_count / total_line_to_calls);

	// Distance stats with coordinates
	if (m_stats.min_draw_distance < std::numeric_limits<double>::max())
	{
		osd_printf_info("VVF: Draw distance: %.1f - %.1f px | Max from (%d,%d) to (%d,%d)\n",
			m_stats.min_draw_distance, m_stats.max_draw_distance,
			m_stats.max_draw_x1, m_stats.max_draw_y1, m_stats.max_draw_x2, m_stats.max_draw_y2);
	}
	if (m_stats.min_move_distance < std::numeric_limits<double>::max())
	{
		osd_printf_info("VVF: Move distance: %.1f - %.1f px | Max from (%d,%d) to (%d,%d)\n",
			m_stats.min_move_distance, m_stats.max_move_distance,
			m_stats.max_move_x1, m_stats.max_move_y1, m_stats.max_move_x2, m_stats.max_move_y2);
	}

	// Color usage (compact)
	if (m_stats.beam_draws_count > 0)
	{
		const char *color_names[COLOR_COUNT] = {"R", "G", "B", "Y", "C", "M", "W"};
		osd_printf_info("VVF: Colors: ");
		for (int i = 0; i < COLOR_COUNT; i++)
		{
			if (m_stats.draws_per_color[i] > 0)
				osd_printf_info("%s=%.1f%% ", color_names[i],
					100.0 * m_stats.draws_per_color[i] / m_stats.beam_draws_count);
		}
		if (m_stats.draws_other_colors > 0)
			osd_printf_info("Other=%.1f%%", 100.0 * m_stats.draws_other_colors / m_stats.beam_draws_count);
		osd_printf_info("\n");
	}
}

//**************************************************************************
//  PALETTE HELPER
//**************************************************************************

uint8_t vvf_write::find_or_add_palette_entry(rgb_t color, uint8_t intensity)
{
	// Look for existing palette entry (color + intensity pair)
	for (size_t i = 0; i < m_palette.size(); i++)
	{
		if (m_palette[i].color == color && m_palette[i].intensity == intensity)
		{
			return static_cast<uint8_t>(i);
		}
	}

	// Add new palette entry if we have room
	if (m_palette.size() < 256)
	{
		// Emit NEW_COLOR command
		m_frame_buffer.push_back(static_cast<uint8_t>(vvf_command::NEW_COLOR));
		m_frame_buffer.push_back(color.r());
		m_frame_buffer.push_back(color.g());
		m_frame_buffer.push_back(color.b());
		m_frame_buffer.push_back(intensity);
		m_stats.new_color_count++;
		m_stats.total_bytes += 5;

		palette_entry entry;
		entry.color = color;
		entry.intensity = intensity;
		m_palette.push_back(entry);

		osd_printf_verbose("VVF: Added palette entry %d: RGB(%d,%d,%d) intensity=%d\n",
			(int)m_palette.size() - 1, color.r(), color.g(), color.b(), intensity);

		return static_cast<uint8_t>(m_palette.size() - 1);
	}

	// Palette full (256 entries) - find closest match
	// For now, just use palette entry 0
	osd_printf_warning("VVF: Palette full (256 entries), reusing entry 0\n");
	return 0;
}

//**************************************************************************
//  OPUS AUDIO ENCODING (FFmpeg)
//**************************************************************************

#ifdef MAME_FFMPEG

bool vvf_write::init_opus_encoder()
{
	// Find Opus encoder
	const AVCodec *codec = avcodec_find_encoder(AV_CODEC_ID_OPUS);
	if (!codec)
	{
		osd_printf_error("VVF: Opus encoder not found (libopus not available)\n");
		return false;
	}

	// Allocate encoder context
	m_opus_context = avcodec_alloc_context3(codec);
	if (!m_opus_context)
	{
		osd_printf_error("VVF: Failed to allocate Opus encoder context\n");
		return false;
	}

	// Configure encoder
	m_opus_context->sample_rate = m_audio_sample_rate;
	// Set channel layout: 2 for stereo, 1 for mono
	av_channel_layout_default(&m_opus_context->ch_layout, m_audio_channels);
	m_opus_context->sample_fmt = AV_SAMPLE_FMT_FLT; // Opus uses float samples
	m_opus_context->bit_rate = 64000; // 64 kbps - good quality for game audio

	// Open encoder
	if (avcodec_open2(m_opus_context, codec, nullptr) < 0)
	{
		osd_printf_error("VVF: Failed to open Opus encoder\n");
		avcodec_free_context(&m_opus_context);
		return false;
	}

	m_opus_frame_size = m_opus_context->frame_size; // Typically 960 samples @ 48kHz

	// Allocate frame
	m_opus_frame = av_frame_alloc();
	if (!m_opus_frame)
	{
		osd_printf_error("VVF: Failed to allocate Opus frame\n");
		avcodec_free_context(&m_opus_context);
		return false;
	}

	m_opus_frame->nb_samples = m_opus_frame_size;
	m_opus_frame->format = m_opus_context->sample_fmt;
	m_opus_frame->ch_layout = m_opus_context->ch_layout;

	if (av_frame_get_buffer(m_opus_frame, 0) < 0)
	{
		osd_printf_error("VVF: Failed to allocate Opus frame buffer\n");
		av_frame_free(&m_opus_frame);
		avcodec_free_context(&m_opus_context);
		return false;
	}

	// Initialize resampler (s16 -> float)
	AVChannelLayout out_ch_layout = m_opus_context->ch_layout;
	AVChannelLayout in_ch_layout = m_opus_context->ch_layout;
	if (swr_alloc_set_opts2(&m_swr_context,
		&out_ch_layout, m_opus_context->sample_fmt, m_audio_sample_rate,
		&in_ch_layout, AV_SAMPLE_FMT_S16, m_audio_sample_rate,
		0, nullptr) < 0)
	{
		osd_printf_error("VVF: Failed to allocate resampler\n");
		av_frame_free(&m_opus_frame);
		avcodec_free_context(&m_opus_context);
		return false;
	}

	if (swr_init(m_swr_context) < 0)
	{
		osd_printf_error("VVF: Failed to initialize resampler\n");
		swr_free(&m_swr_context);
		av_frame_free(&m_opus_frame);
		avcodec_free_context(&m_opus_context);
		return false;
	}

	osd_printf_info("VVF: Opus encoder initialized: %d Hz, %d ch, frame size: %d samples\n",
		m_audio_sample_rate, m_audio_channels, m_opus_frame_size);

	return true;
}

void vvf_write::cleanup_opus_encoder()
{
	if (m_swr_context)
	{
		swr_free(&m_swr_context);
		m_swr_context = nullptr;
	}

	if (m_opus_frame)
	{
		av_frame_free(&m_opus_frame);
		m_opus_frame = nullptr;
	}

	if (m_opus_context)
	{
		avcodec_free_context(&m_opus_context);
		m_opus_context = nullptr;
	}
}

void vvf_write::encode_opus_frame(const s16 *samples, int num_samples)
{
	// Buffer incoming samples until we have enough for an Opus frame
	for (int i = 0; i < num_samples * m_audio_channels; i++)
	{
		m_audio_buffer.push_back(samples[i]);
	}

	// Encode complete Opus frames
	while (m_audio_buffer.size() >= size_t(m_opus_frame_size * m_audio_channels))
	{
		// Convert s16 samples to float using resampler
		const uint8_t *in_data[1] = { reinterpret_cast<const uint8_t*>(m_audio_buffer.data()) };
		int in_samples = m_opus_frame_size;

		if (swr_convert(m_swr_context,
			m_opus_frame->data, m_opus_frame_size,
			in_data, in_samples) < 0)
		{
			osd_printf_error("VVF: Audio resampling failed\n");
			return;
		}

		m_opus_frame->pts = m_opus_context->frame_num;

		// Send frame to encoder
		if (avcodec_send_frame(m_opus_context, m_opus_frame) < 0)
		{
			osd_printf_error("VVF: Failed to send frame to Opus encoder\n");
			return;
		}

		// Receive encoded packets
		AVPacket *pkt = av_packet_alloc();
		while (avcodec_receive_packet(m_opus_context, pkt) == 0)
		{
			// Write Opus packet to buffer
			// Format: [size:4][data:size]
			uint32_t size = pkt->size;
			m_opus_buffer.insert(m_opus_buffer.end(),
				reinterpret_cast<uint8_t*>(&size),
				reinterpret_cast<uint8_t*>(&size) + 4);
			m_opus_buffer.insert(m_opus_buffer.end(),
				pkt->data,
				pkt->data + pkt->size);

			av_packet_unref(pkt);
		}
		av_packet_free(&pkt);

		// Remove processed samples from buffer
		m_audio_buffer.erase(m_audio_buffer.begin(),
			m_audio_buffer.begin() + m_opus_frame_size * m_audio_channels);
	}
}

#endif // MAME_FFMPEG

