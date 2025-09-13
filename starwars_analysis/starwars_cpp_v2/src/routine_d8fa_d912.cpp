#include "cpu_6809.h"

namespace StarWars {

void routine_d8fa_d912_impl(CPU6809& cpu) {
    // Converted from rom_disasm_d8fa_d912.md
    // Address: 0xD8FA_D912

    label_D8FA:
    // D8FA: CMPA ,X
    // TODO: Complex indexed addressing: ,X

    // D8FC: BNE $D912
    if (!cpu.zero_flag()) cpu.m_pc = 0xD912;

    // D8FE: LDU $4AD9
    cpu.m_u = cpu.read_memory16(0x4AD9);

    // D901: CMPU #$4A52
    // TODO: Convert CMPU #$4A52

    // D905: BLS $D912
    // TODO: Convert BLS $D912

    // D907: LEAU -$1,U
    // TODO: Fix comma operator: LEAU -$1,U

    // D909: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // D90B: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // D90D: STU $4AD9
    cpu.write_memory16(0x4AD9, cpu.m_u);

    // D910: LEAX ,U
    // TODO: Complex indexed addressing: ,U

    label_D912:
    // D912: JMP $d912
    goto label_D912;

}

} // namespace StarWars