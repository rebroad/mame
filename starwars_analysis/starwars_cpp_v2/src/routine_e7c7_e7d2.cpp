#include "cpu_6809.h"

namespace StarWars {

void routine_e7c7_e7d2_impl(CPU6809& cpu) {
    // Converted from rom_disasm_e7c7_e7d2.md
    // Address: 0xE7C7_E7D2

    label_E7C7:
    // E7C7: CMPB #$D6
    cpu.compare_b(0xD6);

    // E7C9: BCC $E7D2
    if (!cpu.carry_flag()) cpu.m_pc = 0xE7D2;

    // E7CB: STB $48AE
    cpu.write_memory(0x48AE, cpu.m_b);

    // E7CE: BSR $E7DD
    // TODO: Convert BSR $E7DD

    // E7D0: BSR $E7EA
    // TODO: Convert BSR $E7EA

}

} // namespace StarWars