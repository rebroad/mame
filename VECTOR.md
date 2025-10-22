# MAME Vector Game Frame Flow

This document explains how MAME's vector game rendering works, tracing the complete call paths for frame generation and display.

## Overview

Vector games in MAME have **two independent timing loops**:

1. **VBLANK Loop (~40 Hz)**: Hardware timing interrupt that triggers MAME's frame capture
2. **Vector Generation Loop (~27 Hz)**: When the game CPU actually updates the vector command memory

**Important**: Real vector arcade hardware had **no concept of "frames"**. The Analog Vector Generator (AVG) continuously re-executed vector commands from memory in an endless loop, keeping the phosphor glowing. MAME's "frame" concept is an emulation artifact - it takes periodic snapshots of the vector list to display on modern raster monitors.

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
- **Purpose**: Game logic updates, input polling, sound updates, MAME frame capture
- **Vector rendering**: Creates a raster frame from the **current** vector list (MAME emulation artifact)
- **Always happens**: Even if the vector command memory hasn't been updated
- **Real hardware**: The AVG was continuously re-tracing vectors; MAME samples this at VBLANK

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
- **Trigger**: Game CPU writes to vector GO register (memory-mapped I/O at 0x4600)
- **Purpose**: Signal that new vector commands are ready in memory
- **Process**:
  1. `clear_list()` empties MAME's m_vector_list[] array (not real hardware!)
  2. Marks frame as "started" (for MAME's frame skip optimization)
  3. AVG state machine runs, reading commands from vector RAM/ROM
  4. Each vector command adds points to MAME's m_vector_list[]
  5. List remains active until next GO command

**Real hardware**: The CPU writes new commands to vector RAM, then writes to GO register. The AVG immediately starts reading the new commands in a continuous loop.

**MAME emulation**: `clear_list()` is MAME's way of saying "start collecting a fresh snapshot of vectors for the next frame".

---

## Frame Skip Optimization (New in This Build)

### Problem

Originally, MAME would present **every VBLANK** (40 Hz) even when no new vectors were generated, causing:
- Browser throttling issues (seeing 40 FPS instead of ~27 FPS)
- Wasted CPU/GPU resources (~34% unnecessary presentations)
- Poor battery life on mobile devices

### Solution

Added `m_vector_frame_started` flag to track when new content is actually generated, controlled by the **`-vector_frame_skip`** option:

```cpp
// In video_manager::frame_update()
if (machine().options().vector_frame_skip())  // Option check
{
    if (has_vector_screen && !m_vector_frame_started)
    {
        vector_frame_empty = true;
        anything_changed = false;  // Skip presentation
    }
}
m_vector_frame_started = false;  // Reset for next frame
```

### Configuration

**Command line:**
```bash
mame starwars -vector_frame_skip 1    # Enable (default, recommended for WASM)
mame starwars -vector_frame_skip 0    # Disable (legacy behavior)
```

**INI file (mame.ini):**
```ini
vector_frame_skip       1
```

### Result

- **Enabled (default)**: Browser sees ~27 FPS (actual content rate), 0% duplicates
- **Disabled**: Browser sees 40 FPS (VBLANK rate), 34% are duplicate frames
- **Game timing**: Always runs at 41 Hz internally (option doesn't affect game speed)
- **Benefits**: Better browser compatibility, lower resource usage, better battery life
- **VVF recording**: Also skips empty frames when enabled (smaller file size)

---

## Hardware vs Emulation

### Real Vector Arcade Hardware

- **No frames**: The AVG continuously re-executes vector commands from memory
- **Continuous loop**: Command list in RAM/ROM is read repeatedly at ~MHz speeds
- **CRT phosphor decay**: ~15-50 ms, so vectors must be re-traced to stay visible
- **CPU updates memory**: Game writes new commands to vector RAM
- **AVG reads memory**: Independently loops through commands, drawing vectors
- **VBLANK interrupt**: 41 Hz interrupt for game logic timing (not related to display refresh)
- **Display is analog**: No discrete "frames", just a continuously glowing phosphor pattern

### MAME Emulation Challenge

MAME must display vector games on modern **raster displays** (LCD/LED monitors) which require discrete frames:

- **Collects vectors**: Builds m_vector_list[] from AVG state machine execution
- **Snapshots at VBLANK**: Captures vector list state 40 times/second
- **Renders to raster**: Converts vectors to pixels for modern displays
- **Frame concept**: Entirely an emulation artifact to bridge vector→raster
- **"Same list multiple times"**: If CPU doesn't update vector memory for several VBLANKs, MAME re-renders the unchanged list (mimics how real AVG kept re-tracing)

---

## Star Wars Specific Details

### Hardware Configuration

```cpp
#define MASTER_CLOCK (12.096_MHz_XTAL)   // Crystal oscillator on PCB
#define CLOCK_3KHZ   (MASTER_CLOCK / 4096)  // = 2953.125 Hz

screen.set_refresh_hz(CLOCK_3KHZ / 72);  // = 41.015625 Hz
```

### Memory Map

- **0x4600-0x461F**: Vector GO register (triggers AVG to start/restart)
  - **Write value**: Ignored - any write triggers GO (typically 0x00)
  - **Write frequency**: ~27 Hz (when game has new vector data ready)
  - **Effect**: Resets AVG program counter to 0, starts state machine
- **0x4620-0x463F**: Vector RESET register (halts AVG)
- **0x3000-0x3FFF**: Vector ROM (contains pre-programmed vector commands)
- **0x0000-0x2FFF**: Vector RAM (game can write dynamic vector commands here)

### Vector Generator

- **Type**: Atari AVG (Analog Vector Generator)
- **Clock**: 1.5 MHz state machine
- **Processing**: Reads commands from memory, generates (x,y) coordinates
- **Halt detection**: Sets flag when HALT command encountered
- **Frame boundary**: When GO register written after HALT (in MAME - not real hardware concept!)

### AVG Command Format

The "command list" is a sequence of **multi-byte instructions** in memory. Commands are read sequentially by the AVG state machine.

**AVG Instruction Format (Star Wars AVG variant):**

Commands consist of **4 bytes** (2 words) each:

```
Word 1 (bytes 0-1):
  Byte 0: DVY[7:0]   - Y delta low byte
  Byte 1: [OP:3 bits | dvy12:1 bit | DVY[11:8]:4 bits]
          bits 7-5: OP (opcode, 3 bits = 8 possible commands)
          bit 4: dvy12 flag (1=SCAL command, 0=other)
          bits 3-0: DVY high nibble

Word 2 (bytes 2-3):
  Byte 2: DVX[7:0]   - X delta low byte
  Byte 3: [int_latch:4 bits | DVX[11:8]:4 bits OR Intensity:4 bits]
          bits 7-4: Intensity (for VCTR) or int_latch
          bits 3-0: DVX high nibble
```

**Opcode (OP bits 7-5) determines command:**
```
OP=0 (000): VCTR - Vector draw (dx, dy, intensity)
            DVY/DVX = signed 13-bit delta
            Intensity = 4 bits (0-15)
            Color set separately by STAT command

OP=1 (001): HALT - Stop execution
            OP0=1 triggers halt
            AVG waits for GO register write

OP=2 (010): Not used / reserved

OP=3 (011): JMPL - Jump
            DVY contains target address
            OP0=1: Absolute jump
            OP0=0: Return from stack

OP=4 (100): SCAL - Scale (when dvy12=1)
            scale = DVY[7:0] (8 bits, 0-255, inverted: 0xFF=slow, 0x00=fast)
            bin_scale = DVY[10:8] (3 bits, 0-7, additional binary shift)
            **Purpose**: Controls vector drawing SPEED/TIME, not coordinate range
            Affects how long beam takes to move (for consistent brightness)
            Longer time = brighter line (more phosphor excitation)

OP=5 (101): STAT - Color/Intensity (when dvy12=0)
            color = DVY[2:0] (3 bits = 8 colors: 0-7)
            intensity = DVY[7:4] (4 bits = 16 levels: 0-15)
            **MAME conversion**: intensity << 4 → 8-bit (0, 16, 32, ..., 240)
            Hardware uses 4 bits, MAME internal uses 8 bits for compatibility

OP=6 (110): CNTR - Center beam
            Resets position to (xcenter, ycenter)

OP=7 (111): Stack operations / other
```

**The "dvy12" bit** (bit 4) differentiates between:
- **dvy12=0**: Color/intensity setting (STAT)
- **dvy12=1**: Scale setting (SCAL)

This is why Star Wars can use 8 colors (3 bits) with 16 intensity levels (4 bits) = 128 color combinations!

### What Does SCAL Actually Do?

**NOT coordinate scaling!** The 13-bit deltas in VCTR commands already provide sufficient range.

**SCAL controls DRAWING SPEED** - how long the beam takes to move from point A to point B:

**The problem SCAL solves:**

On analog CRT, brightness = phosphor excitation time:
- Slow beam → more time per spot → **BRIGHTER**
- Fast beam → less time per spot → **DIMMER**

**How SCAL normalizes this:**
```cpp
drawing_time = (scale ^ 0xFF) * timer_value >> bin_scale_shifts

Short vector + high SCAL (0xFF) = SLOW beam = longer dwell = BRIGHTER ✅
Long vector + low SCAL (0x00) = FAST beam = shorter dwell = NORMALIZED ✅
```

**Example:**
```
Short 100-pixel vector: SCAL 0xFF → beam moves SLOWLY → 100µs total → 1.0µs/pixel → BRIGHT
Long 1000-pixel vector: SCAL 0x10 → beam moves QUICKLY → 100µs total → 0.1µs/pixel → DIM
                                                                                     (normalized)
```

The **normalization** code (lines 532-541 in avgdvg.cpp) shifts dx/dy values to similar magnitudes before applying SCAL, ensuring consistent brightness across all vector lengths.

**TL;DR**: SCAL controls **beam speed** (time to traverse the vector). Slower = brighter. Game adjusts SCAL based on vector length to maintain consistent brightness!

### MAME Rendering Inaccuracy (Identified Issue)

**Current MAME behavior:**
- AVG emulation uses SCAL for timing calculations ✅
- Final intensity passed to renderer = `m_intensity << 4` (just from STAT command)
- **Scale information is DISCARDED** before rendering ❌

**What SHOULD happen for accuracy:**
```cpp
effective_intensity = base_intensity * f(scale, vector_length, drawing_time)
```

Real hardware brightness depends on BOTH intensity AND dwell time (affected by SCAL). MAME currently only uses intensity, potentially causing brightness mismatches compared to real hardware.

**Possible fix:** Modify `vg_add_point_buf()` to calculate effective intensity based on scale and normalized vector length, or pass scale info to renderer for accurate brightness emulation.

**Impact**: Probably minor for most games (Star Wars looks fine), but could be noticeable in games that use SCAL creatively for brightness effects.

**Example execution sequence:**
```
1. CPU writes vector commands to RAM (0x0000-0x2FFF)
2. CPU writes to GO register (0x4600)
3. AVG starts at address 0, reads command bytes
4. State machine executes each command:
   - VCTR: Calculate beam movement, set DACs, draw line
   - CNTR: Reset beam to center
   - HALT: Stop and set m_sync_halt flag
5. CPU polls DONE register (0x4600 read) until halted
6. Repeat from step 1
```

### The HALT Paradox: Why Stop if Phosphor Needs Continuous Tracing?

**Great question!** Here's the real picture:

**What actually happens on real hardware:**
```
Time 0ms:      CPU writes GO → AVG starts executing from address 0
Time 0-0.5ms:  AVG traces through all vectors at 1.5 MHz state machine speed
               Draws line, draws line, draws line...
Time 0.5ms:    AVG encounters HALT command → stops, sets HALT flag
Time 0.5-37ms: Phosphor still glowing (decay time ~15-50ms)
               CPU sees HALT flag, does game logic, updates some vector commands
Time 37ms:     CPU writes GO again → AVG restarts from address 0
Time 37-37.5ms: AVG re-traces vectors (now with updates)
Time 37.5ms:   HALT again
... repeat ~27 times per second ...
```

**Why HALT is necessary:**
1. **CPU needs to know when AVG is "done"** - synchronization point
2. **CPU can update vector RAM** safely while AVG is halted (avoids tearing/glitches)
3. **Brief halts are OK** - phosphor glows for 15-50ms, longer than the 37ms between GO writes
4. **GO frequency ~27 Hz** = 1000ms ÷ 27 = ~37ms per cycle

**The "continuous" loop:**
The AVG state machine runs at 1.5 MHz, but the overall cycle has pauses:
```
Execute(0.5ms)→WAIT(36.5ms)→Execute(0.5ms)→WAIT(36.5ms)→Execute...
               ↑                           ↑
               CPU updates vector RAM      CPU updates again
               Phosphor still glowing!     Phosphor refreshed!
```

**Key insight**: Each execution is very fast (~0.5ms to trace all vectors), then the CPU takes time (~37ms) to compute game logic before issuing the next GO. The phosphor doesn't significantly fade during this brief period.

**In summary**: "Continuous at 1.5 MHz" means the state machine runs at 1.5 MHz, but it pauses between command lists, waiting for CPU to signal GO again.

---

## Debugging AVG Commands

Debug output has been added to track key AVG operations (first 50 occurrences):

### GO Register Writes
```cpp
// In avgdvg.cpp::go_w()
logerror("VG GO #%u: data=0x%02X, time_since_last=%.2f ms, nvect=%d, sync_halt=%d, will_clear=%d\n", ...);
```

**Shows:**
- `data`: Value written to 0x4600 (always ignored, typically 0x00)
- `time_since_last`: Milliseconds since previous GO (~37ms for Star Wars)
- `nvect`: Number of vectors accumulated in buffer
- `sync_halt`: Whether AVG had halted (1=yes, 0=still running)
- `will_clear`: Whether MAME will call `clear_list()` (1=yes if halted with >10 vectors)

### HALT Commands
```cpp
// In avgdvg.cpp::avg_common_strobe3()
logerror("AVG HALT #%u: op=0x%X at PC=0x%04X, nvect=%d, xpos=%d, ypos=%d\n", ...);
```

**Shows:**
- `op`: Full opcode byte (OP0=1 triggers HALT)
- `PC`: Program counter location in vector memory
- `nvect`: Vectors drawn so far
- `xpos/ypos`: Current beam position

### SCAL Commands
```cpp
// In avgdvg.cpp::avg_common_strobe2()
logerror("AVG SCAL #%u: scale=%d (0x%02X), bin_scale=%d at PC=0x%04X\n", ...);
```

**Shows:**
- `scale`: Linear scale factor (0-255, inverted: 255=slowest/brightest, 0=fastest/dimmest)
- `bin_scale`: Binary scale shift (0-7)
- `PC`: Where in memory this SCAL command was

### STAT Commands
```cpp
// In avgdvg.cpp::handler_6() (avg_strobe2)
logerror("AVG STAT #%u: color=%d, intensity=%d (4-bit) = %d (8-bit) at PC=0x%04X\n", ...);
```

**Shows:**
- `color`: 3-bit color index (0-7)
- `intensity (4-bit)`: Hardware intensity (0-15)
- `intensity (8-bit)`: MAME internal value after << 4 shift (0-240)
- `PC`: Where in memory this STAT command was

### CNTR Commands
```cpp
// In avgdvg.cpp::avg_common_strobe3()
logerror("AVG CNTR #%u: centering beam to (%d, %d) at PC=0x%04X\n", ...);
```

**Shows:**
- Center coordinates (xcenter, ycenter)
- `PC`: Where in memory this CNTR command was

**Note**: `clear_list()` only happens if:
- AVG was halted (`m_sync_halt == true`)
- AND vector buffer has >10 vectors (`m_nvect > 10`)

This prevents Major Havoc from triggering spurious frame boundaries on short vector lists.

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
MAME VBLANK (eFPS):  ━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━  (~40 Hz)
                        │   │   │   │   │   │   │   │   │   │
                        └─> Snapshot & render current vector list

CPU Updates (FPS):   ━━━━┻━━━━━━━━━━━┻━━━━━━━┻━━━━━━━━━━━┻━━  (~27 Hz)
                     ^               ^       ^           ^
                     └── Write new   │       │           │
                         vector cmds │       │           │
                         to RAM      │       │           │
                                     │       │           │
MAME Snapshots:      A───A───A───────B───────C───C───────D──
                     ^   ^   ^       ^       ^   ^       ^
                     Same    Same    New     New Same    New
                     data    data    data    data data   data
```

**Real Hardware (Continuous)**:
```
AVG Hardware:  ∞ loop reading vector commands from RAM at ~1.5 MHz
               (Re-traces same commands thousands of times per second)

CPU Updates:   Occasionally writes new commands to vector RAM (~27 Hz)
```

**Key Insight**: MAME takes snapshots at VBLANK rate (40 Hz) of what the AVG is currently processing. If the CPU hasn't updated vector RAM, the snapshot shows the same data again. Real hardware was continuously re-executing those commands, not "displaying a list multiple times".

### What is a "Command List"?

Vector commands are stored in memory (RAM or ROM) and specify drawing operations:

**Example Star Wars vector commands** (stored at 0x3000-0x3FFF):
```
Address  Command Type        Meaning
0x3000   VCTR (vector)       Draw line: dx=+100, dy=+50, intensity=15
0x3002   VCTR (vector)       Draw line: dx=-50, dy=+75, intensity=12
0x3004   CNTR (center)       Move beam to center (0,0)
0x3006   JMPL (jump)         Jump to address 0x3010
0x3008   HALT                Stop and wait for GO
...
```

The AVG hardware **reads these commands sequentially** from memory and executes them (moving the beam, setting intensity, etc.). On real hardware, after reaching HALT, it would wait for the CPU to write to the GO register, then start over from the beginning or a jump target.

### Why Does MAME Re-Render Unchanged Frames?

**Short answer**: Because modern displays **require** it!

**Real vector CRT**:
- Phosphor fades after ~15-50ms
- AVG continuously re-traces to keep image visible
- If AVG stops, image fades to black

**Modern LCD/OLED displays**:
- Pixels stay lit (no decay like phosphor)
- **BUT**: Operating system expects regular frame updates
- If MAME doesn't present frames, the window might:
  - Go black (OS assumes app crashed)
  - Get marked as "not responding"
  - Mess up vsync/compositor timing

**MAME's Traditional Approach**:
1. Take snapshot at each VBLANK (40 Hz)
2. Re-render to raster bitmap (even if vector data unchanged)
3. Always present to display system
4. **Why?** Legacy compatibility - some OS/window managers expect regular updates

**You're Right Though!** The last rendered frame SHOULD be sufficient until content changes. That's exactly why we added the frame skip optimization:

**NEW Optimization (This Build)**:
1. Track when vector commands actually change (`m_vector_frame_started`)
2. Mark unchanged frames as "skipped" (`anything_changed = false`)
3. Pass `skipped_it = true` to `machine().osd().update()`
4. Let browser/compositor decide whether to re-present old frame or skip

**Benefits:**
- Browser sees actual content rate (~27 FPS instead of 40 FPS)
- Compositor can skip redundant presentations
- Lower CPU/GPU usage (no wasted re-renders)
- Game timing still accurate (VBLANK interrupts still at 41 Hz)

The optimization addresses exactly your concern - MAME no longer wastes resources re-rendering unchanged vector data!

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

