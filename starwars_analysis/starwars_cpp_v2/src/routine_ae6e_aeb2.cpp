#include "cpu_6809.h"

namespace StarWars {

void routine_ae6e_aeb2_impl(CPU6809& cpu) {
    // Converted from rom_disasm_ae6e_aeb2.md
    // Address: 0xAE6E_AEB2

    label_AE6E:
    // AE6E: LDA #$00
    cpu.m_a = 0x00;

    // AE70: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // AE72: LDA #$00
    cpu.m_a = 0x00;

    // AE74: STA <$BC
    cpu.write_memory(0xBC, cpu.m_a);

    // AE76: ORCC #$10
    cpu.m_cc |= 0x10;

    // AE78: LDA <$31
    cpu.m_a = cpu.read_memory(0x31);

    // AE7A: BEQ $AE87
    if (cpu.zero_flag()) cpu.m_pc = 0xAE87;

    // AE7C: INC $4B1B
    // TODO: Convert INC $4B1B

    // AE7F: CLR <$BD
    cpu.write_memory(0xBD, 0);

    // AE81: LDB #$08
    cpu.m_b = 0x08;

    // AE83: STB <$B7
    cpu.write_memory(0xB7, cpu.m_b);

    // AE85: CLR <$31
    cpu.write_memory(0x31, 0);

    // AE87: LDA <$B7
    cpu.m_a = cpu.read_memory(0xB7);

    // AE89: BLE $AE9F
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAE9F;

    // AE8B: DEC <$B7
    // TODO: Convert DEC <$B7

    // AE8D: STA <$BC
    cpu.write_memory(0xBC, cpu.m_a);

    // AE8F: LDD <$74
    cpu.m_d = cpu.read_memory16(0x74);

    // AE91: STD <$B8
    cpu.write_memory16(0xB8, cpu.m_d);

    // AE93: LDD <$6B
    cpu.m_d = cpu.read_memory16(0x6B);

    // AE95: STD <$BA
    cpu.write_memory16(0xBA, cpu.m_d);

    // AE97: LDD <$2D
    cpu.m_d = cpu.read_memory16(0x2D);

    // AE99: STD <$B3
    cpu.write_memory16(0xB3, cpu.m_d);

    // AE9B: LDD <$2F
    cpu.m_d = cpu.read_memory16(0x2F);

    // AE9D: STD <$B5
    cpu.write_memory16(0xB5, cpu.m_d);

    // AE9F: ANDCC #$EF
    // TODO: Convert ANDCC #$EF

    // AEA1: LDA <$B7
    cpu.m_a = cpu.read_memory(0xB7);

    // AEA3: CMPA #$07
    cpu.compare_a(0x07);

    // AEA5: BNE $AEB2
    if (!cpu.zero_flag()) cpu.m_pc = 0xAEB2;

    // AEA7: LDA $4B36
    cpu.m_a = cpu.read_memory(0x4B36);

    // AEAA: BNE $AEAF
    if (!cpu.zero_flag()) cpu.m_pc = 0xAEAF;

    // AEAC: DEC $4B36
    // TODO: Convert DEC $4B36

    // AEAF: JSR $BE16
    cpu.call_function(0xBE16);

    label_AEB2:
    // AEB2: JMP $aeb2
    goto label_AEB2;

}

} // namespace StarWars