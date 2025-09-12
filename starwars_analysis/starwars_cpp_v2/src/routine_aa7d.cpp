#include "cpu_6809.h"

namespace StarWars {

void routine_aa7d_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_aa7d.md
    // Address: 0xAA7D

    // AA7D: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AA7F: BITA #$02
    // TODO: Convert BITA #$02

    // AA81: BEQ $0008
    if (cpu.zero_flag()) cpu.state_.pc += 0x0008;

    // AA83: CLR $3,X
    // TODO: Fix comma operator: CLR $3,X

    // AA86: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // AA88: JSR $A90C
    cpu.call_function(0xA90C);

    // AA8B: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // AA8E: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // AA90: BMI $001C
    if (cpu.negative_flag()) cpu.state_.pc += 0x001C;

    // AA92: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AA95: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AA97: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA99: LDA $4B19
    cpu.state_.a = cpu.read_memory(0x4B19);

    // AA9C: CMPA #$01
    cpu.compare_a(0x01);

    // AA9E: BCS $0028
    if (cpu.carry_flag()) cpu.state_.pc += 0x0028;

    // AAA0: LDD $509A
    cpu.state_.d = cpu.read_memory_word(0x509A);

    // AAA3: BRA $002B
    cpu.state_.pc += 0x002B;

    // AAA5: LDD #$FE80
    cpu.state_.d = 0xFE80;

    // AAA8: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // AAAA: BMI $0036
    if (cpu.negative_flag()) cpu.state_.pc += 0x0036;

    // AAAC: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AAAF: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // AAB1: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // AAB3: BRA $0000
    cpu.state_.pc += 0x0000;

    // AAB5: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // AAB7: JSR $A90C
    cpu.call_function(0xA90C);

    // AABA: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // AABD: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // AABF: BMI $004B
    if (cpu.negative_flag()) cpu.state_.pc += 0x004B;

    // AAC1: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AAC4: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AAC6: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AAC8: LDA $4B19
    cpu.state_.a = cpu.read_memory(0x4B19);

    // AACB: CMPA #$01
    cpu.compare_a(0x01);

    // AACD: BCS $0057
    if (cpu.carry_flag()) cpu.state_.pc += 0x0057;

    // AACF: LDD $509A
    cpu.state_.d = cpu.read_memory_word(0x509A);

    // AAD2: BRA $005A
    cpu.state_.pc += 0x005A;

    // AAD4: LDD #$0180
    cpu.state_.d = 0x0180;

    // AAD7: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // AAD9: BPL $0065
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0065;

    // AADB: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AADE: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // AAE0: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // AAE2: BRA $0000
    cpu.state_.pc += 0x0000;

    // AAE4: LDX #$494B
    cpu.state_.x = 0x494B;

    // AAE7: STX <$A8
    cpu.write_memory(0xA8, cpu.state_.x);

    // AAE9: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AAEB: LBEQ $01B7
    // TODO: Convert LBEQ $01B7

    // AAEF: BITA #$10
    // TODO: Convert BITA #$10

    // AAF1: BEQ $007C
    if (cpu.zero_flag()) cpu.state_.pc += 0x007C;

    // AAF3: JSR $ACB1
    cpu.call_function(0xACB1);

    // AAF6: JMP $AC34
    cpu.state_.pc = 0xAC34;

    // AAF9: BITA #$04
    // TODO: Convert BITA #$04

    // AAFB: BEQ $0094
    if (cpu.zero_flag()) cpu.state_.pc += 0x0094;

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

    // AB0F: BRA $00A0
    cpu.state_.pc += 0x00A0;

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

    // AB2F: LBLE $01AA
    // TODO: Convert LBLE $01AA

    // AB33: CMPD #$7F00
    // TODO: Convert CMPD #$7F00

    // AB37: LBHI $01AA
    // TODO: Convert LBHI $01AA

    // AB3B: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // AB3E: STD $5018
    cpu.write_memory(0x5018, cpu.state_.d);

    // AB41: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // AB44: STD $501A
    cpu.write_memory(0x501A, cpu.state_.d);

    // AB47: BPL $00D0
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00D0;

    // AB4B: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AB4D: SUBD $5000
    cpu.state_.d -= 0x5000;

    // AB50: LBCC $01AA
    // TODO: Convert LBCC $01AA

    // AB54: LDD $5004
    cpu.state_.d = cpu.read_memory_word(0x5004);

    // AB57: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // AB5A: BPL $00E3
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00E3;

    // AB5E: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AB60: SUBD $5000
    cpu.state_.d -= 0x5000;

    // AB63: LBCC $01AA
    // TODO: Convert LBCC $01AA

    // AB67: JSR $CCF0
    cpu.call_function(0xCCF0);

    // AB6A: LDX <$A8
    cpu.state_.x = cpu.read_memory_word(0xA8);

    // AB6C: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AB6E: BITA #$03
    // TODO: Convert BITA #$03

    // AB70: BEQ $0143
    if (cpu.zero_flag()) cpu.state_.pc += 0x0143;

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

    // AB89: BPL $0112
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0112;

    // AB8D: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AB8F: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // AB91: SUBD <$03
    cpu.state_.d -= 0x03;

    // AB93: BGT $0143
    // TODO: Convert BGT $0143

    // AB95: LDD <$D8
    cpu.state_.d = cpu.read_memory_word(0xD8);

    // AB97: SUBD <$B5
    cpu.state_.d -= 0xB5;

    // AB99: BPL $0122
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0122;

    // AB9D: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AB9F: CMPD <$03
    // TODO: Convert CMPD <$03

    // ABA2: BGT $0143
    // TODO: Convert BGT $0143

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

    // ABB0: BLT $0143
    // TODO: Convert BLT $0143

    // ABB2: LDD $5018
    cpu.state_.d = cpu.read_memory_word(0x5018);

    // ABB5: CMPD <$CC
    // TODO: Convert CMPD <$CC

    // ABB8: BCC $0143
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0143;

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

    // ABC4: BEQ $01A5
    if (cpu.zero_flag()) cpu.state_.pc += 0x01A5;

    // ABC6: LDD $5018
    cpu.state_.d = cpu.read_memory_word(0x5018);

    // ABCB: BMI $01A5
    if (cpu.negative_flag()) cpu.state_.pc += 0x01A5;

    // ABCD: LDU $5086
    cpu.state_.u = cpu.read_memory_word(0x5086);

    // ABD0: CMPU #$0200
    // TODO: Convert CMPU #$0200

    // ABD4: BLT $015E
    // TODO: Convert BLT $015E

    // ABD6: SUBD $5086
    cpu.state_.d -= 0x5086;

    // ABD9: BRA $0161
    cpu.state_.pc += 0x0161;

    // ABDB: SUBD #$0200
    cpu.state_.d -= 0x0200;

    // ABDE: BLE $0168
    // TODO: Convert BLE $0168

    // ABE0: SUBD #$0110
    cpu.state_.d -= 0x0110;

    // ABE3: BGT $01A5
    // TODO: Convert BGT $01A5

    // ABE5: LDD <$D6
    cpu.state_.d = cpu.read_memory_word(0xD6);

    // ABE7: BMI $0173
    if (cpu.negative_flag()) cpu.state_.pc += 0x0173;

    // ABE9: SUBD #$01C0
    cpu.state_.d -= 0x01C0;

    // ABEC: BGE $01A5
    // TODO: Convert BGE $01A5

    // ABEE: BRA $0178
    cpu.state_.pc += 0x0178;

    // ABF0: SUBD #$FE40
    cpu.state_.d -= 0xFE40;

    // ABF3: BLE $01A5
    // TODO: Convert BLE $01A5

    // ABF5: LDD <$D8
    cpu.state_.d = cpu.read_memory_word(0xD8);

    // ABF7: BMI $0183
    if (cpu.negative_flag()) cpu.state_.pc += 0x0183;

    // ABF9: SUBD #$01E0
    cpu.state_.d -= 0x01E0;

    // ABFC: BGE $01A5
    // TODO: Convert BGE $01A5

    // ABFE: BRA $0188
    cpu.state_.pc += 0x0188;

    // AC00: SUBD #$FE60
    cpu.state_.d -= 0xFE60;

    // AC03: BLE $01A5
    // TODO: Convert BLE $01A5

    // AC05: CMPX <$CA
    cpu.compare_x(cpu.read_memory_word(0xCA));

    // AC07: BNE $0197
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0197;

    // AC09: LDA <$BC
    cpu.state_.a = cpu.read_memory(0xBC);

    // AC0B: BEQ $0197
    if (cpu.zero_flag()) cpu.state_.pc += 0x0197;

    // AC0D: JSR $AD20
    cpu.call_function(0xAD20);

    // AC10: LDX <$A8
    cpu.state_.x = cpu.read_memory_word(0xA8);

    // AC12: BRA $01A5
    cpu.state_.pc += 0x01A5;

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

    // AC25: BRA $01B7
    cpu.state_.pc += 0x01B7;

    // AC27: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AC29: BITA #$01
    // TODO: Convert BITA #$01

    // AC2B: BEQ $01B4
    if (cpu.zero_flag()) cpu.state_.pc += 0x01B4;

    // AC2D: LDA #$00
    cpu.state_.a = 0x00;

    // AC2F: BRA $01B5
    cpu.state_.pc += 0x01B5;

    // AC32: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // AC34: LDX <$A8
    cpu.state_.x = cpu.read_memory_word(0xA8);

    // AC36: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // AC38: CMPX #$496F
    cpu.compare_x(0x496F);

    // AC3B: LBCS $006A
    // TODO: Convert LBCS $006A

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

    // AC5D: BEQ $01E8
    if (cpu.zero_flag()) cpu.state_.pc += 0x01E8;

    // AC61: BPL $01DE
    if (!cpu.negative_flag()) cpu.state_.pc += 0x01DE;

    // AC63: ANDA #$7F
    cpu.state_.a &= 0x7F;

    // AC65: STA <$02
    cpu.write_memory(0x02, cpu.state_.a);

    // AC67: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AC69: ANDA #$20
    cpu.state_.a &= 0x20;

    // AC6B: BNE $01FF
    if (!cpu.zero_flag()) cpu.state_.pc += 0x01FF;

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

    // AC7A: BRA $0229
    cpu.state_.pc += 0x0229;

    // AC7C: LDB <$00
    cpu.state_.b = cpu.read_memory(0x00);

}

} // namespace StarWars