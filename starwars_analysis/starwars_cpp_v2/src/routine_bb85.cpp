#include "cpu_6809.h"

namespace StarWars {

void routine_bb85_impl(CPU6809& cpu) {
    // Converted from rom_disasm_bb85.md
    // Address: 0xBB85

    // BB85: LDA <$A1
    cpu.m_a = cpu.read_memory(0xA1);

    // BB88: LDX #$BB8E
    cpu.m_x = 0xBB8E;

    // BB8B: JSR [A,X]
    // TODO: Complex indexed addressing: [A,X]

    // BB8E: ADDA $8DBB
    cpu.m_a += 0x8DBB;

    // BB91: EORA <$BB
    cpu.m_a ^= 0xBB;

    // BB93: ADDA $BC1E
    cpu.m_a += 0xBC1E;

    // BB96: CMPX $85CC
    cpu.compare_x(cpu.read_memory16(0x85CC));

    // BB99: LSR ,X+
    // TODO: Convert LSR ,X+

    // BB9B: LDU #$76F0
    cpu.m_u = 0x76F0;

    // BB9E: LDX <$9F
    cpu.m_x = cpu.read_memory16(0x9F);

    // BBA0: JSR $BCAE
    cpu.call_function(0xBCAE);

    // BBA3: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BBA5: ADDD #$0002
    cpu.m_d += 0x0002;

    // BBA8: STD <$9F
    cpu.write_memory16(0x9F, cpu.m_d);

    // BBAA: CMPD #$003F
    // TODO: Convert CMPD #$003F

    // BBAE: BCC $BBBA
    if (!cpu.carry_flag()) cpu.m_pc = 0xBBBA;

    // BBB0: LDD #$0001
    cpu.m_d = 0x0001;

    // BBB3: STD <$9F
    cpu.write_memory16(0x9F, cpu.m_d);

    // BBB5: INC <$A1
    // TODO: Convert INC <$A1

    // BBB7: JSR $BDB7
    cpu.call_function(0xBDB7);

    // BBBB: LDX <$9F
    cpu.m_x = cpu.read_memory16(0x9F);

    // BBBD: LDD #$61FF
    cpu.m_d = 0x61FF;

    // BBC0: LDU #$76F0
    cpu.m_u = 0x76F0;

    // BBC3: JSR $BCAE
    cpu.call_function(0xBCAE);

    // BBC6: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BBC8: ADDD #$0002
    cpu.m_d += 0x0002;

    // BBCB: STD <$9F
    cpu.write_memory16(0x9F, cpu.m_d);

    // BBCD: CMPD #$003F
    // TODO: Convert CMPD #$003F

    // BBD1: BCC $BC0B
    if (!cpu.carry_flag()) cpu.m_pc = 0xBC0B;

    // BBD3: LDB #$3F
    cpu.m_b = 0x3F;

    // BBD5: SUBB <$A0
    cpu.m_b -= 0xA0;

    // BBD8: TFR D,X
    cpu.m_x = cpu.m_d;

    // BBDA: LDD #$64FF
    cpu.m_d = 0x64FF;

    // BBDD: JSR $BCAE
    cpu.call_function(0xBCAE);

    // BBE0: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BBEA: BMI $BBEF
    if (cpu.negative_flag()) cpu.m_pc = 0xBBEF;

    // BBED: ORB #$80
    cpu.m_b |= 0x80;

    // BBEF: ADDD #$7670
    cpu.m_d += 0x7670;

    // BBF3: BMI $BBF8
    if (cpu.negative_flag()) cpu.m_pc = 0xBBF8;

    // BBF6: ANDB #$7F
    cpu.m_b &= 0x7F;

    // BBF8: TFR D,U
    cpu.m_u = cpu.m_d;

    // BBFA: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BBFE: ANDB #$07
    cpu.m_b &= 0x07;

    // BC00: EORB #$07
    cpu.m_b ^= 0x07;

    // BC03: TFR D,X
    cpu.m_x = cpu.m_d;

    // BC05: LDD #$64FF
    cpu.m_d = 0x64FF;

    // BC08: JSR $BCC8
    cpu.call_function(0xBCC8);

    // BC0B: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BC0D: CMPD #$003F
    // TODO: Convert CMPD #$003F

    // BC11: BCS $BC1D
    if (cpu.carry_flag()) cpu.m_pc = 0xBC1D;

    // BC13: LDD #$0001
    cpu.m_d = 0x0001;

    // BC16: STD <$9F
    cpu.write_memory16(0x9F, cpu.m_d);

    // BC18: INC <$A1
    // TODO: Convert INC <$A1

    // BC1A: JSR $BDB7
    cpu.call_function(0xBDB7);

    // BC1E: LDX <$9F
    cpu.m_x = cpu.read_memory16(0x9F);

    // BC20: LDD #$67FF
    cpu.m_d = 0x67FF;

    // BC23: LDU #$7670
    cpu.m_u = 0x7670;

    // BC26: JSR $BCAE
    cpu.call_function(0xBCAE);

    // BC29: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BC2B: ADDD #$0003
    cpu.m_d += 0x0003;

    // BC2E: STD <$9F
    cpu.write_memory16(0x9F, cpu.m_d);

    // BC30: CMPD #$003F
    // TODO: Convert CMPD #$003F

    // BC34: BCC $BC43
    if (!cpu.carry_flag()) cpu.m_pc = 0xBC43;

    // BC36: LDB #$3F
    cpu.m_b = 0x3F;

    // BC38: SUBB <$A0
    cpu.m_b -= 0xA0;

    // BC3B: TFR D,X
    cpu.m_x = cpu.m_d;

    // BC3D: LDD #$61FF
    cpu.m_d = 0x61FF;

    // BC40: JSR $BCAE
    cpu.call_function(0xBCAE);

    // BC43: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BC45: CMPD #$003F
    // TODO: Convert CMPD #$003F

    // BC49: BCC $BC72
    if (!cpu.carry_flag()) cpu.m_pc = 0xBC72;

    // BC53: BMI $BC58
    if (cpu.negative_flag()) cpu.m_pc = 0xBC58;

    // BC56: ORB #$80
    cpu.m_b |= 0x80;

    // BC58: ADDD #$7670
    cpu.m_d += 0x7670;

    // BC5C: BMI $BC61
    if (cpu.negative_flag()) cpu.m_pc = 0xBC61;

    // BC5F: ANDB #$7F
    cpu.m_b &= 0x7F;

    // BC61: TFR D,U
    cpu.m_u = cpu.m_d;

    // BC63: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BC65: ANDB #$0F
    cpu.m_b &= 0x0F;

    // BC67: EORB #$0F
    cpu.m_b ^= 0x0F;

    // BC6A: TFR D,X
    cpu.m_x = cpu.m_d;

    // BC6C: LDD #$61FF
    cpu.m_d = 0x61FF;

    // BC6F: JSR $BCC8
    cpu.call_function(0xBCC8);

    // BC72: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BC74: CMPD #$0050
    // TODO: Convert CMPD #$0050

    // BC78: BCS $BC84
    if (cpu.carry_flag()) cpu.m_pc = 0xBC84;

    // BC7A: LDD #$0080
    cpu.m_d = 0x0080;

    // BC7D: STD <$9F
    cpu.write_memory16(0x9F, cpu.m_d);

    // BC7F: INC <$A1
    // TODO: Convert INC <$A1

    // BC81: JSR $BDB7
    cpu.call_function(0xBDB7);

    // BC85: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BC87: SUBD #$0004
    cpu.m_d -= 0x0004;

    // BC8A: STD <$9F
    cpu.write_memory16(0x9F, cpu.m_d);

    // BC8C: CMPD #$0008
    // TODO: Convert CMPD #$0008

    // BC90: BCS $BCA9
    if (cpu.carry_flag()) cpu.m_pc = 0xBCA9;

    // BC92: ADDD #$7500
    cpu.m_d += 0x7500;

    // BC95: TFR D,U
    cpu.m_u = cpu.m_d;

    // BC97: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BC9B: ANDB #$3F
    cpu.m_b &= 0x3F;

    // BC9D: EORB #$3F
    cpu.m_b ^= 0x3F;

    // BC9F: TFR D,X
    cpu.m_x = cpu.m_d;

    // BCA1: LDD #$67FF
    cpu.m_d = 0x67FF;

    // BCA4: JSR $BCC8
    cpu.call_function(0xBCC8);

    // BCA7: BRA $BCAD
    cpu.m_pc = 0xBCAD;

    // BCA9: LDA #$00
    cpu.m_a = 0x00;

    // BCAB: STA <$A1
    cpu.write_memory(0xA1, cpu.m_a);

    // BCAE: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BCB0: LDD #$1F98
    cpu.m_d = 0x1F98;

    // BCB3: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BCB5: LDD #$0000
    cpu.m_d = 0x0000;

    // BCB8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BCBA: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // BCBC: LDD #$BD69
    cpu.m_d = 0xBD69;

    // BCBF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BCC1: LEAU -$2,U
    // TODO: Fix comma operator: LEAU -$2,U

    // BCC3: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // BCC5: BNE $BCB0
    if (!cpu.zero_flag()) cpu.m_pc = 0xBCB0;

    // BCC8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BCCA: LDD #$1F98
    cpu.m_d = 0x1F98;

    // BCCD: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BCCF: LDD #$0000
    cpu.m_d = 0x0000;

    // BCD2: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BCD4: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // BCD6: LDD #$BD69
    cpu.m_d = 0xBD69;

    // BCD9: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BCDB: TFR U,D
    cpu.m_d = cpu.m_u;

    // BCDD: SUBD #$0004
    cpu.m_d -= 0x0004;

    // BCE0: ANDB #$7F
    cpu.m_b &= 0x7F;

    // BCE2: TFR D,U
    cpu.m_u = cpu.m_d;

    // BCE4: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // BCE6: BNE $BCCA
    if (!cpu.zero_flag()) cpu.m_pc = 0xBCCA;

    // BCE9: LDB #$0E
    cpu.m_b = 0x0E;

    // BCEB: TST $4401
    // TODO: Convert TST $4401

    // BCEE: BPL $BCF5
    if (!cpu.negative_flag()) cpu.m_pc = 0xBCF5;

    // BCF1: BNE $BCEB
    if (!cpu.zero_flag()) cpu.m_pc = 0xBCEB;

    // BCF3: LDA #$00
    cpu.m_a = 0x00;

    // BCF5: STA $4400
    cpu.write_memory(0x4400, cpu.m_a);

    // BCF9: LDA #$01
    cpu.m_a = 0x01;

    // BCFB: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BCFE: LDA #$02
    cpu.m_a = 0x02;

    // BD00: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD03: LDA #$03
    cpu.m_a = 0x03;

    // BD05: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD08: LDA #$04
    cpu.m_a = 0x04;

    // BD0A: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD0D: LDA #$05
    cpu.m_a = 0x05;

    // BD0F: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD12: LDA #$06
    cpu.m_a = 0x06;

    // BD14: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD17: LDA #$07
    cpu.m_a = 0x07;

    // BD19: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD1C: LDA #$08
    cpu.m_a = 0x08;

    // BD1E: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD21: LDA #$09
    cpu.m_a = 0x09;

    // BD23: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD26: LDA #$0A
    cpu.m_a = 0x0A;

    // BD28: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD2B: LDA #$0B
    cpu.m_a = 0x0B;

    // BD2D: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD30: LDA #$0C
    cpu.m_a = 0x0C;

    // BD32: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD35: LDA #$0D
    cpu.m_a = 0x0D;

    // BD37: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD3A: LDA #$0E
    cpu.m_a = 0x0E;

    // BD3C: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD3F: LDA #$0F
    cpu.m_a = 0x0F;

    // BD41: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD44: LDA #$10
    cpu.m_a = 0x10;

    // BD46: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD49: LDA #$11
    cpu.m_a = 0x11;

    // BD4B: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD4E: LDA #$12
    cpu.m_a = 0x12;

    // BD50: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD53: LDA #$13
    cpu.m_a = 0x13;

    // BD55: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD58: LDA #$14
    cpu.m_a = 0x14;

    // BD5A: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD5D: LDA #$15
    cpu.m_a = 0x15;

    // BD5F: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD62: LDA #$16
    cpu.m_a = 0x16;

    // BD64: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD67: LDA #$17
    cpu.m_a = 0x17;

    // BD69: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD6C: LDA #$18
    cpu.m_a = 0x18;

    // BD6E: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD71: LDA #$19
    cpu.m_a = 0x19;

    // BD73: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD76: LDA #$1A
    cpu.m_a = 0x1A;

    // BD78: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD7B: LDA #$1B
    cpu.m_a = 0x1B;

    // BD7D: JMP $BCE9
    cpu.m_pc = 0xBCE9;

    // BD80: LDA #$1C
    cpu.m_a = 0x1C;

    // BD82: JMP $BCE9
    cpu.m_pc = 0xBCE9;

}

} // namespace StarWars