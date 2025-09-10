# MAME Vector CRT Emulation Documentation

## Overview

This document explains how MAME's color vector CRT emulation works, with particular focus on understanding the current implementation and identifying issues with Star Wars emulation. The emulation attempts to recreate the visual characteristics of vector CRT displays used in arcade games like Star Wars, Tempest, and Battle Zone.

## Architecture

The vector CRT emulation system consists of several key components:

### 1. Vector Generator (AVG/DVG)
- **Location**: `src/devices/video/avgdvg.cpp` and `src/devices/video/avgdvg.h`
- **Purpose**: Converts vector commands from game ROMs into a list of points with coordinates, colors, and intensities
- **Star Wars Implementation**: Uses `avg_starwars_device` which extends the base `avg_device`

### 2. Vector Device
- **Location**: `src/devices/video/vector.cpp` and `src/devices/video/vector.h`
- **Purpose**: Manages the vector point list and applies CRT-specific effects like flicker
- **Key Function**: `add_point()` - adds points to the vector list with intensity and color

### 3. Render System
- **Location**: Various render modules in `src/osd/modules/render/`
- **Purpose**: Converts vector points into actual rendered lines using additive blending

## Vector Generation Process

### Star Wars Specific Implementation

Star Wars uses a specialized AVG implementation with these key differences:

```cpp
// Star Wars intensity calculation (handler_6)
m_intensity = m_dvy & 0xff;  // Full 8-bit intensity (0-255)
m_color = (m_dvy >> 8) & 0xf;  // 4-bit color (0-15)

// Star Wars point generation (handler_7)
vg_add_point_buf(
    m_xpos,
    m_ypos,
    vector_device::color111(m_color),
    ((m_int_latch >> 1) * m_intensity) >> 3);  // Intensity scaling
```

### Vector Buffer Processing

The AVG generates a buffer of vector points that gets processed in `vg_flush()`:

```cpp
// For each segment, push two vertices to the vector device
m_vector->add_point(x0, y0, m_vectbuf[i].color, 0);        // start vertex (intensity=0)
m_vector->add_point(x1, y1, m_vectbuf[i].color, m_vectbuf[i].intensity);  // end vertex (intensity>0)
```

Clarifications:
- "Points" here are vertices: a struct of `(x, y, color, intensity)`.
- The renderer traverses the vertex list; for each vertex `V[i]`, it draws a line from the previous vertex `V[i-1]` to `V[i]` using `V[i]`'s intensity and color.
- The start vertex is emitted with intensity 0 to indicate a move/segment boundary; brightness along the new segment comes from the end vertex.

Why would the start have intensity 0?
- It's an implementation convention to avoid depositing light before a segment begins and to allow beam moves (when two consecutive vertices are identical) without drawing.

How a square gets uniform intensity:
- Each edge is two vertices: `(x0,y0,intensity=0)` then `(x1,y1,intensity=I)`. The renderer applies intensity `I` uniformly along that edge. Repeat for all four edges.

## CRT Emulation Effects

### 1. Flicker Effect (current behavior)

**Location**: `vector_device::add_point()` in `src/devices/video/vector.cpp`

```cpp
if (vector_options::s_flicker && (intensity > 0))
{
    float random = (float)(machine().rand() & 255) / 255.0f; // 0.0 to 1.0
    intensity -= (int)(intensity * random * vector_options::s_flicker);
    intensity = std::clamp(intensity, 0, 255);
}
```

**How it works (today)**:
- Applies random intensity reduction to simulate CRT phosphor decay
- Uses a random value (0.0-1.0) multiplied by the flicker setting
- Reduces intensity by this random amount
- **Issue**: This is NOT true CRT persistence - it's just random flicker

Why random?
- Historically, this approximated the micro-variation seen on real CRTs with minimal cost. It should be replaced by a proper temporal persistence model (see Roadmap).

### 2. Beam Width Calculation

**Location**: `vector_device::screen_update()` in `src/devices/video/vector.cpp`

```cpp
float intensity = (float)curpoint->intensity / 255.0f;
float intensity_weight = normalized_sigmoid(intensity, vector_options::s_beam_intensity_weight);

float beam_width = m_min_intensity == m_max_intensity
    ? vector_options::s_beam_width_min
    : vector_options::s_beam_width_min + intensity_weight * (vector_options::s_beam_width_max - vector_options::s_beam_width_min);
```

**How it works**:
- Uses a normalized sigmoid function to map intensity to beam width
- Higher intensity = wider beam (simulating brighter phosphor glow)
- Separate minimum and maximum beam widths
- Special handling for dots (when start and end points are the same)

### 3. Additive Blending

**Location**: `vector_device::screen_update()` in `src/devices/video/vector.cpp`

```cpp
uint32_t flags = PRIMFLAG_ANTIALIAS(1) | PRIMFLAG_BLENDMODE(BLENDMODE_ADD) | PRIMFLAG_VECTOR(1);
```

**How it works**:
- Uses additive blending (`BLENDMODE_ADD` → SRC_ALPHA, ONE) to simulate phosphor accumulation. Output ≈ Dest + Src * Alpha.
- When lines overlap, their contributions add in screen space.

Accuracy notes:
- This is linear in the renderer’s working space; real CRT light vs. beam current is non-linear, and display gamma further affects perception. Without gamma-aware compositing or a calibrated transfer function, perceived brightness may differ from original hardware.

## Configuration Options

### Vector-Specific Options

Located in `src/emu/emuopts.cpp`:

1. **`beam_width_min`** (default: 1.0)
   - Minimum beam width for vector lines

2. **`beam_width_max`** (default: 1.0)
   - Maximum beam width for vector lines

3. **`beam_dot_size`** (default: 1.0)
   - Size multiplier for dots (when start == end point)

4. **`beam_intensity_weight`** (default: 0)
   - Controls how intensity affects beam width using sigmoid function

5. **`flicker`** (default: 0)
   - Random intensity reduction to simulate phosphor decay

## Identified Issues

### 1. Bright Points at Line Joins

**Problem**: Lines appear too bright where they connect/join

**Root Cause**:
- Each segment is drawn using the end vertex’s intensity across the whole segment. The start vertex’s 0 does not mean the new segment is dim; it only prevents the previous segment from depositing unintended light.
- At joins, neighboring segments overlap spatially due to finite beam width and anti-alias kernels. Additive blending double-counts energy near the shared endpoint, producing a hotspot.

**Code Location**: `vg_flush()` in `avgdvg.cpp` lines 125–126; line emission happens in `vector.cpp::screen_update()`.

### 2. Incorrect Flicker Implementation

**Problem**: The "flicker" setting doesn't actually simulate CRT phosphor persistence

**Current Implementation**:
- Random intensity reduction per point
- No temporal persistence or decay over time
- No accumulation of overlapping phosphor

**What it should be**:
- Phosphor persistence over time (exponential decay)
- Proper accumulation when lines overlap
- Frame-to-frame persistence of phosphor glow

### 3. Star Wars Death Star Explosion

**Problem**: Explosion effects don't have the proper intensity/glow

**Potential Causes**:
- Intensity scaling in Star Wars handler: `((m_int_latch >> 1) * m_intensity) >> 3`
- This reduces the effective intensity range significantly
- May not properly handle high-intensity effects

### 4. Missing CRT Persistence

**Problem**: No true phosphor persistence emulation

**Missing Features**:
- No frame-to-frame phosphor decay
- No proper temporal accumulation
- No phosphor persistence curves

## Technical Details

### Normalized Sigmoid Function (beam width vs. intensity)

```cpp
float vector_device::normalized_sigmoid(float n, float k)
{
    // valid for n and k in range of -1.0 and 1.0
    return (n - n * k) / (k - fabs(n) * 2.0f * k + 1.0f);
}
```

This function maps intensity to beam width, with `k` controlling the curve shape. It only affects width; brightness is controlled by alpha.

### Vector Point Structure

```cpp
struct point
{
    int x, y;        // Coordinates
    rgb_t col;       // Color
    int intensity;   // Intensity (0-255)
};
```

### Line Rendering Process

1. AVG generates vector commands
2. Commands converted to point list with intensity/color
3. Flicker effect applied (if enabled)
4. Points converted to line segments
5. Beam width calculated based on intensity
6. Lines rendered with additive blending

Mapping of virtual-intensity to displayed intensity:
- Virtual intensity (0–255) is used as source alpha in the additive blend. There is no explicit gamma or non-linear mapping in the core; perceived brightness therefore depends on renderer color space and display gamma. Real CRTs are non-linear; modeling this would improve accuracy.

## Recommendations for Improvement

### 1. Fix Line Join Brightness

- Implement proper line segment intensity distribution
- Use intensity ramping along line segments instead of 0→full
- Consider using proper line caps or intensity falloff

### 2. Implement True Phosphor Persistence

- Add frame-to-frame phosphor decay
- Implement exponential decay curves
- Add proper temporal accumulation for overlapping phosphor

### 3. Improve Star Wars Intensity Handling

- Review the intensity scaling formula
- Ensure high-intensity effects (like explosions) are properly handled
- Consider game-specific intensity curves

### 4. Add Phosphor Persistence Options

- Add configurable phosphor decay rates
- Add phosphor persistence curves (P1, P2, P4, P31, etc.)
- Add temporal accumulation settings

## Detailed Issue Analysis

### Issue 1: Bright Points at Line Joins

**Symptom**: Lines appear too bright where they connect, creating bright spots that don't exist on real CRTs.

**Technical Root Cause**:
```cpp
// In vg_flush() - avgdvg.cpp lines 125-126
m_vector->add_point(x0, y0, m_vectbuf[i].color, 0);        // Start: intensity 0
m_vector->add_point(x1, y1, m_vectbuf[i].color, m_vectbuf[i].intensity);  // End: full intensity
```

**Problem**: Each line segment has intensity 0 at start and full intensity at end. When lines connect:
- End of line 1: intensity = 255
- Start of line 2: intensity = 0  
- But they're at the same coordinates, so additive blending creates 255 + 0 = 255 intensity
- This creates bright spots at every line connection

**Real CRT Behavior**: Lines should have consistent intensity along their length, with smooth transitions at connections.

### Issue 2: Fake Flicker vs. True Phosphor Persistence

**Current Implementation**:
```cpp
// In add_point() - vector.cpp lines 117-124
if (vector_options::s_flicker && (intensity > 0))
{
    float random = (float)(machine().rand() & 255) / 255.0f;
    intensity -= (int)(intensity * random * vector_options::s_flicker);
    intensity = std::clamp(intensity, 0, 255);
}
```

**Problems**:
1. **Random per-point**: Each point gets random intensity reduction
2. **No temporal persistence**: No frame-to-frame phosphor decay
3. **No accumulation**: Overlapping phosphor doesn't accumulate properly
4. **No decay curves**: No exponential decay over time

**Real CRT Behavior**: Phosphor should:
- Decay exponentially over time (frame-to-frame)
- Accumulate when multiple lines draw over the same area
- Have different decay rates for different phosphor types (P1, P2, P4, P31)

### Issue 3: Star Wars Intensity Scaling

**Star Wars Specific Code**:
```cpp
// In avg_starwars_device::handler_7() - avgdvg.cpp line 930
((m_int_latch >> 1) * m_intensity) >> 3
```

**Analysis**:
- `m_int_latch >> 1`: Reduces intensity by factor of 2
- `>> 3`: Further reduces by factor of 8
- **Total reduction**: Factor of 16 (intensity/16)
- This severely limits the intensity range for effects like explosions

**Impact**: Death Star explosion and other high-intensity effects appear dimmer than they should.

### Issue 4: Missing Temporal Accumulation

**Current System**: Each frame is rendered independently with no persistence.

**Missing Features**:
1. **Frame-to-frame phosphor decay**
2. **Temporal accumulation of overlapping phosphor**
3. **Proper phosphor persistence curves**
4. **Configurable decay rates for different phosphor types**

## Proposed Solutions

### Solution 1: Fix Line Join Brightness

**Approach A - Intensity Ramping**:
```cpp
// Instead of 0→full intensity, use gradual ramping
for (int i = 0; i < num_segments; i++) {
    float start_intensity = (i == 0) ? 0.0f : previous_end_intensity;
    float end_intensity = calculate_end_intensity();
    
    // Create multiple points along the line with gradual intensity change
    for (int j = 0; j < num_steps; j++) {
        float t = (float)j / (num_steps - 1);
        float intensity = lerp(start_intensity, end_intensity, t);
        add_point(x, y, color, intensity);
    }
}
```

**Approach B - Line Cap / Overlap Handling**:
- Detect and merge colinear segments to avoid extra overlaps at joints.
- Use miter/round caps with gentle endpoint falloff to reduce hotspots.
- Optionally taper intensity near endpoints to avoid double-contribution where footprints overlap.

### Solution 2: Implement True Phosphor Persistence

**Frame Buffer Approach**:
```cpp
class phosphor_buffer {
    std::vector<float> m_previous_frame;
    std::vector<float> m_current_frame;
    float m_decay_rate;  // Per-frame decay (0.0-1.0)
    
public:
    void add_phosphor(int x, int y, float intensity) {
        // Add to current frame
        m_current_frame[index] += intensity;
    }
    
    void decay_frame() {
        // Apply exponential decay to previous frame
        for (int i = 0; i < m_previous_frame.size(); i++) {
            m_previous_frame[i] *= m_decay_rate;
        }
    }
    
    void blend_frames() {
        // Combine current and decayed previous frame
        for (int i = 0; i < m_current_frame.size(); i++) {
            m_final_frame[i] = m_current_frame[i] + m_previous_frame[i];
        }
    }
};
```

Per-phosphor presets and glow:
- Provide P1/P4/P31 presets selecting decay constants and subtle color tint.
- Add optional bloom/halo post-process and tie radius/strength to intensity and beam width.

### Solution 3: Fix Star Wars Intensity

**Option A - Remove Scaling**:
```cpp
// Remove the intensity reduction
vg_add_point_buf(m_xpos, m_ypos, vector_device::color111(m_color), m_intensity);
```

**Option B - Proper Scaling**:
```cpp
// Use proper intensity mapping instead of bit shifting
int final_intensity = (m_int_latch * m_intensity) / 16;  // More accurate division
```

### Solution 4: Add Phosphor Persistence Options

**New Configuration Options**:
```cpp
// In emuopts.cpp
{ OPTION_PHOSPHOR_PERSISTENCE,    "0.95",     core_options::option_type::FLOAT, "phosphor persistence per frame" },
{ OPTION_PHOSPHOR_TYPE,           "P31",      core_options::option_type::STRING, "phosphor type (P1, P2, P4, P31)" },
{ OPTION_TEMPORAL_ACCUMULATION,   "1",        core_options::option_type::BOOLEAN, "enable temporal phosphor accumulation" },
```

## Implementation Priority

### Phase 1: Critical Fixes
1. **Fix line join brightness** - Most visible issue
2. **Fix Star Wars intensity scaling** - Game-specific issue
3. **Add basic phosphor persistence** - Core CRT behavior

### Phase 2: Enhanced Features  
1. **Add phosphor type support** - P1, P2, P4, P31 curves
2. **Add temporal accumulation** - Proper overlapping phosphor
3. **Add configuration options** - User-adjustable parameters

### Phase 3: Advanced Features
1. **Add phosphor bloom effects** - Realistic phosphor glow
2. **Add phosphor aging simulation** - Long-term phosphor degradation
3. **Add phosphor burn-in effects** - Static image persistence

## Implementation Roadmap & Sliders (To Tune Unknowns)

This section enumerates specific tasks and the sliders/options we’ll expose for tuning during testing.

1) Phosphor Persistence Buffer (temporal)
- Implement: off-screen float buffer that decays each frame and accumulates current-frame energy.
- Sliders/Options:
  - Phosphor Persistence (0.80–0.999) – per-frame decay multiplier.
  - Phosphor Type (P1/P4/P31 presets) – selects decay constants and optional tint.
  - Temporal Accumulation (on/off).

2) Intensity → Brightness Transfer Function
- Implement: map virtual intensity to emitted brightness via gamma or measured curve.
- Sliders/Options:
  - Intensity Gamma (0.8–3.0).
  - Intensity Scale (0.5–2.0) – overall gain.
  - Linear-Light Compositing (on/off) – approximate light addition correctness.

3) Beam Width vs. Intensity Curve
- Implement: configurable curve using normalized sigmoid (existing) with editable k.
- Sliders/Options:
  - Beam Width Min / Max (existing).
  - Beam Intensity Weight k (existing; widen range).
  - Normalize Beam Energy (on/off) – keeps integrated energy constant as width changes.

4) Join Hotspot Mitigation
- Implement: merge colinear segments; miter/round caps; optional endpoint falloff.
- Sliders/Options:
  - Join Merge Threshold (angle, degrees).
  - Cap Type (butt/miter/round).
  - Endpoint Falloff (0–1) – taper near endpoints.

5) Bloom / Halo (optional post-process)
- Implement: small-radius Gaussian bloom around bright vectors.
- Sliders/Options:
  - Bloom Radius (px).
  - Bloom Strength (0–1).
  - Bloom Threshold (intensity cutoff).

6) Star Wars-Specific Intensity Review
- Implement: replace bitshift scaling with calibrated mapping; ensure high-intensity effects saturate correctly without clipping.
- Sliders/Options:
  - SW Intensity Scale (per-driver override).
  - SW Intensity Gamma (per-driver override).

7) Testing Cadence
- After each feature above, pause for compile/run to compare against references (line joins, trench run, Death Star explosion).
- Keep sliders exposed in UI during this phase; later we can set better defaults.

Build/Run (reference)
- Build: `make` or your platform’s generator (e.g., `make -j$(nproc)` from project root) to produce the `mame` executable.
- Run: `./mame starwars -verbose` plus relevant vector options.

## Conclusion

The current MAME vector CRT emulation provides a basic approximation of vector displays but lacks several key characteristics of real CRT behavior. The main issues are:

1. **Bright line joins** due to incorrect intensity distribution
2. **Fake flicker** instead of true phosphor persistence  
3. **Missing temporal effects** that are crucial for authentic CRT appearance
4. **Inadequate intensity handling** for high-intensity effects

To achieve authentic Star Wars vector CRT emulation, these issues need to be addressed with proper phosphor persistence, correct intensity distribution, and temporal accumulation effects. The proposed solutions provide a roadmap for implementing these improvements while maintaining compatibility with existing MAME functionality.
