// license:BSD-3-Clause
// copyright-holders:Roger Broadbent
/***************************************************************************

	vvfwrite.h

	VVF (Vector Video Format) writer for MAME
	Records vector graphics in native format with audio

***************************************************************************/

#ifndef MAME_OSD_VVFWRITE_H
#define MAME_OSD_VVFWRITE_H

#pragma once

#include "emu.h"
#include <string>
#include <vector>
#include <memory>
#include <fstream>

// Forward declarations
class running_machine;

//**************************************************************************
//  VVF FILE FORMAT CONSTANTS
//**************************************************************************

constexpr uint32_t VVF_MAGIC = 0x31465656; // "VVF1"
constexpr uint32_t VVF_VERSION = 1;

// Command types
enum class vvf_command : uint8_t
{
	END_FRAME = 0x00,
	PALETTE_COLOR = 0x50,  // Change color/intensity: palette_index (4-bit) + intensity (4-bit)
	DELTA_LINE = 0x60,     // Small line: 2 bytes of 4-bit deltas, uses current color
	LINE_TO = 0x61,        // Large line: x,y (int16) + intensity (1 byte), uses current color
	LINE_TO_RGB = 0x62,    // Large line with new color: x,y (int16) + RGB (3 bytes) + intensity (1 byte)
	POINT = 0x20,          // Deprecated, kept for compatibility
	RGB_COLOR = 0x30,      // Deprecated
	INTENSITY = 0x40,      // Deprecated
	DELTA_POINT = 0x70     // Deprecated
};

// Audio codec types
enum class vvf_audio_codec : uint16_t
{
	NONE = 0,
	OPUS = 1,
	PCM = 2  // Uncompressed fallback
};

//**************************************************************************
//  VVF HEADER STRUCTURE
//**************************************************************************

#pragma pack(push, 1)
struct vvf_header
{
	uint32_t magic;                 // "VVF1"
	uint32_t version;               // Format version
	uint32_t width;                 // Native width
	uint32_t height;                // Native height
	uint32_t frame_rate;            // Frame rate * 1000 (e.g., 60000 = 60 Hz)
	uint32_t total_frames;          // Total frame count
	uint32_t audio_sample_rate;     // Audio sample rate (e.g., 48000)
	uint16_t audio_channels;        // Audio channels (1 or 2)
	uint16_t audio_codec;           // Audio codec (vvf_audio_codec)
	uint64_t frame_index_offset;    // File offset to frame index
	uint64_t audio_data_offset;     // File offset to audio data
	uint64_t duration_us;           // Total duration in microseconds
	uint8_t  reserved[6];           // Padding to 64 bytes
};
#pragma pack(pop)

//**************************************************************************
//  VVF WRITER CLASS
//**************************************************************************

class vvf_write
{
public:
	vvf_write(running_machine &machine, s32 width, s32 height);
	~vvf_write();

	// Recording control
	void record(std::string_view filename);
	void stop();
	bool recording() const { return m_recording; }

	// Vector drawing interface
	void begin_frame();
	void draw_line(s32 x1, s32 y1, s32 x2, s32 y2, rgb_t color, uint8_t intensity);
	void draw_point(s32 x, s32 y, uint8_t intensity);
	void end_frame();

	// Audio interface
	void audio_frame(const s16 *samples, int num_samples);

private:
	// File I/O
	void write_header();
	void write_frame_index();
	void finalize();

	// Command writing
	void write_line_command(s32 x1, s32 y1, s32 x2, s32 y2, rgb_t color, uint8_t intensity);
	void write_point_command(s32 x, s32 y, uint8_t intensity);
	void write_end_frame_command();

	// Audio encoding
	void encode_audio_frame(const s16 *samples, int num_samples);

	// Member variables
	running_machine &m_machine;
	std::ofstream m_file;
	bool m_recording;

	// Video properties
	s32 m_width;
	s32 m_height;
	uint32_t m_frame_rate;
	uint32_t m_frame_count;
	attotime m_start_time;

	// Frame data buffer (for current frame)
	std::vector<uint8_t> m_frame_buffer;

	// Frame index (for seeking)
	struct frame_index_entry
	{
		uint32_t frame_number;
		uint64_t file_offset;
	};
	std::vector<frame_index_entry> m_frame_index;

	// Audio properties
	uint32_t m_audio_sample_rate;
	uint16_t m_audio_channels;
	std::vector<s16> m_audio_buffer;

	// Current state (for delta encoding)
	rgb_t m_current_color;
	uint8_t m_current_intensity;
	s32 m_last_x, m_last_y;  // Last coordinates for delta encoding

	// Palette optimization (stores RGB colors only, intensity is separate)
	struct palette_entry
	{
		rgb_t color;
		uint8_t usage_count;
	};
	std::vector<palette_entry> m_palette;
	uint8_t m_current_palette_index;

	// Delta encoding helpers
	bool should_use_delta(s32 x1, s32 y1, s32 x2, s32 y2) const;
	bool should_use_palette(rgb_t color) const;
	uint8_t find_or_add_palette_color(rgb_t color);
};

#endif // MAME_OSD_VVFWRITE_H

