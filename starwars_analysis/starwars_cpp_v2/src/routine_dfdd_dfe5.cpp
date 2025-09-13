#include "cpu_6809.h"

namespace StarWars {

void routine_dfdd_dfe5_impl(CPU6809& cpu) {
    // Converted from rom_disasm_dfdd_dfe5.md
    // Address: 0xDFDD_DFE5

    // DFE1: BRA $E03C
    goto label_E03C;

    // DFE5: JMP $dfe5
    goto label_DFE5;

}

} // namespace StarWars