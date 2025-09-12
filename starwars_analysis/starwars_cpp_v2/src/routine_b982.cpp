#include "cpu_6809.h"

namespace StarWars {

void routine_b982_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_b982.md
    // Address: 0xB982

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

    // B990: BEQ $001F
    if (cpu.zero_flag()) cpu.state_.pc = 0xB9B1;

    // B992: DEC $D,X
    // TODO: Convert DEC $D,X

    // B994: LDB $C,X
    // TODO: Fix comma operator: LDB $C,X

    // B996: CMPB #$09
    cpu.compare_b(0x09);

    // B998: BCS $0019
    if (cpu.carry_flag()) cpu.state_.pc = 0xB9B3;

    // B99B: LDU #$B748
    cpu.state_.u = 0xB748;

    // B99F: JSR [B,U]
    // TODO: Complex indexed addressing: [B,U]

    // B9A1: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // B9A3: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // B9A6: BCS $000C
    if (cpu.carry_flag()) cpu.state_.pc = 0xB9B4;

    // B9A8: LDX #$49E2
    cpu.state_.x = 0x49E2;

    // B9AB: LDA $D,X
    // TODO: Fix comma operator: LDA $D,X

    // B9AD: BEQ $0030
    if (cpu.zero_flag()) cpu.state_.pc = 0xB9DF;

    // B9AF: JMP $B95C
    cpu.state_.pc = 0xB95C;

    // B9B2: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // B9B4: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // B9B7: BCS $0029
    if (cpu.carry_flag()) cpu.state_.pc = 0xB9E2;

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

    // B9E8: BVS $006F
    // TODO: Convert BVS $006F

    // B9EA: BGE $006D
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xBA59;

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

    // B9FD: BVS $007F
    // TODO: Convert BVS $007F

    // B9FF: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // BA01: LDD $8,X
    // TODO: Fix comma operator: LDD $8,X

    // BA03: ADDD $2,X
    // TODO: Fix comma operator: ADDD $2,X

    // BA05: BVS $0087
    // TODO: Convert BVS $0087

    // BA07: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // BA09: LDD $A,X
    // TODO: Fix comma operator: LDD $A,X

    // BA0B: ADDD $4,X
    // TODO: Fix comma operator: ADDD $4,X

    // BA0D: BVS $008F
    // TODO: Convert BVS $008F

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

    // BA23: BEQ $00A6
    if (cpu.zero_flag()) cpu.state_.pc = 0xB9CB;

    // BA25: JSR $BA32
    cpu.call_function(0xBA32);

    // BA28: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // BA2A: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // BA2C: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // BA2F: BCS $009D
    if (cpu.carry_flag()) cpu.state_.pc = 0xB9CE;

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

    // BA4F: BMI $011B
    if (cpu.negative_flag()) cpu.state_.pc = 0xBA6C;

    // BA51: STD $5018
    cpu.write_memory(0x5018, cpu.state_.d);

    // BA54: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // BA57: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // BA5A: STD $501A
    cpu.write_memory(0x501A, cpu.state_.d);

    // BA5D: BPL $00E1
    if (!cpu.negative_flag()) cpu.state_.pc = 0xBA40;

    // BA61: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // BA63: SUBD $5018
    cpu.state_.d -= 0x5018;

    // BA66: BGE $011B
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xBA83;

    // BA68: LDD $5004
    cpu.state_.d = cpu.read_memory_word(0x5004);

    // BA6B: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // BA6E: BPL $00F2
    if (!cpu.negative_flag()) cpu.state_.pc = 0xBA62;

    // BA72: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // BA76: SUBD $5018
    cpu.state_.d -= 0x5018;

    // BA79: BGE $011B
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xBA96;

    // BA7B: LDB $C,X
    // TODO: Fix comma operator: LDB $C,X

    // BA7D: CMPB #$09
    cpu.compare_b(0x09);

    // BA7F: BCS $0100
    if (cpu.carry_flag()) cpu.state_.pc = 0xBA81;

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

    // BA9B: BRA $011D
    cpu.state_.pc = 0xBABA;

    // BA9D: CLR $D,X
    // TODO: Fix comma operator: CLR $D,X

    // BAA0: LDA #$14
    cpu.state_.a = 0x14;

    // BAA2: BRA $013C
    cpu.state_.pc = 0xBAE0;

    // BAA4: LDA #$15
    cpu.state_.a = 0x15;

    // BAA6: BRA $013C
    cpu.state_.pc = 0xBAE4;

    // BAA8: LDA #$16
    cpu.state_.a = 0x16;

    // BAAA: BRA $013C
    cpu.state_.pc = 0xBAE8;

    // BAAC: LDA #$11
    cpu.state_.a = 0x11;

    // BAAE: BRA $0136
    cpu.state_.pc = 0xBAE6;

    // BAB0: LDA #$12
    cpu.state_.a = 0x12;

    // BAB2: BRA $0136
    cpu.state_.pc = 0xBAEA;

    // BAB4: LDA #$13
    cpu.state_.a = 0x13;

    // BAB6: BRA $0136
    cpu.state_.pc = 0xBAEE;

    // BAB8: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // BABA: LDA #$67
    cpu.state_.a = 0x67;

    // BABC: BRA $0140
    cpu.state_.pc = 0xBAFE;

    // BABE: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // BAC0: LDA #$64
    cpu.state_.a = 0x64;

    // BAC2: LDB $D,X
    // TODO: Fix comma operator: LDB $D,X

    // BAC4: CMPB #$07
    cpu.compare_b(0x07);

    // BAC6: BHI $014C
    // TODO: Convert BHI $014C

    // BACC: BRA $014E
    cpu.state_.pc = 0xBB1C;

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

    // BB18: BRA $01A0
    cpu.state_.pc = 0xBABA;

    // BB1A: LDB #$01
    cpu.state_.b = 0x01;

    // BB1C: BRA $01A0
    cpu.state_.pc = 0xBABE;

    // BB1E: LDB #$02
    cpu.state_.b = 0x02;

    // BB20: BRA $01A0
    cpu.state_.pc = 0xBAC2;

    // BB22: STB <$DC
    cpu.write_memory(0xDC, cpu.state_.b);

    // BB24: LDB $D,X
    // TODO: Fix comma operator: LDB $D,X

    // BB26: CMPB #$1F
    cpu.compare_b(0x1F);

    // BB28: BLS $01AD
    // TODO: Convert BLS $01AD

    // BB2A: LDD #$A018
    cpu.state_.d = 0xA018;

    // BB2D: BRA $01B3
    cpu.state_.pc = 0xBAE2;

    // BB2F: LDU #$BB3B
    cpu.state_.u = 0xBB3B;

    // BB33: LDD B,U
    // TODO: Fix comma operator: LDD B,U

    // BB35: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // BB37: JSR $CCF0
    cpu.call_function(0xCCF0);

    // BB3B: XNC -$10,Y
    // TODO: Convert XNC -$10,Y

    // BB3D: XNC -$10,Y
    // TODO: Convert XNC -$10,Y

    // BB3F: XNC $0,U
    // TODO: Convert XNC $0,U

    // BB41: XNC $0,U
    // TODO: Convert XNC $0,U

    // BB43: XNC -$10,U
    // TODO: Convert XNC -$10,U

    // BB45: XNC -$10,U
    // TODO: Convert XNC -$10,U

    // BB47: XNC $0,S
    // TODO: Convert XNC $0,S

    // BB49: XNC $0,S
    // TODO: Convert XNC $0,S

    // BB4B: XNC -$10,S
    // TODO: Convert XNC -$10,S

    // BB4D: XNC -$10,S
    // TODO: Convert XNC -$10,S

    // BB4F: XNC ,X+
    // TODO: Convert XNC ,X+

    // BB51: XNC ,X+
    // TODO: Convert XNC ,X+

    // BB53: XNC [,W]
    // TODO: Convert XNC [,W]

    // BB55: XNC [,W]
    // TODO: Convert XNC [,W]

    // BB57: XNC ,Y+
    // TODO: Convert XNC ,Y+

    // BB59: XNC ,Y+
    // TODO: Convert XNC ,Y+

    // BB5B: ASR ,X+
    // TODO: Convert ASR ,X+

    // BB5D: XNC ,Y+
    // TODO: Convert XNC ,Y+

    // BB5F: ASR [,W]
    // TODO: Convert ASR [,W]

    // BB61: XNC ,Y+
    // TODO: Convert XNC ,Y+

    // BB63: ASR ,Y+
    // TODO: Convert ASR ,Y+

    // BB65: XNC ,Y+
    // TODO: Convert XNC ,Y+

    // BB67: ASR ,U+
    // TODO: Convert ASR ,U+

    // BB69: XNC ,Y+
    // TODO: Convert XNC ,Y+

    // BB6B: ROR ,Y+
    // TODO: Convert ROR ,Y+

    // BB6D: ROR ,Y+
    // TODO: Convert ROR ,Y+

    // BB6F: ROR ,Y+
    // TODO: Convert ROR ,Y+

    // BB71: ROR ,Y+
    // TODO: Convert ROR ,Y+

    // BB73: ROR ,Y+
    // TODO: Convert ROR ,Y+

    // BB75: ROR ,Y+
    // TODO: Convert ROR ,Y+

    // BB77: ROR ,Y+
    // TODO: Convert ROR ,Y+

    // BB79: ROR ,Y+
    // TODO: Convert ROR ,Y+

    // BB7B: LDA #$01
    cpu.state_.a = 0x01;

    // BB7D: STA <$A1
    cpu.write_memory(0xA1, cpu.state_.a);

    // BB7F: LDD #$0001
    cpu.state_.d = 0x0001;

}

} // namespace StarWars