// license:BSD-3-Clause
// copyright-holders:R E Broadley
//============================================================
//
//  ffmpegwrite.cpp - FFmpeg video encoder for MAME
//
//  Based on xscreensaver's ffmpeg-out implementation
//
//============================================================

#include "ffmpegwrite.h"

#ifdef MAME_FFMPEG

#include "emu.h"
#include "emuopts.h"
#include "fileio.h"
#include "render.h"
#include "screen.h"

// Disable warnings from FFmpeg headers
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpragmas"
#pragma GCC diagnostic ignored "-Wc99-extensions"
#pragma GCC diagnostic ignored "-Wlong-long"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

extern "C" {
#include <libavformat/avformat.h>
#include <libavcodec/avcodec.h>
#include <libavutil/avutil.h>
#include <libavutil/opt.h>
#include <libswscale/swscale.h>
#include <libswresample/swresample.h>
}

#include <algorithm>
#include <chrono>
#include <cstring>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif

// FFmpeg API version compatibility
#if (LIBAVUTIL_VERSION_INT >= ((57<<16) | (28<<8) | 100))
#define HAVE_CH_LAYOUT
#endif

struct av_stream_data
{
	const AVCodec *codec;
	AVStream *st;
	AVCodecContext *ctx;
	AVFrame *frame;
};

struct ffmpeg_write::ffmpeg_state
{
	std::string outfile;
	av_stream_data video_stream;
	av_stream_data audio_stream;
	SwsContext *sws_ctx;
	SwrContext *swr_ctx;
	AVFormatContext *format_ctx;
	int frames_written;
	uint64_t samples_written;
	bool has_audio;

	// Audio buffer for accumulation
	std::vector<int16_t> audio_buffer;
	int audio_channels;
	int audio_sample_rate;
};

//============================================================
//  HELPER FUNCTIONS
//============================================================

static void log_av_error(const char *msg, int averror)
{
	char errbuf[AV_ERROR_MAX_STRING_SIZE];
	av_strerror(averror, errbuf, sizeof(errbuf));
	osd_printf_error("FFmpeg error in %s: %s\n", msg, errbuf);
}

static void check_av_error(const char *msg, int averror)
{
	if (averror < 0)
	{
		log_av_error(msg, averror);
		throw averror;
	}
}

static void flush_packets(AVFormatContext *oc, av_stream_data *stream)
{
	while (true)
	{
		AVPacket *pkt = av_packet_alloc();
		if (!pkt)
			break;

		int ret = avcodec_receive_packet(stream->ctx, pkt);
		if (ret == AVERROR(EAGAIN) || ret == AVERROR_EOF)
		{
			av_packet_free(&pkt);
			return;
		}

		if (ret < 0)
		{
			av_packet_free(&pkt);
			return;
		}

		av_packet_rescale_ts(pkt, stream->ctx->time_base, stream->st->time_base);
		pkt->stream_index = stream->st->index;
		av_interleaved_write_frame(oc, pkt);
		av_packet_free(&pkt);
	}
}

static void write_frame(AVFormatContext *oc, av_stream_data *stream)
{
	int ret = avcodec_send_frame(stream->ctx, stream->frame);
	if (ret >= 0)
		flush_packets(oc, stream);
}

#ifdef HAVE_CH_LAYOUT
static AVChannelLayout guess_channel_layout(int channels)
{
	return (channels <= 1 ? (AVChannelLayout)AV_CHANNEL_LAYOUT_MONO : (AVChannelLayout)AV_CHANNEL_LAYOUT_STEREO);
}
#else
static uint64_t guess_channel_layout(int channels)
{
	return (channels <= 1 ? AV_CH_LAYOUT_MONO : AV_CH_LAYOUT_STEREO);
}
#endif

static void add_stream(av_stream_data *stream_data, AVFormatContext *oc, enum AVCodecID codec_id)
{
	stream_data->codec = avcodec_find_encoder(codec_id);
	if (!stream_data->codec)
	{
		osd_printf_error("Could not find encoder for codec %d\n", codec_id);
		throw -1;
	}

	stream_data->st = avformat_new_stream(oc, stream_data->codec);
	if (!stream_data->st)
	{
		osd_printf_error("Could not allocate stream\n");
		throw -1;
	}
	stream_data->st->id = oc->nb_streams - 1;

	stream_data->ctx = avcodec_alloc_context3(stream_data->codec);
	if (!stream_data->ctx)
	{
		osd_printf_error("Could not allocate encoding context\n");
		throw -1;
	}

	if (oc->oformat->flags & AVFMT_GLOBALHEADER)
		stream_data->ctx->flags |= AV_CODEC_FLAG_GLOBAL_HEADER;
}

static void open_stream(av_stream_data *stream_data, AVDictionary *opt)
{
	check_av_error("avcodec_open2", avcodec_open2(stream_data->ctx, stream_data->codec, &opt));
	av_dict_free(&opt);

	stream_data->frame = av_frame_alloc();
	if (!stream_data->frame)
	{
		osd_printf_error("Could not allocate frame\n");
		throw -1;
	}

	check_av_error("avcodec_parameters_from_context",
		avcodec_parameters_from_context(stream_data->st->codecpar, stream_data->ctx));
}

static void close_stream(av_stream_data *stream_data)
{
	if (stream_data->ctx)
		avcodec_free_context(&stream_data->ctx);
	if (stream_data->frame)
		av_frame_free(&stream_data->frame);
}

//============================================================
//  ffmpeg_write - constructor
//============================================================

// Job structure for background encoding
struct ffmpeg_write::encode_job
{
	enum class type { VIDEO, AUDIO };

	type job_type;

	// Video data - supports both copy and zero-copy modes
	std::vector<uint32_t> video_data;               // Copy mode: data is copied here
	std::unique_ptr<bitmap_rgb32> video_bitmap;     // Zero-copy mode: bitmap ownership transferred
	int video_width;
	int video_height;
	int video_rowpixels;

	// Audio data
	std::vector<int16_t> audio_data;
	int audio_samples;
};

ffmpeg_write::ffmpeg_write(running_machine& machine, uint32_t width, uint32_t height)
	: m_machine(machine)
	, m_recording(false)
	, m_width(width)
	, m_height(height)
	, m_frame(0)
	, m_frame_period(attotime::zero)
	, m_next_frame_time(attotime::zero)
	, m_thread_running(false)
	, m_thread_stop(false)
	, m_current_render_bitmap(nullptr)
{
	// Pre-allocate bitmap pool for zero-copy rendering (5 bitmaps)
	for (int i = 0; i < 5; i++)
	{
		auto bmp = std::make_unique<bitmap_rgb32>();
		// Bitmaps will be resized on-demand when first used
		m_bitmap_pool.push_back(std::move(bmp));
	}
}

//============================================================
//  ~ffmpeg_write - destructor
//============================================================

ffmpeg_write::~ffmpeg_write()
{
	if (m_recording)
		end_ffmpeg_recording();
}

//============================================================
//  record - start FFmpeg recording
//============================================================

void ffmpeg_write::record(std::string_view name)
{
	begin_ffmpeg_recording(name);
}

//============================================================
//  stop - stop FFmpeg recording
//============================================================

void ffmpeg_write::stop()
{
	end_ffmpeg_recording();
}

//============================================================
//  begin_ffmpeg_recording
//============================================================

void ffmpeg_write::begin_ffmpeg_recording(std::string_view name)
{
	osd_printf_verbose("FFmpeg: begin_ffmpeg_recording called with name='%s'\n",
		name.empty() ? "(empty)" : std::string(name).c_str());

	// Stop any existing recording
	end_ffmpeg_recording();

	// Reset state
	m_frame = 0;
	m_next_frame_time = m_machine.time();

	try
	{
		m_ffmpeg = std::make_unique<ffmpeg_state>();

		const screen_device *primary_screen = screen_device_enumerator(m_machine.root_device()).first();
		const int framerate = primary_screen ? ATTOSECONDS_TO_HZ(primary_screen->frame_period().m_attoseconds) : screen_device::DEFAULT_FRAME_RATE;

		// Get options (with fallback defaults)
		const char *preset = m_machine.options().ffmpeg_preset();
		const char *crf = m_machine.options().ffmpeg_crf();
		const char *format = m_machine.options().ffmpeg_format();

		if (!preset || preset[0] == 0) preset = "ultrafast";  // Fast encoding for real-time recording
		if (!crf || crf[0] == 0) crf = "23";

		// Auto-detect format from file extension if not explicitly set
		if (!format || format[0] == 0)
		{
			// Extract extension from filename
			std::string filename_str(name);
			size_t dot_pos = filename_str.rfind('.');

			if (dot_pos != std::string::npos && dot_pos < filename_str.length() - 1)
			{
				std::string ext = filename_str.substr(dot_pos + 1);

				// Convert to lowercase for comparison
				for (char &c : ext)
					c = std::tolower(static_cast<unsigned char>(c));

				// Map extension to FFmpeg format
				if (ext == "mp4")
					format = "mp4";
				else if (ext == "avi")
					format = "avi";
				else if (ext == "mkv")
					format = "matroska";
				else if (ext == "mov")
					format = "mov";
				else if (ext == "webm")
					format = "webm";
				else
				{
					osd_printf_verbose("FFmpeg: Unknown extension '.%s', defaulting to MP4\n", ext.c_str());
					format = "mp4";
				}

				osd_printf_info("FFmpeg: Auto-detected format '%s' from extension '.%s'\n", format, ext.c_str());
			}
			else
			{
				// No extension found, default to MP4
				format = "mp4";
				osd_printf_verbose("FFmpeg: No file extension found, defaulting to MP4\n");
			}
		}
		else
		{
			osd_printf_info("FFmpeg: Using explicitly set format '%s'\n", format);
		}

		// Audio setup
		m_ffmpeg->has_audio = m_machine.sound().outputs_count() > 0;
		m_ffmpeg->audio_channels = m_machine.sound().outputs_count();
		m_ffmpeg->audio_sample_rate = m_machine.sample_rate();
		m_ffmpeg->samples_written = 0;
		m_ffmpeg->frames_written = 0;

		// Create file path - check if absolute or relative
		bool const is_absolute_path = !name.empty() && osd_is_absolute_path(std::string(name));
		emu_file tempfile(
			is_absolute_path ? "" : m_machine.options().snapshot_directory(),
			OPEN_FLAG_WRITE | OPEN_FLAG_CREATE | OPEN_FLAG_CREATE_PATHS);
		std::error_condition filerr;

		osd_printf_verbose("FFmpeg: Creating file, name='%s', format='%s', absolute=%d\n",
			name.empty() ? "auto" : std::string(name).c_str(), format, is_absolute_path);

		if (name.empty() || name == "auto")
			filerr = m_machine.video().open_next(tempfile, format);
		else
			filerr = tempfile.open(name);

		if (filerr)
		{
			osd_printf_error("FFmpeg: Error creating output file: %s\n", filerr.message().c_str());
			return;
		}

		m_ffmpeg->outfile = tempfile.fullpath();
		tempfile.close();

		osd_printf_verbose("FFmpeg: Output file will be: %s\n", m_ffmpeg->outfile.c_str());

		// Allocate output context
		check_av_error("avformat_alloc_output_context2",
			avformat_alloc_output_context2(&m_ffmpeg->format_ctx, nullptr, format, m_ffmpeg->outfile.c_str()));

		// Add video stream
		add_stream(&m_ffmpeg->video_stream, m_ffmpeg->format_ctx, AV_CODEC_ID_H264);

		// Round dimensions to even numbers (required for H.264)
		int encode_width = (m_width + 1) & ~1;
		int encode_height = (m_height + 1) & ~1;

		osd_printf_verbose("FFmpeg: Video dimensions %dx%d -> %dx%d (rounded to even)\n",
			m_width, m_height, encode_width, encode_height);

		m_ffmpeg->video_stream.ctx->codec_id = AV_CODEC_ID_H264;
		m_ffmpeg->video_stream.ctx->width = encode_width;
		m_ffmpeg->video_stream.ctx->height = encode_height;
		m_ffmpeg->video_stream.st->time_base = AVRational{1, framerate};
		m_ffmpeg->video_stream.ctx->time_base = m_ffmpeg->video_stream.st->time_base;
		m_ffmpeg->video_stream.ctx->gop_size = 250;
		m_ffmpeg->video_stream.ctx->pix_fmt = AV_PIX_FMT_YUV420P;
		m_ffmpeg->video_stream.ctx->profile = FF_PROFILE_H264_HIGH;

		// Open video stream
		AVDictionary *video_opt = nullptr;
		av_dict_set(&video_opt, "preset", preset, 0);
		av_dict_set(&video_opt, "crf", crf, 0);
		open_stream(&m_ffmpeg->video_stream, video_opt);

		m_ffmpeg->video_stream.frame->format = m_ffmpeg->video_stream.ctx->pix_fmt;
		m_ffmpeg->video_stream.frame->width = m_ffmpeg->video_stream.ctx->width;
		m_ffmpeg->video_stream.frame->height = m_ffmpeg->video_stream.ctx->height;
		check_av_error("av_frame_get_buffer", av_frame_get_buffer(m_ffmpeg->video_stream.frame, 0));

		// Add audio stream if we have audio
		if (m_ffmpeg->has_audio && m_ffmpeg->audio_channels > 0)
		{
			add_stream(&m_ffmpeg->audio_stream, m_ffmpeg->format_ctx, AV_CODEC_ID_AAC);

			m_ffmpeg->audio_stream.ctx->sample_fmt = AV_SAMPLE_FMT_FLTP;
			m_ffmpeg->audio_stream.ctx->bit_rate = 96000;
			m_ffmpeg->audio_stream.ctx->sample_rate = m_ffmpeg->audio_sample_rate;

#ifdef HAVE_CH_LAYOUT
			m_ffmpeg->audio_stream.ctx->ch_layout = guess_channel_layout(m_ffmpeg->audio_channels);
#else
			m_ffmpeg->audio_stream.ctx->channel_layout = guess_channel_layout(m_ffmpeg->audio_channels);
			m_ffmpeg->audio_stream.ctx->channels = m_ffmpeg->audio_channels;
#endif
			m_ffmpeg->audio_stream.st->time_base = AVRational{1, m_ffmpeg->audio_sample_rate};

			open_stream(&m_ffmpeg->audio_stream, nullptr);

			m_ffmpeg->audio_stream.frame->format = m_ffmpeg->audio_stream.ctx->sample_fmt;
#ifdef HAVE_CH_LAYOUT
			av_channel_layout_copy(&m_ffmpeg->audio_stream.frame->ch_layout, &m_ffmpeg->audio_stream.ctx->ch_layout);
#else
			m_ffmpeg->audio_stream.frame->channel_layout = m_ffmpeg->audio_stream.ctx->channel_layout;
#endif
			m_ffmpeg->audio_stream.frame->sample_rate = m_ffmpeg->audio_stream.ctx->sample_rate;
			m_ffmpeg->audio_stream.frame->nb_samples = m_ffmpeg->audio_stream.ctx->frame_size;

			check_av_error("av_frame_get_buffer", av_frame_get_buffer(m_ffmpeg->audio_stream.frame, 0));

			// Initialize resampler for audio
			m_ffmpeg->swr_ctx = swr_alloc();
			if (!m_ffmpeg->swr_ctx)
			{
				osd_printf_error("Could not allocate resampler\n");
				throw -1;
			}

			// Configure resampler
#ifdef HAVE_CH_LAYOUT
			av_opt_set_chlayout(m_ffmpeg->swr_ctx, "in_chlayout", &m_ffmpeg->audio_stream.ctx->ch_layout, 0);
			av_opt_set_chlayout(m_ffmpeg->swr_ctx, "out_chlayout", &m_ffmpeg->audio_stream.ctx->ch_layout, 0);
#else
			av_opt_set_int(m_ffmpeg->swr_ctx, "in_channel_layout", m_ffmpeg->audio_stream.ctx->channel_layout, 0);
			av_opt_set_int(m_ffmpeg->swr_ctx, "out_channel_layout", m_ffmpeg->audio_stream.ctx->channel_layout, 0);
#endif
			av_opt_set_int(m_ffmpeg->swr_ctx, "in_sample_rate", m_ffmpeg->audio_sample_rate, 0);
			av_opt_set_int(m_ffmpeg->swr_ctx, "out_sample_rate", m_ffmpeg->audio_stream.ctx->sample_rate, 0);
			av_opt_set_sample_fmt(m_ffmpeg->swr_ctx, "in_sample_fmt", AV_SAMPLE_FMT_S16, 0);
			av_opt_set_sample_fmt(m_ffmpeg->swr_ctx, "out_sample_fmt", m_ffmpeg->audio_stream.ctx->sample_fmt, 0);

			// Initialize the resampler
			if (swr_init(m_ffmpeg->swr_ctx) < 0)
			{
				osd_printf_error("Failed to initialize audio resampler\n");
				throw -1;
			}
		}

		// Open output file
		check_av_error("avio_open", avio_open(&m_ffmpeg->format_ctx->pb, m_ffmpeg->outfile.c_str(), AVIO_FLAG_WRITE));

		// Write header
		AVDictionary *header_opt = nullptr;
		check_av_error("avformat_write_header", avformat_write_header(m_ffmpeg->format_ctx, &header_opt));

		// Initialize scaler
		// MAME uses 0xAARRGGBB which in little-endian memory is: BB GG RR AA bytes
		// FFmpeg BGRA format expects: BB GG RR AA - perfect match!
		m_ffmpeg->sws_ctx = sws_getContext(
			m_width, m_height, AV_PIX_FMT_BGRA,
			m_ffmpeg->video_stream.ctx->width, m_ffmpeg->video_stream.ctx->height,
			m_ffmpeg->video_stream.ctx->pix_fmt,
			SWS_BICUBIC, nullptr, nullptr, nullptr);

		if (!m_ffmpeg->sws_ctx)
		{
			osd_printf_error("Could not initialize scaler\n");
			throw -1;
		}

		// Compute frame period
		m_frame_period = attotime::from_seconds(1) / framerate;

		m_recording = true;

		// Start background encoder thread
		m_thread_stop = false;
		m_thread_running = true;
		m_encoder_thread = std::make_unique<std::thread>(&ffmpeg_write::encoder_thread, this);
		osd_printf_info("Started FFmpeg recording to %s (async background encoding)\n", m_ffmpeg->outfile.c_str());
	}
	catch (int err)
	{
		osd_printf_error("Failed to start FFmpeg recording (error code: %d)\n", err);
		end_ffmpeg_recording();
		m_ffmpeg.reset();  // Ensure state is fully cleared
		m_recording = false;
	}
	catch (...)
	{
		osd_printf_error("Failed to start FFmpeg recording (unknown error)\n");
		end_ffmpeg_recording();
		m_ffmpeg.reset();  // Ensure state is fully cleared
		m_recording = false;
	}
}

//============================================================
//  end_ffmpeg_recording
//============================================================

void ffmpeg_write::end_ffmpeg_recording()
{
	if (!m_ffmpeg)
		return;

	// Stop encoder thread if running
	if (m_encoder_thread)
	{
		{
			std::lock_guard<std::mutex> lock(m_queue_mutex);
			m_thread_stop = true;
		}
		m_queue_cv.notify_one();
		m_encoder_thread->join();
		m_encoder_thread.reset();
		m_thread_running = false;

		// Clear any remaining jobs
		while (!m_encode_queue.empty())
			m_encode_queue.pop();
	}

	try
	{
		// Flush video encoder (only if recording was active)
		if (m_recording && m_ffmpeg->video_stream.ctx)
		{
			avcodec_send_frame(m_ffmpeg->video_stream.ctx, nullptr);
			if (m_ffmpeg->format_ctx)
				flush_packets(m_ffmpeg->format_ctx, &m_ffmpeg->video_stream);
		}

		// Flush audio encoder
		if (m_recording && m_ffmpeg->has_audio && m_ffmpeg->audio_stream.ctx)
		{
			avcodec_send_frame(m_ffmpeg->audio_stream.ctx, nullptr);
			if (m_ffmpeg->format_ctx)
				flush_packets(m_ffmpeg->format_ctx, &m_ffmpeg->audio_stream);
		}

		// Write trailer (only if recording was active and format context is valid)
		if (m_recording && m_ffmpeg->format_ctx && m_ffmpeg->format_ctx->pb)
			av_write_trailer(m_ffmpeg->format_ctx);

		// Clean up streams - safe even if partially initialized
		if (m_ffmpeg->video_stream.ctx)
			close_stream(&m_ffmpeg->video_stream);

		if (m_ffmpeg->has_audio && m_ffmpeg->audio_stream.ctx)
		{
			close_stream(&m_ffmpeg->audio_stream);
			if (m_ffmpeg->swr_ctx)
			{
				swr_free(&m_ffmpeg->swr_ctx);
				m_ffmpeg->swr_ctx = nullptr;
			}
		}

		if (m_ffmpeg->sws_ctx)
		{
			sws_freeContext(m_ffmpeg->sws_ctx);
			m_ffmpeg->sws_ctx = nullptr;
		}

		// Clean up format context
		if (m_ffmpeg->format_ctx)
		{
			if (m_ffmpeg->format_ctx->pb)
				avio_closep(&m_ffmpeg->format_ctx->pb);
			avformat_free_context(m_ffmpeg->format_ctx);
			m_ffmpeg->format_ctx = nullptr;
		}

		if (m_recording && m_frame > 0)
			osd_printf_info("Stopped FFmpeg recording after %d frames\n", m_frame);
	}
	catch (...)
	{
		osd_printf_error("Error while stopping FFmpeg recording (cleanup may be incomplete)\n");
	}

	m_ffmpeg.reset();
	m_recording = false;
	m_frame = 0;
}

//============================================================
//  encoder_thread - background encoding thread
//============================================================

void ffmpeg_write::encoder_thread()
{
	osd_printf_verbose("FFmpeg encoder thread started\n");

	while (true)
	{
		std::unique_ptr<encode_job> job;

		{
			std::unique_lock<std::mutex> lock(m_queue_mutex);
			m_queue_cv.wait(lock, [this] { return m_thread_stop || !m_encode_queue.empty(); });

			if (m_thread_stop && m_encode_queue.empty())
				break;

			if (!m_encode_queue.empty())
			{
				job = std::move(m_encode_queue.front());
				m_encode_queue.pop();
			}
		}

		if (!job)
			continue;

		try
		{
			if (job->job_type == encode_job::type::VIDEO)
			{
				// Encode video frame
				check_av_error("av_frame_make_writable", av_frame_make_writable(m_ffmpeg->video_stream.frame));

				// Check if scaler needs updating
				if (job->video_width != m_width || job->video_height != m_height)
				{
					if (m_ffmpeg->sws_ctx)
						sws_freeContext(m_ffmpeg->sws_ctx);

					m_ffmpeg->sws_ctx = sws_getContext(
						job->video_width, job->video_height, AV_PIX_FMT_BGRA,
						m_ffmpeg->video_stream.ctx->width, m_ffmpeg->video_stream.ctx->height,
						m_ffmpeg->video_stream.ctx->pix_fmt,
						SWS_BICUBIC, nullptr, nullptr, nullptr);

					m_width = job->video_width;
					m_height = job->video_height;
				}

				// Support both zero-copy (bitmap) and copy (vector) modes
				const uint8_t *src_data[1];
				int src_linesize[1];

				if (job->video_bitmap)
				{
					// Zero-copy mode: use bitmap data directly
					src_data[0] = reinterpret_cast<const uint8_t *>(job->video_bitmap->raw_pixptr(0));
					src_linesize[0] = job->video_rowpixels * 4;  // Use actual rowpixels (may have padding)
				}
				else
				{
					// Copy mode: use copied vector data
					src_data[0] = reinterpret_cast<const uint8_t *>(job->video_data.data());
					src_linesize[0] = job->video_width * 4;  // No padding in copied data
				}

				sws_scale(m_ffmpeg->sws_ctx, src_data, src_linesize, 0,
					job->video_height,
					m_ffmpeg->video_stream.frame->data,
					m_ffmpeg->video_stream.frame->linesize);

				m_ffmpeg->video_stream.frame->pts = m_ffmpeg->frames_written;
				write_frame(m_ffmpeg->format_ctx, &m_ffmpeg->video_stream);
				m_ffmpeg->frames_written++;
			}
			else if (job->job_type == encode_job::type::AUDIO)
			{
				// Process audio (keep existing buffering logic)
				m_ffmpeg->audio_buffer.insert(m_ffmpeg->audio_buffer.end(),
					job->audio_data.begin(), job->audio_data.end());

				int required_samples = m_ffmpeg->audio_stream.ctx->frame_size * m_ffmpeg->audio_channels;

				while (m_ffmpeg->audio_buffer.size() >= (size_t)required_samples)
				{
					const uint8_t *in_data[1] = { reinterpret_cast<const uint8_t *>(m_ffmpeg->audio_buffer.data()) };
					int in_samples = m_ffmpeg->audio_stream.ctx->frame_size;

					int out_samples = swr_convert(m_ffmpeg->swr_ctx,
						m_ffmpeg->audio_stream.frame->data,
						m_ffmpeg->audio_stream.frame->nb_samples,
						in_data,
						in_samples);

					if (out_samples > 0)
					{
						m_ffmpeg->audio_stream.frame->pts = m_ffmpeg->samples_written;
						m_ffmpeg->samples_written += out_samples;
						write_frame(m_ffmpeg->format_ctx, &m_ffmpeg->audio_stream);
					}

					m_ffmpeg->audio_buffer.erase(m_ffmpeg->audio_buffer.begin(),
						m_ffmpeg->audio_buffer.begin() + required_samples);
				}
			}
		}
		catch (...)
		{
			osd_printf_error("FFmpeg encoder thread error\n");
		}

		// Return bitmaps and jobs to pools for reuse
		if (job && job->job_type == encode_job::type::VIDEO)
		{
			std::lock_guard<std::mutex> lock(m_queue_mutex);

			// Return zero-copy bitmap to pool
			if (job->video_bitmap && m_bitmap_pool.size() < 10)
			{
				m_bitmap_pool.push_back(std::move(job->video_bitmap));
			}

			// Return encode job to pool (audio jobs are small, don't pool)
			if (m_frame_pool.size() < 10)
			{
				job->video_data.clear();  // Keep capacity, clear size
				job->video_bitmap.reset();  // Clear bitmap pointer
				m_frame_pool.push_back(std::move(job));
			}
		}
	}

	osd_printf_verbose("FFmpeg encoder thread stopped\n");
}

//============================================================
//  video_frame
//============================================================

void ffmpeg_write::video_frame(bitmap_rgb32& snap)
{
	if (!m_recording || !m_ffmpeg)
		return;

	// Get current time
	attotime curtime = m_machine.time();

	// Loop until we hit the right time
	while (m_next_frame_time <= curtime)
	{
		auto start = std::chrono::high_resolution_clock::now();

		// Get a frame from the pool (or create new if pool empty)
		std::unique_ptr<encode_job> job;
		{
			std::lock_guard<std::mutex> lock(m_queue_mutex);
			if (!m_frame_pool.empty())
			{
				job = std::move(m_frame_pool.back());
				m_frame_pool.pop_back();
			}
		}

		if (!job)
			job = std::make_unique<encode_job>();

		job->job_type = encode_job::type::VIDEO;
		job->video_width = snap.width();
		job->video_height = snap.height();
		job->video_rowpixels = snap.rowpixels();

		auto alloc_time = std::chrono::high_resolution_clock::now();

		// Copy visible pixels (async encoding requires data copy)
		int actual_pixels = job->video_width * job->video_height;
		job->video_data.resize(actual_pixels);

		if (job->video_width == job->video_rowpixels)
		{
			// No padding - single memcpy
			std::memcpy(job->video_data.data(), snap.raw_pixptr(0), actual_pixels * sizeof(uint32_t));
		}
		else
		{
			// Has padding - copy row by row
			uint32_t *dst = job->video_data.data();
			for (int y = 0; y < job->video_height; y++)
			{
				std::memcpy(dst, &snap.pix(y, 0), job->video_width * sizeof(uint32_t));
				dst += job->video_width;
			}
		}

		auto copy_time = std::chrono::high_resolution_clock::now();

		// Queue the job for background encoding
		{
			std::lock_guard<std::mutex> lock(m_queue_mutex);
			m_encode_queue.push(std::move(job));
		}
		m_queue_cv.notify_one();

		auto end = std::chrono::high_resolution_clock::now();

		// Log timing every 100 frames
		if (m_frame % 100 == 0 && m_frame > 0)
		{
			auto alloc_us = std::chrono::duration_cast<std::chrono::microseconds>(alloc_time - start).count();
			auto copy_us = std::chrono::duration_cast<std::chrono::microseconds>(copy_time - alloc_time).count();
			auto queue_us = std::chrono::duration_cast<std::chrono::microseconds>(end - copy_time).count();
			auto total_us = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

			osd_printf_info("FFmpeg frame %d: alloc=%ldµs, copy=%ldµs, queue=%ldµs, total=%ldµs (%.1fMB/s)\n",
				m_frame, alloc_us, copy_us, queue_us, total_us,
				(actual_pixels * 4.0 / 1024.0 / 1024.0) / (copy_us / 1000000.0));
		}

		m_next_frame_time += m_frame_period;
		m_frame++;
	}
}

//============================================================
//  audio_frame
//============================================================

void ffmpeg_write::audio_frame(const int16_t *buffer, int samples_this_frame)
{
	if (!m_recording || !m_ffmpeg || !m_ffmpeg->has_audio)
		return;

	// Create an audio job with copied data
	auto job = std::make_unique<encode_job>();
	job->job_type = encode_job::type::AUDIO;
	job->audio_samples = samples_this_frame;

	// Copy audio data (interleaved stereo/mono)
	int total_samples = samples_this_frame * m_ffmpeg->audio_channels;
	job->audio_data.assign(buffer, buffer + total_samples);

	// Queue the job for background encoding
	{
		std::lock_guard<std::mutex> lock(m_queue_mutex);
		m_encode_queue.push(std::move(job));
	}
	m_queue_cv.notify_one();
}

//============================================================
//  get_render_bitmap - get a bitmap for MAME to render into
//============================================================

bitmap_rgb32* ffmpeg_write::get_render_bitmap()
{
	if (!m_recording || !m_ffmpeg)
		return nullptr;

	// Get a bitmap from the pool
	std::lock_guard<std::mutex> lock(m_queue_mutex);
	if (!m_bitmap_pool.empty())
	{
		m_current_render_bitmap = m_bitmap_pool.back().release();
		m_bitmap_pool.pop_back();
		return m_current_render_bitmap;
	}

	// Pool exhausted - fall back to creating a new one
	m_current_render_bitmap = new bitmap_rgb32();
	return m_current_render_bitmap;
}

//============================================================
//  queue_rendered_bitmap - queue a rendered bitmap (ZERO COPY!)
//============================================================

void ffmpeg_write::queue_rendered_bitmap(bitmap_rgb32* bmp)
{
	if (!m_recording || !m_ffmpeg || !bmp)
		return;

	// Get current time
	attotime curtime = m_machine.time();

	// Check if it's time to encode this frame
	if (m_next_frame_time > curtime)
		return;  // Skip this frame

	auto start = std::chrono::high_resolution_clock::now();

	// Create a job that OWNS the bitmap (zero copy!)
	auto job = std::make_unique<encode_job>();
	job->job_type = encode_job::type::VIDEO;
	job->video_bitmap = std::unique_ptr<bitmap_rgb32>(bmp);  // Transfer ownership!
	job->video_width = bmp->width();
	job->video_height = bmp->height();
	job->video_rowpixels = bmp->rowpixels();

	m_current_render_bitmap = nullptr;  // We no longer own it

	// Queue the job for background encoding
	{
		std::lock_guard<std::mutex> lock(m_queue_mutex);
		m_encode_queue.push(std::move(job));
	}
	m_queue_cv.notify_one();

	auto end = std::chrono::high_resolution_clock::now();

	// Log timing every 100 frames
	if (m_frame % 100 == 0 && m_frame > 0)
	{
		auto queue_us = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
		osd_printf_info("FFmpeg frame %d: ZERO-COPY queue=%ldµs\n", m_frame, queue_us);
	}

	m_next_frame_time += m_frame_period;
	m_frame++;
}

#endif // MAME_FFMPEG

