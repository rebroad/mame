#include "cpu_6809.h"

namespace StarWars {

void routine_df30_df47_impl(CPU6809& cpu) {
    // Converted from rom_disasm_df30_df47.md
    // Address: 0xDF30_DF47

    // DF34: BRA $DF77
    goto label_DF77;

    // DF37: BRA $DF7D
    goto label_DF7D;

    // DF3F: BRA $DF85
    goto label_DF85;

    // DF45: BRA $DF9A
    goto label_DF9A;

    label_DF47:
    // DF47: JMP $df47
    goto label_DF47;

}

} // namespace StarWars