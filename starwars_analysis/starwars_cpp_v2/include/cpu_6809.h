#pragma once

#include <cstdint>
#include <array>
#include <set>
#include <iostream>

// Forward declaration
namespace StarWars {
    class StarWarsHardware;
}

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
    explicit CPU6809(StarWarsHardware* hardware);
    ~CPU6809();

    // Core CPU methods
    void reset();
    void step();
    bool is_running() const { return m_running; }

    // Register access
    uint16_t get_pc() const { return m_pc; }
    uint16_t get_sp() const { return m_sp; }
    uint8_t get_dp() const { return m_dp; }
    uint8_t get_cc() const { return m_cc; }

    void set_pc(uint16_t pc) {
        std::cout << "CPU6809::set_pc() - PC changed from 0x" << std::hex << m_pc << " to 0x" << pc << std::endl;
        m_pc = pc;
    }
    void set_sp(uint16_t sp) { m_sp = sp; }
    void set_dp(uint8_t dp) { m_dp = dp; }
    void set_cc(uint8_t cc) { m_cc = cc; }

    // Memory access (delegated to hardware)
    virtual uint16_t read_memory16(uint16_t /* address */) { return 0; }
    virtual void write_memory16(uint16_t /* address */, uint16_t /* value */) { }

    // Instruction execution
    void execute_instruction();

    // Memory access (delegates to hardware)
    uint8_t read_memory(uint16_t address);
    void write_memory(uint16_t address, uint8_t value);

    // Test instructions
    void test_a();  // TSTA - Test A register
    void test_b();  // TSTB - Test B register

    // Arithmetic operations
    void add_a(uint8_t value);           // ADDA - Add to A
    void add_b(uint8_t value);           // ADDB - Add to B
    void add_a_with_carry(uint8_t value); // ADCA - Add to A with carry
    void add_b_with_carry(uint8_t value); // ADCB - Add to B with carry
    void sub_a(uint8_t value);           // SUBA - Subtract from A
    void sub_b(uint8_t value);           // SUBB - Subtract from B
    void sub_a_with_carry(uint8_t value); // SBCA - Subtract from A with carry
    void sub_b_with_carry(uint8_t value); // SBCB - Subtract from B with carry
    void increment_memory(uint16_t address); // INC - Increment memory
    void decrement_memory(uint16_t address); // DEC - Decrement memory
    void arithmetic_shift_left(uint16_t address); // ASL - Arithmetic shift left
    void rotate_left(uint16_t address); // ROL - Rotate left

    // Native routine execution (address-perfect C++ implementations)
    bool execute_at_address(uint16_t address);

    // Track unknown addresses for future disassembly
    void track_unknown_address(uint16_t address);
    void write_unknown_addresses_to_file();

    // PC validation and debugging
    bool is_potentially_valid_code_address(uint16_t address);
    void validate_pc();

    // ROM routine implementations (generated from disassembly)

    // Debugging
    void print_state() const;

    void routine_6005_6036(void);
    void routine_6036_6067(void);
    void routine_60be_60ca(void);
    void routine_60ca_60f4(void);
    void routine_60f4_623c(void);
    void routine_623c_624b(void);
    void routine_624b_640e(void);
    void routine_640e_6458(void);
    void routine_64a6_64c9(void);
    void routine_64c9_6512(void);
    void routine_6512_655d(void);
    void routine_655d_656b(void);
    void routine_656b_6586(void);
    void routine_6586_6592(void);
    void routine_65bd_666f(void);
    void routine_66ce_66e3(void);
    void routine_66e3_681e(void);
    void routine_681e_6837(void);
    void routine_6857_6865(void);
    void routine_6864_68cf(void);
    void routine_6901_6911(void);
    void routine_6911_692a(void);
    void routine_692a_692d(void);
    void routine_692d_70db(void);
    void routine_70db_70ef(void);
    void routine_70f5_7105(void);
    void routine_7105_72c7(void);
    void routine_72c7_761d(void);
    void routine_761d_7a48(void);
    void routine_7a48_7a7a(void);
    void routine_7b27_7b34(void);
    void routine_7b34_7b49(void);
    void routine_7b49_7bbd(void);
    void routine_7bbd_7d9a(void);
    void routine_7d9a_83a3(void);
    void routine_83a4_83ce(void);
    void routine_83ce_868b(void);
    void routine_868a_8695(void);
    void routine_86cd_86d0(void);
    void routine_86d0_882f(void);
    void routine_882f_8b6d(void);
    void routine_8b6d_8ed6(void);
    void routine_8ed6_8f33(void);
    void routine_8f34_8f7b(void);
    void routine_8f7b_9558(void);
    void routine_9558_9890(void);
    void routine_9890_9898(void);
    void routine_9898_98af(void);
    void routine_98b0_98ca(void);
    void routine_98f3_98fd(void);
    void routine_98fc_997b(void);
    void routine_9991_9d32(void);
    void routine_9d32_9f00(void);
    void routine_9f00_9fb8(void);
    void routine_9fb8_a1ce(void);
    void routine_a1ce_a849(void);
    void routine_a849_adbd(void);
    void routine_adbd_add3(void);
    void routine_add4_adeb(void);
    void routine_adeb_ae03(void);
    void routine_ae03_ae11(void);
    void routine_ae11_ae3e(void);
    void routine_ae3e_ae48(void);
    void routine_ae48_ae5f(void);
    void routine_ae60_ae6e(void);
    void routine_ae6e_aeb2(void);
    void routine_aeb2_b1a6(void);
    void routine_b1a6_b307(void);
    void routine_b307_b6c0(void);
    void routine_b6c0_b6cc(void);
    void routine_b6cc_bd03(void);
    void routine_bd03_bd12(void);
    void routine_bd12_c24e(void);
    void routine_c24e_c2c3(void);
    void routine_c2c3_c306(void);
    void routine_c306_c3ed(void);
    void routine_c3ee_c409(void);
    void routine_c409_c421(void);
    void routine_c421_c434(void);
    void routine_c434_c542(void);
    void routine_c542_c65b(void);
    void routine_c65b_c8a5(void);
    void routine_c8a5_ca63(void);
    void routine_ca8f_ca9d(void);
    void routine_ca9d_cac5(void);
    void routine_cac5_caf2(void);
    void routine_caf3_cb08(void);
    void routine_cb08_cba3(void);
    void routine_cbcc_cbd1(void);
    void routine_cbd0_cbd9(void);
    void routine_cbd8_cc1b(void);
    void routine_cc18_cc79(void);
    void routine_ccc0_cccc(void);
    void routine_cccc_ccd7(void);
    void routine_cce4_ccfb(void);
    void routine_ccf9_cea5(void);
    void routine_cea3_ceb8(void);
    void routine_ceb7_d005(void);
    void routine_d004_d3e1(void);
    void routine_d3e4_d3ed(void);
    void routine_d3ec_d433(void);
    void routine_d432_d487(void);
    void routine_d486_d800(void);
    void routine_d800_d883(void);
    void routine_d882_d8df(void);
    void routine_d8df_d8f6(void);
    void routine_d8fa_d912(void);
    void routine_d912_d95d(void);
    void routine_d95d_dad3(void);
    void routine_dad3_de52(void);
    void routine_de52_ded1(void);
    void routine_dedc_dee1(void);
    void routine_dee0_df19(void);
    void routine_df18_df30(void);
    void routine_df30_df47(void);
    void routine_df47_dfc6(void);
    void routine_dfdd_dfe5(void);
    void routine_dfe5_dff3(void);
    void routine_dff3_dffa(void);
    void routine_dffa_e00f(void);
    void routine_e00f_e08f(void);
    void routine_e08f_e0d8(void);
    void routine_e0d8_e765(void);
    void routine_e764_e790(void);
    void routine_e790_e7c7(void);
    void routine_e7c7_e7d2(void);
    void routine_e7d3_e7dc(void);
    void routine_e7dc_e811(void);
    void routine_e811_e82b(void);
    void routine_e82b_ef7f(void);
    void routine_ef7f_f261(void);
    void routine_f261_f883(void);
    void routine_f89b_fa19(void);
    void routine_fa19_ffe7(void);

    // 6809 CPU condition code and comparison methods
    bool zero_flag() const { return (m_cc & 0x04) != 0; }
    bool carry_flag() const { return (m_cc & 0x01) != 0; }
    bool negative_flag() const { return (m_cc & 0x08) != 0; }
    bool overflow_flag() const { return (m_cc & 0x02) != 0; }

    void compare_a(uint8_t value);
    void compare_b(uint8_t value);
    void compare_x(uint16_t value);
    void call_function(uint16_t address);
    void return_from_function();

    // Execution mode management
    void set_routine_mode(uint16_t start_pc);
    void set_instruction_mode();
    bool is_in_routine_mode() const { return m_execution_mode == ROUTINE_MODE; }
    void check_routine_termination();

    void print_instruction(uint16_t address) const;

public:
    // CPU registers (public for direct routine access)
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


    uint8_t m_inv;               // Invalid register (used in some routines)

protected:

    // CPU state
    bool m_running;
    bool m_initialized;

    // Execution mode tracking
    enum ExecutionMode {
        INSTRUCTION_MODE,    // Execute instruction by instruction
        ROUTINE_MODE         // Execute within a converted routine
    };
    ExecutionMode m_execution_mode;
    uint16_t m_routine_start_pc;  // Starting PC of current routine

    // Hardware reference
    StarWarsHardware* m_hardware;

    // Track unknown addresses for future disassembly
    std::set<uint16_t> m_unknown_addresses;

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
    void execute_lsr_direct(uint8_t address);
    void execute_bcc(uint16_t address);
    void execute_cmps_immediate(uint16_t value);
    void execute_beq(uint16_t address);
    void execute_std_indexed(uint8_t postbyte);
    void execute_lda_indexed(uint8_t postbyte);
    void execute_sta_indexed(uint8_t postbyte);
    void execute_tfr(uint8_t postbyte);
    void execute_lsrb();
    void execute_stu_indexed(int8_t offset);

    // Addressing modes
    uint16_t get_immediate_word();
    uint8_t get_immediate_byte();
    uint8_t get_direct_byte(uint8_t address);
    void set_direct_byte(uint8_t address, uint8_t value);

    // Condition code helpers (protected for wrapper access)
    void set_zero_flag(bool zero);
    void set_carry_flag(bool carry);
    void set_negative_flag(bool negative);
    bool get_zero_flag() const;
    bool get_carry_flag() const;
};


} // namespace StarWars
