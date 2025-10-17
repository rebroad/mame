# VVF - MAME Vector Video Format Specification

## Overview
Binary container format for recording vector-based arcade games with synchronized audio.

## File Structure

```
[HEADER]
[AUDIO_HEADER]
[FRAME_INDEX]
[FRAME_DATA...]
[AUDIO_DATA...]
```

## Header (64 bytes)

```
Offset | Size | Type    | Description
-------|------|---------|----------------------------------
0      | 4    | char[4] | Magic: "VVF1"
4      | 4    | uint32  | Version (1)
8      | 4    | uint32  | Width (native vector coordinate range, e.g. 640)
12     | 4    | uint32  | Height (native vector coordinate range, e.g. 480)
16     | 4    | uint32  | Frame rate (Hz * 1000, e.g. 60000 = 60 Hz)
20     | 4    | uint32  | Total frames
24     | 4    | uint32  | Audio sample rate (e.g. 48000)
28     | 2    | uint16  | Audio channels (1 or 2)
32     | 2    | uint16  | Audio codec (0=none, 1=Opus)
34     | 8    | uint64  | Frame index offset
42     | 8    | uint64  | Audio data offset (0=interleaved with frames, >0=separate audio section)
50     | 8    | uint64  | Total duration (microseconds)
58     | 6    | -       | Reserved (padding)
```

## Vector Command Format

Each frame contains a sequence of vector commands:

```
Command Byte Layout:
Bit 7-4: Command type
Bit 3-0: Flags

**Core Philosophy:** Vector displays draw from current beam position to a new position!

Primary Commands:
0x60 = DELTA_LINE (3 bytes, small movements ±7 pixels)
0x61 = LINE_TO (5 bytes, large movements with current color)
0x62 = LINE_TO_RGB (9 bytes, large movements with new color)
0x00 = END_FRAME (5 bytes)

Auxiliary Commands:
0x50 = PALETTE_COLOR (2 bytes, change color without drawing)

Deprecated (legacy support):
0x10 = LINE, 0x20 = POINT, 0x30 = RGB_COLOR, 0x40 = INTENSITY, 0x70 = DELTA_POINT
```

### DELTA_LINE (0x60) - 3 bytes ⭐ **MOST COMMON**
```
Byte 0:    Command (0x60)
Byte 1:    dx,dy (4-bit signed deltas, ±7 range)
Byte 2:    intensity (4-bit, 0-15, scaled to 0-255)
```
**Draws from:** (lastX, lastY) to (lastX+dx, lastY+dy)
**Use:** 95% of Star Wars lines! Tiny movements, current color
**Savings:** 77% smaller than full coordinates!

### LINE_TO (0x61) - 5 bytes
```
Byte 0:    Command (0x61)
Byte 1-2:  x (int16, signed)
Byte 3-4:  y (int16, signed)
Byte 5:    intensity (uint8, 0-255)
```
**Draws from:** (lastX, lastY) to (x, y)
**Use:** Large jumps with current color
**Special:** intensity=0 means "move beam without drawing" (for disconnected segments!)

### LINE_TO_RGB (0x62) - 9 bytes
```
Byte 0:    Command (0x62)
Byte 1-2:  x (int16, signed)
Byte 3-4:  y (int16, signed)
Byte 5:    R (uint8)
Byte 6:    G (uint8)
Byte 7:    B (uint8)
Byte 8:    intensity (uint8, 0-255)
```
**Draws from:** (lastX, lastY) to (x, y) with NEW color
**Use:** Color changes or first line in frame

### PALETTE_COLOR (0x50) - 2 bytes
```
Byte 0:    Command (0x50)
Byte 1:    palette_index (4-bit) + intensity (4-bit)
```
**Use:** Future enhancement for palette-based rendering

### END_FRAME (0x00) - 5 bytes
```
Byte 0:    Command (0x00)
Byte 1-4:  timestamp_ms (uint32, milliseconds from recording start)
```

## Frame Index

For seeking support:

```
Offset | Size | Type    | Description
-------|------|---------|----------------------------------
0      | 4    | uint32  | Index entry count
4+     | 12*N | entry[] | Index entries

Index Entry (12 bytes):
Offset | Size | Type    | Description
-------|------|---------|----------------------------------
0      | 4    | uint32  | Frame number
4      | 8    | uint64  | File offset to frame data
```

## Audio Data

Audio is stored as Opus packets in a simple container:

```
Audio Packet:
Offset | Size | Type    | Description
-------|------|---------|----------------------------------
0      | 4    | uint32  | Timestamp (milliseconds)
4      | 4    | uint32  | Packet size
8      | N    | byte[]  | Opus packet data
```

## Benefits

- **Compact**: ~1-5 MB per minute (vs 50+ MB for H.264)
- **Infinite Resolution**: Render at any size
- **Perfect Quality**: No rasterization artifacts
- **Seekable**: Frame index for instant seeking
- **Web-Compatible**: Opus audio, simple Canvas rendering

## Example File Size

Star Wars (1 minute):
- Vectors: ~500 KB (assuming ~1000 lines/frame @ 60fps)
- Audio: ~150 KB (Opus @ 24 kbps stereo)
- **Total: ~650 KB vs 50 MB H.264!**

