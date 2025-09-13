#include "cpu_6809.h"

namespace StarWars {

void routine_dffa_e00f_impl(CPU6809& cpu) {
    // Converted from rom_disasm_dffa_e00f.md
    // Address: 0xDFFA_E00F

    // DFFC: BEQ $E051
    if (cpu.zero_flag()) cpu.m_pc = 0xE051;

    // DFFE: BRA $E052
    goto label_E052;

    // E004: BRA $E04C
    goto label_E04C;

    // E009: BITB #$50
    // TODO: Convert BITB #$50

    // E00F: JMP $e00f
    goto label_E00F;

}

} // namespace StarWars