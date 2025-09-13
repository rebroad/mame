#include "cpu_6809.h"

namespace StarWars {

void routine_ae03_ae11_impl(CPU6809& cpu) {
    // Converted from rom_disasm_ae03_ae11.md
    // Address: 0xAE03_AE11

    label_AE03:
    // AE03: SUBD $5000
    cpu.m_d -= 0x5000;
    // AE06: BGE $AE5F
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAE5F;
    // AE08: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);
    // AE0B: BPL $AE11
    if (!cpu.negative_flag()) cpu.m_pc = 0xAE11;
    // AE0D: COMA 
    cpu.m_a = ~cpu.m_a;
    // AE0E: NEGB 
    cpu.m_b = -cpu.m_b;
    // AE0F: SBCA #$FF
    // TODO: Convert SBCA #$FF
    label_AE11:
    // AE11: JMP $ae11
    goto label_AE11;
}

} // namespace StarWars