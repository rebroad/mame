#include "cpu_6809.h"

namespace StarWars {

void routine_dee0_df19_impl(CPU6809& cpu) {
    // Converted from rom_disasm_dee0_df19.md
    // Address: 0xDEE0_DF19

    label_DEE0:
    // DEE0: BRA $DF02
    goto label_DF02;
    label_DEE2:
    // DEE2: BRA $DF04
    goto label_DF04;
    label_DEE4:
    // DEE4: BRA $DF06
    goto label_DF06;
    label_DEE6:
    // DEE6: BRA $DF08
    goto label_DF08;
    label_DEE8:
    // DEE8: BRA $DF0A
    goto label_DF0A;
    label_DEEA:
    // DEEA: BRA $DF0C
    goto label_DF0C;
    label_DEEC:
    // DEEC: BRA $DF0E
    goto label_DF0E;
    label_DEEE:
    // DEEE: BRA $DF22
    goto label_DF22;
    label_DEF0:
    // DEF0: PULS B,DP,Y
    // TODO: Convert PULS B,DP,Y
    // DEF2: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y
    // DEF4: SUBA $4445
    cpu.m_a -= 0x4445;
    // DEF7: COMB 
    cpu.m_b = ~cpu.m_b;
    // DEF8: LSRB 
    cpu.m_b >>= 1;
    // DEF9: XNCB 
    // TODO: Convert XNCB 
    // DEFA: CLRA 
    cpu.m_a = 0;
    // DEFB: ROLB 
    cpu.m_b = (cpu.m_b << 1) | (cpu.carry_flag() ? 1 : 0);
    // DEFC: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DEFD: XCLRA 
    // TODO: Convert XCLRA 
    // DEFE: ASRA 
    // TODO: Convert ASRA 
    // DEFF: BRA $DF42
    goto label_DF42;
    label_DF01:
    // DF01: INCA 
    cpu.m_a++;
    label_DF02:
    // DF02: INCA 
    cpu.m_a++;
    label_DF03:
    // DF03: BRA $DF59
    goto label_DF59;
    label_DF05:
    // DF05: CLRA 
    cpu.m_a = 0;
    label_DF06:
    // DF06: ASRB 
    // TODO: Convert ASRB 
    label_DF07:
    // DF07: LSRA 
    cpu.m_a >>= 1;
    label_DF08:
    // DF08: XNCB 
    // TODO: Convert XNCB 
    label_DF09:
    // DF09: BRA $DF5F
    goto label_DF5F;
    label_DF0B:
    // DF0B: CLRA 
    cpu.m_a = 0;
    label_DF0C:
    // DF0C: NEGB 
    cpu.m_b = -cpu.m_b;
    label_DF0D:
    // DF0D: COMB 
    cpu.m_b = ~cpu.m_b;
    label_DF0E:
    // DF0E: BRA $DF30
    goto label_DF30;
    // DF10: BRA $DF47
    goto label_DF47;
    // DF12: LEAX $C,Y
    // TODO: Fix comma operator: LEAX $C,Y
    // DF14: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y
    // DF16: SUBA $5345
    cpu.m_a -= 0x5345;
    // DF19: JMP $df18
    goto label_DF18;
}

} // namespace StarWars