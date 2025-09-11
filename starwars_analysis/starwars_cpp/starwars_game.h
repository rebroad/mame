#pragma once

#include <cstdint>
#include <vector>
#include <memory>
#include <fstream>

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
    // TODO: Remove once real AVG interpreter is in place
    uint16_t last_param_a = 0;
    uint16_t last_param_b = 0;
    uint16_t last_div_ctrl = 0;
    uint32_t avg_trigger_count = 0;       // TODO: Temporary counter for AVG writes (test scaffolding)
    uint32_t last_avg_trigger_seen = 0;   // TODO: Temporary render gating based on AVG writes

    void avg_trigger(uint16_t value);     // TODO: Temporary helper to track writes to $4701

    // TODO: tracing (temporary): log writes to AVG/math params for verification
    std::ofstream trace_file;
    void open_trace_if_needed();
    void trace_params(const char* tag);
    void trace_params_pc(const char* tag, uint16_t pc_tag); // NEW: PC-tagged CSV for alignment (TODO: replace with real PC)

    // TODO: Temporary AVG buffer/Y-pointer simulation for STD ,Y++ writes
    uint16_t avg_y_ptr = 0; // unknown init; used for relative increment tracking only
    std::vector<uint16_t> avg_buffer_words;
    void avg_std_ypp(uint16_t value); // simulate STD ,Y++ by buffering 16-bit words
    bool did_pre611e = false; // NEW TEMP: run minimal $611E once for alignment
    void rom_sub_611e_minimal(); // NEW TEMP: minimal $611E/$6161 path for alignment
    
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
    void rom_sub_indirect_at_x(uint16_t addr); // TODO: placeholder for JSR ,X semantics
    void rom_sub_cdc3();            // 0xCDC3 - ROM subroutine stub
    void rom_sub_cd9e();            // 0xCD9E - ROM subroutine stub
    void rom_jump_b95c();           // 0xB95C - ROM jump stub (control flow)
    void rom_sub_ce24();            // 0xCE24 - ROM subroutine stub (TODO)
    void rom_sub_6ea2();            // 0x6EA2 - ROM subroutine stub (TODO)
    void rom_sub_70bd();            // 0x70BD - ROM subroutine stub (TODO)
    void rom_sub_70cc();            // 0x70CC - ROM subroutine stub (TODO)
    void rom_sub_cd14();            // 0xCD14 - ROM subroutine stub (TODO)
    void rom_sub_cd2c();            // 0xCD2C - ROM subroutine stub (TODO)
    void rom_sub_bd5d();            // 0xBD5D - ROM subroutine stub (TODO)
    void rom_sub_bd2b();            // 0xBD2B - ROM subroutine stub (TODO)
    void rom_sub_bd1c();            // 0xBD1C - ROM subroutine stub (TODO)
    void graphics_initialization(); // 0xc6d4 - Graphics init
    void data_processing();      // 0x61b5 - Data processing
    
    // Game control
    void init();
    void reset();
    void update();
    void render();

    // Test harnesses for verifiable progress
    void run_vector_test_d91a();
    
private:
    uint32_t checksum_region(uint16_t start, uint16_t end) const;
    
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
