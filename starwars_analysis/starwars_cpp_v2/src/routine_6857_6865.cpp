#include "cpu_6809.h"

namespace StarWars {

void routine_6857_6865_impl(CPU6809& cpu) {
    // Converted from rom_disasm_6857_6865.md
    // Address: 0x6857_6865

    // 6857: INC <$41
    // TODO: Convert INC <$41

    // 6859: JSR $72C7
    cpu.call_function(0x72C7);

    // 685C: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // 685E: LBMI $6C76
    // TODO: Convert LBMI $6C76

    // 6862: JSR $A849
    cpu.call_function(0xA849);

    // 6865: JMP $6864
    goto label_6864;

}

} // namespace StarWars