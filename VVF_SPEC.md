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

Command Types:
0x00 = END_FRAME
0x10 = LINE
0x20 = POINT (single pixel)
0x30 = RGB_COLOR (set current color)
0x40 = INTENSITY (set current intensity)
```

### LINE Command (13 bytes)
```
Byte 0:    Command (0x10)
Byte 1-2:  x1 (int16, signed)
Byte 3-4:  y1 (int16, signed)
Byte 5-6:  x2 (int16, signed)
Byte 7-8:  y2 (int16, signed)
Byte 9:    R (uint8)
Byte 10:   G (uint8)
Byte 11:   B (uint8)
Byte 12:   Intensity (uint8, 0-255)
```

### POINT Command (7 bytes)
```
Byte 0:    Command (0x20)
Byte 1-2:  x (int16, signed)
Byte 3-4:  y (int16, signed)
Byte 5:    RGB packed (unused for now)
Byte 6:    Intensity (uint8)
```

### RGB_COLOR Command (4 bytes)
```
Byte 0:    Command (0x30)
Byte 1:    R (uint8)
Byte 2:    G (uint8)
Byte 3:    B (uint8)
```

### INTENSITY Command (2 bytes)
```
Byte 0:    Command (0x40)
Byte 1:    Intensity (uint8, 0-255)
```

### END_FRAME Command (5 bytes)
```
Byte 0:    Command (0x00)
Byte 1-4:  Timestamp (uint32, milliseconds from start)
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

