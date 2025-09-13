#include "cpu_6809.h"

namespace StarWars {

void routine_dfdd_dfe5_impl(CPU6809& cpu) {
    // Converted from rom_disasm_dfdd_dfe5.md
    // Address: 0xDFDD_DFE5

    label_DFDD:
    // DFDD: ASLA 
    cpu.m_a <<= 1;
    // DFDE: CLRA 
    cpu.m_a = 0;
    // DFDF: CLRA 
    cpu.m_a = 0;
    // DFE0: LSRB 
    cpu.m_b >>= 1;
    // DFE1: BRA $E03C
    goto label_E03C;
    // DFE3: CLRA 
    cpu.m_a = 0;
    // DFE4: LSRB 
    cpu.m_b >>= 1;
    label_DFE5:
    // DFE5: JMP $dfe5
    goto label_DFE5;
}

} // namespace StarWars