#include "starwars.h"
#include "memory_manager.h"
#include "input_system.h"
#include "vector_graphics.h"
#include "mathbox.h"
#include "sound_system.h"
#include <iostream>
#include <chrono>
#include <cstring>

namespace StarWars {

StarWarsHardware::StarWarsHardware() {
    // Initialize memory arrays
    ram.fill(0);
    vector_rom.fill(0);
    math_ram.fill(0);
    main_rom.fill(0);
    
    // Initialize timing
    last_update_time = std::chrono::high_resolution_clock::now().time_since_epoch().count();
    frame_start_time = last_update_time;
}

StarWarsHardware::~StarWarsHardware() {
    shutdown();
}

bool StarWarsHardware::init() {
    std::cout << "Initializing Star Wars hardware..." << std::endl;
    
    try {
        // Initialize hardware components
        memory = std::make_unique<MemoryManager>(this);
        input = std::make_unique<InputSystem>();
        graphics = std::make_unique<VectorGraphics>();
        mathbox = std::make_unique<Mathbox>();
        sound = std::make_unique<SoundSystem>();
        
        // Load ROM data (would be loaded from files in real implementation)
        // For now, we'll use the analyzed ROM data
        std::cout << "Loading ROM data..." << std::endl;
        
        // Initialize system state
        current_state = GameState::ATTRACT;
        frame_count = 0;
        delta_time = 0.0f;
        
        // Reset hardware
        reset();
        
        std::cout << "Star Wars hardware initialized successfully!" << std::endl;
        return true;
        
    } catch (const std::exception& e) {
        std::cerr << "Failed to initialize Star Wars hardware: " << e.what() << std::endl;
        return false;
    }
}

void StarWarsHardware::reset() {
    std::cout << "Resetting Star Wars hardware..." << std::endl;
    
    // Reset memory
    ram.fill(0);
    math_ram.fill(0);
    
    // Reset hardware flags
    irq_pending = false;
    math_run = false;
    bank_select = 0;
    
    // Reset input state
    input_state = InputState();
    
    // Reset game state
    current_state = GameState::ATTRACT;
    frame_count = 0;
    
    // Reset hardware components
    if (graphics) graphics->reset();
    if (mathbox) mathbox->reset();
    if (sound) sound->reset();
    
    std::cout << "Hardware reset complete." << std::endl;
}

void StarWarsHardware::shutdown() {
    std::cout << "Shutting down Star Wars hardware..." << std::endl;
    
    // Clean up hardware components
    memory.reset();
    input.reset();
    graphics.reset();
    mathbox.reset();
    sound.reset();
    
    std::cout << "Shutdown complete." << std::endl;
}

void StarWarsHardware::run() {
    std::cout << "Starting Star Wars main loop..." << std::endl;
    
    bool running = true;
    while (running) {
        update();
        render();
        
        // Simple exit condition for now
        // In a real implementation, this would be controlled by the window system
        if (frame_count > 1000) {
            running = false;
        }
    }
    
    std::cout << "Star Wars main loop ended." << std::endl;
}

void StarWarsHardware::update() {
    update_timing();
    handle_interrupts();
    update_input();
    update_game_logic();
    update_graphics();
    update_sound();
    
    frame_count++;
}

void StarWarsHardware::render() {
    if (graphics) {
        graphics->render_frame();
    }
}

uint8_t StarWarsHardware::read_byte(uint16_t address) {
    uint8_t* ptr = get_memory_pointer(address);
    if (ptr) {
        return *ptr;
    }
    
    // Default return for unmapped addresses
    return 0xFF;
}

void StarWarsHardware::write_byte(uint16_t address, uint8_t data) {
    uint8_t* ptr = get_memory_pointer(address);
    if (ptr) {
        *ptr = data;
    }
}

uint16_t StarWarsHardware::read_word(uint16_t address) {
    uint8_t low = read_byte(address);
    uint8_t high = read_byte(address + 1);
    return (high << 8) | low;
}

void StarWarsHardware::write_word(uint16_t address, uint16_t data) {
    write_byte(address, data & 0xFF);
    write_byte(address + 1, (data >> 8) & 0xFF);
}

uint8_t StarWarsHardware::read_input_port(uint16_t port) {
    switch (port) {
        case IN0_PORT:
            return (input_state.coin2 ? 0 : InputBits::COIN2) |
                   (input_state.coin1 ? 0 : InputBits::COIN1) |
                   (input_state.service1 ? 0 : InputBits::SERVICE1) |
                   (input_state.tilt ? 0 : InputBits::TILT) |
                   (input_state.service1 ? 0 : InputBits::SERVICE) |
                   (input_state.button4 ? 0 : InputBits::BUTTON4) |
                   (input_state.button1 ? 0 : InputBits::BUTTON1);
                   
        case IN1_PORT:
            return (input_state.button3 ? 0 : InputBits::BUTTON3) |
                   (input_state.button2 ? 0 : InputBits::BUTTON2) |
                   (input_state.vg_halt ? InputBits::VG_HALT : 0) |
                   (input_state.math_run ? InputBits::MATH_RUN : 0);
                   
        case DSW0_PORT:
            return input_state.dip_switches[0];
            
        case DSW1_PORT:
            return input_state.dip_switches[1];
            
        case ADC_PORT:
            // Return analog stick values
            return input_state.stick_x;
            
        case READY_FLAGS_PORT:
            return (math_run ? 0x80 : 0) | (irq_pending ? 0x40 : 0);
            
        default:
            return 0xFF;
    }
}

void StarWarsHardware::write_output_port(uint16_t port, uint8_t data) {
    switch (port) {
        case AVG_GO_PORT:
            avg_go();
            break;
            
        case AVG_RESET_PORT:
            avg_reset();
            break;
            
        case WATCHDOG_PORT:
            watchdog_reset();
            break;
            
        case IRQ_ACK_PORT:
            irq_acknowledge();
            break;
            
        case OUTPUT_LATCH_PORT:
            // Handle output latch bits
            if (data & OutputBits::COIN1_COUNTER) {
                // Coin counter 1
            }
            if (data & OutputBits::COIN2_COUNTER) {
                // Coin counter 2
            }
            if (data & OutputBits::BANK_SWITCH) {
                bank_select = (data & 0x01) ? 1 : 0;
            }
            if (data & OutputBits::PRNG_RESET) {
                // Reset pseudo-random number generator
            }
            if (data & OutputBits::NVRAM_RECALL) {
                // Recall NVRAM data
            }
            break;
            
        case SOUND_RESET_PORT:
            sound_reset();
            break;
            
        case MATHBOX_PORT:
            mathbox_write(0, data);
            break;
            
        default:
            break;
    }
}

void StarWarsHardware::irq_acknowledge() {
    irq_pending = false;
}

void StarWarsHardware::watchdog_reset() {
    // Watchdog reset - in a real implementation, this would reset the system
    // if not called within a certain time period
}

void StarWarsHardware::sound_reset() {
    if (sound) {
        sound->reset();
    }
}

void StarWarsHardware::avg_go() {
    if (graphics) {
        graphics->go();
    }
}

void StarWarsHardware::avg_reset() {
    if (graphics) {
        graphics->reset();
    }
}

void StarWarsHardware::mathbox_write(uint8_t offset, uint8_t data) {
    if (mathbox) {
        mathbox->write(offset, data);
    }
}

uint8_t StarWarsHardware::mathbox_read(uint8_t offset) {
    if (mathbox) {
        return mathbox->read(offset);
    }
    return 0;
}

void StarWarsHardware::update_timing() {
    auto current_time = std::chrono::high_resolution_clock::now().time_since_epoch().count();
    delta_time = (current_time - last_update_time) / 1000000000.0f; // Convert to seconds
    last_update_time = current_time;
}

void StarWarsHardware::handle_interrupts() {
    // Handle 250Hz periodic interrupt
    static uint32_t interrupt_counter = 0;
    interrupt_counter++;
    
    if (interrupt_counter >= (CPU_CLOCK / INTERRUPT_FREQ)) {
        interrupt_counter = 0;
        irq_pending = true;
    }
}

void StarWarsHardware::update_input() {
    if (input) {
        input_state = input->get_input_state();
    }
}

void StarWarsHardware::update_game_logic() {
    // Update game logic based on current state
    switch (current_state) {
        case GameState::ATTRACT:
            // Attract mode logic
            break;
            
        case GameState::PLAYING:
            // Game play logic
            break;
            
        case GameState::PAUSED:
            // Paused state logic
            break;
            
        case GameState::GAME_OVER:
            // Game over logic
            break;
            
        case GameState::HIGH_SCORE:
            // High score logic
            break;
    }
}

void StarWarsHardware::update_graphics() {
    if (graphics) {
        graphics->update();
    }
}

void StarWarsHardware::update_sound() {
    if (sound) {
        sound->update();
    }
}

uint8_t* StarWarsHardware::get_memory_pointer(uint16_t address) {
    if (is_ram_address(address)) {
        return &ram[address - RAM_START];
    }
    else if (is_rom_address(address)) {
        if (address >= VECTOR_ROM_START && address <= VECTOR_ROM_END) {
            return &vector_rom[address - VECTOR_ROM_START];
        }
        else if (address >= MAIN_ROM_START && address <= MAIN_ROM_END) {
            return &main_rom[address - MAIN_ROM_START];
        }
    }
    else if (address >= MATH_RAM_START && address <= MATH_RAM_END) {
        return &math_ram[address - MATH_RAM_START];
    }
    
    return nullptr;
}

bool StarWarsHardware::is_ram_address(uint16_t address) {
    return address >= RAM_START && address <= RAM_END;
}

bool StarWarsHardware::is_rom_address(uint16_t address) {
    return (address >= VECTOR_ROM_START && address <= VECTOR_ROM_END) ||
           (address >= MAIN_ROM_START && address <= MAIN_ROM_END);
}

bool StarWarsHardware::is_io_address(uint16_t address) {
    return address >= IO_START && address <= IO_END;
}

} // namespace StarWars
