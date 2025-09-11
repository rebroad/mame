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
class CPU6809 {
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
    
    // Debugging
    void print_state() const;
    void print_instruction(uint16_t address) const;

private:
    // CPU registers
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
    
    // Condition code helpers
    void set_zero_flag(bool zero);
    void set_carry_flag(bool carry);
    bool get_zero_flag() const;
    bool get_carry_flag() const;
};

} // namespace StarWars
