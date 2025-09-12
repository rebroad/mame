#include "cpu_6809.h"

namespace StarWars {

void routine_aae4_impl(CPU6809& cpu) {
    // Converted from rom_disasm_aae4.md
    // Address: 0xAAE4

    // AAE4: LDX #$494B
    cpu.m_x = 0x494B;

    // AAE7: STX <$A8
    cpu.write_memory16(0xA8, cpu.m_x);

    // AAE9: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AAEB: LBEQ $AC34
    // TODO: Convert LBEQ $AC34

    // AAEF: BITA #$10
    // TODO: Convert BITA #$10

    // AAF1: BEQ $AAF9
    if (cpu.zero_flag()) cpu.m_pc = 0xAAF9;

    // AAF3: JSR $ACB1
    cpu.call_function(0xACB1);

    // AAF6: JMP $AC34
    cpu.m_pc = 0xAC34;

    // AAF9: BITA #$04
    // TODO: Convert BITA #$04

    // AAFB: BEQ $AB11
    if (cpu.zero_flag()) cpu.m_pc = 0xAB11;

    // AAFD: LDD $5098
    cpu.m_d = cpu.read_memory16(0x5098);

    // AB00: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // AB03: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);

    // AB06: STD $5042
    cpu.write_memory16(0x5042, cpu.m_d);

    // AB09: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // AB0C: STD $5044
    cpu.write_memory16(0x5044, cpu.m_d);

    // AB0F: BRA $AB1D
    cpu.m_pc = 0xAB1D;

    // AB11: LDD #$0000
    cpu.m_d = 0x0000;

    // AB14: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // AB17: STD $5042
    cpu.write_memory16(0x5042, cpu.m_d);

    // AB1A: STD $5044
    cpu.write_memory16(0x5044, cpu.m_d);

    // AB1E: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

    // AB20: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // AB23: LDA #$67
    cpu.m_a = 0x67;

    // AB25: JSR $CDBA
    cpu.call_function(0xCDBA);

    // AB28: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // AB2B: CMPD #$0001
    // TODO: Convert CMPD #$0001

    // AB2F: LBLE $AC27
    // TODO: Convert LBLE $AC27

    // AB33: CMPD #$7F00
    // TODO: Convert CMPD #$7F00

    // AB37: LBHI $AC27
    // TODO: Convert LBHI $AC27

    // AB3B: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // AB3E: STD $5018
    cpu.write_memory16(0x5018, cpu.m_d);

    // AB41: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // AB44: STD $501A
    cpu.write_memory16(0x501A, cpu.m_d);

    // AB47: BPL $AB4D
    if (!cpu.negative_flag()) cpu.m_pc = 0xAB4D;

    // AB4B: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AB4D: SUBD $5000
    cpu.m_d -= 0x5000;

    // AB50: LBCC $AC27
    // TODO: Convert LBCC $AC27

    // AB54: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);

    // AB57: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);

    // AB5A: BPL $AB60
    if (!cpu.negative_flag()) cpu.m_pc = 0xAB60;

    // AB5E: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AB60: SUBD $5000
    cpu.m_d -= 0x5000;

    // AB63: LBCC $AC27
    // TODO: Convert LBCC $AC27

    // AB67: JSR $CCF0
    cpu.call_function(0xCCF0);

    // AB6A: LDX <$A8
    cpu.m_x = cpu.read_memory16(0xA8);

    // AB6C: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AB6E: BITA #$03
    // TODO: Convert BITA #$03

    // AB70: BEQ $ABC0
    if (cpu.zero_flag()) cpu.m_pc = 0xABC0;

    // AB72: LDD #$0080
    cpu.m_d = 0x0080;

    // AB75: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // AB78: LDA #$86
    cpu.m_a = 0x86;

    // AB7A: JSR $CDBA
    cpu.call_function(0xCDBA);

    // AB7D: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // AB80: ADDD #$000A
    cpu.m_d += 0x000A;

    // AB83: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // AB85: LDD <$D6
    cpu.m_d = cpu.read_memory16(0xD6);

    // AB87: SUBD <$B3
    cpu.m_d -= 0xB3;

    // AB89: BPL $AB8F
    if (!cpu.negative_flag()) cpu.m_pc = 0xAB8F;

    // AB8D: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AB8F: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // AB91: SUBD <$03
    cpu.m_d -= 0x03;

    // AB93: BGT $ABC0
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xABC0;

    // AB95: LDD <$D8
    cpu.m_d = cpu.read_memory16(0xD8);

    // AB97: SUBD <$B5
    cpu.m_d -= 0xB5;

    // AB99: BPL $AB9F
    if (!cpu.negative_flag()) cpu.m_pc = 0xAB9F;

    // AB9D: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AB9F: CMPD <$03
    // TODO: Convert CMPD <$03

    // ABA2: BGT $ABC0
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xABC0;

    // ABA4: ADDD <$01
    cpu.m_d += 0x01;

    // ABA6: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // ABA8: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);

    // ABAC: ADDD <$03
    cpu.m_d += 0x03;

    // ABAE: SUBD <$01
    cpu.m_d -= 0x01;

    // ABB0: BLT $ABC0
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xABC0;

    // ABB2: LDD $5018
    cpu.m_d = cpu.read_memory16(0x5018);

    // ABB5: CMPD <$CC
    // TODO: Convert CMPD <$CC

    // ABB8: BCC $ABC0
    if (!cpu.carry_flag()) cpu.m_pc = 0xABC0;

    // ABBA: STD <$CC
    cpu.write_memory16(0xCC, cpu.m_d);

    // ABBC: LDX <$A8
    cpu.m_x = cpu.read_memory16(0xA8);

    // ABBE: STX <$CA
    cpu.write_memory16(0xCA, cpu.m_x);

    // ABC0: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // ABC2: BITA #$01
    // TODO: Convert BITA #$01

    // ABC4: BEQ $AC22
    if (cpu.zero_flag()) cpu.m_pc = 0xAC22;

    // ABC6: LDD $5018
    cpu.m_d = cpu.read_memory16(0x5018);

    // ABCB: BMI $AC22
    if (cpu.negative_flag()) cpu.m_pc = 0xAC22;

    // ABCD: LDU $5086
    cpu.m_u = cpu.read_memory16(0x5086);

    // ABD0: CMPU #$0200
    // TODO: Convert CMPU #$0200

    // ABD4: BLT $ABDB
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xABDB;

    // ABD6: SUBD $5086
    cpu.m_d -= 0x5086;

    // ABD9: BRA $ABDE
    cpu.m_pc = 0xABDE;

    // ABDB: SUBD #$0200
    cpu.m_d -= 0x0200;

    // ABDE: BLE $ABE5
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xABE5;

    // ABE0: SUBD #$0110
    cpu.m_d -= 0x0110;

    // ABE3: BGT $AC22
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAC22;

    // ABE5: LDD <$D6
    cpu.m_d = cpu.read_memory16(0xD6);

    // ABE7: BMI $ABF0
    if (cpu.negative_flag()) cpu.m_pc = 0xABF0;

    // ABE9: SUBD #$01C0
    cpu.m_d -= 0x01C0;

    // ABEC: BGE $AC22
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAC22;

    // ABEE: BRA $ABF5
    cpu.m_pc = 0xABF5;

    // ABF0: SUBD #$FE40
    cpu.m_d -= 0xFE40;

    // ABF3: BLE $AC22
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAC22;

    // ABF5: LDD <$D8
    cpu.m_d = cpu.read_memory16(0xD8);

    // ABF7: BMI $AC00
    if (cpu.negative_flag()) cpu.m_pc = 0xAC00;

    // ABF9: SUBD #$01E0
    cpu.m_d -= 0x01E0;

    // ABFC: BGE $AC22
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAC22;

    // ABFE: BRA $AC05
    cpu.m_pc = 0xAC05;

    // AC00: SUBD #$FE60
    cpu.m_d -= 0xFE60;

    // AC03: BLE $AC22
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAC22;

    // AC05: CMPX <$CA
    cpu.compare_x(cpu.read_memory16(0xCA));

    // AC07: BNE $AC14
    if (!cpu.zero_flag()) cpu.m_pc = 0xAC14;

    // AC09: LDA <$BC
    cpu.m_a = cpu.read_memory(0xBC);

    // AC0B: BEQ $AC14
    if (cpu.zero_flag()) cpu.m_pc = 0xAC14;

    // AC0D: JSR $AD20
    cpu.call_function(0xAD20);

    // AC10: LDX <$A8
    cpu.m_x = cpu.read_memory16(0xA8);

    // AC12: BRA $AC22
    cpu.m_pc = 0xAC22;

    // AC14: JSR $ACE0
    cpu.call_function(0xACE0);

    // AC17: LDD #$8040
    cpu.m_d = 0x8040;

    // AC1A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AC1C: JSR $ACB1
    cpu.call_function(0xACB1);

    // AC1F: JMP $AC34
    cpu.m_pc = 0xAC34;

    // AC22: JSR $AC52
    cpu.call_function(0xAC52);

    // AC25: BRA $AC34
    cpu.m_pc = 0xAC34;

    // AC27: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AC29: BITA #$01
    // TODO: Convert BITA #$01

    // AC2B: BEQ $AC31
    if (cpu.zero_flag()) cpu.m_pc = 0xAC31;

    // AC2D: LDA #$00
    cpu.m_a = 0x00;

    // AC2F: BRA $AC32
    cpu.m_pc = 0xAC32;

    // AC32: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // AC34: LDX <$A8
    cpu.m_x = cpu.read_memory16(0xA8);

    // AC36: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // AC38: CMPX #$496F
    cpu.compare_x(0x496F);

    // AC3B: LBCS $AAE7
    // TODO: Convert LBCS $AAE7

    // AC3F: LDD $5098
    cpu.m_d = cpu.read_memory16(0x5098);

    // AC42: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // AC45: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);

    // AC48: STD $5042
    cpu.write_memory16(0x5042, cpu.m_d);

    // AC4B: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // AC4E: STD $5044
    cpu.write_memory16(0x5044, cpu.m_d);

    // AC52: LDX <$A8
    cpu.m_x = cpu.read_memory16(0xA8);

    // AC54: LDA #$08
    cpu.m_a = 0x08;

    // AC56: STA <$01
    cpu.write_memory(0x01, cpu.m_a);

    // AC58: LDD $5018
    cpu.m_d = cpu.read_memory16(0x5018);

    // AC5B: DEC <$01
    // TODO: Convert DEC <$01

    // AC5D: BEQ $AC65
    if (cpu.zero_flag()) cpu.m_pc = 0xAC65;

    // AC61: BPL $AC5B
    if (!cpu.negative_flag()) cpu.m_pc = 0xAC5B;

    // AC63: ANDA #$7F
    cpu.m_a &= 0x7F;

    // AC65: STA <$02
    cpu.write_memory(0x02, cpu.m_a);

    // AC67: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AC69: ANDA #$20
    cpu.m_a &= 0x20;

    // AC6B: BNE $AC7C
    if (!cpu.zero_flag()) cpu.m_pc = 0xAC7C;

    // AC6D: LDA <$01
    cpu.m_a = cpu.read_memory(0x01);

    // AC6F: ORA #$70
    cpu.m_a |= 0x70;

    // AC71: LDB <$02
    cpu.m_b = cpu.read_memory(0x02);

    // AC73: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AC75: LDD #$A015
    cpu.m_d = 0xA015;

    // AC78: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AC7A: BRA $ACA6
    cpu.m_pc = 0xACA6;

    // AC7C: LDB <$02
    cpu.m_b = cpu.read_memory(0x02);

    // AC7E: LDA <$01
    cpu.m_a = cpu.read_memory(0x01);

    // AC81: CMPA #$03
    cpu.compare_a(0x03);

    // AC83: BCC $AC8A
    if (!cpu.carry_flag()) cpu.m_pc = 0xAC8A;

    // AC85: LDA #$03
    cpu.m_a = 0x03;

    // AC88: BRA $AC91
    cpu.m_pc = 0xAC91;

    // AC8A: CMPA #$06
    cpu.compare_a(0x06);

    // AC8C: BCS $AC91
    if (cpu.carry_flag()) cpu.m_pc = 0xAC91;

    // AC8E: LDA #$06
    cpu.m_a = 0x06;

    // AC91: ORA #$70
    cpu.m_a |= 0x70;

    // AC93: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AC95: LDB $5,X
    // TODO: Fix comma operator: LDB $5,X

    // AC9B: ORB #$0F
    cpu.m_b |= 0x0F;

    // AC9D: LDA #$65
    cpu.m_a = 0x65;

    // AC9F: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACA1: LDD #$A017
    cpu.m_d = 0xA017;

    // ACA4: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACA6: LDD #$7200
    cpu.m_d = 0x7200;

    // ACA9: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACAB: LDD #$8040
    cpu.m_d = 0x8040;

    // ACAE: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACB1: LDX <$A8
    cpu.m_x = cpu.read_memory16(0xA8);

    // ACB3: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // ACB5: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // ACB7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACB9: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // ACBB: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACBD: LDA $5,X
    // TODO: Fix comma operator: LDA $5,X

    // ACBF: LDB #$10
    cpu.m_b = 0x10;

    // ACC2: LDA #$70
    cpu.m_a = 0x70;

    // ACC4: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACC6: LDB $5,X
    // TODO: Fix comma operator: LDB $5,X

    // ACCC: LDA #$67
    cpu.m_a = 0x67;

    // ACCE: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACD0: LDD #$A017
    cpu.m_d = 0xA017;

    // ACD3: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACD5: LDD #$7200
    cpu.m_d = 0x7200;

    // ACD8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACDA: LDD #$8040
    cpu.m_d = 0x8040;

    // ACDD: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACE0: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // ACE2: LDD -$4,Y
    // TODO: Fix comma operator: LDD -$4,Y

}

} // namespace StarWars