#include "cpu_6809.h"

namespace StarWars {

void routine_e08f_e0d8_impl(CPU6809& cpu) {
    // Converted from rom_disasm_e08f_e0d8.md
    // Address: 0xE08F_E0D8

    label_E08F:
    // E08F: ANDB #$42
    cpu.m_b &= 0x42;

    // E095: BRA $E0DD
    goto label_E0DD;

    // E099: BRA $E0ED
    goto label_E0ED;

    // E0A3: BRA $E0EA
    goto label_E0EA;

    // E0A9: ADCB <$35
    // TODO: Convert ADCB <$35

    // E0AB: BGE $E0DD
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE0DD;

    // E0AD: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y

    // E0AF: BRA $E0D1
    goto label_E0D1;

    // E0B1: EORB <$41
    cpu.m_b ^= 0x41;

    // E0B7: BRA $E10D
    goto label_E10D;

    // E0BA: BRA $E100
    goto label_E100;

    // E0C4: BRA $E119
    goto label_E119;

    // E0CA: ANDB #$53
    cpu.m_b &= 0x53;

    label_E0D1:
    // E0D1: BRA $E114
    goto label_E114;

    // E0D4: BRA $E11C
    goto label_E11C;

    label_E0D8:
    // E0D8: JMP $e0d8
    goto label_E0D8;

}

} // namespace StarWars