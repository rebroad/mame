-- license:BSD-3-Clause
-- copyright-holders:MAMEdev Team

---------------------------------------------------------------------------
--
--   ffmpeg.lua
--
--   Rules for FFmpeg video encoding support
--
---------------------------------------------------------------------------

function ffmpeg_support()
	if _OPTIONS["NO_USE_FFMPEG"]=="1" then
		return
	end

	-- Try to auto-detect FFmpeg using pkg-config
	local ffmpeg_cflags = backtick(pkgconfigcmd() .. " --cflags libavcodec libavformat libavutil libswscale libswresample 2>/dev/null")
	local ffmpeg_libs = backtick(pkgconfigcmd() .. " --libs libavcodec libavformat libavutil libswscale libswresample 2>/dev/null")

	if ffmpeg_cflags ~= nil and ffmpeg_cflags ~= "" then
		-- FFmpeg detected via pkg-config
		print("FFmpeg detected! Enabling compressed video recording")
		defines {
			"MAME_FFMPEG",
		}
		buildoptions {
			ffmpeg_cflags,
		}
		addlibfromstring(ffmpeg_libs)
		addoptionsfromstring(ffmpeg_libs)
	elseif _OPTIONS["FFMPEG_LIBS"] ~= nil then
		-- Manual FFmpeg configuration
		print("FFmpeg manually configured")
		defines {
			"MAME_FFMPEG",
		}
		if _OPTIONS["FFMPEG_CFLAGS"] ~= nil then
			buildoptions {
				_OPTIONS["FFMPEG_CFLAGS"],
			}
		end
		addlibfromstring(_OPTIONS["FFMPEG_LIBS"])
	else
		print("FFmpeg not found - compressed video recording will not be available")
	end
end

