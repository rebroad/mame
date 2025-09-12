#include "cpu_0x6809.h"

namespace StarWars {

void routine_0xE7C7_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_auto_0xE7C7.md
    // Address: 0x0xE7C7

    // Converted from rom_disasm_auto_0xE7C7.md
    // Address: 0xROUTINE_0xE7C7
    // 0xE7C7: CMPB 0xD6
    cpu.cpu.compare_b(D6);
    // 0xE7C9: BCC 0x0xE7D2
    if (!cpu.cpu.carry_flag()) cpu.state_.pc += 0xE7D2;
    // 0xE7CB: STB 0x0x48AE
    cpu.cpu.write_memory(0x48AE,  cpu.state_.b);
    // 0xE7CE: BSR 0x0xE7DD
    // TODO: Convert BSR 0x0xE7DD
    // 0xE7D0: BSR 0x0xE7EA
    // TODO: Convert BSR 0x0xE7EA
}

} // namespace StarWars
