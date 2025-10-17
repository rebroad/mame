# VVF (Vector Video Format) Specification v1

## Overview

VVF is a highly optimized binary format for recording vector graphics from arcade games like Star Wars, Asteroids, Tempest, etc. It captures the **native vector commands** (lines, coordinates) along with audio, producing files 10-100x smaller than traditional H.264 video while maintaining **infinite resolution**.

**Key Innovation:** All vector commands draw **from the current beam position** to a new position, mimicking how real vector displays work. This eliminates redundant coordinates and enables natural beam control (intensity=0 = move without drawing).

---

## File Structure

```
[Header: 64 bytes]
[Frame Data: variable size]
[Frame Index: variable size]
```

---

## Header (64 bytes)

```c
struct vvf_header {
    uint32 magic;                 // 0x31465656 ("VVF1")
    uint32 version;               // 1
    uint32 width;                 // Native width (e.g., 640 for Star Wars)
    uint32 height;                // Native height (e.g., 480 for Star Wars)
    uint32 frame_rate;            // Frame rate × 1000 (e.g., 60000 = 60 Hz)
    uint32 total_frames;          // Total frame count
    uint32 audio_sample_rate;     // Audio sample rate (e.g., 48000)
    uint16 audio_channels;        // Audio channels (1 or 2)
    uint16 audio_codec;           // Audio codec: 0=NONE, 1=OPUS, 2=PCM
    uint64 frame_index_offset;    // File offset to frame index
    uint64 audio_data_offset;     // Reserved (0 for interleaved audio)
    uint64 duration_us;           // Total duration in microseconds
    uint8  reserved[6];           // Padding to 64 bytes
};
```

**Native Resolution:**
The coordinate system used by the vector game hardware (not display pixels). For Star Wars, this is 1024×1024 (10-bit coordinates), though the visible area is typically 640×480. The player scales this to any display resolution.

---

## Vector Commands

All commands draw from the **current beam position** `(lastX, lastY)` to a new position. The encoder automatically chooses the smallest command based on distance traveled.

### Command Overview

| Command           | Opcode | Size     | Range         | Purpose                             |
|-------------------|--------|----------|---------------|-------------------------------------|
| **NEW_COLOR**     | 0x50   | 5 bytes  | N/A           | Add new color+intensity to palette  |
| **LINE_TO4**      | 0x60   | 2 bytes  | ±7 pixels     | Tiny movement (very common)         |
| **LINE_TO4_PAL**  | 0x61   | 3 bytes  | ±7 pixels     | Tiny move, switch palette entry     |
| **LINE_TO8**      | 0x62   | 3 bytes  | ±127 pixels   | Medium movement                     |
| **LINE_TO8_PAL**  | 0x63   | 4 bytes  | ±127 pixels   | Medium move, switch palette entry   |
| **LINE_TO12**     | 0x64   | 4 bytes  | ±2047 pixels  | Large movement                      |
| **LINE_TO12_PAL** | 0x65   | 5 bytes  | ±2047 pixels  | Large move, switch palette entry    |
| **END_FRAME**     | 0x00   | 5 bytes  | N/A           | Marks end of frame                  |

---

### NEW_COLOR (0x50) - 5 bytes

```
Byte 0:    Command (0x50)
Byte 1:    R (uint8, 0-255)
Byte 2:    G (uint8, 0-255)
Byte 3:    B (uint8, 0-255)
Byte 4:    Intensity (uint8, 0-255)
```

**Behavior:**
- Adds `(R,G,B,intensity)` pair to palette (max 16 entries)
- Makes this the current color
- Auto-emitted by encoder when a new color+intensity combination is used

**Example:**
First blue laser: `NEW_COLOR(0, 0, 255, 200)` → palette[0]

---

### LINE_TO4 (0x60) - 2 bytes ⭐ **MOST COMMON**

```
Byte 0:    Command (0x60)
Byte 1:    dx:4, dy:4 (4-bit signed deltas, ±7 range)
```

**Behavior:**
- Draws line from `(lastX, lastY)` to `(lastX + dx, lastY + dy)`
- Uses current palette entry
- Updates beam position: `lastX += dx; lastY += dy`

**Use:** Expected to be most common for smooth curves and text strokes

**Packed Format:**
`byte1 = (dx & 0x0F) | ((dy & 0x0F) << 4)`

**Example:**
Move 3 pixels right, 5 pixels up: `0x60 0x53` (dx=3, dy=5)

---

### LINE_TO4_PAL (0x61) - 3 bytes

```
Byte 0:    Command (0x61)
Byte 1:    dx:4, dy:4 (4-bit signed deltas)
Byte 2:    palette_index:4, spare:4
```

**Behavior:**
- Same as LINE_TO4, but switches to different palette entry
- Draws line from `(lastX, lastY)` to `(lastX + dx, lastY + dy)` with new color
- Updates beam position and current palette index

**Use:** For small movements when color/intensity needs to change

---

### LINE_TO8 (0x62) - 3 bytes

```
Byte 0:    Command (0x62)
Byte 1:    dx (int8, ±127 range)
Byte 2:    dy (int8, ±127 range)
```

**Behavior:**
- Draws line from `(lastX, lastY)` to `(lastX + dx, lastY + dy)`
- Uses current palette entry
- Updates beam position

**Use:** Medium jumps (e.g., moving between UI elements, larger text)

---

### LINE_TO8_PAL (0x63) - 4 bytes

```
Byte 0:    Command (0x63)
Byte 1:    dx (int8)
Byte 2:    dy (int8)
Byte 3:    palette_index:4, spare:4
```

**Behavior:**
- Same as LINE_TO8, but switches palette entry

**Use:** Medium jumps with color change

---

### LINE_TO12 (0x64) - 4 bytes

```
Byte 0:    Command (0x64)
Byte 1-3:  dx:12, dy:12 (24-bit packed, ±2047 range)
```

**Behavior:**
- Draws line from `(lastX, lastY)` to `(lastX + dx, lastY + dy)`
- Uses current palette entry
- Updates beam position

**Packed Format:**
`packed = (dx & 0x0FFF) | ((dy & 0x0FFF) << 12)`
`byte1 = packed & 0xFF`
`byte2 = (packed >> 8) & 0xFF`
`byte3 = (packed >> 16) & 0xFF`

**Use:** Large jumps across the screen (rare)

---

### LINE_TO12_PAL (0x65) - 5 bytes

```
Byte 0:    Command (0x65)
Byte 1-3:  dx:12, dy:12 (24-bit packed)
Byte 4:    palette_index:4, spare:4
```

**Behavior:**
- Same as LINE_TO12, but switches palette entry

**Use:** Large jumps with color change (very rare)

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

## Beam Control (Invisible Movement)

To move the beam **without drawing** (e.g., for disconnected line segments), simply use intensity=0 in any `NEW_COLOR` command:

**Example:**
```
NEW_COLOR(0, 0, 0, 0)      // Move beam invisibly
LINE_TO8(100, 50)          // Beam moves to (lastX+100, lastY+50) without drawing
NEW_COLOR(255, 255, 0, 200) // Switch to yellow
LINE_TO4(5, 3)             // Draw yellow line
```

---

## Palette System

- **Max 16 entries** (4-bit index)
- Each entry stores: `(R, G, B, intensity)`
- Auto-populated by encoder via `NEW_COLOR` commands
- `LINE_TO*_PAL` commands switch between palette entries
- `LINE_TO*` commands use current palette entry

**Star Wars Typical Palette:**
```
0: Red laser (255, 0, 0, 200)
1: Blue laser (0, 0, 255, 200)
2: Yellow text (255, 255, 0, 180)
3: White outline (255, 255, 255, 150)
... (up to 16 total)
```

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

**Status:** Not yet implemented (reserved for future)

Planned:
- **Opus codec** (web-native, high quality, low bitrate)
- Interleaved with video frames (or separate section via `audio_data_offset`)

---

## Implementation Notes

### Encoder Strategy

The encoder automatically chooses the most compact command:

```python
dx = abs(x - lastX)
dy = abs(y - lastY)

if color+intensity not in palette:
    emit NEW_COLOR(R, G, B, intensity)

if dx <= 7 and dy <= 7:
    emit LINE_TO4 or LINE_TO4_PAL
elif dx <= 127 and dy <= 127:
    emit LINE_TO8 or LINE_TO8_PAL
elif dx <= 2047 and dy <= 2047:
    emit LINE_TO12 or LINE_TO12_PAL
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

- **v1.0 (2025-10-17):** Initial release with LINE_TO4/8/12 commands and palette system

---

**Magic Number:** `VVF1` (0x31465656)
**Endianness:** Little-endian
**Character Encoding:** N/A (binary format)
**MIME Type:** `application/vnd.vvf` (proposed)
**File Extension:** `.vvf`
