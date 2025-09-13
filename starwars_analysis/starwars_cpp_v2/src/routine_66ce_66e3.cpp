#include "cpu_6809.h"

namespace StarWars {

void routine_66ce_66e3_impl(CPU6809& cpu) {
    // Converted from rom_disasm_66ce_66e3.md
    // Address: 0x66CE_66E3

    // 66CE: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 66D1: ADDD #$0001
    cpu.m_d += 0x0001;

    // 66D4: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 66D7: CMPD #$0280
    // TODO: Convert CMPD #$0280

    // 66DB: BCS $66E3
    if (cpu.carry_flag()) cpu.m_pc = 0x66E3;

    // 66DD: LDD #$FFFF
    cpu.m_d = 0xFFFF;

    // 66E0: STD $4AEC
    cpu.write_memory16(0x4AEC, cpu.m_d);

    // 66E3: JMP $66e3
    goto label_66E3;

}

} // namespace StarWars