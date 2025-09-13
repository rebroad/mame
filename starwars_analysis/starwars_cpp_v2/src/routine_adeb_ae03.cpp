#include "cpu_6809.h"

namespace StarWars {

void routine_adeb_ae03_impl(CPU6809& cpu) {
    // Converted from rom_disasm_adeb_ae03.md
    // Address: 0xADEB_AE03

    // ADEB: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // ADEE: CMPD #$0001
    // TODO: Convert CMPD #$0001

    // ADF2: BLT $AE5F
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAE5F;

    // ADF4: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // ADF7: STD $5018
    cpu.write_memory16(0x5018, cpu.m_d);

    // ADFA: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // ADFD: BPL $AE03
    if (!cpu.negative_flag()) cpu.m_pc = 0xAE03;

    // AE01: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AE03: JMP $ae03
    goto label_AE03;

}

} // namespace StarWars