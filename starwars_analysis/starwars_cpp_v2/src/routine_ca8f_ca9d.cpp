#include "cpu_6809.h"

namespace StarWars {

void routine_ca8f_ca9d_impl(CPU6809& cpu) {
    // Converted from rom_disasm_ca8f_ca9d.md
    // Address: 0xCA8F_CA9D

    label_CA8F:
    // CA8F: LDD <$5C
    cpu.m_d = cpu.read_memory16(0x5C);
    // CA91: SUBD ,X
    // TODO: Complex indexed addressing: ,X
    // CA93: BHI $CAA5
    // TODO: Convert BHI $CAA5
    // CA95: BNE $CA9D
    if (!cpu.zero_flag()) cpu.m_pc = 0xCA9D;
    // CA97: LDD <$5E
    cpu.m_d = cpu.read_memory16(0x5E);
    // CA99: SUBD $2,X
    // TODO: Fix comma operator: SUBD $2,X
    // CA9B: BCC $CAA5
    if (!cpu.carry_flag()) cpu.m_pc = 0xCAA5;
    label_CA9D:
    // CA9D: JMP $ca9d
    goto label_CA9D;
}

} // namespace StarWars