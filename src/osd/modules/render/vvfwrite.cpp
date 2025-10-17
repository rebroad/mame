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
	, m_current_color(rgb_t::white())
	, m_current_intensity(255)
	, m_last_x(0)
	, m_last_y(0)
	, m_current_palette_index(0)
	, m_stats{0, 0, 0, 0, 0, 0, 0, 0}
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

	write_line_command(x1, y1, x2, y2, color, intensity);
}

void vvf_write::draw_point(s32 x, s32 y, uint8_t intensity)
{
	if (!m_recording)
		return;

	write_point_command(x, y, intensity);
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

void vvf_write::write_line_command(s32 x1, s32 y1, s32 x2, s32 y2, rgb_t color, uint8_t intensity)
{
	// If line doesn't start at our current position, move beam there (intensity=0)
	if (x1 != m_last_x || y1 != m_last_y)
	{
		// Recursive call with intensity=0 to move beam without drawing
		write_line_command(m_last_x, m_last_y, x1, y1, m_current_color, 0);
	}

	// Calculate deltas from current position
	int dx = x2 - m_last_x;
	int dy = y2 - m_last_y;
	int abs_dx = abs(dx);
	int abs_dy = abs(dy);

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
				target_x = x2;
				target_y = y2;
			}

			// Recursive call for each segment (will use LINE_TO12 or smaller)
			write_line_command(m_last_x, m_last_y, target_x, target_y, color, intensity);
		}
		return;
	}

	// Update state
	m_last_x = x2;
	m_last_y = y2;
	m_current_color = color;
	m_current_intensity = intensity;
	m_current_palette_index = palette_index;
}

void vvf_write::write_point_command(s32 x, s32 y, uint8_t intensity)
{
	// Check if we should use delta encoding
	bool use_delta = (abs(x - m_last_x) <= 7 && abs(y - m_last_y) <= 7);
	bool use_palette = should_use_palette(m_current_color);

	if (use_delta && use_palette)
	{
		// DELTA_POINT with palette: 2 bytes total
		m_frame_buffer.push_back(static_cast<uint8_t>(vvf_command::DELTA_POINT));

		// Delta coordinates (4-bit signed each)
		int8_t dx = static_cast<int8_t>(x - m_last_x);
		int8_t dy = static_cast<int8_t>(y - m_last_y);

		// Pack two 4-bit deltas into one byte
		m_frame_buffer.push_back(static_cast<uint8_t>((dx & 0x0F) | ((dy & 0x0F) << 4)));

		// Update last coordinates
		m_last_x = x;
		m_last_y = y;
	}
	else
	{
		// Full POINT command: 7 bytes total (original format)
		m_frame_buffer.push_back(static_cast<uint8_t>(vvf_command::POINT));

		// Coordinates (signed 16-bit)
		int16_t coord;
		coord = static_cast<int16_t>(x);
		m_frame_buffer.insert(m_frame_buffer.end(), reinterpret_cast<uint8_t*>(&coord), reinterpret_cast<uint8_t*>(&coord) + 2);
		coord = static_cast<int16_t>(y);
		m_frame_buffer.insert(m_frame_buffer.end(), reinterpret_cast<uint8_t*>(&coord), reinterpret_cast<uint8_t*>(&coord) + 2);

		// Reserved (1 byte)
		m_frame_buffer.push_back(0);

		// Intensity (1 byte)
		m_frame_buffer.push_back(intensity);
	}
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

	// TODO: For now, we'll skip audio to simplify initial implementation
	// Will add PCM or Opus encoding in next iteration
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

	// Save current position (end of frame data)
	uint64_t frame_index_offset = m_file.tellp();

	// Write frame index
	write_frame_index();

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
	header.audio_codec = static_cast<uint16_t>(vvf_audio_codec::PCM);
	header.frame_index_offset = frame_index_offset;
	header.audio_data_offset = 0;
	header.duration_us = duration_us;

	m_file.write(reinterpret_cast<const char *>(&header), sizeof(header));

	// Print statistics
	uint32_t total_commands = m_stats.line_to4_count + m_stats.line_to4_pal_count +
							  m_stats.line_to8_count + m_stats.line_to8_pal_count +
							  m_stats.line_to12_count + m_stats.line_to12_pal_count;

	osd_printf_info("VVF: Finalized %u frames, duration: %.2f seconds\n",
		m_frame_count, duration_us / 1000000.0);
	osd_printf_info("VVF: Total size: %.2f KB (%.2f KB/frame avg)\n",
		m_stats.total_bytes / 1024.0, (m_stats.total_bytes / 1024.0) / m_frame_count);
	osd_printf_info("VVF: Command statistics:\n");
	osd_printf_info("  LINE_TO4:     %6u (%5.1f%%) - 2 bytes each\n",
		m_stats.line_to4_count, 100.0 * m_stats.line_to4_count / total_commands);
	osd_printf_info("  LINE_TO4_PAL: %6u (%5.1f%%) - 3 bytes each\n",
		m_stats.line_to4_pal_count, 100.0 * m_stats.line_to4_pal_count / total_commands);
	osd_printf_info("  LINE_TO8:     %6u (%5.1f%%) - 3 bytes each\n",
		m_stats.line_to8_count, 100.0 * m_stats.line_to8_count / total_commands);
	osd_printf_info("  LINE_TO8_PAL: %6u (%5.1f%%) - 4 bytes each\n",
		m_stats.line_to8_pal_count, 100.0 * m_stats.line_to8_pal_count / total_commands);
	osd_printf_info("  LINE_TO12:    %6u (%5.1f%%) - 4 bytes each\n",
		m_stats.line_to12_count, 100.0 * m_stats.line_to12_count / total_commands);
	osd_printf_info("  LINE_TO12_PAL:%6u (%5.1f%%) - 5 bytes each\n",
		m_stats.line_to12_pal_count, 100.0 * m_stats.line_to12_pal_count / total_commands);
	osd_printf_info("  NEW_COLOR:    %6u - palette entries created\n",
		m_stats.new_color_count);
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

