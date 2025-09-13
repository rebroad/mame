#include "cpu_6809.h"

namespace StarWars {

void routine_bd03_bd12_impl(CPU6809& cpu) {
    // Converted from rom_disasm_bd03_bd12.md
    // Address: 0xBD03_BD12

    label_BD03:
    // BD03: LDA #$03
    cpu.m_a = 0x03;
    // BD05: JMP $BCE9
    goto label_BCE9;
    // BD08: LDA #$04
    cpu.m_a = 0x04;
    // BD0A: JMP $BCE9
    goto label_BCE9;
    // BD0D: LDA #$05
    cpu.m_a = 0x05;
    // BD0F: JMP $BCE9
    goto label_BCE9;
    label_BD12:
    // BD12: JMP $bd12
    goto label_BD12;
}

} // namespace StarWars