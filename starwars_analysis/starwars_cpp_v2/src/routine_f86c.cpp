#include "cpu_0x6809.h"

namespace StarWars {

void routine_0xF86C_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_auto_0xF86C.md
    // Address: 0x0xF86C

    // Converted from rom_disasm_auto_0xF86C.md
    // Address: 0xROUTINE_0xF86C
    // 0xF86C: LDB 0x07
    cpu.state_.b = 0x07;
    // 0xF86F: BCC 0x0xF876
    if (!cpu.cpu.carry_flag()) cpu.state_.pc += 0xF876;
    // 0xF871: LDX 0x0x3022
    cpu.state_.x = 0x3022;
    // 0xF874: BRA 0x0xF879
    cpu.state_.pc += 0xF879;
    // 0xF876: LDX 0x0x3032
    cpu.state_.x = 0x3032;
    // 0xF879: STX ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.x);
    // 0xF87C: BPL 0x0xF86E
    if (!cpu.cpu.negative_flag()) cpu.state_.pc += 0xF86E;
    // 0xF87E: LDD 0x0x8040
    cpu.state_.d = 0x8040;
    // 0xF881: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
}

} // namespace StarWars
