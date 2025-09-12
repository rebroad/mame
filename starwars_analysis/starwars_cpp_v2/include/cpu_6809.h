#pragma once

#include <cstdint>
#include <array>

namespace StarWars {

/**
 * Motorola 6809E CPU Simulation
 * 
 * This class simulates the 6809E CPU used in the Star Wars arcade game.
 * It provides the core instruction execution engine needed to run
 * the validated ROM routines we've disassembled.
 */
// Forward declaration for friend class
class StarWarsCPU;

class CPU6809 {
    friend class StarWarsCPU;
public:
    // Constructor/Destructor
    CPU6809();
    ~CPU6809() = default;

    // Core CPU methods
    void reset();
    void step();
    bool is_running() const { return m_running; }
    
    // Register access
    uint16_t get_pc() const { return m_pc; }
    uint16_t get_sp() const { return m_sp; }
    uint8_t get_dp() const { return m_dp; }
    uint8_t get_cc() const { return m_cc; }
    
    void set_pc(uint16_t pc) { m_pc = pc; }
    void set_sp(uint16_t sp) { m_sp = sp; }
    void set_dp(uint8_t dp) { m_dp = dp; }
    void set_cc(uint8_t cc) { m_cc = cc; }

    // Memory access (delegated to hardware)
    virtual uint8_t read_memory(uint16_t /* address */) { return 0; }
    virtual void write_memory(uint16_t /* address */, uint8_t /* value */) { }
    virtual uint16_t read_memory16(uint16_t /* address */) { return 0; }
    virtual void write_memory16(uint16_t /* address */, uint16_t /* value */) { }

    // Instruction execution
    void execute_instruction();
    
    // Native routine execution (address-perfect C++ implementations)
    void execute_at_address(uint16_t address);
    
    // ROM routine implementations (generated from disassembly)
    void routine_e790();  // Address 0xE790
    void routine_e7c7();  // Address 0xE7C7
    void routine_f261();  // Address 0xF261 (main game loop)
    void routine_f36f();  // Address 0xF36F
    void routine_f70d();  // Address 0xF70D
    void routine_f714();  // Address 0xF714
    void routine_f720();  // Address 0xF720
    void routine_f86c();  // Address 0xF86C
    void routine_fb38();  // Address 0xFB38
    void routine_fb74();  // Address 0xFB74
    void routine_fd07();  // Address 0xFD07
    void routine_feff();  // Address 0xFEFF
    void routine_ff24();  // Address 0xFF24
    
    // Debugging
    void print_state() const;
    void print_instruction(uint16_t address) const;

protected:
    // CPU registers (protected for wrapper access)
    uint16_t m_pc;               // Program counter
    uint16_t m_sp;               // Stack pointer
    uint16_t m_u;                // User stack pointer
    uint16_t m_x;                // Index register X
    uint16_t m_y;                // Index register Y
    uint16_t m_d;                // Accumulator D (A:B)
    uint8_t m_a;                 // Accumulator A
    uint8_t m_b;                 // Accumulator B
    uint8_t m_dp;                // Direct page register
    uint8_t m_cc;                // Condition codes
    
    // CPU state
    bool m_running;
    bool m_initialized;
    
    // Instruction execution
    uint8_t fetch_byte();
    uint16_t fetch_word();
    void push_byte(uint8_t value);
    uint8_t pop_byte();
    void push_word(uint16_t value);
    uint16_t pop_word();
    
    // Instruction implementations
    void execute_jmp(uint16_t address);
    void execute_jsr(uint16_t address);
    void execute_rts();
    void execute_ldx_immediate(uint16_t value);
    void execute_ldd_immediate(uint16_t value);
    void execute_lda_immediate(uint8_t value);
    void execute_tfr_a_dp();
    void execute_lsr_direct(uint8_t address);
    void execute_bcc(uint16_t address);
    void execute_cmps_immediate(uint16_t value);
    void execute_beq(uint16_t address);
    void execute_stu_indexed(int8_t offset);
    
    // Addressing modes
    uint16_t get_immediate_word();
    uint8_t get_immediate_byte();
    uint8_t get_direct_byte(uint8_t address);
    void set_direct_byte(uint8_t address, uint8_t value);
    
    // Condition code helpers (protected for wrapper access)
    void set_zero_flag(bool zero);
    void set_carry_flag(bool carry);
    bool get_zero_flag() const;
    bool get_carry_flag() const;
};

// Wrapper class for generated routines
class StarWarsCPU {
public:
    // CPU state (adapted from existing CPU6809 members)
    struct State {
        uint8_t& a;
        uint8_t& b;
        uint16_t& d;
        uint16_t& x;
        uint16_t& y;
        uint16_t& u;
        uint16_t& sp;
        uint8_t& dp;
        uint8_t& cc;
        uint16_t& pc;
        
        State(CPU6809& cpu);
    };
    
    State state_;
    CPU6809& cpu_;
    
    StarWarsCPU(CPU6809& cpu);
    
    // Memory access methods
    void write_memory(uint16_t address, uint8_t value);
    uint8_t read_memory(uint16_t address);
    void write_memory16(uint16_t address, uint16_t value);
    uint16_t read_memory16(uint16_t address);
    
    // Condition code helpers
    bool zero_flag() const;
    bool carry_flag() const;
    bool negative_flag() const;
    
    // Function call handling
    void call_function(uint16_t address);
    void return_from_function();
    
    // Comparison helpers
    void compare_a(uint8_t value);
    void compare_b(uint8_t value);
    void compare_x(uint16_t value);
};

} // namespace StarWars
