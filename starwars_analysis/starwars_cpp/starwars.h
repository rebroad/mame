#pragma once

#include <cstdint>
#include <array>
#include <vector>
#include <memory>
#include <string>

namespace StarWars {

// Forward declarations
class MemoryManager;
class InputSystem;
class VectorGraphics;
class Mathbox;
class SoundSystem;

// Hardware constants
constexpr uint32_t MASTER_CLOCK = 12096000;
constexpr uint32_t CPU_CLOCK = MASTER_CLOCK / 8;
constexpr uint32_t INTERRUPT_FREQ = 250; // 3kHz / 12

// Memory map constants
constexpr uint16_t RAM_START = 0x0000;
constexpr uint16_t RAM_END = 0x2FFF;
constexpr uint16_t VECTOR_ROM_START = 0x3000;
constexpr uint16_t VECTOR_ROM_END = 0x3FFF;
constexpr uint16_t IO_START = 0x4300;
constexpr uint16_t IO_END = 0x46FF;
constexpr uint16_t MATH_RAM_START = 0x4800;
constexpr uint16_t MATH_RAM_END = 0x5FFF;
constexpr uint16_t MAIN_ROM_START = 0x6000;
constexpr uint16_t MAIN_ROM_END = 0xFFFF;

// I/O Port addresses
constexpr uint16_t IN0_PORT = 0x4300;
constexpr uint16_t IN1_PORT = 0x4320;
constexpr uint16_t DSW0_PORT = 0x4340;
constexpr uint16_t DSW1_PORT = 0x4360;
constexpr uint16_t ADC_PORT = 0x4380;
constexpr uint16_t SOUND_LATCH_PORT = 0x4400;
constexpr uint16_t READY_FLAGS_PORT = 0x4401;
constexpr uint16_t NVRAM_PORT = 0x4500;
constexpr uint16_t AVG_GO_PORT = 0x4600;
constexpr uint16_t AVG_RESET_PORT = 0x4620;
constexpr uint16_t WATCHDOG_PORT = 0x4640;
constexpr uint16_t IRQ_ACK_PORT = 0x4660;
constexpr uint16_t OUTPUT_LATCH_PORT = 0x4680;
constexpr uint16_t NVRAM_STORE_PORT = 0x46A0;
constexpr uint16_t ADC_START_PORT = 0x46C0;
constexpr uint16_t SOUND_RESET_PORT = 0x46E0;
constexpr uint16_t MATHBOX_PORT = 0x4700;

// Input port bit definitions
namespace InputBits {
    constexpr uint8_t COIN2 = 0x01;
    constexpr uint8_t COIN1 = 0x02;
    constexpr uint8_t SERVICE1 = 0x04;
    constexpr uint8_t TILT = 0x08;
    constexpr uint8_t SERVICE = 0x10;
    constexpr uint8_t BUTTON4 = 0x40;
    constexpr uint8_t BUTTON1 = 0x80;
    
    constexpr uint8_t BUTTON3 = 0x10;
    constexpr uint8_t BUTTON2 = 0x20;
    constexpr uint8_t VG_HALT = 0x40;
    constexpr uint8_t MATH_RUN = 0x80;
}

// Output latch bit definitions
namespace OutputBits {
    constexpr uint8_t COIN1_COUNTER = 0x01;
    constexpr uint8_t COIN2_COUNTER = 0x02;
    constexpr uint8_t LED3 = 0x04;
    constexpr uint8_t LED2 = 0x08;
    constexpr uint8_t BANK_SWITCH = 0x10;
    constexpr uint8_t PRNG_RESET = 0x20;
    constexpr uint8_t LED1 = 0x40;
    constexpr uint8_t NVRAM_RECALL = 0x80;
}

// Mathbox operation constants are defined in mathbox.h

// 3D vector structure
struct Vector3D {
    float x, y, z;
    
    Vector3D() : x(0), y(0), z(0) {}
    Vector3D(float x, float y, float z) : x(x), y(y), z(z) {}
    
    Vector3D operator+(const Vector3D& other) const {
        return Vector3D(x + other.x, y + other.y, z + other.z);
    }
    
    Vector3D operator-(const Vector3D& other) const {
        return Vector3D(x - other.x, y - other.y, z - other.z);
    }
    
    Vector3D operator*(float scalar) const {
        return Vector3D(x * scalar, y * scalar, z * scalar);
    }
};

// 3D matrix structure
struct Matrix3D {
    float m[3][3];
    
    Matrix3D() {
        // Initialize to identity matrix
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                m[i][j] = (i == j) ? 1.0f : 0.0f;
            }
        }
    }
    
    Vector3D transform(const Vector3D& v) const {
        return Vector3D(
            m[0][0] * v.x + m[0][1] * v.y + m[0][2] * v.z,
            m[1][0] * v.x + m[1][1] * v.y + m[1][2] * v.z,
            m[2][0] * v.x + m[2][1] * v.y + m[2][2] * v.z
        );
    }
};

// Input state structure
struct InputState {
    bool coin1 = false;
    bool coin2 = false;
    bool service1 = false;
    bool service2 = false;
    bool tilt = false;
    bool button1 = false;
    bool button2 = false;
    bool button3 = false;
    bool button4 = false;
    uint8_t stick_x = 128;  // Center position
    uint8_t stick_y = 128;  // Center position
    uint8_t dip_switches[2] = {0, 0};
    bool vg_halt = false;
    bool math_run = false;
};

// Game state enumeration
enum class GameState {
    ATTRACT,
    PLAYING,
    PAUSED,
    GAME_OVER,
    HIGH_SCORE
};

// Main Star Wars hardware class
class StarWarsHardware {
public:
    StarWarsHardware();
    ~StarWarsHardware();
    
    // Initialization
    bool init();
    void reset();
    void shutdown();
    
    // Main execution
    void run();
    void update();
    void render();
    
    // Memory access
    uint8_t read_byte(uint16_t address);
    void write_byte(uint16_t address, uint8_t data);
    uint16_t read_word(uint16_t address);
    void write_word(uint16_t address, uint16_t data);
    
    // I/O operations
    uint8_t read_input_port(uint16_t port);
    void write_output_port(uint16_t port, uint8_t data);
    
    // Hardware control
    void irq_acknowledge();
    void watchdog_reset();
    void sound_reset();
    void avg_go();
    void avg_reset();
    
    // Mathbox operations
    void mathbox_write(uint8_t offset, uint8_t data);
    uint8_t mathbox_read(uint8_t offset);
    
    // Getters
    InputState get_input_state() const { return input_state; }
    GameState get_game_state() const { return current_state; }
    uint32_t get_frame_count() const { return frame_count; }
    
private:
    // Hardware components
    std::unique_ptr<MemoryManager> memory;
    std::unique_ptr<InputSystem> input;
    std::unique_ptr<VectorGraphics> graphics;
    std::unique_ptr<Mathbox> mathbox;
    std::unique_ptr<SoundSystem> sound;
    
    // Memory arrays
    std::array<uint8_t, 0x3000> ram;
    std::array<uint8_t, 0x1000> vector_rom;
    std::array<uint8_t, 0x2000> math_ram;
    std::array<uint8_t, 0x10000> main_rom;
    
    // System state
    InputState input_state;
    GameState current_state = GameState::ATTRACT;
    uint32_t frame_count = 0;
    float delta_time = 0.0f;
    
    // Hardware flags
    bool irq_pending = false;
    bool math_run = false;
    uint16_t bank_select = 0;
    
    // Timing
    uint64_t last_update_time = 0;
    uint64_t frame_start_time = 0;
    
    // Internal methods
    void update_timing();
    void handle_interrupts();
    void update_input();
    void update_game_logic();
    void update_graphics();
    void update_sound();
    
    // Memory mapping
    uint8_t* get_memory_pointer(uint16_t address);
    bool is_ram_address(uint16_t address);
    bool is_rom_address(uint16_t address);
    bool is_io_address(uint16_t address);
};

} // namespace StarWars
