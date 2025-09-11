#include "vector_graphics.h"
#include "starwars.h"
#include <iostream>
#include <algorithm>
#include <fstream>
#include <map>

namespace StarWars {

VectorGraphics::VectorGraphics() {
    // Initialize AVG state machine
    m_pc = 0;
    m_sp = 0;
    m_dvx = m_dvy = 0;
    m_stack[0] = m_stack[1] = m_stack[2] = m_stack[3] = 0;
    m_data = 0;

    m_state_latch = 0;
    m_scale = 0;
    m_intensity = 0;
    m_color = 0;
    m_op = 0;
    m_halt = 0;
    m_sync_halt = 0;

    m_xpos = m_ypos = 0;

    // AVG specific registers
    m_dvy12 = 0;
    m_timer = 0;
    m_int_latch = 0;
    m_bin_scale = 0;
    m_color_latch = 0;

    // Initialize PROM (would load from ROM in real implementation)
    m_prom.fill(0);

    m_initialized = false;
    m_running = false;
}

VectorGraphics::~VectorGraphics() {
}

void VectorGraphics::init() {
    std::cout << "Initializing Vector Graphics (AVG)..." << std::endl;

    // Load PROM data (in real implementation, this would load from ROM files)
    // For now, initialize with some basic patterns
    for (int i = 0; i < 256; i++) {
        m_prom[i] = i & 0xFF;
    }

    m_initialized = true;
    std::cout << "Vector Graphics initialized successfully!" << std::endl;
}

void VectorGraphics::reset() {
    std::cout << "Resetting Vector Graphics..." << std::endl;

    // Reset AVG state machine
    m_pc = 0;
    m_sp = 0;
    m_dvx = m_dvy = 0;
    m_data = 0;

    m_state_latch = 0;
    m_scale = 0;
    m_intensity = 0;
    m_color = 0;
    m_op = 0;
    m_halt = 0;
    m_sync_halt = 0;

    m_xpos = m_ypos = 0;

    // Clear vector buffer
    m_vectors.clear();

    m_running = false;
}

void VectorGraphics::go() {
    if (!m_initialized) {
        std::cerr << "Vector Graphics not initialized!" << std::endl;
        return;
    }

    std::cout << "Starting AVG vector generation..." << std::endl;
    m_running = true;
    m_halt = 0;

    // Start the AVG state machine
    // In a real implementation, this would run the PROM microcode
    // For now, we'll simulate some basic vector generation
    simulate_vector_generation();
}

void VectorGraphics::update() {
    if (!m_running) return;

    // Update AVG state machine
    // This would normally process PROM microcode
    // For now, we'll just maintain the current state
}

void VectorGraphics::render_frame() {
    if (m_vectors.empty()) return;

    // Render vectors using modern graphics or console fallback
    #ifdef ENABLE_OPENGL
    render_vectors_modern();
    #else
    render_vectors_console();
    #endif
}

void VectorGraphics::write_vectors_csv(const char* path, int frame_index) {
    // NEW: Dump current vectors to CSV for diffing
    std::ofstream f(path, std::ios::app);
    if (!f.is_open()) return; // TODO: report error
    for (const auto &v : m_vectors) {
        f << frame_index << "," << v.x << "," << v.y << ","
          << static_cast<int>(v.color) << "," << static_cast<int>(v.intensity)
          << "," << (v.visible ? 1 : 0) << "\n";
    }
}

void VectorGraphics::go_w(uint8_t data) {
    (void)data; // TODO: data semantics when wiring real AVG commands
    go();
}

void VectorGraphics::reset_w(uint8_t data) {
    (void)data; // TODO: data semantics when wiring real AVG reset behavior
    reset();
}

int VectorGraphics::done_r() {
    return m_halt ? 1 : 0;
}

void VectorGraphics::add_vector(const Vector& v) {
    if (m_vectors.size() < MAX_VECTORS) {
        m_vectors.push_back(v);
    }
}

void VectorGraphics::clear_vectors() {
    m_vectors.clear();
}

// Star Wars specific handlers (from MAME avg_starwars_device)
int VectorGraphics::handler_6() {
    // Star Wars strobe2 handler
    if (!(m_op & 0x04) && !m_dvy12) {
        m_intensity = m_dvy & 0xff;
        m_color = (m_dvy >> 8) & 0xf;
    }

    return avg_common_strobe2();
}

int VectorGraphics::handler_7() {
    // Star Wars strobe3 handler
    const int cycles = avg_common_strobe3();

    if (!(m_op & 0x01) && !(m_op & 0x04)) {
        vg_add_point_buf(
            m_xpos,
            m_ypos,
            m_color,
            ((m_int_latch >> 1) * m_intensity) >> 3);
    }

    return cycles;
}

// Common AVG functions (simplified implementations)
int VectorGraphics::avg_common_strobe1() {
    // Common strobe1 handler
    return 1; // Return cycle count
}

int VectorGraphics::avg_common_strobe2() {
    // Common strobe2 handler
    return 1; // Return cycle count
}

int VectorGraphics::avg_common_strobe3() {
    // Common strobe3 handler
    return 1; // Return cycle count
}

void VectorGraphics::update_databus() {
    // Update data bus from memory
    // In a real implementation, this would read from the memory space
    m_data = m_prom[m_pc & 0xFF];
}

uint8_t VectorGraphics::state_addr() {
    // Calculate state address
    return m_state_latch & 0x07;
}

void VectorGraphics::vg_add_point_buf(int x, int y, uint8_t color, uint8_t intensity) {
    // Add point to vector buffer
    Vector v(x, y, color, intensity, true);
    add_vector(v);
}

void VectorGraphics::apply_flipping(int& x, int& y) {
    (void)x; (void)y; // TODO: implement flipping if hardware config requires it
    // Apply coordinate flipping (if enabled)
}

void VectorGraphics::render_vectors_modern() {
    // Modern OpenGL/Vulkan rendering
    // This would use the modern graphics API
    std::cout << "Rendering " << m_vectors.size() << " vectors with modern graphics..." << std::endl;
}

void VectorGraphics::render_vectors_console() {
    // Console fallback rendering for testing
    if (m_vectors.empty()) return;

    std::cout << "=== Vector Graphics Frame ===" << std::endl;
    std::cout << "Vectors: " << m_vectors.size() << std::endl;

    // Show first few vectors
    int count = std::min(static_cast<int>(m_vectors.size()), 10);
    for (int i = 0; i < count; i++) {
        const Vector& v = m_vectors[i];
        std::cout << "  Vector " << i << ": (" << v.x << ", " << v.y
                  << ") color=" << static_cast<int>(v.color)
                  << " intensity=" << static_cast<int>(v.intensity) << std::endl;
    }

    if (m_vectors.size() > 10) {
        std::cout << "  ... and " << (m_vectors.size() - 10) << " more vectors" << std::endl;
    }
    std::cout << "=============================" << std::endl;
}

void VectorGraphics::simulate_vector_generation() {
    // Simulate vector generation based on AVG parameters
    // This is a simplified version that responds to the actual parameters being written

    // Clear previous vectors for this frame
    m_vectors.clear();

    // Generate vectors based on current AVG state
    // For now, create simple patterns based on the parameters
    // TODO: Implement full AVG microcode interpretation

    // Generate a basic line from (0,0) to a point based on the parameters
    int end_x = (m_dvx & 0x7FFF) % 1024;  // Use DVX parameter for X coordinate
    int end_y = (m_dvy & 0x7FFF) % 1024;  // Use DVY parameter for Y coordinate

    // Ensure coordinates are within valid range
    if (end_x > 1023) end_x = 1023;
    if (end_y > 1023) end_y = 1023;

    // Add the vector line
    add_vector(Vector(0, 0, m_color, m_intensity));      // Start point
    add_vector(Vector(end_x, end_y, m_color, m_intensity)); // End point

    std::cout << "Generated vector: (0,0) to (" << end_x << "," << end_y << ") color=" << static_cast<int>(m_color) << " intensity=" << static_cast<int>(m_intensity) << std::endl;
}

void VectorGraphics::update_avg_params(uint16_t pa, uint16_t pb, uint16_t avg_go) {
    // Update AVG parameters from memory values
    // This is a simplified interpretation of the AVG parameter format

    // PA and PB contain vector data (simplified interpretation)
    m_dvx = pa;  // X component of vector
    m_dvy = pb;  // Y component of vector

    // AVG_GO contains control information
    // Bit 0: GO bit (trigger vector generation)
    // Bits 1-3: Color
    // Bits 4-7: Intensity
    if (avg_go & 0x01) {
        // GO bit is set - trigger vector generation
        m_color = static_cast<uint8_t>((avg_go >> 1) & 0x07);
        m_intensity = static_cast<uint8_t>((avg_go >> 4) & 0x0F) << 4; // Scale to 0-255

        // Generate vectors based on the new parameters
        simulate_vector_generation();
    }
}

// GUESSWORK/LOGICAL DEDUCTION: Attract mode display methods
// These are NOT from disassembly - they are logical placeholders for attract mode functionality
// TODO: Replace with actual attract mode vector data from ROM analysis
void VectorGraphics::display_high_scores() {
    // GUESSWORK: Display high scores in attract mode
    m_vectors.clear();
    add_vector(Vector(100, 100, 1, 255));  // "HIGH SCORES" - GUESSWORK
    add_vector(Vector(200, 100, 1, 255));
    std::cout << "Displaying high scores" << std::endl;
}

void VectorGraphics::display_title_screen() {
    // GUESSWORK: Display game title screen
    m_vectors.clear();
    add_vector(Vector(200, 200, 2, 255));  // "STAR WARS" - GUESSWORK
    add_vector(Vector(400, 200, 2, 255));
    std::cout << "Displaying title screen" << std::endl;
}

void VectorGraphics::display_demo_sequence() {
    // GUESSWORK: Display demo gameplay sequence
    m_vectors.clear();
    add_vector(Vector(300, 300, 3, 200));  // Demo X-Wing - GUESSWORK
    add_vector(Vector(350, 300, 3, 200));
    std::cout << "Displaying demo sequence" << std::endl;
}

void VectorGraphics::display_instructions() {
    // GUESSWORK: Display game instructions
    m_vectors.clear();
    add_vector(Vector(150, 400, 4, 150));  // Instructions - GUESSWORK
    add_vector(Vector(450, 400, 4, 150));
    std::cout << "Displaying instructions" << std::endl;
}

// Enhanced rendering methods for future improvements
void VectorGraphics::add_vector_3d(const Vector3D& v) {
    if (m_vectors_3d.size() < MAX_VECTORS) {
        m_vectors_3d.push_back(v);
    }
}

void VectorGraphics::render_frame_enhanced() {
    // Enhanced rendering with depth sorting and transparency support
    // This is the foundation for implementing proper object occlusion

    if (m_vectors_3d.empty()) {
        // Fall back to original rendering if no 3D vectors
        render_frame();
        return;
    }

    // 1. Sort vectors by depth (Z coordinate) for proper rendering order
    std::sort(m_vectors_3d.begin(), m_vectors_3d.end(),
        [](const Vector3D& a, const Vector3D& b) {
            return a.z < b.z;  // Back to front rendering
        });

    // 2. Group vectors by object for occlusion testing
    std::map<uint16_t, std::vector<Vector3D*>> objects;
    for (auto& vec : m_vectors_3d) {
        objects[vec.object_id].push_back(&vec);
    }

    // 3. Render with proper object occlusion
    std::cout << "Enhanced rendering: " << m_vectors_3d.size() << " vectors, " << objects.size() << " objects" << std::endl;

    for (auto& [object_id, vectors] : objects) {
        bool is_opaque = vectors[0]->opaque;
        std::cout << "Object " << object_id << " (" << vectors.size() << " vectors, "
                  << (is_opaque ? "opaque" : "transparent") << ")" << std::endl;

        // TODO: Implement actual rendering with occlusion testing
        // For now, just log the structure
        for (auto* vec : vectors) {
            std::cout << "  Vector: (" << vec->x << "," << vec->y << "," << vec->z
                      << ") color=" << static_cast<int>(vec->color)
                      << " intensity=" << static_cast<int>(vec->intensity) << std::endl;
        }
    }
}

void VectorGraphics::render_with_occlusion() {
    // Render with proper object occlusion (towers block objects behind them)
    // This addresses the transparency issue you mentioned

    std::cout << "Rendering with object occlusion..." << std::endl;

    // Group vectors by object type
    std::map<uint16_t, std::vector<Vector3D*>> objects;
    for (auto& vec : m_vectors_3d) {
        objects[vec.object_id].push_back(&vec);
    }

    // Render opaque objects first (towers, ships)
    for (auto& [object_id, vectors] : objects) {
        if (vectors[0]->opaque) {
            std::cout << "Rendering opaque object " << object_id << " (" << vectors.size() << " vectors)" << std::endl;
            // TODO: Render opaque object vectors
        }
    }

    // Then render transparent objects (particles, effects) with alpha blending
    for (auto& [object_id, vectors] : objects) {
        if (!vectors[0]->opaque) {
            std::cout << "Rendering transparent object " << object_id << " (" << vectors.size() << " vectors)" << std::endl;
            // TODO: Render transparent object vectors with alpha blending
        }
    }
}

void VectorGraphics::set_frame_rate(float fps) {
    // Set target frame rate for smooth gameplay
    std::cout << "Setting target frame rate to " << fps << " FPS" << std::endl;

    // TODO: Implement frame rate limiting
    // This would integrate with the main game loop timing
}

void VectorGraphics::enable_transparency(bool enable) {
    // Enable/disable transparency effects
    std::cout << "Transparency effects " << (enable ? "enabled" : "disabled") << std::endl;

    // TODO: Implement transparency toggle
    // This would affect how vectors are rendered
}

// Placeholder implementations for other handlers
int VectorGraphics::handler_0() { return 1; }
int VectorGraphics::handler_1() { return 1; }
int VectorGraphics::handler_2() { return 1; }
int VectorGraphics::handler_3() { return 1; }
int VectorGraphics::handler_4() { return 1; }
int VectorGraphics::handler_5() { return 1; }

} // namespace StarWars
