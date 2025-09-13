#include "cpu_6809.h"

namespace StarWars {

void routine_dfe5_dff3_impl(CPU6809& cpu) {
    // Converted from rom_disasm_dfe5_dff3.md
    // Address: 0xDFE5_DFF3

    label_DFE5:
    // DFE5: XNCB 
    // TODO: Convert XNCB 
    // DFE6: BRA $E031
    goto label_E031;
    // DFE8: XCLRA 
    // TODO: Convert XCLRA 
    // DFE9: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DFEA: LSRB 
    cpu.m_b >>= 1;
    // DFEB: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DFEC: NEGA 
    cpu.m_a = -cpu.m_a;
    // DFED: INCA 
    cpu.m_a++;
    label_DFEE:
    // DFEE: ADDD <$50
    cpu.m_d += 0x50;
    // DFF0: XNCB 
    // TODO: Convert XNCB 
    // DFF1: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DFF2: XCLRA 
    // TODO: Convert XCLRA 
    label_DFF3:
    // DFF3: JMP $dff3
    goto label_DFF3;
}

} // namespace StarWars