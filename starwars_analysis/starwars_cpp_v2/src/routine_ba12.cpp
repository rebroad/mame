#include "cpu_6809.h"

namespace StarWars {

void routine_ba12_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_ba12.md
    // Address: 0xBA12

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

    // BA23: BEQ $0016
    if (cpu.zero_flag()) cpu.state_.pc += 0x0016;

    // BA25: JSR $BA32
    cpu.call_function(0xBA32);

    // BA28: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // BA2A: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // BA2C: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // BA2F: BCS $000D
    if (cpu.carry_flag()) cpu.state_.pc += 0x000D;

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

    // BA4F: BMI $008B
    if (cpu.negative_flag()) cpu.state_.pc += 0x008B;

    // BA51: STD $5018
    cpu.write_memory(0x5018, cpu.state_.d);

    // BA54: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // BA57: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // BA5A: STD $501A
    cpu.write_memory(0x501A, cpu.state_.d);

    // BA5D: BPL $0051
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0051;

    // BA61: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // BA63: SUBD $5018
    cpu.state_.d -= 0x5018;

    // BA66: BGE $008B
    // TODO: Convert BGE $008B

    // BA68: LDD $5004
    cpu.state_.d = cpu.read_memory_word(0x5004);

    // BA6B: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // BA6E: BPL $0062
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0062;

    // BA72: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // BA76: SUBD $5018
    cpu.state_.d -= 0x5018;

    // BA79: BGE $008B
    // TODO: Convert BGE $008B

    // BA7B: LDB $C,X
    // TODO: Fix comma operator: LDB $C,X

    // BA7D: CMPB #$09
    cpu.compare_b(0x09);

    // BA7F: BCS $0070
    if (cpu.carry_flag()) cpu.state_.pc += 0x0070;

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

    // BA9B: BRA $008D
    cpu.state_.pc += 0x008D;

    // BA9D: CLR $D,X
    // TODO: Fix comma operator: CLR $D,X

    // BAA0: LDA #$14
    cpu.state_.a = 0x14;

    // BAA2: BRA $00AC
    cpu.state_.pc += 0x00AC;

    // BAA4: LDA #$15
    cpu.state_.a = 0x15;

    // BAA6: BRA $00AC
    cpu.state_.pc += 0x00AC;

    // BAA8: LDA #$16
    cpu.state_.a = 0x16;

    // BAAA: BRA $00AC
    cpu.state_.pc += 0x00AC;

    // BAAC: LDA #$11
    cpu.state_.a = 0x11;

    // BAAE: BRA $00A6
    cpu.state_.pc += 0x00A6;

    // BAB0: LDA #$12
    cpu.state_.a = 0x12;

    // BAB2: BRA $00A6
    cpu.state_.pc += 0x00A6;

    // BAB4: LDA #$13
    cpu.state_.a = 0x13;

    // BAB6: BRA $00A6
    cpu.state_.pc += 0x00A6;

    // BAB8: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // BABA: LDA #$67
    cpu.state_.a = 0x67;

    // BABC: BRA $00B0
    cpu.state_.pc += 0x00B0;

    // BABE: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // BAC0: LDA #$64
    cpu.state_.a = 0x64;

    // BAC2: LDB $D,X
    // TODO: Fix comma operator: LDB $D,X

    // BAC4: CMPB #$07
    cpu.compare_b(0x07);

    // BAC6: BHI $00BC
    // TODO: Convert BHI $00BC

    // BACC: BRA $00BE
    cpu.state_.pc += 0x00BE;

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

    // BB18: BRA $0110
    cpu.state_.pc += 0x0110;

    // BB1A: LDB #$01
    cpu.state_.b = 0x01;

    // BB1C: BRA $0110
    cpu.state_.pc += 0x0110;

    // BB1E: LDB #$02
    cpu.state_.b = 0x02;

    // BB20: BRA $0110
    cpu.state_.pc += 0x0110;

    // BB22: STB <$DC
    cpu.write_memory(0xDC, cpu.state_.b);

    // BB24: LDB $D,X
    // TODO: Fix comma operator: LDB $D,X

    // BB26: CMPB #$1F
    cpu.compare_b(0x1F);

    // BB28: BLS $011D
    // TODO: Convert BLS $011D

    // BB2A: LDD #$A018
    cpu.state_.d = 0xA018;

    // BB2D: BRA $0123
    cpu.state_.pc += 0x0123;

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

    // BB82: STD <$9F
    cpu.write_memory(0x9F, cpu.state_.d);

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

    // BBAE: BCC $01A8
    if (!cpu.carry_flag()) cpu.state_.pc += 0x01A8;

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

    // BBD1: BCC $01F9
    if (!cpu.carry_flag()) cpu.state_.pc += 0x01F9;

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

    // BBEA: BMI $01DD
    if (cpu.negative_flag()) cpu.state_.pc += 0x01DD;

    // BBED: ORB #$80
    cpu.state_.b |= 0x80;

    // BBEF: ADDD #$7670
    cpu.state_.d += 0x7670;

    // BBF3: BMI $01E6
    if (cpu.negative_flag()) cpu.state_.pc += 0x01E6;

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

    // BC11: BCS $0201
    if (cpu.carry_flag()) cpu.state_.pc += 0x0201;

}

} // namespace StarWars