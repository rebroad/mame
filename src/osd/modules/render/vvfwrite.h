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
#include <map>

#ifdef MAME_FFMPEG
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavutil/opt.h>
#include <libswresample/swresample.h>
}
#endif

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
	NEW_COLOR = 0x50,      // Add new color+intensity to palette: R,G,B,intensity (5 bytes total)
	LINE_TO4 = 0x60,       // ±7 pixels: 2 bytes [cmd][dx:4,dy:4]
	LINE_TO4_PAL = 0x61,   // ±7 pixels with palette: 3 bytes [cmd][dx:4,dy:4][pal:8]
	LINE_TO8 = 0x62,       // ±127 pixels: 3 bytes [cmd][dx:8][dy:8]
	LINE_TO8_PAL = 0x63,   // ±127 pixels with palette: 4 bytes [cmd][dx:8][dy:8][pal:8]
	LINE_TO12 = 0x64,      // ±2047 pixels: 4 bytes [cmd][dx:12,dy:12 packed]
	LINE_TO12_PAL = 0x65   // ±2047 pixels with palette: 5 bytes [cmd][dx:12,dy:12][pal:8]
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
	void end_frame();

	// Audio interface
	void audio_frame(const s16 *samples, int num_samples);

private:
	// File I/O
	void write_header();
	void write_frame_index();
	void finalize();

	// Command writing (private helpers)
	void line_to(s32 x, s32 y, rgb_t color, uint8_t intensity);
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

#ifdef MAME_FFMPEG
	// Opus encoder (FFmpeg)
	AVCodecContext *m_opus_context;
	AVFrame *m_opus_frame;
	SwrContext *m_swr_context;
	int m_opus_frame_size; // Samples per Opus frame
	std::vector<uint8_t> m_opus_buffer; // Compressed Opus packets
#endif

	// Current state (for delta encoding)
	rgb_t m_current_color;
	uint8_t m_current_intensity;
	s32 m_last_x, m_last_y;  // Last coordinates for delta encoding

	// Palette (stores color+intensity pairs)
	struct palette_entry
	{
		rgb_t color;
		uint8_t intensity;
	};
	std::vector<palette_entry> m_palette;
	uint8_t m_current_palette_index;

	// Color indices for stats
	enum color_index {
		COLOR_RED = 0,
		COLOR_GREEN = 1,
		COLOR_BLUE = 2,
		COLOR_YELLOW = 3,
		COLOR_CYAN = 4,
		COLOR_MAGENTA = 5,
		COLOR_WHITE = 6,
		COLOR_COUNT = 7
	};

	// Stats tracking
	struct {
		uint32_t line_to4_count;
		uint32_t line_to4_pal_count;
		uint32_t line_to8_count;
		uint32_t line_to8_pal_count;
		uint32_t line_to12_count;
		uint32_t line_to12_pal_count;
		uint32_t new_color_count;
		uint64_t total_bytes;
		uint32_t beam_moves_count;     // line_to with intensity=0
		uint32_t beam_draws_count;     // line_to with intensity>0
		double min_draw_distance;       // Minimum distance for visible lines (intensity > 0)
		double max_draw_distance;       // Maximum distance for visible lines (intensity > 0)
		double min_move_distance;       // Minimum distance for beam moves (intensity = 0)
		double max_move_distance;       // Maximum distance for beam moves (intensity = 0)
		uint32_t draws_per_color[COLOR_COUNT]; // [red, green, blue, yellow, cyan, magenta, white]
		uint32_t draws_other_colors;    // Count of non-basic colors
	} m_stats;

	// Per-second stats (rolling window)
	struct frame_stats {
		uint32_t line_to4;
		uint32_t line_to4_pal;
		uint32_t line_to8;
		uint32_t line_to8_pal;
		uint32_t line_to12;
		uint32_t line_to12_pal;
		uint32_t new_color;
		uint64_t bytes;
		std::map<uint32_t, uint32_t> color_usage; // packed RGB -> count
	};
	std::vector<frame_stats> m_recent_frames; // Last second of frames
	attotime m_last_stats_print;

	// Helper functions
	uint8_t find_or_add_palette_entry(rgb_t color, uint8_t intensity);

#ifdef MAME_FFMPEG
	// Audio encoding helpers
	bool init_opus_encoder();
	void cleanup_opus_encoder();
	void encode_opus_frame(const s16 *samples, int num_samples);
#endif
};

#endif // MAME_OSD_VVFWRITE_H

