#include "cpu_6809.h"

namespace StarWars {

void routine_ae48_ae5f_impl(CPU6809& cpu) {
    // Converted from rom_disasm_ae48_ae5f.md
    // Address: 0xAE48_AE5F

    label_AE48:
    // AE48: LDB <$01
    cpu.m_b = cpu.read_memory(0x01);

    // AE4A: ORB #$70
    cpu.m_b |= 0x70;

    // AE4C: STB ,Y+
    // TODO: Handle indexed addressing: STB ,Y+

    // AE4E: STA ,Y+
    // TODO: Handle indexed addressing: STA ,Y+

    // AE50: LDD #$A016
    cpu.m_d = 0xA016;

    // AE53: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AE55: LDD #$7200
    cpu.m_d = 0x7200;

    // AE58: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AE5A: LDD #$8040
    cpu.m_d = 0x8040;

    // AE5D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

}

} // namespace StarWars