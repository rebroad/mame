#include "cpu_6809.h"

namespace StarWars {

void routine_ae60_ae6e_impl(CPU6809& cpu) {
    // Converted from rom_disasm_ae60_ae6e.md
    // Address: 0xAE60_AE6E

    // AE60: LDA <$BD
    cpu.m_a = cpu.read_memory(0xBD);

    // AE62: BLE $AE6E
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAE6E;

    // AE64: DEC <$BD
    // TODO: Convert DEC <$BD

    // AE66: LDA #$00
    cpu.m_a = 0x00;

    // AE68: STA <$B7
    cpu.write_memory(0xB7, cpu.m_a);

    // AE6A: STA <$BC
    cpu.write_memory(0xBC, cpu.m_a);

    // AE6C: BRA $AE72
    goto label_AE72;

    // AE6E: JMP $ae6e
    goto label_AE6E;

}

} // namespace StarWars