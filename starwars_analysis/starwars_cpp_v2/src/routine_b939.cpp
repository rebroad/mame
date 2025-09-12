#include "cpu_6809.h"

namespace StarWars {

void routine_b939_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_b939.md
    // Address: 0xB939

    // B939: LDX #$49E2
    cpu.state_.x = 0x49E2;

    // B93C: LDA #$00
    cpu.state_.a = 0x00;

    // B93E: STA $D,X
    // TODO: Handle indexed addressing: STA $D,X

    // B940: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // B942: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // B945: BCS $0003
    if (cpu.carry_flag()) cpu.state_.pc = 0xB94A;

    // B948: LDB <$A2
    cpu.state_.b = cpu.read_memory(0xA2);

    // B94B: CMPB #$08
    cpu.compare_b(0x08);

    // B94D: BCS $0018
    if (cpu.carry_flag()) cpu.state_.pc = 0xB967;

    // B94F: LDB #$00
    cpu.state_.b = 0x00;

    // B951: STB <$A2
    cpu.write_memory(0xA2, cpu.state_.b);

    // B953: LDA #$0E
    cpu.state_.a = 0x0E;

    // B956: LDX #$49E2
    cpu.state_.x = 0x49E2;

    // B959: LEAX D,X
    // TODO: Fix comma operator: LEAX D,X

    // B95C: LDD #$14BD
    cpu.state_.d = 0x14BD;

    // B95F: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // B962: LDD #$3C8C
    cpu.state_.d = 0x3C8C;

    // B965: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // B968: LDD #$0018
    cpu.state_.d = 0x0018;

    // B96B: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // B96E: LDA #$00
    cpu.state_.a = 0x00;

    // B970: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B973: LDD #$0590
    cpu.state_.d = 0x0590;

    // B976: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // B979: LDD #$3FC2
    cpu.state_.d = 0x3FC2;

    // B97C: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // B97F: LDD #$0018
    cpu.state_.d = 0x0018;

    // B982: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // B985: LDA #$0E
    cpu.state_.a = 0x0E;

    // B987: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B98B: LDX #$49E2
    cpu.state_.x = 0x49E2;

    // B98E: LDA $D,X
    // TODO: Fix comma operator: LDA $D,X

    // B990: BEQ $0068
    if (cpu.zero_flag()) cpu.state_.pc = 0xB9FA;

    // B992: DEC $D,X
    // TODO: Convert DEC $D,X

    // B994: LDB $C,X
    // TODO: Fix comma operator: LDB $C,X

    // B996: CMPB #$09
    cpu.compare_b(0x09);

    // B998: BCS $0062
    if (cpu.carry_flag()) cpu.state_.pc = 0xB9FC;

    // B99B: LDU #$B748
    cpu.state_.u = 0xB748;

    // B99F: JSR [B,U]
    // TODO: Complex indexed addressing: [B,U]

    // B9A1: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // B9A3: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // B9A6: BCS $0055
    if (cpu.carry_flag()) cpu.state_.pc = 0xB9FD;

    // B9A8: LDX #$49E2
    cpu.state_.x = 0x49E2;

    // B9AB: LDA $D,X
    // TODO: Fix comma operator: LDA $D,X

    // B9AD: BEQ $0079
    if (cpu.zero_flag()) cpu.state_.pc = 0xBA28;

    // B9AF: JMP $B95C
    cpu.state_.pc = 0xB95C;

    // B9B2: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // B9B4: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // B9B7: BCS $0072
    if (cpu.carry_flag()) cpu.state_.pc = 0xBA2B;

    // B9B9: LDU #$50D0
    cpu.state_.u = 0x50D0;

    // B9BC: JSR $CDC3
    cpu.call_function(0xCDC3);

    // B9C0: LDD $6,X
    // TODO: Fix comma operator: LDD $6,X

    // B9C2: ADDD ,X
    // TODO: Complex indexed addressing: ,X

    // B9C4: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // B9C6: LDD #$0000
    cpu.state_.d = 0x0000;

    // B9C9: SUBD $6,X
    // TODO: Fix comma operator: SUBD $6,X

    // B9CB: JSR $CD9E
    cpu.call_function(0xCD9E);

    // B9CE: ADDD $6,X
    // TODO: Fix comma operator: ADDD $6,X

    // B9D0: STD $6,X
    // TODO: Handle indexed addressing: STD $6,X

    // B9D2: LDD $8,X
    // TODO: Fix comma operator: LDD $8,X

    // B9D4: ADDD $2,X
    // TODO: Fix comma operator: ADDD $2,X

    // B9D6: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // B9D8: LDD #$0000
    cpu.state_.d = 0x0000;

    // B9DB: SUBD $8,X
    // TODO: Fix comma operator: SUBD $8,X

    // B9DD: JSR $CD9E
    cpu.call_function(0xCD9E);

    // B9E0: ADDD $8,X
    // TODO: Fix comma operator: ADDD $8,X

    // B9E2: STD $8,X
    // TODO: Handle indexed addressing: STD $8,X

    // B9E4: LDD $4,X
    // TODO: Fix comma operator: LDD $4,X

    // B9E6: ADDD $A,X
    // TODO: Fix comma operator: ADDD $A,X

    // B9E8: BVS $00B8
    // TODO: Convert BVS $00B8

    // B9EA: BGE $00B6
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xBAA2;

    // B9EC: LDD #$0000
    cpu.state_.d = 0x0000;

    // B9EF: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // B9F1: LDD $A,X
    // TODO: Fix comma operator: LDD $A,X

    // B9F3: SUBD #$00C8
    cpu.state_.d -= 0x00C8;

    // B9F6: STD $A,X
    // TODO: Handle indexed addressing: STD $A,X

    // B9F9: LDD $6,X
    // TODO: Fix comma operator: LDD $6,X

    // B9FB: ADDD ,X
    // TODO: Complex indexed addressing: ,X

    // B9FD: BVS $00C8
    // TODO: Convert BVS $00C8

    // B9FF: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // BA01: LDD $8,X
    // TODO: Fix comma operator: LDD $8,X

    // BA03: ADDD $2,X
    // TODO: Fix comma operator: ADDD $2,X

    // BA05: BVS $00D0
    // TODO: Convert BVS $00D0

    // BA07: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // BA09: LDD $A,X
    // TODO: Fix comma operator: LDD $A,X

    // BA0B: ADDD $4,X
    // TODO: Fix comma operator: ADDD $4,X

    // BA0D: BVS $00D8
    // TODO: Convert BVS $00D8

    // BA0F: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // BA12: LDA #$18
    cpu.state_.a = 0x18;

    // BA14: JSR $CE18
    cpu.call_function(0xCE18);

    // BA17: LDA #$40
    cpu.state_.a = 0x40;

    // BA19: JSR $CDBA
    cpu.call_function(0xCDBA);

    // BA1C: LDX #$49E2
    cpu.state_.x = 0x49E2;

    // BA1F: STX <$64
    cpu.write_memory(0x64, cpu.state_.x);

    // BA21: LDA $D,X
    // TODO: Fix comma operator: LDA $D,X

    // BA23: BEQ $00EF
    if (cpu.zero_flag()) cpu.state_.pc = 0xBB14;

    // BA25: JSR $BA32
    cpu.call_function(0xBA32);

    // BA28: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // BA2A: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // BA2C: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // BA2F: BCS $00E6
    if (cpu.carry_flag()) cpu.state_.pc = 0xBB17;

    // BA32: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // BA34: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // BA37: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // BA39: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // BA3C: LDD $4,X
    // TODO: Fix comma operator: LDD $4,X

    // BA3E: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // BA41: LDD #$000F
    cpu.state_.d = 0x000F;

    // BA44: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // BA47: LDA #$67
    cpu.state_.a = 0x67;

    // BA49: JSR $CDBA
    cpu.call_function(0xCDBA);

    // BA4C: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // BA4F: BMI $0164
    if (cpu.negative_flag()) cpu.state_.pc = 0xBBB5;

    // BA51: STD $5018
    cpu.write_memory(0x5018, cpu.state_.d);

    // BA54: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // BA57: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // BA5A: STD $501A
    cpu.write_memory(0x501A, cpu.state_.d);

    // BA5D: BPL $012A
    if (!cpu.negative_flag()) cpu.state_.pc = 0xBB89;

    // BA61: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // BA63: SUBD $5018
    cpu.state_.d -= 0x5018;

    // BA66: BGE $0164
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xBBCC;

    // BA68: LDD $5004
    cpu.state_.d = cpu.read_memory_word(0x5004);

    // BA6B: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // BA6E: BPL $013B
    if (!cpu.negative_flag()) cpu.state_.pc = 0xBBAB;

    // BA72: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // BA76: SUBD $5018
    cpu.state_.d -= 0x5018;

    // BA79: BGE $0164
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xBBDF;

    // BA7B: LDB $C,X
    // TODO: Fix comma operator: LDB $C,X

    // BA7D: CMPB #$09
    cpu.compare_b(0x09);

    // BA7F: BCS $0149
    if (cpu.carry_flag()) cpu.state_.pc = 0xBBCA;

    // BA82: LDU #$B75A
    cpu.state_.u = 0xB75A;

    // BA86: JSR [B,U]
    // TODO: Complex indexed addressing: [B,U]

    // BA88: JSR $CCD8
    cpu.call_function(0xCCD8);

    // BA8B: JSR $CD20
    cpu.call_function(0xCD20);

    // BA8E: JSR $CD2C
    cpu.call_function(0xCD2C);

    // BA91: LDD #$7200
    cpu.state_.d = 0x7200;

    // BA94: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BA96: LDD #$8040
    cpu.state_.d = 0x8040;

    // BA99: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BA9B: BRA $0166
    cpu.state_.pc = 0xBC03;

    // BA9D: CLR $D,X
    // TODO: Fix comma operator: CLR $D,X

    // BAA0: LDA #$14
    cpu.state_.a = 0x14;

    // BAA2: BRA $0185
    cpu.state_.pc = 0xBC29;

    // BAA4: LDA #$15
    cpu.state_.a = 0x15;

    // BAA6: BRA $0185
    cpu.state_.pc = 0xBC2D;

    // BAA8: LDA #$16
    cpu.state_.a = 0x16;

    // BAAA: BRA $0185
    cpu.state_.pc = 0xBC31;

    // BAAC: LDA #$11
    cpu.state_.a = 0x11;

    // BAAE: BRA $017F
    cpu.state_.pc = 0xBC2F;

    // BAB0: LDA #$12
    cpu.state_.a = 0x12;

    // BAB2: BRA $017F
    cpu.state_.pc = 0xBC33;

    // BAB4: LDA #$13
    cpu.state_.a = 0x13;

    // BAB6: BRA $017F
    cpu.state_.pc = 0xBC37;

    // BAB8: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // BABA: LDA #$67
    cpu.state_.a = 0x67;

    // BABC: BRA $0189
    cpu.state_.pc = 0xBC47;

    // BABE: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // BAC0: LDA #$64
    cpu.state_.a = 0x64;

    // BAC2: LDB $D,X
    // TODO: Fix comma operator: LDB $D,X

    // BAC4: CMPB #$07
    cpu.compare_b(0x07);

    // BAC6: BHI $0195
    // TODO: Convert BHI $0195

    // BACC: BRA $0197
    cpu.state_.pc = 0xBC65;

    // BACE: LDB #$80
    cpu.state_.b = 0x80;

    // BAD0: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BAD2: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // BAD4: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // BAD7: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // BAD9: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // BADC: LDD #$0000
    cpu.state_.d = 0x0000;

    // BADF: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // BAE2: LDD #$000F
    cpu.state_.d = 0x000F;

    // BAE5: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // BAE8: LDD $501C
    cpu.state_.d = cpu.read_memory_word(0x501C);

    // BAEB: PSHS U,X,D
    // TODO: Convert PSHS U,X,D

    // BAED: LDU $501A
    cpu.state_.u = cpu.read_memory_word(0x501A);

    // BAF0: LDX $5018
    cpu.state_.x = cpu.read_memory_word(0x5018);

    // BAF3: LDA #$67
    cpu.state_.a = 0x67;

    // BAF5: JSR $CDBA
    cpu.call_function(0xCDBA);

    // BAF8: STX $5018
    cpu.write_memory(0x5018, cpu.state_.x);

    // BAFB: STU $501A
    cpu.write_memory(0x501A, cpu.state_.u);

    // BAFE: PULS D,X,U
    // TODO: Convert PULS D,X,U

    // BB00: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // BB03: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // BB06: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // BB09: JSR $CCF0
    cpu.call_function(0xCCF0);

    // BB0C: LDA #$72
    cpu.state_.a = 0x72;

    // BB0E: LDB $5018
    cpu.state_.b = cpu.read_memory(0x5018);

    // BB13: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BB16: LDB #$03
    cpu.state_.b = 0x03;

    // BB18: BRA $01E9
    cpu.state_.pc = 0xBD03;

    // BB1A: LDB #$01
    cpu.state_.b = 0x01;

    // BB1C: BRA $01E9
    cpu.state_.pc = 0xBD07;

    // BB1E: LDB #$02
    cpu.state_.b = 0x02;

    // BB20: BRA $01E9
    cpu.state_.pc = 0xBD0B;

    // BB22: STB <$DC
    cpu.write_memory(0xDC, cpu.state_.b);

    // BB24: LDB $D,X
    // TODO: Fix comma operator: LDB $D,X

    // BB26: CMPB #$1F
    cpu.compare_b(0x1F);

    // BB28: BLS $01F6
    // TODO: Convert BLS $01F6

    // BB2A: LDD #$A018
    cpu.state_.d = 0xA018;

    // BB2D: BRA $01FC
    cpu.state_.pc = 0xBD2B;

    // BB2F: LDU #$BB3B
    cpu.state_.u = 0xBB3B;

    // BB33: LDD B,U
    // TODO: Fix comma operator: LDD B,U

    // BB35: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BB37: JSR $CC00
    cpu.call_function(0xCC00);

}

} // namespace StarWars