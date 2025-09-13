#include "cpu_6809.h"

namespace StarWars {

void routine_cbd8_cc1b_impl(CPU6809& cpu) {
    // Converted from rom_disasm_cbd8_cc1b.md
    // Address: 0xCBD8_CC1B

    label_CBD8:
    // CBD8: STU $9CFE
    cpu.write_memory16(0x9CFE, cpu.m_u);

    // CBDB: BCC $CBDC
    if (!cpu.carry_flag()) cpu.m_pc = 0xCBDC;

    // CBDD: LDD #$FE24
    cpu.m_d = 0xFE24;

    // CBE0: STU $FCFE
    cpu.write_memory16(0xFCFE, cpu.m_u);

    // CBE3: BCC $CBE5
    if (!cpu.carry_flag()) cpu.m_pc = 0xCBE5;

    // CBE5: BGE $CBE5
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xCBE5;

    // CBE7: BCC $CBE9
    if (!cpu.carry_flag()) cpu.m_pc = 0xCBE9;

    // CBEA: LDU $2400
    cpu.m_u = cpu.read_memory16(0x2400);

    // CBED: CMPX #$FE24
    cpu.compare_x(0xFE24);

    // CBF0: NEG <$BC
    // TODO: Convert NEG <$BC

    // CBF2: LDU $2400
    cpu.m_u = cpu.read_memory16(0x2400);

    // CBF5: LDD [W,S]
    // TODO: Complex indexed addressing: [W,S]

    // CBF7: BCC $CBFA
    if (!cpu.carry_flag()) cpu.m_pc = 0xCBFA;

    // CBF9: ANDCC #$FE
    // TODO: Convert ANDCC #$FE

    // CBFB: BCC $CBFE
    if (!cpu.carry_flag()) cpu.m_pc = 0xCBFE;

    // CBFD: ANDCC #$FE
    // TODO: Convert ANDCC #$FE

    // CC00: NEG <$1C
    // TODO: Convert NEG <$1C

    // CC02: LDU $8401
    cpu.m_u = cpu.read_memory16(0x8401);

    // CC05: ANDCC #$FE
    // TODO: Convert ANDCC #$FE

    // CC07: ANDA $011C
    cpu.m_a &= 0x011C;

    // CC0A: LDU $E401
    cpu.m_u = cpu.read_memory16(0xE401);

    // CC0D: ANDCC #$FF
    // TODO: Convert ANDCC #$FF

    // CC10: NEG <$1C
    // TODO: Convert NEG <$1C

    // CC12: STU $7401
    cpu.write_memory16(0x7401, cpu.m_u);

    // CC15: ANDCC #$FF
    // TODO: Convert ANDCC #$FF

    // CC17: ANDA [$9876,PCR]
    // TODO: Complex indexed addressing: [$9876,PCR]

    // CC1B: JMP $cc18
    goto label_CC18;

}

} // namespace StarWars