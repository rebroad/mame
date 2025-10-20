# VVF (Vector Video Format) Specification v1

## Overview

VVF is a highly optimized binary format for recording vector graphics from arcade games like Star Wars, Asteroids, Tempest, etc. It captures the **native vector commands** (lines, coordinates) along with audio, producing files 10-100x smaller than traditional H.264 video while maintaining **infinite resolution**.

**Key Innovation:** All vector commands draw **from the current beam position** to a new position, mimicking how real vector displays work. This eliminates redundant coordinates and enables natural beam control (intensity=0 = move without drawing).

**Technical Features:** 14-bit coordinate space (±8191 range) with optimized 3-bit command encoding, leaving 4 bits for coordinate extensions. Commands cover ranges up to ±31 (LINE_TO6), ±511 (LINE_TO10), and 0-16383 (LINE_TO14).

---

## File Structure

```
[Header: 60 bytes]
[Frame Data: variable size]
[Frame Index: variable size]
[Audio Data: variable size, Opus compressed]
```

---

## Header (60 bytes)

**Important:** The header is 60 bytes due to struct padding/alignment, not 56 bytes! Frame data starts at offset 60.

```c
struct vvf_header {
    uint32 magic;                 // 0x31465656 ("VVF1")
    uint32 version;               // 1
    uint16 native_width;          // Original game width in pixels (e.g., 252 for Star Wars)
    uint16 native_height;         // Original game height in pixels (e.g., 292 for Star Wars)
    uint16 vvf_width;             // VVF coordinate range used (e.g., 16383)
    uint16 vvf_height;            // VVF coordinate range used (e.g., 16383)
    uint32 frame_rate;            // Frame rate × 1000 (e.g., 60000 = 60 Hz)
    uint32 total_frames;          // Total frames (max: 4.3B = 828 days @ 60fps)
    uint32 audio_sample_rate;     // Audio sample rate (e.g., 48000)
    uint8  audio_channels;        // Audio channels (1 or 2)
    uint8  audio_codec;           // Audio codec: 0=NONE, 1=OPUS, 2=PCM
    uint16 reserved1;             // Reserved
    uint64 frame_index_offset;    // File offset to frame index
    uint64 audio_data_offset;     // File offset to audio data (0 if none)
    uint64 duration_us;           // Total duration in microseconds
    uint32 compression_type;      // 0=None, 1=zlib, 2=gzip, 3=bzip2
};
```

**Coordinate System & Aspect Ratio:**

VVF uses **adaptive precision scaling** to maximize the 14-bit coordinate range (0-16383):
- **native_width/native_height:** Original game dimensions in logical pixels (defines aspect ratio)
- **vvf_width/vvf_height:** Coordinate range used in VVF file (maximizes 14-bit precision)
- **Display aspect ratio:** `native_width / native_height`

**Example (Star Wars):**
- MAME internal coords: X=0..16,515,200, Y=0..19,179,200 (16.16 fixed-point)
- Native dimensions: 252×292 pixels (aspect 0.86)
- VVF coords: 16383×16383 (uses full 14-bit range = 16384 values per axis)
- Player: Maps VVF 16383×16383 → native 252×292 → display, maintaining 0.86 aspect

**Why two dimensions?**
- **native_width/height:** Preserves aspect ratio (252/292 = 0.86)
- **vvf_width/vvf_height:** Shows actual coordinate range used in file (typically 16383×16383)
- Player scales: `displayX = (vvfX / vvf_width) × native_width × displayScale`

---

## Vector Commands

All commands draw from the **current beam position** `(lastX, lastY)` to a new position. The encoder automatically chooses the smallest command based on distance traveled.

**Version 3 Bit Packing:** Commands use 3 bits for opcode + 4 bits for coordinate extensions + 1 spare bit.

### Command Overview

| Command           | Opcode | Size     | Range          | Purpose                             |
|-------------------|--------|----------|----------------|-------------------------------------|
| **END_FRAME**     | 0x00   | 5 bytes  | N/A            | Marks end of frame                  |
| **NEW_COLOR**     | 0x08   | 5 bytes  | N/A            | Add new color+intensity to palette  |
| **LINE_TO6**      | 0x10   | 2 bytes  | ±31 pixels     | Small movement (6-bit)              |
| **LINE_TO6_PAL**  | 0x18   | 3 bytes  | ±31 pixels     | Small move, switch palette (8-bit)  |
| **LINE_TO10**     | 0x20   | 3 bytes  | ±511 pixels    | Medium movement (10-bit)            |
| **LINE_TO10_PAL** | 0x28   | 4 bytes  | ±511 pixels    | Medium move, switch palette (8-bit) |
| **LINE_TO14**     | 0x30   | 4 bytes  | 0-16383 (abs)  | Absolute position (14-bit)          |
| **LINE_TO14_PAL** | 0x38   | 5 bytes  | 0-16383 (abs)  | Absolute position + palette switch  |

---

### END_FRAME (0x00) - 5 bytes

```
Byte 0:    Command (0x00)
Byte 1-4:  timestamp_ms (uint32, milliseconds from recording start)
```

**Behavior:**
- Marks frame boundary
- Provides timestamp for synchronization
- Beam position resets to (0, 0) for next frame

---

### NEW_COLOR (0x08) - 5 bytes

```
Byte 0:    Command (0x08)
Byte 1:    R (uint8, 0-255)
Byte 2:    G (uint8, 0-255)
Byte 3:    B (uint8, 0-255)
Byte 4:    Intensity (uint8, 0-255)
```

**Behavior:**
- Adds `(R,G,B,intensity)` pair to palette (max 256 entries)
- Makes this the current color
- Auto-emitted by encoder when a new color+intensity combination is used

**Example:**
First blue laser: `NEW_COLOR(0, 0, 255, 200)` → palette[0]

---

### LINE_TO6 (0x10) - 2 bytes

```
Byte 0:    [cmd:3][dx_hi:2][dy_hi:2][spare:1] (3-bit opcode + 4 bits coordinates)
Byte 1:    [dx_lo:4][dy_lo:4] (low 4 bits of each delta)
```

**Behavior:**
- Draws line from `(lastX, lastY)` to `(lastX + dx, lastY + dy)`
- Uses current palette entry
- Updates beam position: `lastX += dx; lastY += dy`
- **Range:** ±31 pixels (6-bit signed deltas)

**Use:** Expected to be most common for smooth curves and text strokes

**Bit Packing:**
```
dx = (dx_hi << 4) | dx_lo  // 6-bit signed value
dy = (dy_hi << 4) | dy_lo  // 6-bit signed value
cmd_byte = 0x10 | (dx_hi << 5) | (dy_hi << 3)
```

**Example:**
Move 17 pixels right, 20 pixels up: `0x32 0x14` (dx=17, dy=20)

---

### LINE_TO6_PAL (0x18) - 3 bytes

```
Byte 0:    [cmd:3][dx_hi:2][dy_hi:2][spare:1]
Byte 1:    [dx_lo:4][dy_lo:4]
Byte 2:    palette_index (uint8, 0-255)
```

**Behavior:**
- Same as LINE_TO6, but switches to different palette entry
- Draws line from `(lastX, lastY)` to `(lastX + dx, lastY + dy)` with new color
- Updates beam position and current palette index

**Use:** For small movements when color/intensity needs to change

---

### LINE_TO10 (0x20) - 3 bytes

```
Byte 0:    [cmd:3][dx_hi:2][dy_hi:2][spare:1]
Byte 1:    dx_lo (uint8, low 8 bits of dx)
Byte 2:    dy_lo (uint8, low 8 bits of dy)
```

**Behavior:**
- Draws line from `(lastX, lastY)` to `(lastX + dx, lastY + dy)`
- Uses current palette entry
- Updates beam position
- **Range:** ±511 pixels (10-bit signed deltas)

**Bit Packing:**
```
dx = (dx_hi << 8) | dx_lo  // 10-bit signed value
dy = (dy_hi << 8) | dy_lo  // 10-bit signed value
cmd_byte = 0x20 | (dx_hi << 5) | (dy_hi << 3)
```

**Use:** Medium jumps (e.g., moving between UI elements, larger text)

---

### LINE_TO10_PAL (0x28) - 4 bytes

```
Byte 0:    [cmd:3][dx_hi:2][dy_hi:2][spare:1]
Byte 1:    dx_lo (uint8)
Byte 2:    dy_lo (uint8)
Byte 3:    palette_index (uint8, 0-255)
```

**Behavior:**
- Same as LINE_TO10, but switches palette entry

**Use:** Medium jumps with color change

---

### LINE_TO14 (0x30) - 4 bytes

```
Byte 0:    [cmd:3][x_hi:2][y_hi:2][spare:1]
Byte 1:    x_mid (uint8, bits 4-11 of x)
Byte 2:    y_mid (uint8, bits 4-11 of y)
Byte 3:    [x_lo:4][y_lo:4] (bits 0-3 of x and y)
```

**Behavior:**
- Draws line from `(lastX, lastY)` to `(x, y)` using **absolute coordinates**
- Uses current palette entry
- Updates beam position to `(x, y)`
- **Note:** Unlike LINE_TO6/10 which use deltas, LINE_TO14 uses absolute positions!

**Bit Packing:**
```
x = (x_hi << 12) | (x_mid << 4) | x_lo  // 14-bit unsigned (0-16383)
y = (y_hi << 12) | (y_mid << 4) | y_lo  // 14-bit unsigned (0-16383)
cmd_byte = 0x30 | (x_hi << 5) | (y_hi << 3)
```

**Coordinate Range:** 0-16383 (14-bit unsigned = 16384 values per axis)

**Use:** When target position fits in 0-16383 range (most common for high-precision mode)

---

### LINE_TO14_PAL (0x38) - 5 bytes

```
Byte 0:    [cmd:3][x_hi:2][y_hi:2][spare:1]
Byte 1:    x_mid (uint8)
Byte 2:    y_mid (uint8)
Byte 3:    [x_lo:4][y_lo:4]
Byte 4:    palette_index (uint8, 0-255)
```

**Behavior:**
- Same as LINE_TO14, but switches palette entry before drawing
- Uses **absolute coordinates** (not deltas)

**Use:** High-precision movement with color change

---

## Beam Control (Invisible Movement)

To move the beam **without drawing** (e.g., for disconnected line segments), simply use intensity=0 in any `NEW_COLOR` command:

**Example:**
```
NEW_COLOR(0, 0, 0, 0)      // Move beam invisibly
LINE_TO10(100, 50)         // Beam moves to (lastX+100, lastY+50) without drawing
NEW_COLOR(255, 255, 0, 200) // Switch to yellow
LINE_TO6(5, 3)             // Draw yellow line
```

---

## Palette System

- **Max 256 entries** (8-bit index)
- Each entry stores: `(R, G, B, intensity)` - complete color+intensity pair
- Auto-populated by encoder via `NEW_COLOR` commands
- `LINE_TO*_PAL` commands switch between palette entries
- `LINE_TO*` commands use current palette entry

**Example Star Wars Palette:**
```
0: Red laser high (255, 0, 0, 200)
1: Red laser med (255, 0, 0, 150)
2: Red laser low (255, 0, 0, 100)
3: Blue laser high (0, 0, 255, 200)
4: Blue laser med (0, 0, 255, 150)
5: Yellow text (255, 255, 0, 180)
6: White outline (255, 255, 255, 150)
... (up to 256 total combinations)
```

**Why 256 entries?**
Vector games can use many color+intensity combinations. Star Wars uses 3-bit color (8 colors) × 3-bit intensity (8 levels) = 64 possible combinations. Having 256 slots ensures no game runs out of palette space.

---

## Frame Index

For seeking support, the encoder writes a frame index at end of file:

```
uint32 count;                    // Number of index entries
struct {
    uint32 frame_number;
    uint64 file_offset;
} entries[count];
```

Entries are written every Nth frame (typically every 30th frame) to enable fast seeking.

---

## Audio Data

**Status:** ✅ **Implemented** (Opus codec via FFmpeg)

### Audio Format

VVF uses **Opus audio compression** for high-quality, compact audio:
- **Codec:** Opus (via FFmpeg libopus)
- **Bitrate:** 64 kbps (excellent quality for game audio)
- **Sample format:** Float32 (internally)
- **Frame size:** 960 samples @ 48kHz (~20ms per frame)

### Audio Storage

Audio is stored in a **separate section** at the end of the file:
1. Video frames (from byte 64 to `frame_index_offset`)
2. Frame index (from `frame_index_offset` to `audio_data_offset`)
3. **Opus audio data** (from `audio_data_offset` to EOF)

### Opus Packet Format

```
[Packet 1 Size: 4 bytes][Packet 1 Data: N bytes]
[Packet 2 Size: 4 bytes][Packet 2 Data: N bytes]
...
```

Each Opus packet is prefixed with its size (uint32_t, little-endian) followed by the raw Opus data.

### HTML5 Playback

Opus is **natively supported** by the Web Audio API:
```javascript
const audioContext = new AudioContext();
audioContext.decodeAudioData(opusBuffer).then(audioBuffer => {
    // Play decoded audio
});
```

### Fallback (No FFmpeg)

If MAME is compiled without FFmpeg support:
- VVF files are created **without audio**
- `audio_codec` field in header = `0` (NONE)
- `audio_data_offset` field = `0`

---

## Implementation Notes

### Encoder Strategy

The encoder automatically chooses the most compact command:

```python
dx = abs(x - lastX)
dy = abs(y - lastY)

if color+intensity not in palette:
    emit NEW_COLOR(R, G, B, intensity)

if dx <= 31 and dy <= 31:
    emit LINE_TO6 or LINE_TO6_PAL
elif dx <= 511 and dy <= 511:
    emit LINE_TO10 or LINE_TO10_PAL
elif x >= 0 and x <= 16383 and y >= 0 and y <= 16383:
    emit LINE_TO14 or LINE_TO14_PAL  # Uses absolute coordinates!
```

### Player/Decoder Strategy

```python
lastX = 0
lastY = 0
currentColor = (255, 255, 255)
currentIntensity = 255
palette = []

for each command:
    if NEW_COLOR:
        palette.append((R, G, B, intensity))
        currentColor = (R, G, B)
        currentIntensity = intensity
    elif LINE_TO*:
        calculate x2, y2 from deltas
        if *_PAL variant:
            currentColor, currentIntensity = palette[index]
        draw_line(lastX, lastY, x2, y2, currentColor, currentIntensity)
        lastX = x2
        lastY = y2
```

---

## Statistics / Performance

**Expected Performance:**

VVF encoder automatically tracks command usage statistics and reports them after recording. The actual distribution depends on the game's graphics (smooth curves vs. sharp movements, color changes, etc.).

**Comparison to H.264 Video:**

For 640×480 @ 60fps video:
- H.264: ~5 Mbps = **37 MB/minute**
- VVF: Varies by game, typically **5-15 MB/minute** uncompressed
- VVF advantage: **Infinite resolution scaling** (not limited to 640×480!)

Use `-vvfwrite` to record and view actual statistics for your game.

---

## Version History

- **v1.0 (2025-10-20):** Initial release with 14-bit coordinates, optimized 3-bit command encoding, LINE_TO6/10/14 commands with ±31/±511/16383 ranges, 256-entry palette, Opus/PCM audio support, compression support

---

**Magic Number:** `VVF1` (0x31465656)
**Endianness:** Little-endian
**Character Encoding:** N/A (binary format)
**MIME Type:** `application/vnd.vvf` (proposed)
**File Extension:** `.vvf`
