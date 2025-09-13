#include "cpu_6809.h"

namespace StarWars {

void routine_df18_df30_impl(CPU6809& cpu) {
    // Converted from rom_disasm_df18_df30.md
    // Address: 0xDF18_DF30

    // DF1D: BRA $DF60
    goto label_DF60;

    // DF1F: BRA $DF65
    goto label_DF65;

    // DF25: BRA $DF7A
    goto label_DF7A;

    // DF29: SBCB <$46
    // TODO: Convert SBCB <$46

    // DF2E: BRA $DF7C
    goto label_DF7C;

    // DF30: JMP $df30
    goto label_DF30;

}

} // namespace StarWars