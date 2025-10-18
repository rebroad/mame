# How to Play VVF Files

## Quick Start

1. **Open the player:**
   ```bash
   # Just open vvf_player.html in any modern web browser
   firefox vvf_player.html
   # or
   chromium vvf_player.html
   # or double-click it in your file manager
   ```

2. **Load a VVF file:**
   - Click the **"📂 Open VVF File"** button
   - Select your `.vvf` file (e.g., `starwars.vvf`)
   - The player will parse and display file info

3. **Play:**
   - Click **"▶ Play"** button
   - Watch the vector graphics render in real-time!
   - Audio will play automatically (if present in the file)

## Controls

- **▶ Play/⏸ Pause:** Start/pause playback
- **⏹ Stop:** Stop and reset to beginning
- **Timeline:** Click to seek to a specific time
- **Resolution:** Choose display scaling (1x-8x native)
- **Glow Effect:** Adjust vector glow intensity (0-3)
- **Brightness:** Adjust overall brightness (0.5-2.0)

## Recording a VVF File in MAME

```bash
# Start MAME with VVF recording enabled
./mame starwars -record_vvf starwars.vvf

# Play the game normally
# Press F12 or Escape to stop recording

# The VVF file will be saved with audio
```

## Browser Requirements

- **Modern browser** (Chrome 90+, Firefox 88+, Safari 14+)
- **Web Audio API** support (for audio playback)
- **Canvas 2D** support (for vector rendering)
- **File API** support (for loading files)

All modern browsers support these features!

## Tips

- **Higher resolution = sharper vectors** but uses more GPU
- **Glow effect = 1.0** is authentic CRT look
- **Glow effect = 0** is crisp, no blur
- **4x resolution** is recommended for modern displays
- The player maintains the **original aspect ratio** automatically

## Troubleshooting

**"Invalid VVF file!" error:**
- Make sure file starts with "VVF1" magic bytes
- Check file wasn't corrupted during transfer
- Verify it's a valid VVF file (not a video file)

**No audio:**
- Check browser console for errors
- Some browsers block audio until user interaction
- Click Play button first, then audio will work

**Choppy playback:**
- Reduce resolution (try 2x instead of 4x)
- Reduce glow effect
- Close other browser tabs
- Try a different browser (Chrome is usually fastest)

## File Size Examples

Typical VVF file sizes (with audio):
- **Star Wars** (1 minute): ~300-500 KB
- **Asteroids** (1 minute): ~200-400 KB
- **Tempest** (1 minute): ~400-600 KB

Compare to H.264 video:
- **1080p H.264** (1 minute): ~30-50 MB
- **VVF is 100x smaller!** 🎉

