#include "cpu_6809.h"

namespace StarWars {

void routine_7b27_7b34_impl(CPU6809& cpu) {
    // Converted from rom_disasm_7b27_7b34.md
    // Address: 0x7B27_7B34

    // 7B28: SBCA #$DC
    // TODO: Convert SBCA #$DC

    // 7B2A: CMPA #$E2
    cpu.compare_a(0xE2);

    // 7B2C: SBCA #$DC
    // TODO: Convert SBCA #$DC

    // 7B2E: CMPA #$C3
    cpu.compare_a(0xC3);

    // 7B30: SBCA #$DC
    // TODO: Convert SBCA #$DC

    // 7B32: SBCA #$67
    // TODO: Convert SBCA #$67

    label_7B34:
    // 7B34: JMP $7b34
    goto label_7B34;

}

} // namespace StarWars