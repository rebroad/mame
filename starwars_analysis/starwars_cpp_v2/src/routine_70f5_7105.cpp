#include "cpu_6809.h"

namespace StarWars {

void routine_70f5_7105_impl(CPU6809& cpu) {
    // Converted from rom_disasm_70f5_7105.md
    // Address: 0x70F5_7105

    // 70F5: LDB #$80
    cpu.m_b = 0x80;

    // 70FB: LDB $7,X
    // TODO: Fix comma operator: LDB $7,X

    // 70FD: BMI $7107
    if (cpu.negative_flag()) cpu.m_pc = 0x7107;

    // 70FF: ADDA $8,X
    // TODO: Fix comma operator: ADDA $8,X

    // 7101: BVC $7105
    // TODO: Convert BVC $7105

    // 7103: LDA #$7F
    cpu.m_a = 0x7F;

    // 7105: JMP $7105
    goto label_7105;

}

} // namespace StarWars