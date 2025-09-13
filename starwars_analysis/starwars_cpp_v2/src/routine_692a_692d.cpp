#include "cpu_6809.h"

namespace StarWars {

void routine_692a_692d_impl(CPU6809& cpu) {
    // Converted from rom_disasm_692a_692d.md
    // Address: 0x692A_692D

    label_692A:
    // 692A: JSR $BD67
    cpu.call_function(0xBD67);
    label_692D:
    // 692D: JMP $692d
    goto label_692D;
}

} // namespace StarWars