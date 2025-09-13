#include "cpu_6809.h"

namespace StarWars {

void routine_dee0_df19_impl(CPU6809& cpu) {
    // Converted from rom_disasm_dee0_df19.md
    // Address: 0xDEE0_DF19

    // DEE0: BRA $DF02
    goto label_DF02;

    // DEE2: BRA $DF04
    goto label_DF04;

    // DEE4: BRA $DF06
    goto label_DF06;

    // DEE6: BRA $DF08
    goto label_DF08;

    // DEE8: BRA $DF0A
    goto label_DF0A;

    // DEEA: BRA $DF0C
    goto label_DF0C;

    // DEEC: BRA $DF0E
    goto label_DF0E;

    // DEEE: BRA $DF22
    goto label_DF22;

    // DEF0: PULS B,DP,Y
    // TODO: Convert PULS B,DP,Y

    // DEF2: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y

    // DEF4: SUBA $4445
    cpu.m_a -= 0x4445;

    // DEFF: BRA $DF42
    goto label_DF42;

    // DF03: BRA $DF59
    goto label_DF59;

    // DF09: BRA $DF5F
    goto label_DF5F;

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