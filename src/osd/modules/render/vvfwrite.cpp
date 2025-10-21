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
#include <cstdlib>  // for getenv
#include <cstring>  // for strcmp

// Note: VVF_STATS is now defined in vvfwrite.h

//**************************************************************************
//  CONSTANTS
//**************************************************************************

// VVF coordinate limits
// LINE_TO6 and LINE_TO10 use signed deltas (relative movement)
// LINE_TO14 uses absolute coordinates (0-16383 unsigned)
static const s32 BIT6_MAX = 31;       // 6-bit signed delta: ±31
static const s32 BIT10_MAX = 511;     // 10-bit signed delta: ±511
static const s32 BIT13_MAX = 8191;    // Maximum coordinate value (signed: -8191 to +8191, 16383 values)

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
	, m_end_frame_count(0)
	, m_frame_count(0)
	, m_start_time(attotime::zero)
	, m_center_x(0), m_center_y(0)
	, m_range_x(0), m_range_y(0)
	, m_scale_x(1.0), m_scale_y(1.0)  // Start with 1.0, will optimize later
	, m_min_raw_x(INT32_MAX), m_max_raw_x(INT32_MIN)  // Track actual raw coordinate range (for scaling and bit analysis)
	, m_min_raw_y(INT32_MAX), m_max_raw_y(INT32_MIN)
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
	, m_last_scaled_x(0)
	, m_last_scaled_y(0)
	, m_current_palette_index(0)
	, m_compression_enabled(true)
	, m_compression_type(1) // Default to zlib
	, m_palette_full_count(0)
#if VVF_STATS
	, m_stats{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  // counts including raw_moves_count and raw_draws_count
		std::numeric_limits<double>::max(), 0.0,  // min_draw_distance, max_draw_distance
		std::numeric_limits<double>::max(), 0.0,  // min_move_distance, max_move_distance
		{0, 0, 0, 0, 0, 0, 0, 0},  // draws_per_color[COLOR_COUNT=8] - all zeros
		0, 0,  // max_draw_line_num, max_move_line_num
		0, 0,  // min_draw_line_num, min_move_line_num
		0, 0, // x_rescale_count, y_rescale_count
		0, 0, 0, 0, 0, // Precision: total_error_x, total_error_y, samples, max_error_x, max_error_y
		0,    // moves_skipped
		0}    // write_line_count
	, m_last_stats_print(attotime::zero)
#endif
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
	m_end_frame_count = 0;
	m_start_time = m_machine.time();
	m_frame_index.clear();
	m_audio_buffer.clear();

#ifdef MAME_FFMPEG
	// Temporarily disable Opus encoding due to timing issues
	// TODO: Fix Opus timing issues and re-enable
	osd_printf_info("VVF: Using PCM audio encoding (Opus disabled due to timing issues)\n");
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
	header.compression_type = m_compression_enabled ? m_compression_type : 0;

	m_file.write(reinterpret_cast<const char *>(&header), sizeof(header));
}

void vvf_write::begin_frame()
{
	if (!m_recording)
		return;

	// Mark that this frame has started (for end_frame() to know it should process)
	m_frame_started = true;

#if VVF_STATS
	// Debug: Print frame stats (stop at 50 line_to calls)
	if (m_stats.write_line_count < 50)
	{
		attotime elapsed = m_machine.time() - m_start_time;
		double elapsed_sec = elapsed.as_double();
		uint32_t seconds = (uint32_t)elapsed_sec;
		uint32_t milliseconds = (uint32_t)((elapsed_sec - seconds) * 1000.0);

		osd_printf_info("%u.%03u VVF frame_begin #%u: %u line_to calls, %u write commands, %zu bytes\n",
			seconds, milliseconds, m_frame_count, m_stats.raw_moves_count + m_stats.raw_draws_count,
			m_stats.line_to6_count + m_stats.line_to6_pal_count + m_stats.line_to10_count + m_stats.line_to10_pal_count +
			m_stats.line_to14_count + m_stats.line_to14_pal_count + m_stats.new_color_count, m_frame_buffer.size());
	}
#endif

	// Clear frame buffer for new frame
	m_frame_buffer.clear();
}

void vvf_write::line_to(s32 raw_x, s32 raw_y, rgb_t color, uint8_t intensity)
{
	if (!m_recording)
		return;

	// Static variables for this function only
	static s32 last_raw_x = 0, last_raw_y = 0;

	// Check if palette entry exists (optimization to avoid duplicate search)
	// Returns: -1 if not found (will need to add), otherwise the existing palette index
	int palette_index_hint = -1;  // -1 = not found/new entry
	if (intensity > 0)
	{
		// Search for existing entry
		for (size_t i = 0; i < m_palette.size(); i++)
		{
			if (m_palette[i].color == color && m_palette[i].intensity == intensity)
			{
				palette_index_hint = static_cast<int>(i);
				break;
			}
		}
	}

	if (raw_x < m_min_raw_x) m_min_raw_x = raw_x;
	if (raw_x > m_max_raw_x) m_max_raw_x = raw_x;
	if (raw_y < m_min_raw_y) m_min_raw_y = raw_y;
	if (raw_y > m_max_raw_y) m_max_raw_y = raw_y;

#if VVF_STATS
	// Track raw distance and min/max using RAW coordinates
	double dx_raw = double(raw_x) - double(last_raw_x);
	double dy_raw = double(raw_y) - double(last_raw_y);
	double distance_raw = sqrt(dx_raw * dx_raw + dy_raw * dy_raw);

	if (intensity == 0)
	{
		// Raw move
		m_stats.raw_moves_count++;
		if (distance_raw > 0 && distance_raw < m_stats.min_move_distance)
		{
			m_stats.min_move_distance = distance_raw;
			m_stats.min_move_line_num = m_stats.write_line_count;
		}
		if (distance_raw > m_stats.max_move_distance)
		{
			m_stats.max_move_distance = distance_raw;
			m_stats.max_move_line_num = m_stats.write_line_count;
		}
	}
	else
	{
		// Raw draw
		m_stats.raw_draws_count++;
		if (distance_raw > 0 && distance_raw < m_stats.min_draw_distance)
		{
			m_stats.min_draw_distance = distance_raw;
			m_stats.min_draw_line_num = m_stats.write_line_count;
		}
		if (distance_raw > m_stats.max_draw_distance)
		{
			m_stats.max_draw_distance = distance_raw;
			m_stats.max_draw_line_num = m_stats.write_line_count;
		}
	}
#endif

	// Map coordinate to VVF signed range centered at (0,0)
	s32 scaled_x = 0, scaled_y = 0;
	double old_scale_x = m_scale_x;
	double old_scale_y = m_scale_y;

	if (!(m_min_raw_x == m_max_raw_x || m_min_raw_y == m_max_raw_y))
	{
		// Normal case: scale around center point
		m_center_x = (m_min_raw_x + m_max_raw_x) / 2;
		m_center_y = (m_min_raw_y + m_max_raw_y) / 2;

		m_range_x = m_max_raw_x - m_min_raw_x;
		m_range_y = m_max_raw_y - m_min_raw_y;

		// Calculate scale to fit range into signed coordinate space (-8191 to +8191)
		// Use floating-point division for maximum precision
		// scale = half_range / 8191, ensuring scaled coordinates stay within bounds
		double half_range_x = (m_range_x + 1) / 2.0;  // Use 2.0 for float division
		double half_range_y = (m_range_y + 1) / 2.0;
		m_scale_x = std::max(1.0, half_range_x / BIT13_MAX);
		m_scale_y = std::max(1.0, half_range_y / BIT13_MAX);

		scaled_x = s32(std::round((raw_x - m_center_x) / m_scale_x));
		scaled_y = s32(std::round((raw_y - m_center_y) / m_scale_y));
	}

#if VVF_STATS
	// Detect if running in Cursor/VSCode terminal (which has emoji kerning bug for light blue heart)
	static bool cursor_terminal = (getenv("CURSOR_AGENT") != nullptr || 
	                               (getenv("TERM_PROGRAM") != nullptr && strcmp(getenv("TERM_PROGRAM"), "vscode") == 0));

	// Classify color for stats and emoji (only for draws, not moves)
	const char* color_emoji = "🖤";  // Black heart for moves
	if (intensity > 0)
	{
		uint8_t r = color.r();
		uint8_t g = color.g();
		uint8_t b = color.b();

		// Check for basic colors (using threshold for "close enough")
		const uint8_t threshold = 32;
		const uint8_t min_rgb = threshold;
		const uint8_t max_rgb = 255 - threshold;

		if (r >= max_rgb && g < min_rgb && b < min_rgb)
		{
			m_stats.draws_per_color[COLOR_RED]++;
			color_emoji = "❤️ ";  // Red heart (needs variation selector for color/size, kerning varies by terminal)
		}
		else if (r < min_rgb && g >= max_rgb && b < min_rgb)
		{
			m_stats.draws_per_color[COLOR_GREEN]++;
			color_emoji = "💚";  // Green heart
		}
		else if (r < min_rgb && g < min_rgb && b >= max_rgb)
		{
			m_stats.draws_per_color[COLOR_BLUE]++;
			color_emoji = "💙";  // Blue heart
		}
		else if (r >= max_rgb && g >= max_rgb && b < min_rgb)
		{
			m_stats.draws_per_color[COLOR_YELLOW]++;
			color_emoji = "💛";  // Yellow heart
		}
		else if (r < min_rgb && g >= max_rgb && b >= max_rgb)
		{
			m_stats.draws_per_color[COLOR_CYAN]++;
			color_emoji = cursor_terminal ? "🩵 " : "🩵";  // Light blue heart needs space in Cursor
		}
		else if (r >= max_rgb && g < min_rgb && b >= max_rgb)
		{
			m_stats.draws_per_color[COLOR_MAGENTA]++;
			color_emoji = "💜";  // Purple heart
		}
		else if (r >= max_rgb && g >= max_rgb && b >= max_rgb)
		{
			m_stats.draws_per_color[COLOR_WHITE]++;
			color_emoji = "🤍";  // White heart
		}
		else
		{
			m_stats.draws_per_color[COLOR_OTHER]++;
			color_emoji = "🌈";  // Rainbow for mixed colors
		}
	}

	attotime elapsed = m_machine.time() - m_start_time;
	double elapsed_sec = elapsed.as_double();
	uint32_t seconds = (uint32_t)elapsed_sec;
	uint32_t milliseconds = (uint32_t)((elapsed_sec - seconds) * 1000.0);

	if (m_stats.write_line_count < 50 || (intensity > 0 && palette_index_hint == -1)
		|| old_scale_x != m_scale_x || old_scale_y != m_scale_y)
	{
		osd_printf_info("%u.%03u line_to #%u: RAW: %d,%d SCALED: %d,%d (%+d%+d) %s i=%u",
			seconds, milliseconds, m_stats.write_line_count, raw_x, raw_y, scaled_x, scaled_y,
			scaled_x - m_last_scaled_x, scaled_y - m_last_scaled_y, color_emoji, intensity);

		// Show palette entry info if needed (only for visible draws)
		if (intensity > 0 && palette_index_hint == -1)
		{
			if (m_palette.size() >= 256)
			{
				m_palette_full_count++;
				osd_printf_info(" -> PALETTE FULL! (attempt %u)", m_palette_full_count);

				// Stop recording after 5 failed attempts
				if (m_palette_full_count >= 5)
				{
					osd_printf_info("\n");
					osd_printf_error("VVF: Palette full 5 times, stopping recording\n");
					stop();
					return;
				}
			}
			else
			{
				// Palette starts at 0 for first visible color
				osd_printf_info(" -> Adding palette entry %u", (unsigned)m_palette.size());
			}
		}

		osd_printf_info("\n");
	}

	// Check for overflow/rescale only during first frame
	if (old_scale_x != m_scale_x)
	{
		// Need to fit range into signed coordinate space: -2047 to +2047 (4095 total values)
		m_stats.x_rescale_count++;
		osd_printf_warning("%u.%03u Optimized X: range [%d..%d] → scale %.1f -> %.1f (%.1fx loss)\n",
			seconds, milliseconds,
			m_min_raw_x, m_max_raw_x, old_scale_x, m_scale_x, m_scale_x / old_scale_x);
	}

	if (old_scale_y != m_scale_y)
	{
		// Need to fit range into signed coordinate space: -2047 to +2047 (4095 total values)
		m_stats.y_rescale_count++;
		osd_printf_warning("%u.%03u Optimized Y: range [%d..%d] → scale %.1f -> %.1f (%.1fx loss)\n",
			seconds, milliseconds,
			m_min_raw_y, m_max_raw_y, old_scale_y, m_scale_y, m_scale_y / old_scale_y);
	}
#endif

	// Optimization: Skip redundant zero-length moves (pen already at position)
	if (intensity == 0 && scaled_x == m_last_scaled_x && scaled_y == m_last_scaled_y)
	{
		// Redundant "pen up" - beam already at this position, skip it
#if VVF_STATS
		m_stats.moves_skipped++;
#endif
		return;
	}

	// Write VVF command (pass palette hint: -1=not found/new, else=existing index)
	write_command(scaled_x, scaled_y, color, intensity, palette_index_hint);

	// Update beam position (now done here in line_to, after write_command returns)
	m_last_scaled_x = scaled_x;
	m_last_scaled_y = scaled_y;
#if VVF_STATS
	last_raw_x = raw_x;
	last_raw_y = raw_y;
#endif
} // vvf_write::line_to()

void vvf_write::end_frame()
{
	if (!m_recording)
		return;

	attotime current_time = m_machine.time();
	attotime elapsed = current_time - m_start_time;
	double elapsed_sec = elapsed.as_double();

	// FPS output once per second for 10 seconds (after initial 50 line_to debug)
	if ((current_time - m_last_stats_print).as_double() >= 1.0 && elapsed_sec <= 30.0)
	{
		static uint32_t last_frame_count = 0;
		static uint32_t last_end_frame_count = 0;
		static uint32_t last_second_baseline[COLOR_COUNT] = {0};
		uint32_t frames_this_second = m_frame_count - last_frame_count;
		uint32_t end_frames_this_second = m_end_frame_count - last_end_frame_count;
		double fps = frames_this_second / (current_time - m_last_stats_print).as_double();
		double end_fps = end_frames_this_second / (current_time - m_last_stats_print).as_double();

		osd_printf_info("%.1fs VVF: %.2f eFPS %.2f FPS | %u frames total, %.2f KB | ",
			elapsed_sec, end_fps, fps, m_frame_count, m_stats.total_bytes / 1024.0);

		if (m_frame_count > 0) {
			// Print color stats for this second (delta from last second)
			print_color_stats(last_second_baseline);
			osd_printf_info("\n");

			// Save baseline for next second
			for (int i = 0; i < COLOR_COUNT; i++)
			{
				last_second_baseline[i] = m_stats.draws_per_color[i];
			}

			last_frame_count = m_frame_count;
		} else {
			osd_printf_info("No frames started\n");
		}
		last_end_frame_count = m_end_frame_count;
		m_last_stats_print = std::min(current_time, m_last_stats_print + attotime::from_seconds(1));
	}

	m_end_frame_count++;

	// Skip frames where begin_frame() was never called
	// (happens during initialization before vector rendering starts)
	if (!m_frame_started)
		return;

#if VVF_STATS
	if (m_stats.write_line_count < 50 || m_frame_count < 10)
	{
		uint32_t seconds = (uint32_t)elapsed_sec;
		uint32_t milliseconds = (uint32_t)((elapsed_sec - seconds) * 1000.0);

		osd_printf_info("%u.%03u VVF end_frame #%u: %u line_to calls, %u write commands (%zu bytes)\n",
			seconds, milliseconds, m_frame_count, m_stats.raw_moves_count + m_stats.raw_draws_count,
			m_stats.write_line_count + m_stats.new_color_count, m_frame_buffer.size());
	}
#endif

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

	// Reset flag for next frame
	m_frame_started = false;
} // vvf_write::end_frame()

// Cohen-Sutherland line clipping algorithm
// Returns true if line is visible (possibly clipped), false if completely outside
bool clip_line_to_rect(s32 &x0, s32 &y0, s32 &x1, s32 &y1, s32 xmin, s32 ymin, s32 xmax, s32 ymax)
{
	// Outcodes for Cohen-Sutherland
	const int INSIDE = 0; // 0000
	const int LEFT = 1;   // 0001
	const int RIGHT = 2;  // 0010
	const int BOTTOM = 4; // 0100
	const int TOP = 8;    // 1000

	auto compute_outcode = [&](s32 x, s32 y) -> int {
		int code = INSIDE;
		if (x < xmin) code |= LEFT;
		else if (x > xmax) code |= RIGHT;
		if (y < ymin) code |= BOTTOM;
		else if (y > ymax) code |= TOP;
		return code;
	};

	int outcode0 = compute_outcode(x0, y0);
	int outcode1 = compute_outcode(x1, y1);

	while (true)
	{
		if (!(outcode0 | outcode1))
		{
			// Both endpoints inside - accept
			return true;
		}
		else if (outcode0 & outcode1)
		{
			// Both endpoints share an outside zone - reject
			return false;
		}
		else
		{
			// Line crosses boundary - clip it
			int outcode_out = outcode0 ? outcode0 : outcode1;
			s32 x, y;

			// Find intersection point using line equation
			if (outcode_out & TOP)
			{
				x = x0 + (x1 - x0) * (ymax - y0) / (y1 - y0);
				y = ymax;
			}
			else if (outcode_out & BOTTOM)
			{
				x = x0 + (x1 - x0) * (ymin - y0) / (y1 - y0);
				y = ymin;
			}
			else if (outcode_out & RIGHT)
			{
				y = y0 + (y1 - y0) * (xmax - x0) / (x1 - x0);
				x = xmax;
			}
			else // LEFT
			{
				y = y0 + (y1 - y0) * (xmin - x0) / (x1 - x0);
				x = xmin;
			}

			// Update the point that was outside
			if (outcode_out == outcode0)
			{
				x0 = x;
				y0 = y;
				outcode0 = compute_outcode(x0, y0);
			}
			else
			{
				x1 = x;
				y1 = y;
				outcode1 = compute_outcode(x1, y1);
			}
		}
	}
}

void vvf_write::write_command(s32 x, s32 y, rgb_t color, uint8_t intensity, int palette_index_hint)
{

	// Calculate deltas from current position to target (x, y)
	int dx = x - m_last_scaled_x;
	int dy = y - m_last_scaled_y;
	int abs_dx = abs(dx);
	int abs_dy = abs(dy);

	// Get palette index (hint: -1=not found/add new, else=use existing)
	uint8_t palette_index = 255;
	if (intensity > 0 && palette_index_hint == -1 && m_palette.size() < 256)
	{
		// Emit NEW_COLOR command
		m_frame_buffer.push_back(static_cast<uint8_t>(vvf_command::NEW_COLOR));
		m_frame_buffer.push_back(color.r());
		m_frame_buffer.push_back(color.g());
		m_frame_buffer.push_back(color.b());
		m_frame_buffer.push_back(intensity);
#if VVF_STATS
		m_stats.new_color_count++;
		m_stats.total_bytes += 5;
#endif
		palette_entry entry;
		entry.color = color;
		entry.intensity = intensity;
		m_palette.push_back(entry);
		palette_index = static_cast<uint8_t>(m_palette.size() - 1);
	}
	else if (palette_index_hint >= 0)
	{
		// Use existing palette entry from hint
		palette_index = static_cast<uint8_t>(palette_index_hint);
	}
	bool needs_palette_switch = (palette_index != m_current_palette_index);

	// Choose command based on delta magnitude
	if (abs_dx <= BIT6_MAX && abs_dy <= BIT6_MAX)
	{
		// LINE_TO6 or LINE_TO6_PAL (±31 pixels)
		// Pack: [cmd:3][dx_hi:2][dy_hi:2][spare:1] [dx_lo:4][dy_lo:4]
		uint8_t dx_hi = (dx >> 4) & 0x03;
		uint8_t dy_hi = (dy >> 4) & 0x03;
		uint8_t cmd_byte = static_cast<uint8_t>(needs_palette_switch ? vvf_command::LINE_TO6_PAL : vvf_command::LINE_TO6);
		cmd_byte |= (dx_hi << 5) | (dy_hi << 3);

		if (needs_palette_switch)
		{
			// LINE_TO6_PAL: 3 bytes
			m_frame_buffer.push_back(cmd_byte);
			m_frame_buffer.push_back(static_cast<uint8_t>((dx & 0x0F) | ((dy & 0x0F) << 4)));
			m_frame_buffer.push_back(palette_index);
#if VVF_STATS
			m_stats.line_to6_pal_count++;
			m_stats.total_bytes += 3;
#endif
		}
		else
		{
			// LINE_TO6: 2 bytes
			m_frame_buffer.push_back(cmd_byte);
			m_frame_buffer.push_back(static_cast<uint8_t>((dx & 0x0F) | ((dy & 0x0F) << 4)));
#if VVF_STATS
			m_stats.line_to6_count++;
			m_stats.total_bytes += 2;
#endif
		}
	}
	else if (abs_dx <= BIT10_MAX && abs_dy <= BIT10_MAX)
	{
		// LINE_TO10 or LINE_TO10_PAL (±511 pixels)
		// Pack: [cmd:3][dx_hi:2][dy_hi:2][spare:1] [dx_lo:8] [dy_lo:8]
		uint8_t dx_hi = (dx >> 8) & 0x03;
		uint8_t dy_hi = (dy >> 8) & 0x03;
		uint8_t cmd_byte = static_cast<uint8_t>(needs_palette_switch ? vvf_command::LINE_TO10_PAL : vvf_command::LINE_TO10);
		cmd_byte |= (dx_hi << 5) | (dy_hi << 3);

		if (needs_palette_switch)
		{
			// LINE_TO10_PAL: 4 bytes
			m_frame_buffer.push_back(cmd_byte);
			m_frame_buffer.push_back(static_cast<uint8_t>(dx & 0xFF));
			m_frame_buffer.push_back(static_cast<uint8_t>(dy & 0xFF));
			m_frame_buffer.push_back(palette_index);
#if VVF_STATS
			m_stats.line_to10_pal_count++;
			m_stats.total_bytes += 4;
#endif
		}
		else
		{
			// LINE_TO10: 3 bytes
			m_frame_buffer.push_back(cmd_byte);
			m_frame_buffer.push_back(static_cast<uint8_t>(dx & 0xFF));
			m_frame_buffer.push_back(static_cast<uint8_t>(dy & 0xFF));
#if VVF_STATS
			m_stats.line_to10_count++;
			m_stats.total_bytes += 3;
#endif
		}
	}
	else
	{
		// LINE_TO14 or LINE_TO14_PAL (catch-all for large deltas)
		// Uses ABSOLUTE coordinates, not deltas

		// Check if endpoint is out of bounds and clip if needed
		// (start point m_last_scaled_x/m_last_scaled_y is always valid from previous line)
		// Check if endpoint is out of signed coordinate bounds (-8191 to +8191)
		if (x < -BIT13_MAX || x > BIT13_MAX || y < -BIT13_MAX || y > BIT13_MAX)
		{
			s32 x1 = x;
			s32 y1 = y;

			if (clip_line_to_rect(m_last_scaled_x, m_last_scaled_y, x1, y1, -BIT13_MAX, -BIT13_MAX, BIT13_MAX, BIT13_MAX))
			{
				// Line visible after clipping endpoint
				osd_printf_warning("VVF: Endpoint clipped (%d,%d)->(%d,%d) to (%d,%d)->(%d,%d)\n",
					m_last_scaled_x, m_last_scaled_y, x, y, m_last_scaled_x, m_last_scaled_y, x1, y1);

				// Use clipped endpoint
				x = x1;
				y = y1;
			}
			else
			{
				// Line completely outside - skip
				osd_printf_warning("VVF: Line (%d,%d)->(%d,%d) completely outside, skipped\n",
					m_last_scaled_x, m_last_scaled_y, x, y);
				return;
			}
		}

		// Emit LINE_TO14 with absolute coordinates
		// Convert from signed (-8191 to +8191) to unsigned (0 to 16383) for storage
		// Pack: [cmd:3][x_hi:2][y_hi:2][spare:1] [x_mid:8] [y_mid:8] [x_lo:4][y_lo:4]
		uint32_t unsigned_x = x + BIT13_MAX;
		uint32_t unsigned_y = y + BIT13_MAX;

		uint8_t x_hi = (unsigned_x >> 12) & 0x03;
		uint8_t y_hi = (unsigned_y >> 12) & 0x03;
		uint8_t x_mid = (unsigned_x >> 4) & 0xFF;
		uint8_t y_mid = (unsigned_y >> 4) & 0xFF;
		uint8_t x_lo = unsigned_x & 0x0F;
		uint8_t y_lo = unsigned_y & 0x0F;

		uint8_t cmd_byte = static_cast<uint8_t>(needs_palette_switch ? vvf_command::LINE_TO14_PAL : vvf_command::LINE_TO14);
		cmd_byte |= (x_hi << 5) | (y_hi << 3);

		if (needs_palette_switch)
		{
			// LINE_TO14_PAL: 5 bytes
			m_frame_buffer.push_back(cmd_byte);
			m_frame_buffer.push_back(x_mid);
			m_frame_buffer.push_back(y_mid);
			m_frame_buffer.push_back((x_lo | (y_lo << 4)));
			m_frame_buffer.push_back(palette_index);
#if VVF_STATS
			m_stats.line_to14_pal_count++;
			m_stats.total_bytes += 5;
#endif
		}
		else
		{
			// LINE_TO14: 4 bytes
			m_frame_buffer.push_back(cmd_byte);
			m_frame_buffer.push_back(x_mid);
			m_frame_buffer.push_back(y_mid);
			m_frame_buffer.push_back((x_lo | (y_lo << 4)));
#if VVF_STATS
			m_stats.line_to14_count++;
			m_stats.total_bytes += 4;
#endif
		}
	}
	m_stats.write_line_count++;

	// Update palette state (color and intensity tracked for optimization)
	m_current_color = color;
	m_current_intensity = intensity;
	m_current_palette_index = palette_index;
} // vvf_write::write_line_command

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
		// Add some debugging to understand the timing issue
		static uint32_t audio_frame_count = 0;
		audio_frame_count++;

		if (audio_frame_count <= 10) // Log first 10 audio frames
		{
			osd_printf_info("VVF: Audio frame %u: %d samples at %d Hz\n",
				audio_frame_count, num_samples, m_audio_sample_rate);
		}

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
	if (m_min_raw_x != INT32_MAX)
	{
		// VVF range (scaled from MAME range)
		header.vvf_width = m_range_x / m_scale_x;
		header.vvf_height = m_range_y / m_scale_y;

		// Native dimensions (logical pixels): MAME range / 65536
		header.native_width = m_range_x / 65536;
		header.native_height = m_range_y / 65536;
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
	header.audio_codec = static_cast<uint8_t>(vvf_audio_codec::PCM);  // Using PCM due to Opus timing issues
#endif
	header.frame_index_offset = frame_index_offset;
	header.audio_data_offset = audio_data_offset;
	header.duration_us = duration_us;
	header.compression_type = m_compression_enabled ? m_compression_type : 0;

	m_file.write(reinterpret_cast<const char *>(&header), sizeof(header));

#if VVF_STATS
	// Print statistics
	uint32_t total_commands = m_stats.line_to6_count + m_stats.line_to6_pal_count +
							  m_stats.line_to10_count + m_stats.line_to10_pal_count +
							  m_stats.line_to14_count + m_stats.line_to14_pal_count;

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
		m_palette_full_count > 0 ? util::string_format(" (FULL! %u overflow attempts)", m_palette_full_count).c_str() : "",
		vs_h264_factor);

	// Coordinate system info
	if (m_min_raw_x != INT32_MAX)
	{
		// VVF coordinate range (after scaling)
		s32 vvf_w = m_range_x / m_scale_x;
		s32 vvf_h = m_range_y / m_scale_y;

		// Native dimensions (logical pixels): MAME range / 65536
		s32 native_w = m_range_x / 65536;
		s32 native_h = m_range_y / 65536;

		osd_printf_info("VVF: MAME range: X=[%d..%d] Y=[%d..%d] → VVF [-%d..+%d]×[-%d..+%d] | Scales: X÷%d Y÷%d | Precision: %.1f%%\n",
			m_min_raw_x, m_max_raw_x, m_min_raw_y, m_max_raw_y,
			vvf_w/2, vvf_w/2, vvf_h/2, vvf_h/2, m_scale_x, m_scale_y,
			100.0 * std::max(vvf_w/2, vvf_h/2) / BIT13_MAX);
		osd_printf_info("VVF: Native: %d×%d (aspect %.2f)\n",
			native_w, native_h, (double)native_w / native_h);

		// Bit precision analysis: Compare MAME's coordinate precision vs VVF
		// Calculate bits needed for MAME coordinates (log2 of range)
		int mame_bits_x = m_range_x > 0 ? (int)ceil(log2(m_range_x + 1)) : 0;
		int mame_bits_y = m_range_y > 0 ? (int)ceil(log2(m_range_y + 1)) : 0;
		int mame_bits_total = mame_bits_x + mame_bits_y;

		// VVF uses 12 bits per axis (0-4095 range = 4096 values)
		int vvf_bits_per_axis = 12;
		int vvf_bits_total = vvf_bits_per_axis * 2;  // 24 bits total

		osd_printf_info("VVF: MAME precision: X=%d bits (%d values) Y=%d bits (%d values) | Total: %d bits\n",
			mame_bits_x, m_range_x + 1, mame_bits_y, m_range_y + 1, mame_bits_total);
		osd_printf_info("VVF: VVF precision: %d bits/axis (%d bits total) → %s %d bits vs MAME\n",
			vvf_bits_per_axis, vvf_bits_total,
			vvf_bits_total >= mame_bits_total ? "GAIN" : "LOSE",
			abs(vvf_bits_total - mame_bits_total));

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
	osd_printf_info("VVF: Commands: LINE_TO6=%u(%.1f%%) LINE_TO6_PAL=%u(%.1f%%) LINE_TO10=%u(%.1f%%) LINE_TO10_PAL=%u(%.1f%%) LINE_TO14=%u(%.1f%%) LINE_TO14_PAL=%u(%.1f%%)\n",
		m_stats.line_to6_count, 100.0 * m_stats.line_to6_count / total_commands,
		m_stats.line_to6_pal_count, 100.0 * m_stats.line_to6_pal_count / total_commands,
		m_stats.line_to10_count, 100.0 * m_stats.line_to10_count / total_commands,
		m_stats.line_to10_pal_count, 100.0 * m_stats.line_to10_pal_count / total_commands,
		m_stats.line_to14_count, 100.0 * m_stats.line_to14_count / total_commands,
		m_stats.line_to14_pal_count, 100.0 * m_stats.line_to14_pal_count / total_commands);

	// Movement stats
	uint32_t total_line_to_calls = m_stats.raw_moves_count + m_stats.raw_draws_count;
	uint32_t total_with_skipped = total_line_to_calls + m_stats.moves_skipped;
	osd_printf_info("VVF: Moves=%u(%.1f%%) Draws=%u(%.1f%%)",
		m_stats.raw_moves_count, 100.0 * m_stats.raw_moves_count / total_line_to_calls,
		m_stats.raw_draws_count, 100.0 * m_stats.raw_draws_count / total_line_to_calls);
	if (m_stats.moves_skipped > 0)
		osd_printf_info(" | Skipped %u redundant moves (%.1f%% reduction)",
			m_stats.moves_skipped,
			100.0 * m_stats.moves_skipped / total_with_skipped);
	osd_printf_info("\n");

	// Distance stats with coordinates
	if (m_stats.min_draw_distance < std::numeric_limits<double>::max())
	{
		osd_printf_info("VVF: Draw distance: min: %.1f [line #%u] max: %.1f [line #%u]\n",
			m_stats.min_draw_distance, m_stats.min_draw_line_num,
			m_stats.max_draw_distance, m_stats.max_draw_line_num);
	}
	if (m_stats.min_move_distance < std::numeric_limits<double>::max())
	{
		osd_printf_info("VVF: Move distance: min: %.1f [line #%u] max: %.1f [line #%u]\n",
			m_stats.min_move_distance, m_stats.min_move_line_num,
			m_stats.max_move_distance, m_stats.max_move_line_num);
	}

	// Color usage (compact)
	if (m_stats.raw_draws_count > 0)
	{
		osd_printf_info("VVF: ");
		print_color_stats();
		osd_printf_info("\n");
	}
#else
	// Stats disabled - just print basic info
	osd_printf_info("VVF: %u frames, %.2f MB\n", m_frame_count, actual_file_size / 1048576.0);
#endif
} // vvf_write::finalize()

//**************************************************************************
//  COMPRESSION METHODS
//**************************************************************************

void vvf_write::set_compression(bool enabled, uint32_t type)
{
	m_compression_enabled = enabled;
	m_compression_type = type;

	if (enabled)
	{
		osd_printf_info("VVF: Compression enabled (type %u)\n", type);
	}
	else
	{
		osd_printf_info("VVF: Compression disabled\n");
	}
}

std::vector<uint8_t> vvf_write::compress_data(const std::vector<uint8_t>& data)
{
	if (!m_compression_enabled)
		return data;

	std::vector<uint8_t> compressed;

	switch (m_compression_type)
	{
		case 1: // zlib
		{
			uLongf compressed_size = compressBound(data.size());
			compressed.resize(compressed_size);

			int result = compress(compressed.data(), &compressed_size, data.data(), data.size());
			if (result == Z_OK)
			{
				compressed.resize(compressed_size);
				osd_printf_info("VVF: zlib compressed %zu -> %zu bytes (%.1f%%)\n",
					data.size(), compressed_size, 100.0 * compressed_size / data.size());
			}
			else
			{
				osd_printf_error("VVF: zlib compression failed\n");
				return data;
			}
			break;
		}

		default:
			osd_printf_warning("VVF: Unknown compression type %u\n", m_compression_type);
			return data;
	}

	return compressed;
}

#if VVF_STATS
void vvf_write::print_color_stats(const uint32_t baseline[COLOR_COUNT]) const
{
	if (m_stats.raw_draws_count == 0)
		return;

	// Calculate deltas if baseline provided
	uint32_t color_counts[COLOR_COUNT];
	uint32_t total_draws = m_stats.raw_draws_count;

	if (baseline != nullptr)
	{
		// Subtract baseline from current counts
		for (int i = 0; i < COLOR_COUNT; i++)
		{
			color_counts[i] = (m_stats.draws_per_color[i] > baseline[i]) ?
							  (m_stats.draws_per_color[i] - baseline[i]) : 0;
		}

		// Calculate total draws for this period
		total_draws = 0;
		for (int i = 0; i < COLOR_COUNT; i++)
		{
			total_draws += color_counts[i];
		}
	}
	else
	{
		// No baseline - use absolute counts
		for (int i = 0; i < COLOR_COUNT; i++)
		{
			color_counts[i] = m_stats.draws_per_color[i];
		}
	}

	// Exit early if no draws to report (don't print anything)
	if (total_draws == 0)
		return;

	// Detect if running in Cursor/VSCode terminal (which has emoji kerning bug for light blue heart)
	static bool cursor_terminal = (getenv("CURSOR_AGENT") != nullptr || 
	                               (getenv("TERM_PROGRAM") != nullptr && strcmp(getenv("TERM_PROGRAM"), "vscode") == 0));

	// Use space workaround for emojis with kerning issues in Cursor terminal
	const char *color_names[COLOR_COUNT] = {"❤️ ", "💚", "💙", "💛", cursor_terminal ? "🩵 " : "🩵", "💜", "🤍", "🌈"};

	// Create array of indices and sort by count (descending)
	struct color_sort {
		int index;
		uint32_t count;
	};
	color_sort sorted[COLOR_COUNT];
	for (int i = 0; i < COLOR_COUNT; i++)
	{
		sorted[i].index = i;
		sorted[i].count = color_counts[i];
	}

	// Bubble sort (simple and sufficient for 8 items)
	for (int i = 0; i < COLOR_COUNT - 1; i++)
	{
		for (int j = 0; j < COLOR_COUNT - i - 1; j++)
		{
			if (sorted[j].count < sorted[j + 1].count)
			{
				color_sort temp = sorted[j];
				sorted[j] = sorted[j + 1];
				sorted[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < COLOR_COUNT; i++)
	{
		int idx = sorted[i].index;
		if (color_counts[idx] > 0)
			osd_printf_info("%s=%.1f%% ", color_names[idx],
				100.0 * color_counts[idx] / total_draws);
	}
}
#endif // VVF_STATS

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

	// Set timing parameters to fix "backward in time" errors
	m_opus_context->time_base = AVRational{1, static_cast<int>(m_audio_sample_rate)};
	m_opus_context->pkt_timebase = AVRational{1, static_cast<int>(m_audio_sample_rate)};

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

		// Set PTS to fix timing issues - use frame number * frame size
		static int64_t pts_counter = 0;
		m_opus_frame->pts = pts_counter;
		pts_counter += m_opus_frame_size;

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

