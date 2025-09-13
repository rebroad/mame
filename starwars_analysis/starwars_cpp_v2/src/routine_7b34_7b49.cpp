#include "cpu_6809.h"

namespace StarWars {

void routine_7b34_7b49_impl(CPU6809& cpu) {
    // Converted from rom_disasm_7b34_7b49.md
    // Address: 0x7B34_7B49

    label_7B34:
    // 7B34: SBCA #$DC
    // TODO: Convert SBCA #$DC
    // 7B36: SBCA #$01
    // TODO: Convert SBCA #$01
    // 7B38: SBCA #$DC
    // TODO: Convert SBCA #$DC
    // 7B3A: CMPA #$E2
    cpu.compare_a(0xE2);
    // 7B3C: SBCA #$FA
    // TODO: Convert SBCA #$FA
    // 7B3E: JMP $0882
    goto label_0882;
    // 7B41: LDD <$7D
    cpu.m_d = cpu.read_memory16(0x7D);
    // 7B43: XNCA 
    // TODO: Convert XNCA 
    // 7B44: SBCA #$C8
    // TODO: Convert SBCA #$C8
    // 7B46: TST $B182
    // TODO: Convert TST $B182
    label_7B49:
    // 7B49: JMP $7b49
    goto label_7B49;
}

} // namespace StarWars