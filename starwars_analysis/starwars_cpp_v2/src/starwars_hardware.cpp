#include "starwars_hardware.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstring>

namespace StarWars {

StarWarsHardware::StarWarsHardware()
    : m_running(false)
    , m_initialized(false)
    , m_input_port_0(0)
    , m_input_port_1(0)
    , m_dsw_0(0)
    , m_dsw_1(0)
    , m_adc_data(0)
    , m_sound_latch(0)
    , m_main_latch(0)
    , m_ready_flags(0)
    , m_output_latch(0)
    , m_avg_go(false)
    , m_avg_reset(false)
    , m_avg_halt(false)
    , m_mathbox_run(false)
    , m_mathbox_busy(false)
    , m_pc(0)
    , m_sp(0)
    , m_dp(0)
    , m_cc(0)
    , m_cpu(nullptr)  // Will be initialized in initialize()
{
    // Initialize memory arrays to zero
    m_ram.fill(0);
    m_vector_rom.fill(0);
    m_math_ram.fill(0);
    m_main_rom.fill(0);
    m_mathbox_regs.fill(0);
}

bool StarWarsHardware::initialize() {
    std::cout << "Initializing Star Wars Hardware..." << std::endl;

    // Load ROM files
    if (!load_rom_files()) {
        std::cerr << "Failed to load ROM files!" << std::endl;
        return false;
    }

    // Initialize memory map
    initialize_memory_map();

    // Setup I/O ports
    setup_io_ports();

    // Initialize CPU simulation
    m_cpu = std::make_unique<CPU6809Hardware>(this);
    m_cpu->reset();

    // Set PC to our validated main loop routine
    m_cpu->set_pc(0xA261);

    // Reset system to known state
    reset_system();

    m_initialized = true;
    std::cout << "Star Wars Hardware initialized successfully!" << std::endl;
    return true;
}

void StarWarsHardware::run() {
    if (!m_initialized) {
        std::cerr << "Hardware not initialized!" << std::endl;
        return;
    }

    m_running = true;
    std::cout << "Starting Star Wars hardware simulation..." << std::endl;

    // Main simulation loop
    while (m_running) {
        update_frame();

        // TODO: Add timing control
        // TODO: Add input handling
        // TODO: Add graphics rendering
    }
}

void StarWarsHardware::shutdown() {
    std::cout << "Shutting down Star Wars hardware..." << std::endl;
    m_running = false;
    m_initialized = false;
}

uint8_t StarWarsHardware::read_memory(uint16_t address) {
    if (is_ram_address(address)) {
        return m_ram[address];
    }
    else if (is_vector_rom_address(address)) {
        uint16_t rom_addr = address - 0x3000;
        return m_vector_rom[rom_addr];
    }
    else if (is_math_ram_address(address)) {
        uint16_t ram_addr = translate_math_ram_address(address);
        return m_math_ram[ram_addr];
    }
    else if (is_main_rom_address(address)) {
        uint16_t rom_addr = translate_rom_address(address);
        std::cout << "ROM read: 6809 addr=0x" << std::hex << std::setw(4) << std::setfill('0')
                  << address << " -> ROM offset=0x" << std::setw(4) << rom_addr << std::endl;
        return m_main_rom[rom_addr];
    }
    else if (is_io_port_address(address)) {
        return read_port(address);
    }

    // Default: return 0 for unmapped addresses
    std::cout << "Unmapped read: 0x" << std::hex << std::setw(4) << std::setfill('0')
              << address << std::endl;
    return 0;
}

void StarWarsHardware::write_memory(uint16_t address, uint8_t value) {
    if (is_ram_address(address)) {
        m_ram[address] = value;
    }
    else if (is_math_ram_address(address)) {
        uint16_t ram_addr = translate_math_ram_address(address);
        m_math_ram[ram_addr] = value;
    }
    else if (is_io_port_address(address)) {
        write_port(address, value);
    }
    // ROM regions are read-only, so writes are ignored
}

uint16_t StarWarsHardware::read_memory16(uint16_t address) {
    uint8_t low = read_memory(address);
    uint8_t high = read_memory(address + 1);
    return (static_cast<uint16_t>(high) << 8) | low;
}

void StarWarsHardware::write_memory16(uint16_t address, uint16_t value) {
    write_memory(address, value & 0xFF);
    write_memory(address + 1, (value >> 8) & 0xFF);
}

uint8_t StarWarsHardware::read_port(uint16_t address) {
    // Handle I/O port reads based on verified MAME traces
    switch (address & 0xFF00) {
        case 0x4300: // Input Port 0
            return m_input_port_0;

        case 0x4320: // Input Port 1
            return m_input_port_1;

        case 0x4340: // DSW0
            return m_dsw_0;

        case 0x4360: // DSW1
            return m_dsw_1;

        case 0x4380: // ADC
            return m_adc_data;

        case 0x4400: // Main latch (read)
            return m_main_latch;

        case 0x4401: // Ready flags
            return m_ready_flags;

        case 0x4700: // Mathbox registers
            {
                uint8_t reg = address & 0x07;
                return m_mathbox_regs[reg];
            }

        default:
            return 0;
    }
}

void StarWarsHardware::write_port(uint16_t address, uint8_t value) {
    process_io_write(address, value);
}

void StarWarsHardware::reset_system() {
    std::cout << "Resetting Star Wars hardware..." << std::endl;

    // Reset CPU state
    m_pc = 0;
    m_sp = 0x3000;  // Stack at top of RAM
    m_dp = 0;
    m_cc = 0x50;    // Default condition codes

    // Reset hardware state
    m_avg_go = false;
    m_avg_reset = false;
    m_avg_halt = false;
    m_mathbox_run = false;
    m_mathbox_busy = false;

    // Clear I/O ports
    m_input_port_0 = 0;
    m_input_port_1 = 0;
    m_dsw_0 = 0;
    m_dsw_1 = 0;
    m_adc_data = 0;
    m_sound_latch = 0;
    m_main_latch = 0;
    m_ready_flags = 0;
    m_output_latch = 0;

    // Clear mathbox registers
    m_mathbox_regs.fill(0);

    std::cout << "Hardware reset complete" << std::endl;
}

void StarWarsHardware::update_frame() {
    // Run CPU simulation for one frame
    run_cpu_step();
}

void StarWarsHardware::run_cpu_step() {
    if (m_cpu && m_cpu->is_running()) {
        m_cpu->step();

        // Stop the hardware if CPU stops
        if (!m_cpu->is_running()) {
            std::cout << "Hardware simulation stopped - CPU no longer running." << std::endl;
            m_running = false;
        }
    }
}

void StarWarsHardware::execute_main_loop() {
    // Execute the validated main loop routine at 0xA261
    std::cout << "Executing main game loop (0xA261)..." << std::endl;

    // Set PC to the main loop address
    m_cpu->set_pc(0xA261);

    // Run the main loop
    while (m_cpu->is_running() && m_running) {
        m_cpu->step();

        // TODO: Add frame timing control
        // TODO: Add input handling
        // TODO: Add graphics rendering
    }
}

bool StarWarsHardware::load_rom_files() {
    std::cout << "Loading ROM files..." << std::endl;

    // Load our processed complete memory map (CPU address space)
    std::ifstream memory_map("../complete_memory_map.bin", std::ios::binary);
    if (!memory_map) {
        std::cerr << "Failed to open complete_memory_map.bin!" << std::endl;
        return false;
    }
    
    // Read the complete memory map (64KB)
    memory_map.read(reinterpret_cast<char*>(m_main_rom.data()), MAIN_ROM_SIZE);
    if (memory_map.gcount() != MAIN_ROM_SIZE) {
        std::cerr << "Memory map file size mismatch! Expected " << MAIN_ROM_SIZE 
                  << ", got " << memory_map.gcount() << std::endl;
        return false;
    }

    // Load vector ROM (we'll use a placeholder for now)
    // TODO: Extract vector ROM from the original ROM set if needed
    m_vector_rom.fill(0);

    std::cout << "Complete memory map loaded successfully!" << std::endl;
    return true;
}

void StarWarsHardware::initialize_memory_map() {
    std::cout << "Initializing memory map..." << std::endl;

    // Memory map is already defined in the class
    // This method can be used for any additional setup
}

void StarWarsHardware::setup_io_ports() {
    std::cout << "Setting up I/O ports..." << std::endl;

    // Set default values for I/O ports
    m_dsw_0 = 0xFF;  // Default switch settings
    m_dsw_1 = 0xFF;
    m_ready_flags = 0x03;  // Both CPUs ready
}

void StarWarsHardware::process_io_write(uint16_t address, uint8_t value) {
    // Handle I/O port writes based on verified MAME traces
    switch (address & 0xFF00) {
        case 0x4400: // Sound latch (write)
            m_sound_latch = value;
            break;

        case 0x4600: // AVG GO command
            m_avg_go = true;
            break;

        case 0x4620: // AVG RESET command
            m_avg_reset = true;
            break;

        case 0x4680: // Output latch
            m_output_latch = value;
            break;

        case 0x4700: // Mathbox registers
            {
                uint8_t reg = address & 0x07;
                m_mathbox_regs[reg] = value;
                if (reg == 7) {  // Last register - trigger mathbox
                    m_mathbox_busy = true;
                }
            }
            break;
    }
}

void StarWarsHardware::process_io_read(uint16_t /* address */) {
    // Handle any side effects of I/O port reads
    // Most reads are simple, but some might have side effects
}

bool StarWarsHardware::is_ram_address(uint16_t address) const {
    return (address >= 0x0000 && address < 0x3000);
}

bool StarWarsHardware::is_vector_rom_address(uint16_t address) const {
    return (address >= 0x3000 && address < 0x4000);
}

bool StarWarsHardware::is_math_ram_address(uint16_t address) const {
    return (address >= 0x4800 && address < 0x5000);
}

bool StarWarsHardware::is_main_rom_address(uint16_t address) const {
    return (address >= 0x6000 && address < 0x8000) ||
           (address >= 0x8000 && address < 0xC000);
}

bool StarWarsHardware::is_io_port_address(uint16_t address) const {
    return (address >= 0x4300 && address < 0x4800) ||
           (address >= 0x4600 && address < 0x4800);
}

uint16_t StarWarsHardware::translate_rom_address(uint16_t address) const {
    // Translate 6809 memory address to ROM file offset based on MAME's memory map
    // MAME loads ROMs starting at ROM region offset 0x6000
    // Then maps 0x8000-0xFFFF to the ROM region
    
    if (address >= 0x6000 && address < 0x8000) {
        // Map 0x6000-0x7FFF to ROM file offset 0x0000-0x1FFF (ROM 0)
        return address - 0x6000;
    }
    else if (address >= 0x8000 && address <= 0xFFFF) {
        // Map 0x8000-0xFFFF to ROM file offset (address - 0x6000)
        // This accounts for MAME's ROM loading starting at 0x6000
        return address - 0x6000;
    }
    
    return 0; // Default fallback
}

uint16_t StarWarsHardware::translate_math_ram_address(uint16_t address) const {
    // Translate 6809 memory address to math RAM offset
    if (address >= 0x4800 && address < 0x5000) {
        return address - 0x4800;
    }
    return 0;
}

} // namespace StarWars
