#include "cpu_6809.h"

namespace StarWars {

void routine_8ed6_8f33_impl(CPU6809& cpu) {
    // Converted from rom_disasm_8ed6_8f33.md
    // Address: 0x8ED6_8F33

    label_8ED6:
    // 8ED6: JSR $CCC0
    cpu.call_function(0xCCC0);

    // 8ED9: LDB $4B14
    cpu.m_b = cpu.read_memory(0x4B14);

    // 8EDD: LDX #$9070
    cpu.m_x = 0x9070;

    // 8EE1: CMPX #$907C
    cpu.compare_x(0x907C);

    // 8EE4: BCS $8EF4
    if (cpu.carry_flag()) cpu.m_pc = 0x8EF4;

    // 8EE6: LDA $4B14
    cpu.m_a = cpu.read_memory(0x4B14);

    // 8EEA: BCS $8EF1
    if (cpu.carry_flag()) cpu.m_pc = 0x8EF1;

    // 8EEC: LDX #$9078
    cpu.m_x = 0x9078;

    // 8EEF: BRA $8EF4
    goto label_8EF4;

    // 8EF1: LDX #$907A
    cpu.m_x = 0x907A;

    label_8EF4:
    // 8EF4: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // 8EF6: LDB <$DD
    cpu.m_b = cpu.read_memory(0xDD);

    // 8EF8: CMPB ,X+
    // TODO: Complex indexed addressing: ,X+

    // 8EFA: BLS $8EFE
    // TODO: Convert BLS $8EFE

    // 8EFC: LDB -$1,X
    // TODO: Fix comma operator: LDB -$1,X

    // 8EFF: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // 8F01: STD <$E4
    cpu.write_memory16(0xE4, cpu.m_d);

    // 8F03: CLR <$E6
    cpu.write_memory(0xE6, 0);

    // 8F05: LDX #$4900
    cpu.m_x = 0x4900;

    // 8F08: STX <$5A
    cpu.write_memory16(0x5A, cpu.m_x);

    // 8F0A: CLR $3,X
    // TODO: Fix comma operator: CLR $3,X

    // 8F0C: LDU <$E4
    cpu.m_u = cpu.read_memory16(0xE4);

    // 8F0E: BEQ $8F29
    if (cpu.zero_flag()) cpu.m_pc = 0x8F29;

    // 8F10: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8F12: BEQ $8F29
    if (cpu.zero_flag()) cpu.m_pc = 0x8F29;

    // 8F14: INC <$E6
    // TODO: Convert INC <$E6

    // 8F16: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // 8F18: STD <$E0
    cpu.write_memory16(0xE0, cpu.m_d);

    // 8F1A: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // 8F1C: STD <$DE
    cpu.write_memory16(0xDE, cpu.m_d);

    // 8F1E: LDD $4,U
    // TODO: Fix comma operator: LDD $4,U

    // 8F20: STD <$E2
    cpu.write_memory16(0xE2, cpu.m_d);

    // 8F22: LEAU $6,U
    // TODO: Fix comma operator: LEAU $6,U

    // 8F24: STU <$E4
    cpu.write_memory16(0xE4, cpu.m_u);

    // 8F26: JSR $8F34
    cpu.call_function(0x8F34);

    // 8F29: LDX <$5A
    cpu.m_x = cpu.read_memory16(0x5A);

    // 8F2B: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 8F2E: CMPX #$494B
    cpu.compare_x(0x494B);

    // 8F31: BCS $8F08
    if (cpu.carry_flag()) cpu.m_pc = 0x8F08;

}

} // namespace StarWars