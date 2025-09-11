#pragma once

#include <cstdint>
#include <vector>
#include <memory>

namespace StarWars {

class VectorGraphics; // forward declaration

// CPU/runtime state structure (renamed to avoid clash with StarWars::GameState enum)
struct GameCpuState {
    uint8_t accumulator_a;
    uint8_t accumulator_b;
    uint16_t index_register_x;
    uint16_t index_register_y;
    uint16_t stack_pointer;
    uint16_t program_counter;
    
    // CPU flags
    bool zero_flag;
    bool negative_flag;
    bool carry_flag;
    bool overflow_flag;
    
    // Game variables
    uint32_t score;
    uint8_t shields;
    uint8_t lives;
    uint8_t wave;
    uint8_t level;
    
    // Input state
    uint8_t player_input;
    uint8_t coin_input;
    uint8_t start_input;
    
    // Game state
    bool game_running;
    bool game_paused;
    bool attract_mode;
};

// Local memory manager (renamed to avoid clash with existing MemoryManager)
class GameMemory {
private:
    std::vector<uint8_t> memory;
    
public:
    GameMemory() : memory(0x10000, 0) {}
    
    uint8_t read_byte(uint16_t address) const {
        return (address < memory.size()) ? memory[address] : 0;
    }
    
    void write_byte(uint16_t address, uint8_t value) {
        if (address < memory.size()) {
            memory[address] = value;
        }
    }
    
    uint16_t read_word(uint16_t address) const {
        return (read_byte(address) << 8) | read_byte(address + 1);
    }
    
    void write_word(uint16_t address, uint16_t value) {
        write_byte(address, value >> 8);
        write_byte(address + 1, value & 0xFF);
    }
};

// Main game class
class StarWarsGame {
private:
    GameCpuState game_state;
    GameMemory memory;
    std::unique_ptr<VectorGraphics> graphics;
    
public:
    StarWarsGame();
    ~StarWarsGame();
    
    // Main game functions (converted from 6809 assembly)
    void main_entry();           // 0xf261 - Main initialization
    void hardware_io_handler();  // 0xbd03 - I/O port handling
    void main_game_loop();       // 0x611e - Main game loop
    void stack_management();     // 0x70db - Stack management
    void mathbox_interface();    // 0x6161 - Mathbox interface
    void vector_graphics_control(); // 0x62d5 - Vector graphics
    void vector_subroutine_d91a();  // 0xd91a - Vector subroutine (placeholder)
    void rom_sub_cdb5();            // 0xCDB5 - ROM subroutine stub
    void rom_sub_cdba();            // 0xCDBA - ROM subroutine stub
    void graphics_initialization(); // 0xc6d4 - Graphics init
    void data_processing();      // 0x61b5 - Data processing
    
    // Game control
    void init();
    void reset();
    void update();
    void render();

    // Test harnesses for verifiable progress
    void run_vector_test_d91a();
    
    // Input handling
    void handle_input();
    void process_controls();
    
    // Game logic
    void update_game_state();
    void check_collisions();
    void update_score();
    void update_shields();
    
    // Getters
    const GameCpuState& get_game_state() const { return game_state; }
    const GameMemory& get_memory() const { return memory; }
    
};

} // namespace StarWars
