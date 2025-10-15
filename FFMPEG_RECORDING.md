# FFmpeg Video Recording Support for MAME

This document describes the FFmpeg-based compressed video recording feature added to MAME.

## Overview

MAME now supports compressed video recording using FFmpeg libraries (H.264/AAC encoding to MP4/MKV containers), in addition to the existing raw AVI and MNG formats. This dramatically reduces file sizes compared to raw AVI recording.

## Features

- **H.264 video encoding** with configurable quality settings
- **AAC audio encoding** (when enabled)
- **Multiple container formats**: MP4, MKV, AVI, etc.
- **Quality presets**: ultrafast, superfast, veryfast, faster, fast, medium, slow, slower, veryslow
- **CRF (Constant Rate Factor) control**: 0-51, where lower values mean better quality

## Building with FFmpeg Support

**🎉 FFmpeg is AUTO-DETECTED!** MAME's build system will automatically detect and enable FFmpeg if the libraries are available.

1. **Install FFmpeg development libraries**:

   On Ubuntu/Debian:
   ```bash
   sudo apt-get install libavcodec-dev libavformat-dev libavutil-dev libswscale-dev libswresample-dev
   ```

   On Fedora/RHEL:
   ```bash
   sudo dnf install ffmpeg-devel
   ```

   On macOS (with Homebrew):
   ```bash
   brew install ffmpeg
   ```

2. **Build MAME** (FFmpeg will be automatically detected):

   ```bash
   make
   ```

   That's it! The build system uses `pkg-config` to find FFmpeg and automatically enables it.

3. **Manual control** (optional):

   Disable FFmpeg even if installed:
   ```bash
   make NO_USE_FFMPEG=1
   ```

   Manual FFmpeg configuration (if auto-detection fails):
   ```bash
   make FFMPEG_LIBS="-lavcodec -lavformat -lavutil -lswscale -lswresample"
   ```

## Usage

### Command Line Options

**Primary Recording Option:**
- **`-aviwrite <filename>`** - Start video recording to the specified file
  - **Default behavior: Uses FFmpeg compressed video (H.264/MP4)**
  - Example: `-aviwrite gameplay.mp4`
  - Use "auto" to auto-generate filename based on game name
  - This is the RECOMMENDED way to record video!

**Format Control:**
- **`-aviwrite_format <format>`** - Choose video format (default: compressed)
  - `compressed` (default) - Uses FFmpeg H.264 encoding (RECOMMENDED)
  - `raw` - Uses uncompressed AVI (huge files, for compatibility only)
  - Example: `-aviwrite video.avi -aviwrite_format raw`

**FFmpeg Quality Options:**
- **`-ffmpeg_format <format>`** - Set container format when using compressed mode (default: mp4)
  - Supported: mp4, mkv, avi, webm, etc.
  - Example: `-ffmpeg_format mkv`

- **`-ffmpeg_preset <preset>`** - Set encoding speed/quality preset (default: medium)
  - Options: ultrafast, superfast, veryfast, faster, fast, medium, slow, slower, veryslow
  - Faster presets = larger files, quicker encoding
  - Slower presets = smaller files, better quality, slower encoding
  - Example: `-ffmpeg_preset slow`

- **`-ffmpeg_crf <value>`** - Set Constant Rate Factor (default: 23)
  - Range: 0-51
  - Lower values = better quality, larger files
  - Recommended: 18-28
  - Example: `-ffmpeg_crf 18` for high quality

### Examples

1. **Record gameplay with default settings** (compressed H.264 MP4, medium quality):
   ```bash
   mame pacman -aviwrite auto
   ```
   ✨ **This is now the default!** No more huge raw AVI files!

2. **High-quality recording** for archival:
   ```bash
   mame galaga -aviwrite galaga_hq.mp4 -ffmpeg_preset veryslow -ffmpeg_crf 18
   ```

3. **Fast recording** for streaming/quick capture:
   ```bash
   mame sf2 -aviwrite sf2_fast.mp4 -ffmpeg_preset ultrafast -ffmpeg_crf 24
   ```

4. **MKV container with custom quality**:
   ```bash
   mame dkong -aviwrite dkong.mkv -ffmpeg_format mkv -ffmpeg_preset slow -ffmpeg_crf 20
   ```

5. **Old-style raw AVI** (if you really need it - HUGE files!):
   ```bash
   mame pacman -aviwrite raw_video.avi -aviwrite_format raw
   ```

## Quality vs File Size Guide

| Preset      | CRF | Use Case                    | Encoding Speed | File Size |
|-------------|-----|-----------------------------|----------------|-----------|
| ultrafast   | 24  | Real-time streaming         | Fastest        | Largest   |
| fast        | 23  | Quick captures              | Fast           | Large     |
| medium      | 23  | General use (default)       | Moderate       | Medium    |
| slow        | 20  | High quality recordings     | Slow           | Small     |
| veryslow    | 18  | Archival/best quality       | Slowest        | Smallest  |

## Technical Details

- **Video Codec**: H.264 (High Profile)
- **Audio Codec**: AAC (96 kbps)
- **Pixel Format**: YUV420P
- **Frame Rate**: Matches emulated system frame rate
- **Resolution**: Matches MAME's snapshot resolution settings

## Comparison with Existing Formats

| Format                  | Command                                   | Compression | Quality | File Size | Use Case                     |
|-------------------------|-------------------------------------------|-------------|---------|-----------|------------------------------|
| **Compressed (default)**| `-aviwrite file.mp4`                      | H.264       | High    | Small     | **Everything! (Recommended)**|
| Raw AVI                 | `-aviwrite file.avi -aviwrite_format raw` | None        | Perfect | Huge      | Post-processing only         |
| MNG                     | `-mngwrite file.mng`                      | PNG-based   | Lossless| Large     | Pixel-perfect captures       |

**🎯 Note:** When you use `-aviwrite`, you now get compressed video by default.

## Implementation Credits

This implementation is based on xscreensaver's ffmpeg-out module, adapted for MAME's recording system.

## Troubleshooting

**Error: "FFmpeg libraries not found"**
- Make sure FFmpeg development libraries are installed
- Verify MAME was compiled with `-DMAME_FFMPEG` flag

**Playback issues:**
- Try different CRF values (18-28 recommended)
- Use slower presets for better compatibility
- MP4 format has best player compatibility

**Performance issues during recording:**
- Use faster presets (fast, veryfast, ultrafast)
- Reduce snapshot resolution with `-snapsize`
- Disable audio recording if not needed

## Future Enhancements

Potential improvements for future versions:
- Additional codec support (VP9, AV1, HEVC)
- Audio resampling and mixing improvements
- Real-time encoding progress display
- Bitrate control options
- Hardware encoding support (NVENC, VAAPI, etc.)

