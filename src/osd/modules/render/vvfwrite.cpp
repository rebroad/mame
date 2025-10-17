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
#include <algorithm>

//**************************************************************************
//  CONSTANTS
//**************************************************************************

// VVF coordinate limits (12-bit signed deltas for LINE_TO commands)
static const s32 LINE_TO4_MAX = 7;
static const s32 LINE_TO8_MAX = 127;
static const s32 LINE_TO12_MAX = 2047;
static const s32 COORD_MAX = 2047;     // Maximum coordinate value

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
	, m_x_scale(8192)  // Start with 8192, will optimize after first frame with data
	, m_y_scale(8192)
	, m_min_x(INT32_MAX), m_max_x(INT32_MIN)  // Track actual coordinate range
	, m_min_y(INT32_MAX), m_max_y(INT32_MIN)
	, m_frame_started(false)
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
		0, 0, 0, 0,  // max_move coords
		0,  // debug_line_count
		0, 0, // x_rescale_count, y_rescale_count
		0,    // palette_full_count
		0, 0, 0, 0, 0}  // Precision: total_error_x, total_error_y, samples, max_error_x, max_error_y
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
	header.native_width = m_width;   // Will be updated in finalize()
	header.native_height = m_height;
	header.vvf_width = 0;            // Will be updated in finalize()
	header.vvf_height = 0;
	header.frame_rate = m_frame_rate;
	header.total_frames = 0;         // Will be updated in finalize()
	header.audio_sample_rate = m_audio_sample_rate;
	header.audio_channels = static_cast<uint8_t>(m_audio_channels);
	header.audio_codec = 0;          // Will be updated in finalize()
	header.reserved1 = 0;
	header.frame_index_offset = 0;  // Will be updated in finalize()
	header.audio_data_offset = 0;
	header.duration_us = 0;
	header.reserved2 = 0;

	m_file.write(reinterpret_cast<const char *>(&header), sizeof(header));
}

// Static counters for frame-level debug tracking
static uint32_t s_frame_draw_calls = 0;
static uint32_t s_frame_line_to_calls = 0;

void vvf_write::begin_frame()
{
	if (!m_recording)
		return;

	// Mark that this frame has started (for end_frame() to know it should process)
	m_frame_started = true;

	// Debug: Print frame stats (stop at 40 line_to or end of frame 0)
	if (m_stats.debug_line_count < 40)
	{
		attotime elapsed = m_machine.time() - m_start_time;
		double elapsed_sec = elapsed.as_double();
		uint32_t seconds = (uint32_t)elapsed_sec;
		uint32_t milliseconds = (uint32_t)((elapsed_sec - seconds) * 1000.0);

		osd_printf_info("%u.%03u VVF Frame #%u stats: %u draw_line calls, %u line_to calls, %zu bytes written\n",
			seconds, milliseconds, m_frame_count - 1, s_frame_draw_calls, s_frame_line_to_calls, m_frame_buffer.size());
	}

	// Reset per-frame counters
	s_frame_draw_calls = 0;
	s_frame_line_to_calls = 0;

	// Clear frame buffer for new frame
	m_frame_buffer.clear();
}

void vvf_write::line_to(s32 x, s32 y, rgb_t color, uint8_t intensity)
{
	if (!m_recording)
		return;

	s_frame_draw_calls++;

	// Track coordinate ranges (always, for every coordinate)
	if (x < m_min_x) m_min_x = x;
	if (x > m_max_x) m_max_x = x;
	if (y < m_min_y) m_min_y = y;
	if (y > m_max_y) m_max_y = y;

	// Map coordinate to VVF range: (mame_coord - min) / scale
	s32 scaled_x = (x - m_min_x) / m_x_scale;
	s32 scaled_y = (y - m_min_y) / m_y_scale;

	// Check for overflow/rescale during first frame (before range optimization)
	if (m_frame_count == 0)
	{
		// Inline overflow check for first frame
		if (scaled_x > COORD_MAX || scaled_x < 0)
		{
			s32 new_range_x = max_x - min_x;
			s32 old_scale = m_x_scale;
			m_x_scale = (new_range_x + COORD_MAX) / COORD_MAX;
			m_stats.x_rescale_count++;
			osd_printf_warning("VVF: Optimized X: range [%d..%d] → scale %d -> %d (%.1fx loss)\n",
				min_x, max_x, old_scale, m_x_scale, (double)m_x_scale / old_scale);
			scaled_x = (x - m_min_x) / m_x_scale;
		}

		if (scaled_y > COORD_MAX || scaled_y < 0)
		{
			s32 new_range_y = max_y - min_y;
			s32 old_scale = m_y_scale;
			m_y_scale = (new_range_y + COORD_MAX) / COORD_MAX;
			m_stats.y_rescale_count++;
			osd_printf_warning("VVF: Optimized Y: range [%d..%d] → scale %d -> %d (%.1fx loss)\n",
				min_y, max_y, old_scale, m_y_scale, (double)m_y_scale / old_scale);
			scaled_y = (y - m_min_y) / m_y_scale;
		}
	}

	// Debug output (stop at 40 or end of frame 0)
	static uint32_t debug_draw_count = 0;
	if (m_stats.debug_line_count < 40 && m_frame_count == 0)
	{
		attotime elapsed = m_machine.time() - m_start_time;
		double elapsed_sec = elapsed.as_double();
		uint32_t seconds = (uint32_t)elapsed_sec;
		uint32_t milliseconds = (uint32_t)((elapsed_sec - seconds) * 1000.0);

		osd_printf_info("%u.%03u VVF line_to #%u: RAW (%d,%d) SCALED (%d,%d) RGB(%u,%u,%u) i=%u\n",
			seconds, milliseconds, debug_draw_count, x, y, scaled_x, scaled_y,
			color.r(), color.g(), color.b(), intensity);
		debug_draw_count++;
	}

	// Write VVF command
	write_line_command(scaled_x, scaled_y, color, intensity);
}

void vvf_write::end_frame()
{
	if (!m_recording)
		return;

	// Skip frames where begin_frame() was never called
	// (happens during initialization before vector rendering starts)
	if (!m_frame_started)
		return;

	attotime current_time = m_machine.time();
	attotime elapsed = current_time - m_start_time;
	double elapsed_sec = elapsed.as_double();

	if (m_stats.debug_line_count < 40)
	{
		uint32_t seconds = (uint32_t)elapsed_sec;
		uint32_t milliseconds = (uint32_t)((elapsed_sec - seconds) * 1000.0);

		osd_printf_info("%u.%03u VVF end_frame #%u (wrote %zu bytes this frame)\n",
			seconds, milliseconds, m_frame_count, m_frame_buffer.size());
	}

	// Per-second stats output (for live monitoring)
	if ((current_time - m_last_stats_print).as_double() >= 1.0)
	{
		osd_printf_info("%.1fs VVF: ", elapsed_sec);
		print_color_stats();
		osd_printf_info("| %u frames, %.2f KB\n", m_frame_count, m_stats.total_bytes / 1024.0);
		m_last_stats_print = current_time;
	}

	// Write end-of-frame marker with timestamp
	write_end_frame_command();

	// After first frame, optimize scale and check for overflow
	if (m_frame_count > 0)
	{
		// Subsequent frames: check if range expanded and rescale if needed
		s32 range_x = m_max_x - m_min_x;
		s32 range_y = m_max_y - m_min_y;
		s32 vvf_max_x = range_x / m_x_scale;
		s32 vvf_max_y = range_y / m_y_scale;

		if (vvf_max_x > COORD_MAX)
		{
			s32 old_scale = m_x_scale;
			m_x_scale = (range_x + COORD_MAX) / COORD_MAX;
			m_stats.x_rescale_count++;
			osd_printf_warning("VVF: X overflow! Range [%d..%d] → scale %d -> %d (%.1fx loss) at frame %u\n",
				m_min_x, m_max_x, old_scale, m_x_scale, (double)m_x_scale / old_scale, m_frame_count);
		}

		if (vvf_max_y > COORD_MAX)
		{
			s32 old_scale = m_y_scale;
			m_y_scale = (range_y + COORD_MAX) / COORD_MAX;
			m_stats.y_rescale_count++;
			osd_printf_warning("VVF: Y overflow! Range [%d..%d] → scale %d -> %d (%.1fx loss) at frame %u\n",
				m_min_y, m_max_y, old_scale, m_y_scale, (double)m_y_scale / old_scale, m_frame_count);
		}
	}

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

	// Reset flag for next frame
	m_frame_started = false;
}

void vvf_write::write_line_command(s32 x, s32 y, rgb_t color, uint8_t intensity)
{
	s_frame_line_to_calls++;

	// Debug: Print line_to calls (stop at 40 or end of frame 0)
	if (m_stats.debug_line_count < 40 && m_frame_count == 0)
	{
		// Get timestamp since recording started
		attotime elapsed = m_machine.time() - m_start_time;
		double elapsed_sec = elapsed.as_double();
		uint32_t seconds = (uint32_t)elapsed_sec;
		uint32_t milliseconds = (uint32_t)((elapsed_sec - seconds) * 1000.0);

		osd_printf_info("%u.%03u VVF line_to #%u: (%d,%d) -> (%d,%d) color=RGB(%u,%u,%u) intensity=%u\n",
			seconds, milliseconds, m_stats.debug_line_count, m_last_x, m_last_y, x, y,
			color.r(), color.g(), color.b(), intensity);
		m_stats.debug_line_count++;
	}

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

	// Choose command based on delta magnitude
	if (abs_dx <= LINE_TO4_MAX && abs_dy <= LINE_TO4_MAX)
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
	else if (abs_dx <= LINE_TO8_MAX && abs_dy <= LINE_TO8_MAX)
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
	else if (abs_dx <= LINE_TO12_MAX && abs_dy <= LINE_TO12_MAX)
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
		// Delta too large for LINE_TO12 - split into multiple segments
		// Calculate segments needed based on max(dx, dy), not diagonal
		int num_segments_x = (abs_dx + LINE_TO12_MAX - 1) / LINE_TO12_MAX;  // Round up
		int num_segments_y = (abs_dy + LINE_TO12_MAX - 1) / LINE_TO12_MAX;
		int num_segments = std::max(num_segments_x, num_segments_y);

		osd_printf_verbose("VVF: Splitting long line (dx=%d, dy=%d) into %d segments\n",
			dx, dy, num_segments);

		// Split the line into equal segments by dividing dx and dy directly
		for (int i = 0; i < num_segments; i++)
		{
			s32 target_x, target_y;

			// Last segment gets exact endpoint to avoid rounding errors
			if (i == num_segments - 1)
			{
				target_x = x;
				target_y = y;
			}
			else
			{
				// Intermediate segment
				target_x = m_last_x + (dx / num_segments);
				target_y = m_last_y + (dy / num_segments);
			}

			// Recursive call for each segment (will use LINE_TO12 or smaller)
			write_line_command(target_x, target_y, color, intensity);
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
	else
#endif
	{
		// Fallback: Write raw PCM samples directly to file
		// This creates uncompressed audio but works without FFmpeg
		m_file.write(reinterpret_cast<const char *>(samples), num_samples * sizeof(s16));
	}
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

	// Get file size BEFORE seeking back to write header
	uint64_t actual_file_size = m_file.tellp();

	// Update header with final values
	m_file.seekp(0);
	vvf_header header{};
	header.magic = VVF_MAGIC;
	header.version = VVF_VERSION;

	// Store VVF coordinate range (what we actually use in the file after scaling)
	if (m_min_x != INT32_MAX)
	{
		s32 range_x = m_max_x - m_min_x;
		s32 range_y = m_max_y - m_min_y;

		// VVF range (scaled from MAME range)
		header.vvf_width = range_x / m_x_scale;
		header.vvf_height = range_y / m_y_scale;

		// Native dimensions (logical pixels): MAME range / 65536
		header.native_width = range_x / 65536;
		header.native_height = range_y / 65536;
	}
	else
	{
		header.vvf_width = m_width;
		header.vvf_height = m_height;
		header.native_width = m_width;
		header.native_height = m_height;
	}

	header.frame_rate = m_frame_rate;
	header.total_frames = m_frame_count;
	header.audio_sample_rate = m_audio_sample_rate;
	header.audio_channels = static_cast<uint8_t>(m_audio_channels);
#ifdef MAME_FFMPEG
	header.audio_codec = static_cast<uint8_t>(m_opus_context ? vvf_audio_codec::OPUS : vvf_audio_codec::PCM);
#else
	header.audio_codec = static_cast<uint8_t>(vvf_audio_codec::PCM);  // Fallback to PCM
#endif
	header.frame_index_offset = frame_index_offset;
	header.audio_data_offset = audio_data_offset;
	header.duration_us = duration_us;
	header.reserved1 = 0;
	header.reserved2 = 0;

	m_file.write(reinterpret_cast<const char *>(&header), sizeof(header));

	// Print statistics
	uint32_t total_commands = m_stats.line_to4_count + m_stats.line_to4_pal_count +
							  m_stats.line_to8_count + m_stats.line_to8_pal_count +
							  m_stats.line_to12_count + m_stats.line_to12_pal_count;

	// Calculate file statistics
	double duration_sec = duration_us / 1000000.0;
	double kb_per_sec = (actual_file_size / 1024.0) / duration_sec;

	osd_printf_info("VVF: %u frames, %.2fs, %.2f MB (%.2f KB/s)\n",
		m_frame_count, duration_sec, actual_file_size / 1048576.0, kb_per_sec);

	// H.264 comparison (typical 1920x1080 @ CRF 23 ≈ 3000-5000 KB/s)
	double h264_estimate_kb_s = 4000.0; // Conservative estimate for 1080p H.264
	double vs_h264_factor = h264_estimate_kb_s / kb_per_sec;
	osd_printf_info("VVF: %.2f KB/frame | Commands: %.2f MB | Palette: %u entries%s | vs H.264(1080p): %.1fx smaller\n",
		actual_file_size / 1024.0 / m_frame_count, m_stats.total_bytes / 1048576.0,
		m_stats.new_color_count,
		m_stats.palette_full_count > 0 ? util::string_format(" (FULL! %u overflow attempts)", m_stats.palette_full_count).c_str() : "",
		vs_h264_factor);

	// Coordinate system info
	if (m_min_x != INT32_MAX)
	{
		// MAME coordinate range
		s32 range_x = m_max_x - m_min_x;
		s32 range_y = m_max_y - m_min_y;

		// VVF coordinate range (after scaling)
		s32 vvf_w = range_x / m_x_scale;
		s32 vvf_h = range_y / m_y_scale;

		// Native dimensions (logical pixels): MAME range / 65536
		s32 native_w = range_x / 65536;
		s32 native_h = range_y / 65536;

		osd_printf_info("VVF: MAME range: X=[%d..%d] Y=[%d..%d] → VVF [0..%d]×[0..%d] | Scales: X÷%d Y÷%d | Precision: %.1f%%\n",
			m_min_x, m_max_x, m_min_y, m_max_y,
			vvf_w, vvf_h, m_x_scale, m_y_scale,
			100.0 * std::max(vvf_w, vvf_h) / COORD_MAX);
		osd_printf_info("VVF: Native: %d×%d (aspect %.2f)\n",
			native_w, native_h, (double)native_w / native_h);

		if (m_stats.x_rescale_count > 0 || m_stats.y_rescale_count > 0)
		{
			osd_printf_info("VVF: Adaptive rescaling events: X=%u Y=%u\n",
				m_stats.x_rescale_count, m_stats.y_rescale_count);
		}

		// Precision loss statistics
		if (m_stats.coord_samples > 0)
		{
			double avg_error_x = (double)m_stats.total_coord_error_x / m_stats.coord_samples;
			double avg_error_y = (double)m_stats.total_coord_error_y / m_stats.coord_samples;

			// Convert MAME units to logical pixels (÷65536)
			double avg_error_x_pixels = avg_error_x / 65536;
			double avg_error_y_pixels = avg_error_y / 65536;
			double max_error_x_pixels = (double)m_stats.max_error_x / 65536;
			double max_error_y_pixels = (double)m_stats.max_error_y / 65536;

			// Calculate bits of precision maintained
			double bits_x = native_w > 0 ? log2((double)native_w / avg_error_x_pixels) : 0;
			double bits_y = native_h > 0 ? log2((double)native_h / avg_error_y_pixels) : 0;

			osd_printf_info("VVF: Precision loss: X avg=%.3f px (max=%.3f px, ~%.1f bits) | Y avg=%.3f px (max=%.3f px, ~%.1f bits)\n",
				avg_error_x_pixels, max_error_x_pixels, bits_x,
				avg_error_y_pixels, max_error_y_pixels, bits_y);
		}
	}

	// Commands summary
	osd_printf_info("VVF: Total commands: %u (%.0f/frame avg)\n", total_commands, (double)total_commands / m_frame_count);
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
		osd_printf_info("VVF: ");
		print_color_stats();
		osd_printf_info("\n");
	}
}

//**************************************************************************
//  PALETTE HELPER
//**************************************************************************

uint8_t vvf_write::find_or_add_palette_entry(rgb_t color, uint8_t intensity)
{
	// Intensity 0 means invisible (beam move) - always use palette entry 0
	// Don't waste palette slots on invisible colors
	if (intensity == 0)
	{
		return 0;
	}

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

		osd_printf_info("VVF: Added palette entry %u: RGB(%u,%u,%u) intensity=%u\n",
			(unsigned)m_palette.size() - 1, (unsigned)color.r(), (unsigned)color.g(), (unsigned)color.b(), (unsigned)intensity);

		return static_cast<uint8_t>(m_palette.size() - 1);
	}

	// Palette full (256 entries)
	m_stats.palette_full_count++;

	osd_printf_warning("VVF: Palette full (%u/5 attempts) - tried to add RGB(%u,%u,%u) intensity=%u, reusing entry 0\n",
		m_stats.palette_full_count, (unsigned)color.r(), (unsigned)color.g(), (unsigned)color.b(), (unsigned)intensity);

	// Stop recording after 5 failed attempts
	if (m_stats.palette_full_count >= 5)
	{
		osd_printf_error("VVF: Palette full 5 times, stopping recording gracefully\n");
		stop();
	}

	return 0;
}

void vvf_write::print_color_stats() const
{
	if (m_stats.beam_draws_count == 0)
		return;

	const char *color_names[COLOR_COUNT] = {"R", "G", "B", "Y", "C", "M", "W"};
	osd_printf_info("Colors: ");
	for (int i = 0; i < COLOR_COUNT; i++)
	{
		if (m_stats.draws_per_color[i] > 0)
			osd_printf_info("%s=%.1f%% ", color_names[i],
				100.0 * m_stats.draws_per_color[i] / m_stats.beam_draws_count);
	}
	if (m_stats.draws_other_colors > 0)
		osd_printf_info("Other=%.1f%% ", 100.0 * m_stats.draws_other_colors / m_stats.beam_draws_count);
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

