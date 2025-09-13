#include "cpu_6809.h"

namespace StarWars {

void routine_df30_df47_impl(CPU6809& cpu) {
    // Converted from rom_disasm_df30_df47.md
    // Address: 0xDF30_DF47

    label_DF30:
    // DF30: NEGA 
    cpu.m_a = -cpu.m_a;
    // DF31: COMB 
    cpu.m_b = ~cpu.m_b;
    // DF32: LSRA 
    cpu.m_a >>= 1;
    // DF33: XNCB 
    // TODO: Convert XNCB 
    // DF34: BRA $DF77
    goto label_DF77;
    // DF36: LSRB 
    cpu.m_b >>= 1;
    // DF37: BRA $DF7D
    goto label_DF7D;
    // DF39: LSRA 
    cpu.m_a >>= 1;
    // DF3A: COMB 
    cpu.m_b = ~cpu.m_b;
    // DF3B: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DF3C: XNCB 
    // TODO: Convert XNCB 
    // DF3D: LSRA 
    cpu.m_a >>= 1;
    // DF3E: LSRA 
    cpu.m_a >>= 1;
    // DF3F: BRA $DF85
    goto label_DF85;
    // DF41: LSRA 
    cpu.m_a >>= 1;
    label_DF42:
    // DF42: NEGA 
    cpu.m_a = -cpu.m_a;
    // DF43: LSRB 
    cpu.m_b >>= 1;
    // DF44: ASLA 
    cpu.m_a <<= 1;
    // DF45: BRA $DF9A
    goto label_DF9A;
    label_DF47:
    // DF47: JMP $df47
    goto label_DF47;
}

} // namespace StarWars