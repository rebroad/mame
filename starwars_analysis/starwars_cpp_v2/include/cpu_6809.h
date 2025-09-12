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
// Forward declaration for friend class
class StarWarsCPU;

class CPU6809 {
    friend class StarWarsCPU;
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



    void routine_6005(void);
    void routine_6036(void);
    void routine_60be(void);
    void routine_6112(void);
    void routine_611e(void);
    void routine_612f(void);
    void routine_615a(void);
    void routine_6161(void);
    void routine_61b5(void);
    void routine_61ec(void);
    void routine_620f(void);
    void routine_622d(void);
    void routine_62d5(void);
    void routine_6368(void);
    void routine_63d5(void);
    void routine_64cd(void);
    void routine_670d(void);
    void routine_6724(void);
    void routine_6726(void);
    void routine_6761(void);
    void routine_6782(void);
    void routine_67aa(void);
    void routine_67d2(void);
    void routine_67d4(void);
    void routine_6819(void);
    void routine_6864(void);
    void routine_68c7(void);
    void routine_692d(void);
    void routine_6978(void);
    void routine_6a0c(void);
    void routine_6aa0(void);
    void routine_6da5(void);
    void routine_6db6(void);
    void routine_6dc0(void);
    void routine_6dca(void);
    void routine_6dd2(void);
    void routine_6dfa(void);
    void routine_6e22(void);
    void routine_6e70(void);
    void routine_6ea1(void);
    void routine_6ea2(void);
    void routine_6ecb(void);
    void routine_6ef7(void);
    void routine_6f5f(void);
    void routine_6f67(void);
    void routine_6f6f(void);
    void routine_6fe0(void);
    void routine_6ff1(void);
    void routine_703b(void);
    void routine_70bd(void);
    void routine_70cc(void);
    void routine_70db(void);
    void routine_70f0(void);
    void routine_7100(void);
    void routine_7111(void);
    void routine_7160(void);
    void routine_71c4(void);
    void routine_72c7(void);
    void routine_7315(void);
    void routine_733c(void);
    void routine_736f(void);
    void routine_7390(void);
    void routine_73ea(void);
    void routine_7413(void);
    void routine_743c(void);
    void routine_7519(void);
    void routine_761d(void);
    void routine_768d(void);
    void routine_76d3(void);
    void routine_7707(void);
    void routine_7720(void);
    void routine_7765(void);
    void routine_77a4(void);
    void routine_77d4(void);
    void routine_785b(void);
    void routine_7863(void);
    void routine_786a(void);
    void routine_7881(void);
    void routine_7a48(void);
    void routine_7a5a(void);
    void routine_7b9e(void);
    void routine_7bbd(void);
    void routine_7d9a(void);
    void routine_7eaf(void);
    void routine_8341(void);
    void routine_83a4(void);
    void routine_83ce(void);
    void routine_8408(void);
    void routine_8434(void);
    void routine_8495(void);
    void routine_84c6(void);
    void routine_859b(void);
    void routine_85f9(void);
    void routine_868a(void);
    void routine_86ae(void);
    void routine_8735(void);
    void routine_87cb(void);
    void routine_87f5(void);
    void routine_889f(void);
    void routine_88f5(void);
    void routine_8951(void);
    void routine_8959(void);
    void routine_8961(void);
    void routine_8969(void);
    void routine_8971(void);
    void routine_8979(void);
    void routine_8981(void);
    void routine_8993(void);
    void routine_89c8(void);
    void routine_89d3(void);
    void routine_89de(void);
    void routine_89e9(void);
    void routine_8a00(void);
    void routine_8a05(void);
    void routine_8a21(void);
    void routine_8a3d(void);
    void routine_8a59(void);
    void routine_8a7e(void);
    void routine_8ab6(void);
    void routine_8acf(void);
    void routine_8b6d(void);
    void routine_8b86(void);
    void routine_8be1(void);
    void routine_8c44(void);
    void routine_8d9d(void);
    void routine_8de3(void);
    void routine_8e1c(void);
    void routine_8e23(void);
    void routine_8e32(void);
    void routine_8e3a(void);
    void routine_8ed6(void);
    void routine_8f34(void);
    void routine_8f7b(void);
    void routine_9500(void);
    void routine_953b(void);
    void routine_9558(void);
    void routine_95a7(void);
    void routine_9604(void);
    void routine_960f(void);
    void routine_962a(void);
    void routine_96a1(void);
    void routine_9722(void);
    void routine_973a(void);
    void routine_9775(void);
    void routine_97ac(void);
    void routine_97c2(void);
    void routine_97e3(void);
    void routine_97e8(void);
    void routine_97ed(void);
    void routine_97f2(void);
    void routine_97f7(void);
    void routine_97fc(void);
    void routine_9801(void);
    void routine_9806(void);
    void routine_9810(void);
    void routine_9874(void);
    void routine_987f(void);
    void routine_9886(void);
    void routine_9890(void);
    void routine_9898(void);
    void routine_98b0(void);
    void routine_a1ce(void);
    void routine_a214(void);
    void routine_a2f8(void);
    void routine_a40a(void);
    void routine_a459(void);
    void routine_a54b(void);
    void routine_a591(void);
    void routine_a68b(void);
    void routine_a6e0(void);
    void routine_a6f4(void);
    void routine_a705(void);
    void routine_a728(void);
    void routine_a7b6(void);
    void routine_a7bf(void);
    void routine_a7c8(void);
    void routine_a7f7(void);
    void routine_a80b(void);
    void routine_a849(void);
    void routine_a90c(void);
    void routine_a920(void);
    void routine_a933(void);
    void routine_aa7d(void);
    void routine_aae4(void);
    void routine_ac34(void);
    void routine_ac52(void);
    void routine_acb1(void);
    void routine_ace0(void);
    void routine_ad20(void);
    void routine_ad3e(void);
    void routine_ad6c(void);
    void routine_adaf(void);
    void routine_adbd(void);
    void routine_add4(void);
    void routine_ae60(void);
    void routine_aebd(void);
    void routine_af87(void);
    void routine_afef(void);
    void routine_b000(void);
    void routine_b071(void);
    void routine_b095(void);
    void routine_b261(void);
    void routine_b29c(void);
    void routine_b2d2(void);
    void routine_b32b(void);
    void routine_b3e4(void);
    void routine_b43f(void);
    void routine_b579(void);
    void routine_b6b9(void);
    void routine_b6c0(void);
    void routine_b6c7(void);
    void routine_b6cc(void);
    void routine_b6d7(void);
    void routine_b739(void);
    void routine_b76c(void);
    void routine_b83f(void);
    void routine_b852(void);
    void routine_b85e(void);
    void routine_b939(void);
    void routine_b948(void);
    void routine_b95c(void);
    void routine_b982(void);
    void routine_b98b(void);
    void routine_ba12(void);
    void routine_ba32(void);
    void routine_bb85(void);
    void routine_bcae(void);
    void routine_bcc8(void);
    void routine_bce9(void);
    void routine_bd00(void);
    void routine_bd03(void);
    void routine_bd08(void);
    void routine_bd12(void);
    void routine_bd17(void);
    void routine_bd1c(void);
    void routine_bd21(void);
    void routine_bd2b(void);
    void routine_bd30(void);
    void routine_bd35(void);
    void routine_bd3a(void);
    void routine_bd3f(void);
    void routine_bd44(void);
    void routine_bd4e(void);
    void routine_bd53(void);
    void routine_bd58(void);
    void routine_bd5d(void);
    void routine_bd62(void);
    void routine_bd67(void);
    void routine_bd6c(void);
    void routine_bd71(void);
    void routine_bd76(void);
    void routine_bd80(void);
    void routine_bd85(void);
    void routine_bd8a(void);
    void routine_bd94(void);
    void routine_bd99(void);
    void routine_bd9e(void);
    void routine_bda3(void);
    void routine_bda8(void);
    void routine_bdad(void);
    void routine_bdb2(void);
    void routine_bdb7(void);
    void routine_bdbc(void);
    void routine_bdc6(void);
    void routine_bdcb(void);
    void routine_bdd0(void);
    void routine_bdd5(void);
    void routine_bdda(void);
    void routine_bddf(void);
    void routine_bde4(void);
    void routine_bde9(void);
    void routine_bdee(void);
    void routine_bdf3(void);
    void routine_bdf8(void);
    void routine_bdfd(void);
    void routine_be00(void);
    void routine_be02(void);
    void routine_be07(void);
    void routine_be0c(void);
    void routine_be11(void);
    void routine_be16(void);
    void routine_be20(void);
    void routine_c02f(void);
    void routine_c087(void);
    void routine_c200(void);
    void routine_c20c(void);
    void routine_c24e(void);
    void routine_c2b3(void);
    void routine_c2c3(void);
    void routine_c306(void);
    void routine_c369(void);
    void routine_c3a7(void);
    void routine_c3ee(void);
    void routine_c413(void);
    void routine_c450(void);
    void routine_c4eb(void);
    void routine_c5a4(void);
    void routine_c5f2(void);
    void routine_c600(void);
    void routine_c641(void);
    void routine_c65b(void);
    void routine_c67a(void);
    void routine_c688(void);
    void routine_c690(void);
    void routine_c6b8(void);
    void routine_c6d4(void);
    void routine_c6d7(void);
    void routine_c6d9(void);
    void routine_c6f4(void);
    void routine_c6f7(void);
    void routine_c6f9(void);
    void routine_c70e(void);
    void routine_c7fd(void);
    void routine_caf3(void);
    void routine_cc00(void);
    void routine_cc18(void);
    void routine_cc38(void);
    void routine_cc5b(void);
    void routine_ccc0(void);
    void routine_cccc(void);
    void routine_ccd8(void);
    void routine_cce4(void);
    void routine_ccf0(void);
    void routine_ccfc(void);
    void routine_cd00(void);
    void routine_cd08(void);
    void routine_cd14(void);
    void routine_cd20(void);
    void routine_cd2c(void);
    void routine_cd38(void);
    void routine_cd44(void);
    void routine_cd50(void);
    void routine_cd5c(void);
    void routine_cd68(void);
    void routine_cd74(void);
    void routine_cd80(void);
    void routine_cd8c(void);
    void routine_cd9c(void);
    void routine_cd9e(void);
    void routine_cda0(void);
    void routine_cda2(void);
    void routine_cda9(void);
    void routine_cdab(void);
    void routine_cdb1(void);
    void routine_cdb5(void);
    void routine_cdba(void);
    void routine_cdc3(void);
    void routine_cde7(void);
    void routine_ce0c(void);
    void routine_ce18(void);
    void routine_ce24(void);
    void routine_ce2f(void);
    void routine_ce3a(void);
    void routine_ce45(void);
    void routine_d800(void);
    void routine_d882(void);
    void routine_d883(void);
    void routine_d8df(void);
    void routine_d91a(void);
    void routine_d923(void);
    void routine_d942(void);
    void routine_d95e(void);
    void routine_d971(void);
    void routine_d985(void);
    void routine_d9dc(void);
    void routine_d9fa(void);
    void routine_e000(void);
    void routine_e700(void);
    void routine_e764(void);
    void routine_e772(void);
    void routine_e790(void);
    void routine_e7ad(void);
    void routine_e7c7(void);
    void routine_e7d3(void);
    void routine_e7dd(void);
    void routine_e7fc(void);
    void routine_e821(void);
    void routine_f17f(void);
    void routine_f182(void);
    void routine_f1c6(void);
    void routine_f1fd(void);
    void routine_f261(void);
    void routine_f36e(void);
    void routine_f70d(void);
    void routine_f714(void);
    void routine_f720(void);
    void routine_f86c(void);
    void routine_fb38(void);
    void routine_fb73(void);
    void routine_fd00(void);
    void routine_fd07(void);
    void routine_feff(void);
    void routine_ff24(void);









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
    uint8_t m_inv;               // Invalid register (used in some routines)

    // CPU state
    bool m_running;
    bool m_initialized;

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
        uint16_t& s;              // Stack pointer alias
        uint8_t& dp;
        uint8_t& cc;
        uint8_t& inv;
        uint16_t& pc;

        State(CPU6809& cpu);
    };

    State state_;
    CPU6809& cpu_;

    StarWarsCPU(CPU6809& cpu);

    // Memory access methods
    void write_memory(uint16_t address, uint8_t value);
    uint8_t read_memory(uint16_t address);
    uint16_t read_memory_word(uint16_t address);

    // PC tracking for debugging
    void set_pc_debug(uint16_t pc, const std::string& reason);
    void write_memory16(uint16_t address, uint16_t value);
    uint16_t read_memory16(uint16_t address);

    // Condition code helpers
    bool zero_flag() const;
    bool carry_flag() const;
    bool negative_flag() const;
    bool overflow_flag() const;

    // Function call handling
    void call_function(uint16_t address);
    void return_from_function();

    // Comparison helpers
    void compare_a(uint8_t value);
    void compare_b(uint8_t value);
    void compare_x(uint16_t value);
};

} // namespace StarWars
