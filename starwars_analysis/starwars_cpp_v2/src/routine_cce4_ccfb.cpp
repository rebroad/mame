#include "cpu_6809.h"

namespace StarWars {

void routine_cce4_ccfb_impl(CPU6809& cpu) {
    // Converted from rom_disasm_cce4_ccfb.md
    // Address: 0xCCE4_CCFB

    // CCE4: ORCC #$01
    cpu.m_cc |= 0x01;

    // CCE6: ROR $4684
    // TODO: Convert ROR $4684

    // CCE9: JSR $6761
    cpu.call_function(0x6761);

    // CCEC: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CCF0: ORCC #$01
    cpu.m_cc |= 0x01;

    // CCF2: ROR $4684
    // TODO: Convert ROR $4684

    // CCF5: JSR $6761
    cpu.call_function(0x6761);

    // CCF8: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CCFB: JMP $ccf9
    goto label_CCF9;

}

} // namespace StarWars