#include "cpu_6809.h"

namespace StarWars {

void routine_d8df_d8f6_impl(CPU6809& cpu) {
    // Converted from rom_disasm_d8df_d8f6.md
    // Address: 0xD8DF_D8F6

    label_D8DF:
    // D8DF: LDX #$4A52
    cpu.m_x = 0x4A52;

    // D8E2: CMPX $4AD9
    cpu.compare_x(cpu.read_memory16(0x4AD9));

    // D8E5: BCC $D8F1
    if (!cpu.carry_flag()) cpu.m_pc = 0xD8F1;

    // D8E7: CMPA ,X+
    // TODO: Complex indexed addressing: ,X+

    // D8E9: BNE $D8EC
    if (!cpu.zero_flag()) cpu.m_pc = 0xD8EC;

    // D8EC: CMPX $4AD9
    cpu.compare_x(cpu.read_memory16(0x4AD9));

    // D8EF: BCS $D8E7
    if (cpu.carry_flag()) cpu.m_pc = 0xD8E7;

    // D8F1: STA ,X+
    // TODO: Handle indexed addressing: STA ,X+

    // D8F3: STX $4AD9
    cpu.write_memory16(0x4AD9, cpu.m_x);

}

} // namespace StarWars