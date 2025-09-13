#include "cpu_6809.h"

namespace StarWars {

void routine_86cd_86d0_impl(CPU6809& cpu) {
    // Converted from rom_disasm_86cd_86d0.md
    // Address: 0x86CD_86D0

    label_86CD:
    // 86CD: LDD #$7000
    cpu.m_d = 0x7000;

    label_86D0:
    // 86D0: JMP $86d0
    goto label_86D0;

}

} // namespace StarWars