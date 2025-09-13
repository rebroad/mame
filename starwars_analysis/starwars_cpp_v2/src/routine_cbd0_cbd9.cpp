#include "cpu_6809.h"

namespace StarWars {

void routine_cbd0_cbd9_impl(CPU6809& cpu) {
    // Converted from rom_disasm_cbd0_cbd9.md
    // Address: 0xCBD0_CBD9

    label_CBD0:
    // CBD0: STU $3CFE
    cpu.write_memory16(0x3CFE, cpu.m_u);

    // CBD3: BCC $CBD4
    if (!cpu.carry_flag()) cpu.m_pc = 0xCBD4;

    // CBD5: INC [W,S]
    // TODO: Convert INC [W,S]

    // CBD7: BCC $CBD8
    if (!cpu.carry_flag()) cpu.m_pc = 0xCBD8;

    // CBD9: JMP $cbd8
    goto label_CBD8;

}

} // namespace StarWars