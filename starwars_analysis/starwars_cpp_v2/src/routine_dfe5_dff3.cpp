#include "cpu_6809.h"

namespace StarWars {

void routine_dfe5_dff3_impl(CPU6809& cpu) {
    // Converted from rom_disasm_dfe5_dff3.md
    // Address: 0xDFE5_DFF3

    // DFE6: BRA $E031
    goto label_E031;

    // DFEE: ADDD <$50
    cpu.m_d += 0x50;

    // DFF3: JMP $dff3
    goto label_DFF3;

}

} // namespace StarWars