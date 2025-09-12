#include "cpu_6809.h"

namespace StarWars {

void routine_aae4_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_aae4.md
    // Address: 0xAAE4

    // AAE4: LDX #$494B
    cpu.state_.x = 0x494B;

    // AAE7: STX <$A8
    cpu.write_memory(0xA8, cpu.state_.x);

    // AAE9: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AAEB: LBEQ $0150
    // TODO: Convert LBEQ $0150

    // AAEF: BITA #$10
    // TODO: Convert BITA #$10

    // AAF1: BEQ $0015
    if (cpu.zero_flag()) cpu.state_.pc = 0xAB08;

    // AAF3: JSR $ACB1
    cpu.call_function(0xACB1);

    // AAF6: JMP $AC34
    cpu.state_.pc = 0xAC34;

    // AAF9: BITA #$04
    // TODO: Convert BITA #$04

    // AAFB: BEQ $002D
    if (cpu.zero_flag()) cpu.state_.pc = 0xAB2A;

    // AAFD: LDD $5098
    cpu.state_.d = cpu.read_memory_word(0x5098);

    // AB00: STD $5040
    cpu.write_memory(0x5040, cpu.state_.d);

    // AB03: LDD $509A
    cpu.state_.d = cpu.read_memory_word(0x509A);

    // AB06: STD $5042
    cpu.write_memory(0x5042, cpu.state_.d);

    // AB09: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // AB0C: STD $5044
    cpu.write_memory(0x5044, cpu.state_.d);

    // AB0F: BRA $0039
    cpu.state_.pc = 0xAB4A;

    // AB11: LDD #$0000
    cpu.state_.d = 0x0000;

    // AB14: STD $5040
    cpu.write_memory(0x5040, cpu.state_.d);

    // AB17: STD $5042
    cpu.write_memory(0x5042, cpu.state_.d);

    // AB1A: STD $5044
    cpu.write_memory(0x5044, cpu.state_.d);

    // AB1E: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

    // AB20: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // AB23: LDA #$67
    cpu.state_.a = 0x67;

    // AB25: JSR $CDBA
    cpu.call_function(0xCDBA);

    // AB28: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // AB2B: CMPD #$0001
    // TODO: Convert CMPD #$0001

    // AB2F: LBLE $0143
    // TODO: Convert LBLE $0143

    // AB33: CMPD #$7F00
    // TODO: Convert CMPD #$7F00

    // AB37: LBHI $0143
    // TODO: Convert LBHI $0143

    // AB3B: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // AB3E: STD $5018
    cpu.write_memory(0x5018, cpu.state_.d);

    // AB41: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // AB44: STD $501A
    cpu.write_memory(0x501A, cpu.state_.d);

    // AB47: BPL $0069
    if (!cpu.negative_flag()) cpu.state_.pc = 0xABB2;

    // AB4B: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AB4D: SUBD $5000
    cpu.state_.d -= 0x5000;

    // AB50: LBCC $0143
    // TODO: Convert LBCC $0143

    // AB54: LDD $5004
    cpu.state_.d = cpu.read_memory_word(0x5004);

    // AB57: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // AB5A: BPL $007C
    if (!cpu.negative_flag()) cpu.state_.pc = 0xABD8;

    // AB5E: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AB60: SUBD $5000
    cpu.state_.d -= 0x5000;

    // AB63: LBCC $0143
    // TODO: Convert LBCC $0143

    // AB67: JSR $CCF0
    cpu.call_function(0xCCF0);

    // AB6A: LDX <$A8
    cpu.state_.x = cpu.read_memory_word(0xA8);

    // AB6C: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AB6E: BITA #$03
    // TODO: Convert BITA #$03

    // AB70: BEQ $00DC
    if (cpu.zero_flag()) cpu.state_.pc = 0xAC4E;

    // AB72: LDD #$0080
    cpu.state_.d = 0x0080;

    // AB75: STD $5002
    cpu.write_memory(0x5002, cpu.state_.d);

    // AB78: LDA #$86
    cpu.state_.a = 0x86;

    // AB7A: JSR $CDBA
    cpu.call_function(0xCDBA);

    // AB7D: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // AB80: ADDD #$000A
    cpu.state_.d += 0x000A;

    // AB83: STD <$03
    cpu.write_memory(0x03, cpu.state_.d);

    // AB85: LDD <$D6
    cpu.state_.d = cpu.read_memory_word(0xD6);

    // AB87: SUBD <$B3
    cpu.state_.d -= 0xB3;

    // AB89: BPL $00AB
    if (!cpu.negative_flag()) cpu.state_.pc = 0xAC36;

    // AB8D: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AB8F: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // AB91: SUBD <$03
    cpu.state_.d -= 0x03;

    // AB93: BGT $00DC
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xAC71;

    // AB95: LDD <$D8
    cpu.state_.d = cpu.read_memory_word(0xD8);

    // AB97: SUBD <$B5
    cpu.state_.d -= 0xB5;

    // AB99: BPL $00BB
    if (!cpu.negative_flag()) cpu.state_.pc = 0xAC56;

    // AB9D: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AB9F: CMPD <$03
    // TODO: Convert CMPD <$03

    // ABA2: BGT $00DC
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xAC80;

    // ABA4: ADDD <$01
    cpu.state_.d += 0x01;

    // ABA6: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // ABA8: LDD <$03
    cpu.state_.d = cpu.read_memory_word(0x03);

    // ABAC: ADDD <$03
    cpu.state_.d += 0x03;

    // ABAE: SUBD <$01
    cpu.state_.d -= 0x01;

    // ABB0: BLT $00DC
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xAC8E;

    // ABB2: LDD $5018
    cpu.state_.d = cpu.read_memory_word(0x5018);

    // ABB5: CMPD <$CC
    // TODO: Convert CMPD <$CC

    // ABB8: BCC $00DC
    if (!cpu.carry_flag()) cpu.state_.pc = 0xAC96;

    // ABBA: STD <$CC
    cpu.write_memory(0xCC, cpu.state_.d);

    // ABBC: LDX <$A8
    cpu.state_.x = cpu.read_memory_word(0xA8);

    // ABBE: STX <$CA
    cpu.write_memory(0xCA, cpu.state_.x);

    // ABC0: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // ABC2: BITA #$01
    // TODO: Convert BITA #$01

    // ABC4: BEQ $013E
    if (cpu.zero_flag()) cpu.state_.pc = 0xAD04;

    // ABC6: LDD $5018
    cpu.state_.d = cpu.read_memory_word(0x5018);

    // ABCB: BMI $013E
    if (cpu.negative_flag()) cpu.state_.pc = 0xAD0B;

    // ABCD: LDU $5086
    cpu.state_.u = cpu.read_memory_word(0x5086);

    // ABD0: CMPU #$0200
    // TODO: Convert CMPU #$0200

    // ABD4: BLT $00F7
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xACCD;

    // ABD6: SUBD $5086
    cpu.state_.d -= 0x5086;

    // ABD9: BRA $00FA
    cpu.state_.pc = 0xACD5;

    // ABDB: SUBD #$0200
    cpu.state_.d -= 0x0200;

    // ABDE: BLE $0101
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xACE1;

    // ABE0: SUBD #$0110
    cpu.state_.d -= 0x0110;

    // ABE3: BGT $013E
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xAD23;

    // ABE5: LDD <$D6
    cpu.state_.d = cpu.read_memory_word(0xD6);

    // ABE7: BMI $010C
    if (cpu.negative_flag()) cpu.state_.pc = 0xACF5;

    // ABE9: SUBD #$01C0
    cpu.state_.d -= 0x01C0;

    // ABEC: BGE $013E
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xAD2C;

    // ABEE: BRA $0111
    cpu.state_.pc = 0xAD01;

    // ABF0: SUBD #$FE40
    cpu.state_.d -= 0xFE40;

    // ABF3: BLE $013E
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xAD33;

    // ABF5: LDD <$D8
    cpu.state_.d = cpu.read_memory_word(0xD8);

    // ABF7: BMI $011C
    if (cpu.negative_flag()) cpu.state_.pc = 0xAD15;

    // ABF9: SUBD #$01E0
    cpu.state_.d -= 0x01E0;

    // ABFC: BGE $013E
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xAD3C;

    // ABFE: BRA $0121
    cpu.state_.pc = 0xAD21;

    // AC00: SUBD #$FE60
    cpu.state_.d -= 0xFE60;

    // AC03: BLE $013E
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xAD43;

    // AC05: CMPX <$CA
    cpu.compare_x(cpu.read_memory_word(0xCA));

    // AC07: BNE $0130
    if (!cpu.zero_flag()) cpu.state_.pc = 0xAD39;

    // AC09: LDA <$BC
    cpu.state_.a = cpu.read_memory(0xBC);

    // AC0B: BEQ $0130
    if (cpu.zero_flag()) cpu.state_.pc = 0xAD3D;

    // AC0D: JSR $AD20
    cpu.call_function(0xAD20);

    // AC10: LDX <$A8
    cpu.state_.x = cpu.read_memory_word(0xA8);

    // AC12: BRA $013E
    cpu.state_.pc = 0xAD52;

    // AC14: JSR $ACE0
    cpu.call_function(0xACE0);

    // AC17: LDD #$8040
    cpu.state_.d = 0x8040;

    // AC1A: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AC1C: JSR $ACB1
    cpu.call_function(0xACB1);

    // AC1F: JMP $AC34
    cpu.state_.pc = 0xAC34;

    // AC22: JSR $AC52
    cpu.call_function(0xAC52);

    // AC25: BRA $0150
    cpu.state_.pc = 0xAD77;

    // AC27: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AC29: BITA #$01
    // TODO: Convert BITA #$01

    // AC2B: BEQ $014D
    if (cpu.zero_flag()) cpu.state_.pc = 0xAD7A;

    // AC2D: LDA #$00
    cpu.state_.a = 0x00;

    // AC2F: BRA $014E
    cpu.state_.pc = 0xAD7F;

    // AC32: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // AC34: LDX <$A8
    cpu.state_.x = cpu.read_memory_word(0xA8);

    // AC36: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // AC38: CMPX #$496F
    cpu.compare_x(0x496F);

    // AC3B: LBCS $0003
    // TODO: Convert LBCS $0003

    // AC3F: LDD $5098
    cpu.state_.d = cpu.read_memory_word(0x5098);

    // AC42: STD $5040
    cpu.write_memory(0x5040, cpu.state_.d);

    // AC45: LDD $509A
    cpu.state_.d = cpu.read_memory_word(0x509A);

    // AC48: STD $5042
    cpu.write_memory(0x5042, cpu.state_.d);

    // AC4B: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // AC4E: STD $5044
    cpu.write_memory(0x5044, cpu.state_.d);

    // AC52: LDX <$A8
    cpu.state_.x = cpu.read_memory_word(0xA8);

    // AC54: LDA #$08
    cpu.state_.a = 0x08;

    // AC56: STA <$01
    cpu.write_memory(0x01, cpu.state_.a);

    // AC58: LDD $5018
    cpu.state_.d = cpu.read_memory_word(0x5018);

    // AC5B: DEC <$01
    // TODO: Convert DEC <$01

    // AC5D: BEQ $0181
    if (cpu.zero_flag()) cpu.state_.pc = 0xADE0;

    // AC61: BPL $0177
    if (!cpu.negative_flag()) cpu.state_.pc = 0xADDA;

    // AC63: ANDA #$7F
    cpu.state_.a &= 0x7F;

    // AC65: STA <$02
    cpu.write_memory(0x02, cpu.state_.a);

    // AC67: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AC69: ANDA #$20
    cpu.state_.a &= 0x20;

    // AC6B: BNE $0198
    if (!cpu.zero_flag()) cpu.state_.pc = 0xAE05;

    // AC6D: LDA <$01
    cpu.state_.a = cpu.read_memory(0x01);

    // AC6F: ORA #$70
    cpu.state_.a |= 0x70;

    // AC71: LDB <$02
    cpu.state_.b = cpu.read_memory(0x02);

    // AC73: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AC75: LDD #$A015
    cpu.state_.d = 0xA015;

    // AC78: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AC7A: BRA $01C2
    cpu.state_.pc = 0xAE3E;

    // AC7C: LDB <$02
    cpu.state_.b = cpu.read_memory(0x02);

    // AC7E: LDA <$01
    cpu.state_.a = cpu.read_memory(0x01);

    // AC81: CMPA #$03
    cpu.compare_a(0x03);

    // AC83: BCC $01A6
    if (!cpu.carry_flag()) cpu.state_.pc = 0xAE2B;

    // AC85: LDA #$03
    cpu.state_.a = 0x03;

    // AC88: BRA $01AD
    cpu.state_.pc = 0xAE37;

    // AC8A: CMPA #$06
    cpu.compare_a(0x06);

    // AC8C: BCS $01AD
    if (cpu.carry_flag()) cpu.state_.pc = 0xAE3B;

    // AC8E: LDA #$06
    cpu.state_.a = 0x06;

    // AC91: ORA #$70
    cpu.state_.a |= 0x70;

    // AC93: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AC95: LDB $5,X
    // TODO: Fix comma operator: LDB $5,X

    // AC9B: ORB #$0F
    cpu.state_.b |= 0x0F;

    // AC9D: LDA #$65
    cpu.state_.a = 0x65;

    // AC9F: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACA1: LDD #$A017
    cpu.state_.d = 0xA017;

    // ACA4: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACA6: LDD #$7200
    cpu.state_.d = 0x7200;

    // ACA9: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACAB: LDD #$8040
    cpu.state_.d = 0x8040;

    // ACAE: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACB1: LDX <$A8
    cpu.state_.x = cpu.read_memory_word(0xA8);

    // ACB3: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // ACB5: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // ACB7: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACB9: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // ACBB: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACBD: LDA $5,X
    // TODO: Fix comma operator: LDA $5,X

    // ACBF: LDB #$10
    cpu.state_.b = 0x10;

    // ACC2: LDA #$70
    cpu.state_.a = 0x70;

    // ACC4: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACC6: LDB $5,X
    // TODO: Fix comma operator: LDB $5,X

    // ACCC: LDA #$67
    cpu.state_.a = 0x67;

    // ACCE: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACD0: LDD #$A017
    cpu.state_.d = 0xA017;

    // ACD3: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACD5: LDD #$7200
    cpu.state_.d = 0x7200;

    // ACD8: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACDA: LDD #$8040
    cpu.state_.d = 0x8040;

    // ACDD: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACE0: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // ACE2: LDD -$4,Y
    // TODO: Fix comma operator: LDD -$4,Y

}

} // namespace StarWars