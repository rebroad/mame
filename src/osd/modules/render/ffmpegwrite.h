// license:BSD-3-Clause
// copyright-holders:R E Broadley
//============================================================
//
//  ffmpegwrite.h - FFmpeg video encoder for MAME
//
//  Based on xscreensaver's ffmpeg-out implementation
//
//============================================================

#ifndef MAME_RENDER_FFMPEGWRITE_H
#define MAME_RENDER_FFMPEGWRITE_H

#pragma once

// Check if FFmpeg is available
#ifdef MAME_FFMPEG

// emu
#include "attotime.h"

#include <string_view>
#include <memory>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <vector>

class running_machine;

class ffmpeg_write
{
public:
	ffmpeg_write(running_machine& machine, uint32_t width, uint32_t height);
	~ffmpeg_write();

	void record(std::string_view name);
	void stop();
	void audio_frame(const int16_t *buffer, int samples_this_frame);
	void video_frame(bitmap_rgb32& snap);

	// Zero-copy recording support
	bitmap_rgb32* get_render_bitmap();  // Get a bitmap from pool for MAME to render into
	void queue_rendered_bitmap(bitmap_rgb32* bmp);  // Queue pre-rendered bitmap (zero copy!)

	// Getters
	bool recording() const { return m_recording; }

private:
	void begin_ffmpeg_recording(std::string_view name);
	void end_ffmpeg_recording();
	void encoder_thread();  // Background encoding thread

	// Forward declaration of implementation
	struct ffmpeg_state;
	struct encode_job;

	running_machine&            m_machine;
	bool                        m_recording;
	uint32_t                    m_width;
	uint32_t                    m_height;
	std::unique_ptr<ffmpeg_state> m_ffmpeg;

	int                         m_frame;
	attotime                    m_frame_period;
	attotime                    m_next_frame_time;

	// Threading for async encoding
	std::unique_ptr<std::thread> m_encoder_thread;
	std::mutex                  m_queue_mutex;
	std::condition_variable     m_queue_cv;
	std::queue<std::unique_ptr<encode_job>> m_encode_queue;
	std::vector<std::unique_ptr<encode_job>> m_frame_pool;  // Pre-allocated frame pool
	bool                        m_thread_running;
	bool                        m_thread_stop;

	// Zero-copy bitmap pool
	std::vector<std::unique_ptr<bitmap_rgb32>> m_bitmap_pool;  // Pool of bitmaps for MAME to render into
	bitmap_rgb32                *m_current_render_bitmap;      // Current bitmap being rendered (not queued yet)

	// Performance monitoring
	bool                        m_debug_enabled;
	std::chrono::steady_clock::time_point m_last_stats_print;
	uint64_t                    m_encode_time_us;     // Total time spent encoding
	uint64_t                    m_wait_time_us;       // Total time waiting for frames
	uint32_t                    m_frames_encoded;     // Frames encoded since last stats print
};

#endif // MAME_FFMPEG

#endif // MAME_RENDER_FFMPEGWRITE_H

