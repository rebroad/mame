#include "cpu_6809.h"

namespace StarWars {

void routine_dff3_dffa_impl(CPU6809& cpu) {
    // Converted from rom_disasm_dff3_dffa.md
    // Address: 0xDFF3_DFFA

    // DFF7: BRA $E045
    goto label_E045;

    // DFFA: JMP $dffa
    goto label_DFFA;

}

} // namespace StarWars