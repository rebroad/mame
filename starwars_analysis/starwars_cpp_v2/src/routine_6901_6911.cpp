#include "cpu_6809.h"

namespace StarWars {

void routine_6901_6911_impl(CPU6809& cpu) {
    // Converted from rom_disasm_6901_6911.md
    // Address: 0x6901_6911

    // 6901: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 6903: BNE $6911
    if (!cpu.zero_flag()) cpu.m_pc = 0x6911;

    // 6905: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 6908: CMPX #$494B
    cpu.compare_x(0x494B);

    // 690B: BCS $6901
    if (cpu.carry_flag()) cpu.m_pc = 0x6901;

    // 690D: LDA #$23
    cpu.m_a = 0x23;

    // 690F: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6911: JMP $6911
    goto label_6911;

}

} // namespace StarWars