// license:BSD-3-Clause
// copyright-holders:Olivier Galibert, R. Belmont
//============================================================
//
//  video.cpp - SDL video handling
//
//  SDLMAME by Olivier Galibert and R. Belmont
//
//============================================================

#include "window.h"

// MAMEOS headers
#include "osdsdl.h"
#include "modules/lib/osdlib.h"
#include "modules/monitor/monitor_module.h"
#include "modules/render/render_module.h"

// MAME headers
#include "emu.h"
#include "screen.h"
#include "emuopts.h"
#include "main.h"
#include "rendutil.h"
#include "uiinput.h"

#include <SDL2/SDL.h>


//============================================================
//  GLOBAL VARIABLES
//============================================================

osd_video_config video_config;


//============================================================
//  PROTOTYPES
//============================================================

static void get_resolution(const char *defdata, const char *data, osd_window_config *config, int report_error);


//============================================================
//  video_init
//============================================================

bool sdl_osd_interface::video_init()
{
	int index;

	// extract data from the options
	extract_video_config();

	// we need the beam width in a float, contrary to what the core does.
	video_config.beamwidth = options().beam_width_min();

	// initialize the window system so we can make windows
	if (!window_init())
		return false;

	// create the windows
	for (index = 0; index < video_config.numscreens; index++)
	{
		osd_window_config conf;
		get_resolution(options().resolution(), options().resolution(index), &conf, true);

		// create window ...
		auto win = std::make_unique<sdl_window_info>(machine(), *m_render, index, m_monitor_module->pick_monitor(reinterpret_cast<osd_options &>(options()), index), &conf);
		if (win->window_init())
			return false;

		s_window_list.emplace_back(std::move(win));
	}

	if (m_render->is_interactive())
		SDL_RaiseWindow(dynamic_cast<sdl_window_info &>(*osd_common_t::s_window_list.front()).platform_window());

	return true;
}

//============================================================
//  video_exit
//============================================================

void sdl_osd_interface::video_exit()
{
	window_exit();
}

//============================================================
//  update
//============================================================

void sdl_osd_interface::update(bool skip_redraw)
{
	osd_common_t::update(skip_redraw);

	// if we're not skipping this redraw, update all windows
	if (!skip_redraw)
	{
//      profiler_mark(PROFILER_BLIT);
		for (auto const &window : osd_common_t::window_list())
			window->update();
//      profiler_mark(PROFILER_END);
	}

	// if we're running, disable some parts of the debugger
	if ((machine().debug_flags & DEBUG_FLAG_OSD_ENABLED) != 0)
		debugger_update();
}

//============================================================
//  extract_video_config
//============================================================

void sdl_osd_interface::extract_video_config()
{
	video_config.perftest    = options().video_fps();

	// global options: extract the data
	video_config.windowed      = options().window();
	video_config.prescale      = options().prescale();
	video_config.filter        = options().filter();
	video_config.numscreens    = options().numscreens();
	#ifdef SDLMAME_X11
	video_config.restrictonemonitor = !options().use_all_heads();
	#endif

	// if we are in debug mode, never go full screen
	if (machine().debug_flags & DEBUG_FLAG_OSD_ENABLED)
		video_config.windowed = true;

	video_config.switchres     = options().switch_res();
	video_config.centerh       = options().centerh();
	video_config.centerv       = options().centerv();
	video_config.waitvsync     = options().wait_vsync();
	video_config.syncrefresh   = options().sync_refresh();
	if (!video_config.waitvsync && video_config.syncrefresh)
	{
		osd_printf_warning("-syncrefresh specified without -waitvsync. Reverting to -nosyncrefresh\n");
		video_config.syncrefresh = 0;
	}

	// Warn about potential refresh rate incompatibility when waitvsync is enabled
	if (video_config.waitvsync)
	{
		// Get the primary screen's refresh rate
		double game_refresh = 60.0; // Default fallback
		bool has_screen_device = false;

		// Try to get the game's refresh rate using screen device enumerator
		// This will work in full builds but may not be available in minimal builds
		device_enumerator deviter(machine().root_device());
		const screen_device *primary_screen = nullptr;
		for (device_t &device : deviter)
		{
			if (device.type() == SCREEN)
			{
				primary_screen = dynamic_cast<screen_device *>(&device);
				break; // Get the first screen
			}
		}

		if (primary_screen != nullptr)
		{
			game_refresh = ATTOSECONDS_TO_HZ(primary_screen->refresh_attoseconds());
			has_screen_device = true;
		}

		// Get the actual display refresh rate
		double display_refresh = 60.0; // Default fallback
		SDL_DisplayMode current_mode;
		if (SDL_GetCurrentDisplayMode(0, &current_mode) == 0)
		{
			display_refresh = (double)current_mode.refresh_rate;
		}

		// Only warn if we have actual game refresh rate data
		if (has_screen_device)
		{
			// Improved refresh rate compatibility check
			double refresh_ratio = game_refresh / display_refresh;

			// Check for factor compatibility (e.g., 60Hz game on 120Hz display is fine)
			bool is_factor_compatible = false;
			if (refresh_ratio > 0.99 && refresh_ratio < 1.01) {
				is_factor_compatible = true; // Nearly identical
			} else if (refresh_ratio < 1.0) {
				// Game rate is lower than display rate - check if display is a multiple
				double inverse_ratio = display_refresh / game_refresh;
				if (std::abs(inverse_ratio - std::round(inverse_ratio)) < 0.01) {
					is_factor_compatible = true; // Display is a clean multiple
				}
			} else {
				// Game rate is higher than display rate - check if game is a multiple
				if (std::abs(refresh_ratio - std::round(refresh_ratio)) < 0.01) {
					is_factor_compatible = true; // Game is a clean multiple
				}
			}

			// Check for close enough rates (within 2% tolerance for common rates like 59.94 vs 60.0)
			bool is_close_enough = (refresh_ratio > 0.98 && refresh_ratio < 1.02);

			// Only warn if rates are incompatible
			if (!is_factor_compatible && !is_close_enough)
			{
				osd_printf_warning("Refresh rate mismatch detected: Game runs at %.1f Hz, display at %.1f Hz.\n", game_refresh, display_refresh);
				osd_printf_warning("This can cause reduced performance when -waitvsync is enabled. Consider disabling -waitvsync for better performance.\n");
			}
		}
	}

	if (video_config.prescale < 1 || video_config.prescale > 20)
	{
		osd_printf_warning("Invalid prescale option, reverting to '1'\n");
		video_config.prescale = 1;
	}

	// misc options: sanity check values

	// global options: sanity check values
	if (video_config.numscreens < 1 || video_config.numscreens > MAX_VIDEO_WINDOWS)
	{
		osd_printf_warning("Invalid numscreens value %d; reverting to 1\n", video_config.numscreens);
		video_config.numscreens = 1;
	}
}


//============================================================
//  get_resolution
//============================================================

static void get_resolution(const char *defdata, const char *data, osd_window_config *config, int report_error)
{
	config->width = config->height = config->depth = config->refresh = 0;
	if (strcmp(data, OSDOPTVAL_AUTO) == 0)
	{
		if (strcmp(defdata, OSDOPTVAL_AUTO) == 0)
			return;
		data = defdata;
	}

	if (sscanf(data, "%dx%dx%d", &config->width, &config->height, &config->depth) < 2 && report_error)
		osd_printf_error("Illegal resolution value = %s\n", data);

	const char * at_pos = strchr(data, '@');
	if (at_pos)
		if (sscanf(at_pos + 1, "%d", &config->refresh) < 1 && report_error)
			osd_printf_error("Illegal refresh rate in resolution value = %s\n", data);
}
