# 📹 FFmpeg Video Recording in MAME

MAME now includes **auto-detected FFmpeg support** for compressed video recording!

## What Changed?

### ✨ Just Type `make`!

```bash
# Install FFmpeg development libraries
sudo apt-get install libavcodec-dev libavformat-dev libavutil-dev \
                     libswscale-dev libswresample-dev

# Build MAME (FFmpeg auto-detected!)
make
```

**That's it!** No special flags needed. The build system will:
1. Use `pkg-config` to detect FFmpeg
2. Automatically enable compressed video recording if found
3. Fall back gracefully if FFmpeg isn't available

### 📼 Compressed Video is Now the DEFAULT!

When you record video with `-aviwrite`, you get:
- **H.264 compressed video** by default (not raw AVI)
- **Small file sizes** (10-50 MB vs 2-5 GB!)
- **High quality** with configurable presets
- **Multiple formats**: MP4, MKV, AVI, WebM

```bash
# Record compressed video (DEFAULT!)
mame pacman -aviwrite gameplay.mp4

# Old raw AVI (if you really need it)
mame pacman -aviwrite raw.avi -aviwrite_format raw
```

## Why This Matters

1. **"Just works" out of the box** - Install FFmpeg libs, type `make`, done!
2. **Sane defaults** - Compressed video instead of massive raw files
3. **Same simplicity as README.md** - No complex build instructions
4. **Optional but recommended** - Works without FFmpeg, better with it

## Quick Start

```bash
# 1. Install FFmpeg (once)
sudo apt-get install libavcodec-dev libavformat-dev libavutil-dev \
                     libswscale-dev libswresample-dev

# 2. Build MAME with FFmpeg detection
make REGENIE=1  # Force regeneration to detect FFmpeg
# You should see: "FFmpeg detected! Enabling compressed video recording"

# 3. Record compressed video
mame galaga -aviwrite video.mp4
```

**Note:** Use `REGENIE=1` on first build or after installing FFmpeg to trigger detection. Regular `make` after that works fine.

## Full Documentation

See [FFMPEG_RECORDING.md](FFMPEG_RECORDING.md) for complete details on:
- Quality presets (ultrafast to veryslow)
- CRF settings for quality control
- Container formats (MP4, MKV, etc.)
- Build options and troubleshooting

## Build Options

- **Auto-detect** (default): `make`
- **Disable FFmpeg**: `make NO_USE_FFMPEG=1`
- **Manual config**: `make FFMPEG_LIBS="..." FFMPEG_CFLAGS="..."`

---

**Bottom line:** Install FFmpeg libraries, type `make`, and enjoy tiny compressed video files instead of gigabyte-sized raw AVIs! 🎉

