#include "cpu_6809.h"

namespace StarWars {

void routine_cbcc_cbd1_impl(CPU6809& cpu) {
    // Converted from rom_disasm_cbcc_cbd1.md
    // Address: 0xCBCC_CBD1

    label_CBCC:
    // CBCC: STU $0CFE
    cpu.write_memory16(0x0CFE, cpu.m_u);

    // CBCF: BCC $CBD0
    if (!cpu.carry_flag()) cpu.m_pc = 0xCBD0;

    // CBD1: JMP $cbd0
    goto label_CBD0;

}

} // namespace StarWars