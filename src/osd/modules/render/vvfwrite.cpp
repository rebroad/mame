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
		// Move beam without drawing
		m_frame_buffer.push_back(static_cast<uint8_t>(vvf_command::LINE_TO));
		int16_t coord = static_cast<int16_t>(x1);
		m_frame_buffer.insert(m_frame_buffer.end(), reinterpret_cast<uint8_t*>(&coord), reinterpret_cast<uint8_t*>(&coord) + 2);
		coord = static_cast<int16_t>(y1);
		m_frame_buffer.insert(m_frame_buffer.end(), reinterpret_cast<uint8_t*>(&coord), reinterpret_cast<uint8_t*>(&coord) + 2);
		m_frame_buffer.push_back(0); // intensity = 0 (invisible)
		m_last_x = x1;
		m_last_y = y1;
	}

	// Now draw from current position to (x2, y2)
	int dx = x2 - m_last_x;
	int dy = y2 - m_last_y;
	bool small_delta = (abs(dx) <= 7 && abs(dy) <= 7);
	bool color_changed = (color != m_current_color);

	if (small_delta && !color_changed)
	{
		// DELTA_LINE: 3 bytes (command + 2 delta bytes)
		m_frame_buffer.push_back(static_cast<uint8_t>(vvf_command::DELTA_LINE));

		// Pack 4-bit deltas
		int8_t dx_4bit = static_cast<int8_t>(dx) & 0x0F;
		int8_t dy_4bit = static_cast<int8_t>(dy) & 0x0F;
		m_frame_buffer.push_back(static_cast<uint8_t>(dx_4bit | (dy_4bit << 4)));

		// Pack intensity (4-bit) - we keep using current color
		m_frame_buffer.push_back(intensity >> 4); // Scale 0-255 to 0-15
	}
	else if (!color_changed)
	{
		// LINE_TO: 5 bytes (command + x,y + intensity)
		m_frame_buffer.push_back(static_cast<uint8_t>(vvf_command::LINE_TO));
		int16_t coord = static_cast<int16_t>(x2);
		m_frame_buffer.insert(m_frame_buffer.end(), reinterpret_cast<uint8_t*>(&coord), reinterpret_cast<uint8_t*>(&coord) + 2);
		coord = static_cast<int16_t>(y2);
		m_frame_buffer.insert(m_frame_buffer.end(), reinterpret_cast<uint8_t*>(&coord), reinterpret_cast<uint8_t*>(&coord) + 2);
		m_frame_buffer.push_back(intensity);
	}
	else
	{
		// LINE_TO_RGB: 9 bytes (command + x,y + RGB + intensity)
		m_frame_buffer.push_back(static_cast<uint8_t>(vvf_command::LINE_TO_RGB));
		int16_t coord = static_cast<int16_t>(x2);
		m_frame_buffer.insert(m_frame_buffer.end(), reinterpret_cast<uint8_t*>(&coord), reinterpret_cast<uint8_t*>(&coord) + 2);
		coord = static_cast<int16_t>(y2);
		m_frame_buffer.insert(m_frame_buffer.end(), reinterpret_cast<uint8_t*>(&coord), reinterpret_cast<uint8_t*>(&coord) + 2);
		m_frame_buffer.push_back(color.r());
		m_frame_buffer.push_back(color.g());
		m_frame_buffer.push_back(color.b());
		m_frame_buffer.push_back(intensity);

		// Add to palette for future reference
		find_or_add_palette_color(color);
	}

	// Update state
	m_last_x = x2;
	m_last_y = y2;
	m_current_color = color;
	m_current_intensity = intensity;
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

	osd_printf_info("VVF: Finalized %u frames, duration: %.2f seconds\n",
		m_frame_count, duration_us / 1000000.0);
}

//**************************************************************************
//  DELTA ENCODING AND PALETTE HELPERS
//**************************************************************************

bool vvf_write::should_use_delta(s32 x1, s32 y1, s32 x2, s32 y2) const
{
	// Use delta encoding if coordinate changes are small (±7 pixels)
	int dx1 = x1 - m_last_x;
	int dy1 = y1 - m_last_y;
	int dx2 = x2 - x1;
	int dy2 = y2 - y1;

	return (abs(dx1) <= 7 && abs(dy1) <= 7 && abs(dx2) <= 7 && abs(dy2) <= 7);
}

bool vvf_write::should_use_palette(rgb_t color) const
{
	// Use palette if this color is already in the palette
	// or if we have room to add it
	for (size_t i = 0; i < m_palette.size(); i++)
	{
		if (m_palette[i].color == color)
			return true;
	}
	return (m_palette.size() < 16);
}

uint8_t vvf_write::find_or_add_palette_color(rgb_t color)
{
	// Look for existing palette entry
	for (size_t i = 0; i < m_palette.size(); i++)
	{
		if (m_palette[i].color == color)
		{
			m_palette[i].usage_count++;
			return static_cast<uint8_t>(i);
		}
	}

	// Add new palette entry if we have room
	if (m_palette.size() < 16)
	{
		palette_entry entry;
		entry.color = color;
		entry.usage_count = 1;
		m_palette.push_back(entry);
		return static_cast<uint8_t>(m_palette.size() - 1);
	}

	// Fallback to current palette index if full
	return m_current_palette_index;
}

