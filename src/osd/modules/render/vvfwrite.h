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

// Enable detailed statistics tracking and reporting (can be disabled for release builds)
#ifndef VVF_STATS
#define VVF_STATS 1
#endif

#include "emu.h"
#include <string>
#include <vector>
#include <memory>
#include <fstream>
#include <map>
#include <zlib.h>

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
constexpr uint32_t VVF_VERSION = 1; // Version 1: 14-bit coordinates with optimized 3-bit command encoding

// Command types (3-bit command + 4 bits for coordinate extensions + 1 spare)
enum class vvf_command : uint8_t
{
	END_FRAME = 0x00,
	NEW_COLOR = 0x08,      // Add new color+intensity to palette: R,G,B,intensity (5 bytes total)
	LINE_TO6 = 0x10,       // ±31 pixels: 2 bytes [cmd:3,dx_hi:2,dy_hi:2,_:1][dx_lo:4,dy_lo:4]
	LINE_TO6_PAL = 0x18,   // ±31 pixels with palette: 3 bytes [cmd:3,dx_hi:2,dy_hi:2,_:1][dx_lo:4,dy_lo:4][pal:8]
	LINE_TO10 = 0x20,      // ±511 pixels: 3 bytes [cmd:3,dx_hi:2,dy_hi:2,_:1][dx_lo:8][dy_lo:8]
	LINE_TO10_PAL = 0x28,  // ±511 pixels with palette: 4 bytes [cmd:3,dx_hi:2,dy_hi:2,_:1][dx_lo:8][dy_lo:8][pal:8]
	LINE_TO14 = 0x30,      // 0-16383 pixels: 4 bytes [cmd:3,x_hi:2,y_hi:2,_:1][x_mid:8][y_mid:8][x_lo:4,y_lo:4]
	LINE_TO14_PAL = 0x38   // 0-16383 pixels with palette: 5 bytes [cmd:3,x_hi:2,y_hi:2,_:1][x_mid:8][y_mid:8][x_lo:4,y_lo:4][pal:8]
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
	uint32_t magic;                 // "VVF1" (0x31465656)
	uint32_t version;               // Format version (1)
	uint16_t native_width;          // Original game width in logical pixels (e.g., 252 for Star Wars)
	uint16_t native_height;         // Original game height in logical pixels (e.g., 292 for Star Wars)
	uint16_t vvf_width;             // VVF coordinate width (max coord value, e.g., 2047)
	uint16_t vvf_height;            // VVF coordinate height (max coord value, e.g., 2047)
	uint32_t frame_rate;            // Frame rate * 1000 (e.g., 60000 = 60 Hz)
	uint32_t total_frames;          // Total frame count (max: 4.3 billion = 828 days @ 60fps)
	uint32_t audio_sample_rate;     // Audio sample rate (e.g., 48000)
	uint8_t  audio_channels;        // Audio channels (1 or 2)
	uint8_t  audio_codec;           // Audio codec (0=None, 1=Opus)
	uint16_t reserved1;             // Padding
	uint64_t frame_index_offset;    // File offset to frame index
	uint64_t audio_data_offset;     // File offset to audio data
	uint64_t duration_us;           // Total duration in microseconds
	uint32_t compression_type;      // 0=None, 1=zlib, 2=gzip, 3=bzip2
};
// Aspect ratio = native_width / native_height
// Scale factors: x_scale = vvf_width / native_width, y_scale = vvf_height / native_height
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
	void line_to(s32, s32, rgb_t, uint8_t);
	void end_frame();

	// Audio interface
	void audio_frame(const s16 *, int);

	// Compression interface
	void set_compression(bool, uint32_t = 1);
	std::vector<uint8_t> compress_data(const std::vector<uint8_t>&);

private:
	// File I/O
	void write_header();
	void write_frame_index();
	void finalize();

	// Command writing (private helpers)
	void write_command(s32, s32, rgb_t, uint8_t, int);
	void write_end_frame_command();

	// Audio encoding
	void encode_audio_frame(const s16 *, int);

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
	s32 m_center_x, m_center_y; // MAME center coordinate (for offset, scaling, and bit precision analysis)
	s32 m_range_x, m_range_y; // MAME range coordinate (for offset, scaling, and bit precision analysis)
	double m_scale_x, m_scale_y;  // MAME internal units per VVF coordinate (computed dynamically, uses float for precision)
	s32 m_min_raw_x, m_max_raw_x, m_min_raw_y, m_max_raw_y; // MAME raw coordinate range (for offset, scaling, and bit precision analysis)
	bool m_frame_started;   // Flag to track if begin_frame() was called

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
	s32 m_last_scaled_x, m_last_scaled_y;  // Last SCALED coordinates for delta encoding
	uint8_t m_current_palette_index;

	// Compression settings
	bool m_compression_enabled;
	uint32_t m_compression_type;

	// Palette (stores color+intensity pairs)
	struct palette_entry
	{
		rgb_t color;
		uint8_t intensity;
	};
	std::vector<palette_entry> m_palette;
	uint32_t m_palette_full_count; // Track palette overflow attempts (always enabled)

	// Color indices for stats
	enum color_index {
		COLOR_RED = 0,
		COLOR_GREEN = 1,
		COLOR_BLUE = 2,
		COLOR_YELLOW = 3,
		COLOR_CYAN = 4,
		COLOR_MAGENTA = 5,
		COLOR_WHITE = 6,
		COLOR_OTHER = 7,
		COLOR_COUNT = 8
	};

	// Stats tracking
	struct {
		uint32_t line_to6_count;
		uint32_t line_to6_pal_count;
		uint32_t line_to10_count;
		uint32_t line_to10_pal_count;
		uint32_t line_to14_count;
		uint32_t line_to14_pal_count;
		uint32_t new_color_count;
		uint64_t total_bytes;
		uint32_t raw_moves_count;     // line_to with intensity=0
		uint32_t raw_draws_count;     // line_to with intensity>0
		double min_draw_distance;
		double max_draw_distance;
		double min_move_distance;
		double max_move_distance;
		uint32_t draws_per_color[COLOR_COUNT]; // [red, green, blue, yellow, cyan, magenta, white, other]
		uint32_t max_draw_line_num, max_move_line_num;
		uint32_t min_draw_line_num, min_move_line_num;
		uint32_t x_rescale_count;   // Number of times X scale was adjusted
		uint32_t y_rescale_count;   // Number of times Y scale was adjusted
		uint32_t total_coord_error_x, total_coord_error_y, coord_samples;
		uint32_t max_error_x, max_error_y;
		uint32_t moves_skipped; // Zero-length moves eliminated
		uint32_t write_line_count; // Number of LINE_TO commands written (moves + draws)
	} m_stats;

	attotime m_last_stats_print;

	// Helper functions
#if VVF_STATS
	void print_color_stats(const uint32_t baseline[COLOR_COUNT] = nullptr) const;
#endif

#ifdef MAME_FFMPEG
	// Audio encoding helpers
	bool init_opus_encoder();
	void cleanup_opus_encoder();
	void encode_opus_frame(const s16 *samples, int num_samples);
#endif
};

#endif // MAME_OSD_VVFWRITE_H

