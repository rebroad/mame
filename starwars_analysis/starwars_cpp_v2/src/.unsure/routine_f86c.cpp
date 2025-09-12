#include "cpu_6809.h"

namespace StarWars {

void routine_f86c_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_auto_f86c.md
    // Address: 0xF86C

    // F86C: LDB #$07
    cpu.state_.b = 0x07;

    // F86F: BCC $F876
    if (!cpu.carry_flag()) cpu.state_.pc += 0xF876;

    // F871: LDX $3022
    cpu.state_.x = cpu.read_memory_word(0x3022);

    // F874: BRA $F879
    cpu.state_.pc += 0xF879;

    // F876: LDX $3032
    cpu.state_.x = cpu.read_memory_word(0x3032);

    // F879: STX ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.x);

    // F87C: BPL $F86E
    if (!cpu.negative_flag()) cpu.state_.pc += 0xF86E;

    // F87E: LDD #$8040
    cpu.state_.d = 0x8040;

    // F881: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

}

} // namespace StarWars