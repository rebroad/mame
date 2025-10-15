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

ffmpeg_write::ffmpeg_write(running_machine& machine, uint32_t width, uint32_t height)
	: m_machine(machine)
	, m_recording(false)
	, m_width(width)
	, m_height(height)
	, m_frame(0)
	, m_frame_period(attotime::zero)
	, m_next_frame_time(attotime::zero)
{
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

		// Get options
		const char *preset = m_machine.options().exists("ffmpeg_preset") ?
			m_machine.options().value("ffmpeg_preset") : "medium";
		const char *crf = m_machine.options().exists("ffmpeg_crf") ?
			m_machine.options().value("ffmpeg_crf") : "23";
		const char *format = m_machine.options().exists("ffmpeg_format") ?
			m_machine.options().value("ffmpeg_format") : "mp4";

		// Audio setup
		m_ffmpeg->has_audio = m_machine.sound().outputs_count() > 0;
		m_ffmpeg->audio_channels = m_machine.sound().outputs_count();
		m_ffmpeg->audio_sample_rate = m_machine.sample_rate();
		m_ffmpeg->samples_written = 0;
		m_ffmpeg->frames_written = 0;

		// Create temporary file path
		emu_file tempfile(m_machine.options().snapshot_directory(), OPEN_FLAG_WRITE | OPEN_FLAG_CREATE | OPEN_FLAG_CREATE_PATHS);
		std::error_condition filerr;

		if (name.empty() || name == "auto")
			filerr = m_machine.video().open_next(tempfile, format);
		else
			filerr = tempfile.open(name);

		if (filerr)
		{
			osd_printf_error("Error creating output file\n");
			return;
		}

		m_ffmpeg->outfile = tempfile.fullpath();
		tempfile.close();

		// Allocate output context
		check_av_error("avformat_alloc_output_context2",
			avformat_alloc_output_context2(&m_ffmpeg->format_ctx, nullptr, format, m_ffmpeg->outfile.c_str()));

		// Add video stream
		add_stream(&m_ffmpeg->video_stream, m_ffmpeg->format_ctx, AV_CODEC_ID_H264);

		m_ffmpeg->video_stream.ctx->codec_id = AV_CODEC_ID_H264;
		m_ffmpeg->video_stream.ctx->width = m_width;
		m_ffmpeg->video_stream.ctx->height = m_height;
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
		}

		// Open output file
		check_av_error("avio_open", avio_open(&m_ffmpeg->format_ctx->pb, m_ffmpeg->outfile.c_str(), AVIO_FLAG_WRITE));

		// Write header
		AVDictionary *header_opt = nullptr;
		check_av_error("avformat_write_header", avformat_write_header(m_ffmpeg->format_ctx, &header_opt));

		// Initialize scaler
		m_ffmpeg->sws_ctx = sws_getContext(
			m_width, m_height, AV_PIX_FMT_BGR32,
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
		osd_printf_info("Started FFmpeg recording to %s\n", m_ffmpeg->outfile.c_str());
	}
	catch (...)
	{
		osd_printf_error("Failed to start FFmpeg recording\n");
		end_ffmpeg_recording();
	}
}

//============================================================
//  end_ffmpeg_recording
//============================================================

void ffmpeg_write::end_ffmpeg_recording()
{
	if (!m_ffmpeg)
		return;

	try
	{
		// Flush video encoder
		if (m_ffmpeg->video_stream.ctx)
		{
			avcodec_send_frame(m_ffmpeg->video_stream.ctx, nullptr);
			flush_packets(m_ffmpeg->format_ctx, &m_ffmpeg->video_stream);
		}

		// Flush audio encoder
		if (m_ffmpeg->has_audio && m_ffmpeg->audio_stream.ctx)
		{
			avcodec_send_frame(m_ffmpeg->audio_stream.ctx, nullptr);
			flush_packets(m_ffmpeg->format_ctx, &m_ffmpeg->audio_stream);
		}

		// Write trailer
		if (m_ffmpeg->format_ctx)
			av_write_trailer(m_ffmpeg->format_ctx);

		// Clean up
		close_stream(&m_ffmpeg->video_stream);
		if (m_ffmpeg->has_audio)
		{
			close_stream(&m_ffmpeg->audio_stream);
			if (m_ffmpeg->swr_ctx)
				swr_free(&m_ffmpeg->swr_ctx);
		}

		if (m_ffmpeg->sws_ctx)
			sws_freeContext(m_ffmpeg->sws_ctx);

		if (m_ffmpeg->format_ctx)
		{
			if (m_ffmpeg->format_ctx->pb)
				avio_closep(&m_ffmpeg->format_ctx->pb);
			avformat_free_context(m_ffmpeg->format_ctx);
		}

		osd_printf_info("Stopped FFmpeg recording after %d frames\n", m_frame);
	}
	catch (...)
	{
		osd_printf_error("Error while stopping FFmpeg recording\n");
	}

	m_ffmpeg.reset();
	m_recording = false;
	m_frame = 0;
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
		try
		{
			// Make frame writable
			check_av_error("av_frame_make_writable", av_frame_make_writable(m_ffmpeg->video_stream.frame));

			// Convert bitmap to frame format
			const uint8_t *src_data[1] = { reinterpret_cast<const uint8_t *>(snap.raw_pixptr(0)) };
			int src_linesize[1] = { static_cast<int>(snap.rowpixels() * 4) };

			sws_scale(m_ffmpeg->sws_ctx, src_data, src_linesize, 0,
				m_ffmpeg->video_stream.frame->height,
				m_ffmpeg->video_stream.frame->data,
				m_ffmpeg->video_stream.frame->linesize);

			m_ffmpeg->video_stream.frame->pts = m_ffmpeg->frames_written;
			write_frame(m_ffmpeg->format_ctx, &m_ffmpeg->video_stream);

			m_ffmpeg->frames_written++;
			m_next_frame_time += m_frame_period;
			m_frame++;
		}
		catch (int err)
		{
			osd_printf_error("Error while encoding video frame\n");
			end_ffmpeg_recording();
			return;
		}
	}
}

//============================================================
//  audio_frame
//============================================================

void ffmpeg_write::audio_frame(const int16_t *buffer, int samples_this_frame)
{
	if (!m_recording || !m_ffmpeg || !m_ffmpeg->has_audio)
		return;

	// For now, we'll skip audio encoding as it requires more complex buffering
	// and synchronization with video frames. This can be added in a future enhancement.

	// TODO: Implement audio encoding with proper sample buffering and conversion
}

#endif // MAME_FFMPEG

