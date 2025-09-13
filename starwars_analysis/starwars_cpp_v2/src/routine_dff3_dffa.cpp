#include "cpu_6809.h"

namespace StarWars {

void routine_dff3_dffa_impl(CPU6809& cpu) {
    // Converted from rom_disasm_dff3_dffa.md
    // Address: 0xDFF3_DFFA

    label_DFF3:
    // DFF3: COMA 
    cpu.m_a = ~cpu.m_a;
    // DFF4: LSRA 
    cpu.m_a >>= 1;
    // DFF5: COMB 
    cpu.m_b = ~cpu.m_b;
    // DFF6: COMB 
    cpu.m_b = ~cpu.m_b;
    label_DFF7:
    // DFF7: BRA $E045
    goto label_E045;
    // DFF9: LSRA 
    cpu.m_a >>= 1;
    label_DFFA:
    // DFFA: JMP $dffa
    goto label_DFFA;
}

} // namespace StarWars