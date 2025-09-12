#include "cpu_6809.h"

namespace StarWars {

void routine_e7c7_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_auto_e7c7.md
    // Address: 0xE7C7

    // Converted from rom_disasm_auto_e7c7.md
    // Address: 0xROUTINE_E7C7
    // E7C7: CMPB #$D6
    cpu.compare_b(D6);
    // E7C9: BCC $E7D2
    if (!cpu.carry_flag()) cpu.state_.pc += E7D2;
    // E7CB: STB $48AE
    cpu.write_memory(48AE, cpu.state_.b);
    // E7CE: BSR $E7DD
    // TODO: Convert BSR $E7DD
    // E7D0: BSR $E7EA
    // TODO: Convert BSR $E7EA
}

} // namespace StarWars
