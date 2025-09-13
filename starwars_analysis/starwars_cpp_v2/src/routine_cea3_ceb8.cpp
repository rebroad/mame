#include "cpu_6809.h"

namespace StarWars {

void routine_cea3_ceb8_impl(CPU6809& cpu) {
    // Converted from rom_disasm_cea3_ceb8.md
    // Address: 0xCEA3_CEB8

    // CEA3: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // CEA6: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // CEA9: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // CEAC: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // CEAF: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // CEB2: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // CEB5: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // CEB8: JMP $ceb7
    goto label_CEB7;

}

} // namespace StarWars