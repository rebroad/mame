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
	bool                        m_thread_running;
	bool                        m_thread_stop;
};

#endif // MAME_FFMPEG

#endif // MAME_RENDER_FFMPEGWRITE_H

