#include "cpu_6809.h"

namespace StarWars {

void routine_64a6_64c9_impl(CPU6809& cpu) {
    // Converted from rom_disasm_64a6_64c9.md
    // Address: 0x64A6_64C9

    label_64A6:
    // 64A6: STB $4B11
    cpu.write_memory(0x4B11, cpu.m_b);

    // 64A9: LDD $4B10
    cpu.m_d = cpu.read_memory16(0x4B10);

    // 64AC: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 64AE: JSR $C7FD
    cpu.call_function(0xC7FD);

    // 64B1: JSR $D923
    cpu.call_function(0xD923);

    // 64B4: JSR $612F
    cpu.call_function(0x612F);

    // 64B7: JSR $6DCA
    cpu.call_function(0x6DCA);

    // 64BA: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 64BD: SUBD #$0001
    cpu.m_d -= 0x0001;

    // 64C0: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 64C3: BPL $64C9
    if (!cpu.negative_flag()) cpu.m_pc = 0x64C9;

    // 64C5: LDA #$05
    cpu.m_a = 0x05;

    // 64C7: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    label_64C9:
    // 64C9: JMP $64c9
    goto label_64C9;

}

} // namespace StarWars