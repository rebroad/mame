#pragma once

#include "starwars.h"
#include <vector>
#include <queue>

namespace StarWars {

// Vector structure for rendering
struct Vector {
    int x, y;
    uint8_t color;
    uint8_t intensity;
    bool visible;

    Vector() : x(0), y(0), color(0), intensity(0), visible(false) {}
    Vector(int x, int y, uint8_t color, uint8_t intensity, bool visible = true)
        : x(x), y(y), color(color), intensity(intensity), visible(visible) {}
};

// AVG state machine class based on MAME implementation
class VectorGraphics {
public:
    VectorGraphics();
    ~VectorGraphics();

    void init();
    void reset();
    void go();
    void update();
    void render_frame();
    void write_vectors_csv(const char* path, int frame_index); // NEW: per-frame CSV logging (TODO: gate via option)

    // AVG control functions
    void go_w(uint8_t data = 0);
    void reset_w(uint8_t data = 0);
    int done_r();

    // Vector operations
    void add_vector(const Vector& v);
    void clear_vectors();

    // Getters
    const std::vector<Vector>& get_vectors() const { return m_vectors; }
    bool is_halted() const { return m_halt; }

private:
    // AVG state machine (from MAME avgdvg.h)
    uint16_t m_pc;           // Program counter
    uint8_t m_sp;            // Stack pointer
    uint16_t m_dvx;          // Delta X
    uint16_t m_dvy;          // Delta Y
    uint16_t m_stack[4];     // Stack
    uint16_t m_data;         // Data bus

    uint8_t m_state_latch;   // State latch
    uint8_t m_scale;         // Scale factor
    uint8_t m_intensity;     // Intensity
    uint8_t m_color;         // Color
    uint8_t m_op;            // Operation
    uint8_t m_halt;          // Halt flag
    uint8_t m_sync_halt;     // Sync halt

    int32_t m_xpos;          // Current X position
    int32_t m_ypos;          // Current Y position

    // AVG specific registers
    uint8_t m_dvy12;         // Dvy12 register
    uint16_t m_timer;        // Timer
    uint8_t m_int_latch;     // Intensity latch
    uint8_t m_bin_scale;     // Binary scale
    uint8_t m_color_latch;   // Color latch

    // Vector buffer
    std::vector<Vector> m_vectors;
    static constexpr size_t MAX_VECTORS = 10000;

    // Enhanced rendering support for future improvements
    // Note: Using Vector3D from starwars.h to avoid naming conflicts

    std::vector<Vector3D> m_vectors_3d;  // Enhanced vector buffer for modern rendering

    // State machine handlers (from MAME avg_starwars_device)
    int handler_0();
    int handler_1();
    int handler_2();
    int handler_3();
    int handler_4();
    int handler_5();
    int handler_6();  // Star Wars specific
    int handler_7();  // Star Wars specific

    // Common AVG functions
    int avg_common_strobe1();
    int avg_common_strobe2();
    int avg_common_strobe3();

    // Utility functions
    void update_databus();
    uint8_t state_addr();
    void vg_add_point_buf(int x, int y, uint8_t color, uint8_t intensity);
    void apply_flipping(int& x, int& y);

    // PROM microcode (would be loaded from ROM in real implementation)
    std::array<uint8_t, 256> m_prom;

    // System state
    bool m_initialized;
    bool m_running;

    // Modern rendering support
    void render_vectors_modern();
    void render_vectors_console();  // Fallback for testing

    // Simulation functions
    void simulate_vector_generation();

public:
    void update_avg_params(uint16_t pa, uint16_t pb, uint16_t avg_go);

    // Attract mode display methods
    void display_high_scores();
    void display_title_screen();
    void display_demo_sequence();
    void display_instructions();

    // Enhanced rendering methods for future improvements
    void add_vector_3d(const Vector3D& v);
    void render_frame_enhanced();                    // Enhanced rendering with depth sorting and transparency
    void render_with_occlusion();                    // Render with proper object occlusion
    void set_frame_rate(float fps);                  // Set target frame rate
    void enable_transparency(bool enable);           // Enable/disable transparency effects
};

} // namespace StarWars
