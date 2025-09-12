#include "cpu_6809.h"

namespace StarWars {

void routine_bb85_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_bb85.md
    // Address: 0xBB85

    // BB85: LDA <$A1
    cpu.state_.a = cpu.read_memory(0xA1);

    // BB88: LDX #$BB8E
    cpu.state_.x = 0xBB8E;

    // BB8B: JSR [A,X]
    // TODO: Complex indexed addressing: [A,X]

    // BB8E: ADDA $8DBB
    cpu.state_.a += 0x8DBB;

    // BB91: EORA <$BB
    cpu.state_.a ^= 0xBB;

    // BB93: ADDA $BC1E
    cpu.state_.a += 0xBC1E;

    // BB96: CMPX $85CC
    cpu.compare_x(cpu.read_memory_word(0x85CC));

    // BB99: LSR ,X+
    // TODO: Convert LSR ,X+

    // BB9B: LDU #$76F0
    cpu.state_.u = 0x76F0;

    // BB9E: LDX <$9F
    cpu.state_.x = cpu.read_memory_word(0x9F);

    // BBA0: JSR $BCAE
    cpu.call_function(0xBCAE);

    // BBA3: LDD <$9F
    cpu.state_.d = cpu.read_memory_word(0x9F);

    // BBA5: ADDD #$0002
    cpu.state_.d += 0x0002;

    // BBA8: STD <$9F
    cpu.write_memory(0x9F, cpu.state_.d);

    // BBAA: CMPD #$003F
    // TODO: Convert CMPD #$003F

    // BBAE: BCC $0035
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0035;

    // BBB0: LDD #$0001
    cpu.state_.d = 0x0001;

    // BBB3: STD <$9F
    cpu.write_memory(0x9F, cpu.state_.d);

    // BBB5: INC <$A1
    // TODO: Convert INC <$A1

    // BBB7: JSR $BDB7
    cpu.call_function(0xBDB7);

    // BBBB: LDX <$9F
    cpu.state_.x = cpu.read_memory_word(0x9F);

    // BBBD: LDD #$61FF
    cpu.state_.d = 0x61FF;

    // BBC0: LDU #$76F0
    cpu.state_.u = 0x76F0;

    // BBC3: JSR $BCAE
    cpu.call_function(0xBCAE);

    // BBC6: LDD <$9F
    cpu.state_.d = cpu.read_memory_word(0x9F);

    // BBC8: ADDD #$0002
    cpu.state_.d += 0x0002;

    // BBCB: STD <$9F
    cpu.write_memory(0x9F, cpu.state_.d);

    // BBCD: CMPD #$003F
    // TODO: Convert CMPD #$003F

    // BBD1: BCC $0086
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0086;

    // BBD3: LDB #$3F
    cpu.state_.b = 0x3F;

    // BBD5: SUBB <$A0
    cpu.state_.b -= 0xA0;

    // BBD8: TFR D,X
    cpu.state_.x = cpu.state_.d;

    // BBDA: LDD #$64FF
    cpu.state_.d = 0x64FF;

    // BBDD: JSR $BCAE
    cpu.call_function(0xBCAE);

    // BBE0: LDD <$9F
    cpu.state_.d = cpu.read_memory_word(0x9F);

    // BBEA: BMI $006A
    if (cpu.negative_flag()) cpu.state_.pc += 0x006A;

    // BBED: ORB #$80
    cpu.state_.b |= 0x80;

    // BBEF: ADDD #$7670
    cpu.state_.d += 0x7670;

    // BBF3: BMI $0073
    if (cpu.negative_flag()) cpu.state_.pc += 0x0073;

    // BBF6: ANDB #$7F
    cpu.state_.b &= 0x7F;

    // BBF8: TFR D,U
    cpu.state_.u = cpu.state_.d;

    // BBFA: LDD <$9F
    cpu.state_.d = cpu.read_memory_word(0x9F);

    // BBFE: ANDB #$07
    cpu.state_.b &= 0x07;

    // BC00: EORB #$07
    cpu.state_.b ^= 0x07;

    // BC03: TFR D,X
    cpu.state_.x = cpu.state_.d;

    // BC05: LDD #$64FF
    cpu.state_.d = 0x64FF;

    // BC08: JSR $BCC8
    cpu.call_function(0xBCC8);

    // BC0B: LDD <$9F
    cpu.state_.d = cpu.read_memory_word(0x9F);

    // BC0D: CMPD #$003F
    // TODO: Convert CMPD #$003F

    // BC11: BCS $0098
    if (cpu.carry_flag()) cpu.state_.pc += 0x0098;

    // BC13: LDD #$0001
    cpu.state_.d = 0x0001;

    // BC16: STD <$9F
    cpu.write_memory(0x9F, cpu.state_.d);

    // BC18: INC <$A1
    // TODO: Convert INC <$A1

    // BC1A: JSR $BDB7
    cpu.call_function(0xBDB7);

    // BC1E: LDX <$9F
    cpu.state_.x = cpu.read_memory_word(0x9F);

    // BC20: LDD #$67FF
    cpu.state_.d = 0x67FF;

    // BC23: LDU #$7670
    cpu.state_.u = 0x7670;

    // BC26: JSR $BCAE
    cpu.call_function(0xBCAE);

    // BC29: LDD <$9F
    cpu.state_.d = cpu.read_memory_word(0x9F);

    // BC2B: ADDD #$0003
    cpu.state_.d += 0x0003;

    // BC2E: STD <$9F
    cpu.write_memory(0x9F, cpu.state_.d);

    // BC30: CMPD #$003F
    // TODO: Convert CMPD #$003F

    // BC34: BCC $00BE
    if (!cpu.carry_flag()) cpu.state_.pc += 0x00BE;

    // BC36: LDB #$3F
    cpu.state_.b = 0x3F;

    // BC38: SUBB <$A0
    cpu.state_.b -= 0xA0;

    // BC3B: TFR D,X
    cpu.state_.x = cpu.state_.d;

    // BC3D: LDD #$61FF
    cpu.state_.d = 0x61FF;

    // BC40: JSR $BCAE
    cpu.call_function(0xBCAE);

    // BC43: LDD <$9F
    cpu.state_.d = cpu.read_memory_word(0x9F);

    // BC45: CMPD #$003F
    // TODO: Convert CMPD #$003F

    // BC49: BCC $00ED
    if (!cpu.carry_flag()) cpu.state_.pc += 0x00ED;

    // BC53: BMI $00D3
    if (cpu.negative_flag()) cpu.state_.pc += 0x00D3;

    // BC56: ORB #$80
    cpu.state_.b |= 0x80;

    // BC58: ADDD #$7670
    cpu.state_.d += 0x7670;

    // BC5C: BMI $00DC
    if (cpu.negative_flag()) cpu.state_.pc += 0x00DC;

    // BC5F: ANDB #$7F
    cpu.state_.b &= 0x7F;

    // BC61: TFR D,U
    cpu.state_.u = cpu.state_.d;

    // BC63: LDD <$9F
    cpu.state_.d = cpu.read_memory_word(0x9F);

    // BC65: ANDB #$0F
    cpu.state_.b &= 0x0F;

    // BC67: EORB #$0F
    cpu.state_.b ^= 0x0F;

    // BC6A: TFR D,X
    cpu.state_.x = cpu.state_.d;

    // BC6C: LDD #$61FF
    cpu.state_.d = 0x61FF;

    // BC6F: JSR $BCC8
    cpu.call_function(0xBCC8);

    // BC72: LDD <$9F
    cpu.state_.d = cpu.read_memory_word(0x9F);

    // BC74: CMPD #$0050
    // TODO: Convert CMPD #$0050

    // BC78: BCS $00FF
    if (cpu.carry_flag()) cpu.state_.pc += 0x00FF;

    // BC7A: LDD #$0080
    cpu.state_.d = 0x0080;

    // BC7D: STD <$9F
    cpu.write_memory(0x9F, cpu.state_.d);

    // BC7F: INC <$A1
    // TODO: Convert INC <$A1

    // BC81: JSR $BDB7
    cpu.call_function(0xBDB7);

    // BC85: LDD <$9F
    cpu.state_.d = cpu.read_memory_word(0x9F);

    // BC87: SUBD #$0004
    cpu.state_.d -= 0x0004;

    // BC8A: STD <$9F
    cpu.write_memory(0x9F, cpu.state_.d);

    // BC8C: CMPD #$0008
    // TODO: Convert CMPD #$0008

    // BC90: BCS $0124
    if (cpu.carry_flag()) cpu.state_.pc += 0x0124;

    // BC92: ADDD #$7500
    cpu.state_.d += 0x7500;

    // BC95: TFR D,U
    cpu.state_.u = cpu.state_.d;

    // BC97: LDD <$9F
    cpu.state_.d = cpu.read_memory_word(0x9F);

    // BC9B: ANDB #$3F
    cpu.state_.b &= 0x3F;

    // BC9D: EORB #$3F
    cpu.state_.b ^= 0x3F;

    // BC9F: TFR D,X
    cpu.state_.x = cpu.state_.d;

    // BCA1: LDD #$67FF
    cpu.state_.d = 0x67FF;

    // BCA4: JSR $BCC8
    cpu.call_function(0xBCC8);

    // BCA7: BRA $0128
    cpu.state_.pc += 0x0128;

    // BCA9: LDA #$00
    cpu.state_.a = 0x00;

    // BCAB: STA <$A1
    cpu.write_memory(0xA1, cpu.state_.a);

    // BCAE: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BCB0: LDD #$1F98
    cpu.state_.d = 0x1F98;

    // BCB3: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BCB5: LDD #$0000
    cpu.state_.d = 0x0000;

    // BCB8: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BCBA: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // BCBC: LDD #$BD69
    cpu.state_.d = 0xBD69;

    // BCBF: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BCC1: LEAU -$2,U
    // TODO: Fix comma operator: LEAU -$2,U

    // BCC3: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // BCC5: BNE $012B
    if (!cpu.zero_flag()) cpu.state_.pc += 0x012B;

    // BCC8: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BCCA: LDD #$1F98
    cpu.state_.d = 0x1F98;

    // BCCD: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BCCF: LDD #$0000
    cpu.state_.d = 0x0000;

    // BCD2: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BCD4: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // BCD6: LDD #$BD69
    cpu.state_.d = 0xBD69;

    // BCD9: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BCDB: TFR U,D
    cpu.state_.d = cpu.state_.u;

    // BCDD: SUBD #$0004
    cpu.state_.d -= 0x0004;

    // BCE0: ANDB #$7F
    cpu.state_.b &= 0x7F;

    // BCE2: TFR D,U
    cpu.state_.u = cpu.state_.d;

    // BCE4: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // BCE6: BNE $0145
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0145;

    // BCE9: LDB #$0E
    cpu.state_.b = 0x0E;

    // BCEB: TST $4401
    // TODO: Convert TST $4401

    // BCEE: BPL $0170
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0170;

    // BCF1: BNE $0166
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0166;

    // BCF3: LDA #$00
    cpu.state_.a = 0x00;

    // BCF5: STA $4400
    cpu.write_memory(0x4400, cpu.state_.a);

    // BCF9: LDA #$01
    cpu.state_.a = 0x01;

    // BCFB: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BCFE: LDA #$02
    cpu.state_.a = 0x02;

    // BD00: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD03: LDA #$03
    cpu.state_.a = 0x03;

    // BD05: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD08: LDA #$04
    cpu.state_.a = 0x04;

    // BD0A: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD0D: LDA #$05
    cpu.state_.a = 0x05;

    // BD0F: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD12: LDA #$06
    cpu.state_.a = 0x06;

    // BD14: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD17: LDA #$07
    cpu.state_.a = 0x07;

    // BD19: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD1C: LDA #$08
    cpu.state_.a = 0x08;

    // BD1E: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD21: LDA #$09
    cpu.state_.a = 0x09;

    // BD23: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD26: LDA #$0A
    cpu.state_.a = 0x0A;

    // BD28: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD2B: LDA #$0B
    cpu.state_.a = 0x0B;

    // BD2D: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD30: LDA #$0C
    cpu.state_.a = 0x0C;

    // BD32: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD35: LDA #$0D
    cpu.state_.a = 0x0D;

    // BD37: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD3A: LDA #$0E
    cpu.state_.a = 0x0E;

    // BD3C: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD3F: LDA #$0F
    cpu.state_.a = 0x0F;

    // BD41: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD44: LDA #$10
    cpu.state_.a = 0x10;

    // BD46: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD49: LDA #$11
    cpu.state_.a = 0x11;

    // BD4B: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD4E: LDA #$12
    cpu.state_.a = 0x12;

    // BD50: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD53: LDA #$13
    cpu.state_.a = 0x13;

    // BD55: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD58: LDA #$14
    cpu.state_.a = 0x14;

    // BD5A: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD5D: LDA #$15
    cpu.state_.a = 0x15;

    // BD5F: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD62: LDA #$16
    cpu.state_.a = 0x16;

    // BD64: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD67: LDA #$17
    cpu.state_.a = 0x17;

    // BD69: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD6C: LDA #$18
    cpu.state_.a = 0x18;

    // BD6E: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD71: LDA #$19
    cpu.state_.a = 0x19;

    // BD73: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD76: LDA #$1A
    cpu.state_.a = 0x1A;

    // BD78: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD7B: LDA #$1B
    cpu.state_.a = 0x1B;

    // BD7D: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

    // BD80: LDA #$1C
    cpu.state_.a = 0x1C;

    // BD82: JMP $BCE9
    cpu.state_.pc = 0xBCE9;

}

} // namespace StarWars