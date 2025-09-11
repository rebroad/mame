#pragma once

#include <cstdint>
#include <array>
#include <vector>
#include <memory>
#include <string>

namespace StarWars {

/**
 * Star Wars Arcade Hardware Abstraction Layer
 * 
 * Based on verified analysis of:
 * - MAME source code (starwars.h, starwars.cpp)
 * - Actual ROM disassembly (validated routines)
 * - Hardware I/O traces (MAME debug output)
 * - Memory mapping (6809 address space)
 */
class StarWarsHardware {
public:
    // Constructor/Destructor
    StarWarsHardware();
    ~StarWarsHardware() = default;

    // Core system methods
    bool initialize();
    void run();
    void shutdown();

    // Memory access methods
    uint8_t read_memory(uint16_t address);
    void write_memory(uint16_t address, uint8_t value);
    uint16_t read_memory16(uint16_t address);
    void write_memory16(uint16_t address, uint16_t value);

    // I/O port methods
    uint8_t read_port(uint16_t address);
    void write_port(uint16_t address, uint8_t value);

    // Hardware control methods
    void reset_system();
    void update_frame();
    bool is_running() const { return m_running; }

private:
    // Memory regions (verified from MAME source)
    static constexpr size_t RAM_SIZE = 0x3000;           // 12KB RAM
    static constexpr size_t VECTOR_ROM_SIZE = 256;       // 256 bytes AVG PROM
    static constexpr size_t MATH_RAM_SIZE = 0x1000;      // 4KB Math RAM
    static constexpr size_t MAIN_ROM_SIZE = 0x4000;      // 16KB Main ROM

    // Memory arrays
    std::array<uint8_t, RAM_SIZE> m_ram;
    std::array<uint8_t, VECTOR_ROM_SIZE> m_vector_rom;
    std::array<uint8_t, MATH_RAM_SIZE> m_math_ram;
    std::array<uint8_t, MAIN_ROM_SIZE> m_main_rom;

    // Hardware state
    bool m_running;
    bool m_initialized;
    
    // I/O port state (verified addresses from MAME traces)
    uint8_t m_input_port_0;      // 0x4300-0x431F
    uint8_t m_input_port_1;      // 0x4320-0x433F
    uint8_t m_dsw_0;             // 0x4340-0x435F
    uint8_t m_dsw_1;             // 0x4360-0x437F
    uint8_t m_adc_data;          // 0x4380-0x439F
    uint8_t m_sound_latch;       // 0x4400
    uint8_t m_main_latch;        // 0x4400 (read)
    uint8_t m_ready_flags;       // 0x4401
    uint8_t m_output_latch;      // 0x4680-0x4687

    // AVG (Atari Vector Generator) state
    bool m_avg_go;               // 0x4600-0x461F
    bool m_avg_reset;            // 0x4620-0x463F
    bool m_avg_halt;             // From input port 1

    // Mathbox state
    std::array<uint8_t, 8> m_mathbox_regs;  // 0x4700-0x4707
    bool m_mathbox_run;          // From input port 1
    bool m_mathbox_busy;

    // System state
    uint16_t m_pc;               // Program counter
    uint16_t m_sp;               // Stack pointer
    uint8_t m_dp;                // Direct page register
    uint8_t m_cc;                // Condition codes

    // Internal methods
    bool load_rom_files();
    void initialize_memory_map();
    void setup_io_ports();
    void process_io_write(uint16_t address, uint8_t value);
    void process_io_read(uint16_t address);
    
    // Memory mapping helpers
    bool is_ram_address(uint16_t address) const;
    bool is_vector_rom_address(uint16_t address) const;
    bool is_math_ram_address(uint16_t address) const;
    bool is_main_rom_address(uint16_t address) const;
    bool is_io_port_address(uint16_t address) const;
    
    // Address translation
    uint16_t translate_rom_address(uint16_t address) const;
    uint16_t translate_math_ram_address(uint16_t address) const;
};

} // namespace StarWars
