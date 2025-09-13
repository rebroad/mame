#include "cpu_6809.h"

namespace StarWars {

void routine_dedc_dee1_impl(CPU6809& cpu) {
    // Converted from rom_disasm_dedc_dee1.md
    // Address: 0xDEDC_DEE1

    label_DEDC:
    // DEDC: CLRA 
    cpu.m_a = 0;
    // DEDD: XNCB 
    // TODO: Convert XNCB 
    label_DEDE:
    // DEDE: LSRB 
    cpu.m_b >>= 1;
    // DEDF: BRA $DF01
    goto label_DF01;
    // DEE1: JMP $dee0
    goto label_DEE0;
}

} // namespace StarWars