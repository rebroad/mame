#include "cpu_6809.h"

namespace StarWars {

void routine_e7d3_e7dc_impl(CPU6809& cpu) {
    // Converted from rom_disasm_e7d3_e7dc.md
    // Address: 0xE7D3_E7DC

    // E7D3: CMPB #$D6
    cpu.compare_b(0xD6);

    // E7D5: BCC $E7DC
    if (!cpu.carry_flag()) cpu.m_pc = 0xE7DC;

    // E7D7: STB $48AE
    cpu.write_memory(0x48AE, cpu.m_b);

    // E7DA: BSR $E7EA
    // TODO: Convert BSR $E7EA

    // E7DC: JMP $e7dc
    goto label_E7DC;

}

} // namespace StarWars