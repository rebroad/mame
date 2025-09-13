#include "cpu_6809.h"

namespace StarWars {

void routine_dffa_e00f_impl(CPU6809& cpu) {
    // Converted from rom_disasm_dffa_e00f.md
    // Address: 0xDFFA_E00F

    label_DFFA:
    // DFFA: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DFFB: NEGA 
    cpu.m_a = -cpu.m_a;
    // DFFC: BEQ $E051
    if (cpu.zero_flag()) cpu.m_pc = 0xE051;
    // DFFE: BRA $E052
    goto label_E052;
    label_E000:
    // E000: LSRA 
    cpu.m_a >>= 1;
    // E001: XNCA 
    // TODO: Convert XNCA 
    // E002: LSRA 
    cpu.m_a >>= 1;
    // E003: INCA 
    cpu.m_a++;
    // E004: BRA $E04C
    goto label_E04C;
    // E006: CLRA 
    cpu.m_a = 0;
    // E007: XNCB 
    // TODO: Convert XNCB 
    // E008: COMA 
    cpu.m_a = ~cpu.m_a;
    // E009: BITB #$50
    // TODO: Convert BITB #$50
    // E00B: CLRA 
    cpu.m_a = 0;
    label_E00C:
    // E00C: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // E00D: XCLRA 
    // TODO: Convert XCLRA 
    // E00E: LSRB 
    cpu.m_b >>= 1;
    label_E00F:
    // E00F: JMP $e00f
    goto label_E00F;
}

} // namespace StarWars