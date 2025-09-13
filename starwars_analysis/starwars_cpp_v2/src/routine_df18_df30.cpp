#include "cpu_6809.h"

namespace StarWars {

void routine_df18_df30_impl(CPU6809& cpu) {
    // Converted from rom_disasm_df18_df30.md
    // Address: 0xDF18_DF30

    label_DF18:
    // DF18: LSRA 
    cpu.m_a >>= 1;
    // DF19: INCA 
    cpu.m_a++;
    // DF1A: LSRA 
    cpu.m_a >>= 1;
    // DF1B: COMA 
    cpu.m_a = ~cpu.m_a;
    // DF1C: LSRB 
    cpu.m_b >>= 1;
    // DF1D: BRA $DF60
    goto label_DF60;
    // DF1F: BRA $DF65
    goto label_DF65;
    // DF21: LSRA 
    cpu.m_a >>= 1;
    label_DF22:
    // DF22: NEGA 
    cpu.m_a = -cpu.m_a;
    // DF23: LSRB 
    cpu.m_b >>= 1;
    // DF24: ASLA 
    cpu.m_a <<= 1;
    // DF25: BRA $DF7A
    goto label_DF7A;
    // DF27: LSRB 
    cpu.m_b >>= 1;
    label_DF28:
    // DF28: NEGA 
    cpu.m_a = -cpu.m_a;
    // DF29: SBCB <$46
    // TODO: Convert SBCB <$46
    // DF2B: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    label_DF2C:
    // DF2C: XNCB 
    // TODO: Convert XNCB 
    // DF2D: LSRA 
    cpu.m_a >>= 1;
    // DF2E: BRA $DF7C
    goto label_DF7C;
    label_DF30:
    // DF30: JMP $df30
    goto label_DF30;
}

} // namespace StarWars