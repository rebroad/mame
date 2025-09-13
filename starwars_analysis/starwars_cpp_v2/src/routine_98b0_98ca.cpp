#include "cpu_6809.h"

namespace StarWars {

void routine_98b0_98ca_impl(CPU6809& cpu) {
    // Converted from rom_disasm_98b0_98ca.md
    // Address: 0x98B0_98CA

    label_98B0:
    // 98B0: LDB <$62
    cpu.m_b = cpu.read_memory(0x62);
    // 98B2: ANDB #$03
    cpu.m_b &= 0x03;
    // 98B4: BEQ $98CA
    if (cpu.zero_flag()) cpu.m_pc = 0x98CA;
    // 98B6: LDD #$7100
    cpu.m_d = 0x7100;
    // 98B9: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 98BB: LDD #$67FF
    cpu.m_d = 0x67FF;
    // 98BE: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 98C0: LDD #$B9B3
    cpu.m_d = 0xB9B3;
    // 98C3: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 98C5: LDD #$7200
    cpu.m_d = 0x7200;
    // 98C8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 98CA: RTS 
    return;
}

} // namespace StarWars