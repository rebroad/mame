# VVF Player Debug Guide

## Quick Debug

```bash
# Make sure you have puppeteer installed
cd ~/src/mame
npm install puppeteer  # Only needed once

# Debug the player (manual file selection)
./debug_vvf_player.js

# Auto-load a VVF file
./debug_vvf_player.js starwars.vvf
./debug_vvf_player.js /path/to/recording.vvf
```

## What the Debug Script Does

✅ **Launches Chrome with DevTools-like logging**
- All console.log/error/warn messages captured
- Full error stack traces with line numbers
- HTTP status codes for failed requests
- Page errors with detailed information

✅ **Auto-loads VVF files (optional)**
- Pass VVF filename as argument
- Automatically parses and loads the file
- Shows header info (dimensions, frame count, etc.)

✅ **Emoji-coded output**
- 📝 Regular logs
- ℹ️  Info messages
- ⚠️  Warnings
- ❌ Errors
- 🔥 Critical page errors

## Example Output

```
🎮 VVF Player Debug Tool
========================

📁 VVF File: /home/user/starwars.vvf
📄 Loading player: /home/user/src/mame/vvf_player.html

✅ Player loaded successfully!

🎬 Auto-loading VVF file...

📝 [12:34:56.789] VVF Header: {version: 1, nativeWidth: 252, ...}
📝 [12:34:56.790] Aspect ratio: 0.86
✅ VVF parsed successfully!
  Frames: 600
  Duration: 10.00s
  Frame Rate: 60 Hz
  Native Size: 252×292
  VVF Size: 4095×4095

👁️  Monitoring player (press Ctrl+C to exit)...
```

## If There's an Error

You'll see something like:

```
🔥 PAGE ERROR DETECTED:

  Message: Cannot read properties of undefined (reading 'length')
  Name: TypeError

  Stack Trace:
    TypeError: Cannot read properties of undefined
    at parseVVF (file:///home/user/src/mame/vvf_player.html:330:35)
    at HTMLInputElement.<anonymous> (file:///home/user/src/mame/vvf_player.html:275:28)

  ⚡ Error at line: 330
```

This shows:
- **What went wrong:** The error message
- **Where:** Line number in vvf_player.html
- **How:** Full stack trace

## Common Issues

### Play Button Disabled After Loading

**Symptoms:**
- File loads without error
- Play button stays grayed out

**Debug:**
```bash
./debug_vvf_player.js your_file.vvf
```

Look for:
- ❌ Errors during `parseVVF()`
- Missing `vvfData` object
- Failed conditions in file parser

### Parser Errors

**Symptoms:**
- "Invalid VVF file!" message
- Console errors about buffer/offset

**Common causes:**
- VVF header format mismatch
- File corrupted or incomplete
- Wrong endianness (should be little-endian)

### Rendering Issues

**Symptoms:**
- Play button works but nothing renders
- Blank canvas

**Debug:**
Look for errors in:
- `setupCanvas()` function
- `renderFrame()` function
- WebGL/Canvas context creation

## Manual Browser Debug

If you prefer using browser dev tools directly:

1. Open `vvf_player.html` in Chrome
2. Press F12 to open DevTools
3. Go to Console tab
4. Load your VVF file
5. Look for red error messages

The debug script just makes this easier by:
- Capturing everything automatically
- Adding timestamps
- Formatting output nicely
- Auto-loading files for quick iteration

## Tips

🔍 **Quick iteration:**
```bash
# Edit vvf_player.html, then:
./debug_vvf_player.js test.vvf
# See results immediately
```

🔍 **Compare working vs broken:**
```bash
# Test with known-good file
./debug_vvf_player.js working.vvf

# Test with new file
./debug_vvf_player.js new_recording.vvf
```

🔍 **Check specific error line:**
```bash
# Debug shows: Error at line 412
head -n 420 vvf_player.html | tail -n 20
# See the code around that line
```

