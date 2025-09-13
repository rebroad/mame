#include "cpu_6809.h"

namespace StarWars {

void routine_ae3e_ae48_impl(CPU6809& cpu) {
    // Converted from rom_disasm_ae3e_ae48.md
    // Address: 0xAE3E_AE48

    label_AE3E:
    // AE3E: DEC <$01
    // TODO: Convert DEC <$01

    // AE40: BEQ $AE48
    if (cpu.zero_flag()) cpu.m_pc = 0xAE48;

    // AE44: BPL $AE3E
    if (!cpu.negative_flag()) cpu.m_pc = 0xAE3E;

    // AE46: ANDA #$7F
    cpu.m_a &= 0x7F;

    label_AE48:
    // AE48: JMP $ae48
    goto label_AE48;

}

} // namespace StarWars