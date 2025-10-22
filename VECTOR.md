# MAME Vector Game Frame Flow

This document explains how MAME's vector game rendering works, tracing the complete call paths for frame generation and display.

## Overview

Vector games in MAME have **two independent timing loops**:

1. **VBLANK Loop (~40 Hz)**: Hardware timing interrupt that triggers display updates
2. **Vector Generation Loop (~27 Hz)**: When the game CPU actually generates new vector lists

The separation between these allows the same vector list to be displayed multiple times, which is how real vector arcade hardware worked.

---

## Call Path 1: VBLANK → end_vector_frame() (~40 Hz)

This path is triggered by hardware timing and happens at the configured screen refresh rate.

### The Complete Call Stack:

```
1. Hardware Timer (CLOCK_3KHZ / frame_divisor = 41.015625 Hz)
   └─> screen_device::vblank_begin()   [src/emu/screen.cpp:1661]
       │
       ├─> video_manager::frame_update()   [src/emu/video.cpp:235]
       │   │
       │   ├─> finish_screen_updates()   [src/emu/video.cpp:689]
       │   │   │
       │   │   └─> For each screen:
       │   │       └─> screen.update_partial(max_y)   [src/emu/screen.cpp:1144]
       │   │           │
       │   │           └─> m_screen_update_rgb32()   [screen.cpp:1222]
       │   │               │   (This is a delegate callback set by the driver)
       │   │               │
       │   │               └─> vector_device::screen_update()   [src/devices/video/vector.cpp:240]
       │   │                   │
       │   │                   ├─> Render all vectors from current list
       │   │                   │   (Loops through m_vector_list[0..m_vector_index])
       │   │                   │
       │   │                   └─> video_manager::end_vector_frame()   [src/emu/video.cpp:1626]
       │   │                       │
       │   │                       └─> vvf_write::end_frame()   [src/osd/modules/render/vvfwrite.cpp:455]
       │   │                           └─> Write frame to VVF file
       │   │
       │   ├─> machine().osd().update()   [Platform-specific]
       │   │   └─> Present frame to display
       │   │
       │   └─> Update input, UI, speed throttling, etc.
       │
       └─> screen_device::vblank_end()   [src/emu/screen.cpp:1692]
           └─> Increment frame counter
```

### Key Points:

- **Frequency**: Set by `screen.set_refresh_hz(CLOCK_3KHZ / m_frame_divisor)` in driver
- **For Star Wars**: 2953.125 Hz ÷ 72 = **41.015625 Hz**
- **Purpose**: Display timing, game logic updates, input polling, sound updates
- **Vector rendering**: Re-renders the **current** vector list (may be old data)
- **Always happens**: Even if no new vectors have been generated

---

## Call Path 2: Game Logic → begin_vector_frame() (~27 Hz)

This path is triggered when the game's CPU actually writes a new vector display list.

### The Complete Call Stack:

```
1. Game CPU writes to vector GO register
   └─> 6809 CPU executes: STA $4600   [Star Wars game code]
       │
       └─> Memory map intercepts write to 0x4600   [src/mame/atari/starwars.cpp:197]
           │   map(0x4600, 0x461f).w("avg", FUNC(avg_starwars_device::go_w));
           │
           └─> avgdvg_device_base::go_w()   [src/devices/video/avgdvg.cpp:1283]
               │   (Called when game writes to Vector GO hardware register)
               │
               ├─> vggo()   [Device-specific, resets vector generator state]
               │
               ├─> Check: if (m_sync_halt && m_nvect > 10)   [avgdvg.cpp:1287]
               │   │   (Only start new frame if previous halted AND has >10 vectors)
               │   │
               │   └─> m_vector->clear_list()   [src/devices/video/vector.cpp:231]
               │       │
               │       ├─> video_manager::set_vector_frame_started()   [src/emu/video.h:107]
               │       │   │   (Core MAME frame tracking - INDEPENDENT of VVF)
               │       │   └─> m_vector_frame_started = true;
               │       │
               │       ├─> video_manager::begin_vector_frame()   [src/emu/video.cpp:1609]
               │       │   │   (VVF recording trigger - DEPENDENT on VVF being active)
               │       │   └─> vvf_write::begin_frame()   [src/osd/modules/render/vvfwrite.cpp:199]
               │       │       │
               │       │       ├─> m_frame_started = true   (VVF internal flag)
               │       │       ├─> Track frame duration for stats
               │       │       └─> m_frame_buffer.clear()   (Start new frame)
               │       │
               │       └─> m_vector_index = 0;   (Reset vector list to empty)
               │
               ├─> vg_flush()   [Flush buffered vectors to display list]
               │
               ├─> vg_set_halt(0)   [Start vector generator state machine]
               │
               └─> m_vg_run_timer->adjust(attotime::zero)
                   └─> run_state_machine()   [avgdvg.cpp:1232]
                       │   (Runs at 1.5 MHz, processes vector commands from RAM)
                       │
                       └─> handler_0() through handler_7()
                           │   (Execute vector generator microcode)
                           │
                           └─> vg_add_point_buf()   [avgdvg.cpp:1135]
                               │
                               └─> vector_device::add_point()   [src/devices/video/vector.cpp:191]
                                   │
                                   └─> Adds (x, y, color, intensity) to m_vector_list[]
```

### Key Points:

- **Frequency**: Varies based on game logic, typically **20-30 Hz** for Star Wars
- **Trigger**: Game CPU writes to vector GO register (memory-mapped I/O)
- **Purpose**: Generate new vector display list
- **Process**:
  1. Clears old vector list
  2. Marks frame as "started" (for frame skip optimization)
  3. Vector generator state machine runs, building new list
  4. List remains active until next GO command

---

## Frame Skip Optimization (New in This Build)

### Problem

Originally, MAME would present **every VBLANK** (40 Hz) even when no new vectors were generated, causing:
- Browser throttling issues (seeing 40 FPS instead of ~27 FPS)
- Wasted CPU/GPU resources (~34% unnecessary presentations)
- Poor battery life on mobile devices

### Solution

Added `m_vector_frame_started` flag to track when new content is actually generated:

```cpp
// In video_manager::frame_update()
if (has_vector_screen && !m_vector_frame_started)
{
    vector_frame_empty = true;
    anything_changed = false;  // Skip presentation
}
m_vector_frame_started = false;  // Reset for next frame
```

### Result

- **Before**: Browser sees 40 FPS (VBLANK rate), 34% are duplicate frames
- **After**: Browser sees ~27 FPS (actual content rate), 0% duplicates
- **Game timing**: Still runs at 41 Hz internally (unchanged)
- **Benefits**: Better browser compatibility, lower resource usage

---

## Hardware vs Emulation

### Real Vector Arcade Hardware

- **CRT phosphor decay**: ~15-50 ms depending on phosphor type
- **Continuous redraw**: Beam traces vectors continuously at high speed
- **No "framerate"**: Display is analog, continuously refreshed
- **VBLANK**: Used for game logic timing, not actual display refresh

### MAME Emulation

- **Digital frames**: Must convert continuous beam into discrete frames
- **VBLANK timing**: Simulates hardware interrupt at 41 Hz
- **Frame generation**: When game says "draw new list"
- **Display**: Shows vector list once per VBLANK (40 Hz)

---

## Star Wars Specific Details

### Hardware Configuration

```cpp
#define MASTER_CLOCK (12.096_MHz_XTAL)   // Crystal oscillator on PCB
#define CLOCK_3KHZ   (MASTER_CLOCK / 4096)  // = 2953.125 Hz

screen.set_refresh_hz(CLOCK_3KHZ / 72);  // = 41.015625 Hz
```

### Memory Map

- **0x4600-0x461F**: Vector GO register (triggers clear_list)
- **0x4620-0x463F**: Vector RESET register
- **0x3000-0x3FFF**: Vector ROM (contains vector display commands)
- **0x0000-0x2FFF**: Vector RAM (game can write display lists here)

### Vector Generator

- **Type**: Atari AVG (Analog Vector Generator)
- **Clock**: 1.5 MHz state machine
- **Processing**: Reads commands from memory, generates (x,y) coordinates
- **Halt detection**: Sets flag when vector list complete
- **Frame boundary**: When GO register written after HALT

---

## Dynamic Frame Rate Adjustment

Star Wars driver includes a runtime frame rate adjustment feature:

```cpp
// Reads divisor from frame_divisor.txt every 100ms
timer_alloc(FUNC(starwars_state::check_divisor_file), this);

// Updates screen refresh rate dynamically
screen->set_refresh(attotime::from_hz(CLOCK_3KHZ.value() / m_frame_divisor));
```

**Default divisor**: 72 → 41.015625 Hz  
**Example values**:
- 49 → ~60 Hz (game runs 46% faster, higher pitch audio)
- 109 → ~27 Hz (game runs 34% slower, lower pitch audio)

---

## Timing Relationships

```
VBLANK Rate (eFPS):  ━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━  (~40 Hz)
                         │   │   │   │   │   │   │   │   │   │
Vector Gen (FPS):    ━━━━┻━━━━━━━━━━━┻━━━━━━━┻━━━━━━━━━━━┻━━  (~27 Hz)
                     ^               ^       ^           ^
                     └── New vectors │       │           │
                         Same list ──┘       │           │
                         Same list ──────────┘           │
                         New vectors ─────────────────────┘
```

**Key Insight**: The same vector list gets displayed multiple times (at VBLANK rate) until a new list is generated (at vector generation rate). This is normal and intentional!

---

## VVF Recording Integration

VVF recording piggybacks on the vector frame tracking:

```cpp
// Core MAME (always happens)
machine().video().set_vector_frame_started();  // Flag for frame skip

// VVF recording (only if recording active)
machine().video().begin_vector_frame();
  └─> if (m_vvf_writer && m_vvf_writer->recording())
      └─> m_vvf_writer->begin_frame();
```

**Benefits**:
- VVF only records when new content exists (~27 Hz)
- Empty VBLANK frames are skipped (saves ~34% file size)
- Frame skip optimization works even without VVF

---

## References

- **src/emu/video.cpp**: Core video manager, frame_update()
- **src/emu/screen.cpp**: Screen device, VBLANK timers
- **src/devices/video/vector.cpp**: Generic vector device
- **src/devices/video/avgdvg.cpp**: Atari AVG hardware emulation
- **src/mame/atari/starwars.cpp**: Star Wars driver configuration
- **src/osd/modules/render/vvfwrite.cpp**: VVF recording implementation

---

*Document created: October 2025*  
*For MAME vector game development and debugging*

