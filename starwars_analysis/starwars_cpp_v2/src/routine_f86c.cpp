#include "cpu_6809.h"

namespace StarWars {

void routine_f86c_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_auto_f86c.md
    // Address: 0xF86C

    // Converted from rom_disasm_auto_f86c.md
    // Address: 0xROUTINE_F86C
    // F86C: LDB #$07
    cpu.state_.b = 07;
    // F86F: BCC $F876
    if (!cpu.carry_flag()) cpu.state_.pc += F876;
    // F871: LDX $3022
    cpu.state_.x = 3022;
    // F874: BRA $F879
    cpu.state_.pc += F879;
    // F876: LDX $3032
    cpu.state_.x = 3032;
    // F879: STX ,Y++
    cpu.write_memory(,Y++, cpu.state_.x);
    // F87C: BPL $F86E
    if (!cpu.negative_flag()) cpu.state_.pc += F86E;
    // F87E: LDD #$8040
    cpu.state_.d = 8040;
    // F881: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
}

} // namespace StarWars
