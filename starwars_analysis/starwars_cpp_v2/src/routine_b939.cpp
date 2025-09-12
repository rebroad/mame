#include "cpu_6809.h"

namespace StarWars {

void routine_b939_impl(CPU6809& cpu) {
    // Converted from rom_disasm_b939.md
    // Address: 0xB939

    // B939: LDX #$49E2
    cpu.m_x = 0x49E2;

    // B93C: LDA #$00
    cpu.m_a = 0x00;

    // B93E: STA $D,X
    // TODO: Handle indexed addressing: STA $D,X

    // B940: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // B942: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // B945: BCS $B93C
    if (cpu.carry_flag()) cpu.m_pc = 0xB93C;

    // B948: LDB <$A2
    cpu.m_b = cpu.read_memory(0xA2);

    // B94B: CMPB #$08
    cpu.compare_b(0x08);

    // B94D: BCS $B951
    if (cpu.carry_flag()) cpu.m_pc = 0xB951;

    // B94F: LDB #$00
    cpu.m_b = 0x00;

    // B951: STB <$A2
    cpu.write_memory(0xA2, cpu.m_b);

    // B953: LDA #$0E
    cpu.m_a = 0x0E;

    // B956: LDX #$49E2
    cpu.m_x = 0x49E2;

    // B959: LEAX D,X
    // TODO: Fix comma operator: LEAX D,X

    // B95C: LDD #$14BD
    cpu.m_d = 0x14BD;

    // B95F: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // B962: LDD #$3C8C
    cpu.m_d = 0x3C8C;

    // B965: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // B968: LDD #$0018
    cpu.m_d = 0x0018;

    // B96B: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // B96E: LDA #$00
    cpu.m_a = 0x00;

    // B970: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B973: LDD #$0590
    cpu.m_d = 0x0590;

    // B976: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // B979: LDD #$3FC2
    cpu.m_d = 0x3FC2;

    // B97C: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // B97F: LDD #$0018
    cpu.m_d = 0x0018;

    // B982: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // B985: LDA #$0E
    cpu.m_a = 0x0E;

    // B987: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B98B: LDX #$49E2
    cpu.m_x = 0x49E2;

    // B98E: LDA $D,X
    // TODO: Fix comma operator: LDA $D,X

    // B990: BEQ $B9A1
    if (cpu.zero_flag()) cpu.m_pc = 0xB9A1;

    // B992: DEC $D,X
    // TODO: Convert DEC $D,X

    // B994: LDB $C,X
    // TODO: Fix comma operator: LDB $C,X

    // B996: CMPB #$09
    cpu.compare_b(0x09);

    // B998: BCS $B99B
    if (cpu.carry_flag()) cpu.m_pc = 0xB99B;

    // B99B: LDU #$B748
    cpu.m_u = 0xB748;

    // B99F: JSR [B,U]
    // TODO: Complex indexed addressing: [B,U]

    // B9A1: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // B9A3: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // B9A6: BCS $B98E
    if (cpu.carry_flag()) cpu.m_pc = 0xB98E;

    // B9A8: LDX #$49E2
    cpu.m_x = 0x49E2;

    // B9AB: LDA $D,X
    // TODO: Fix comma operator: LDA $D,X

    // B9AD: BEQ $B9B2
    if (cpu.zero_flag()) cpu.m_pc = 0xB9B2;

    // B9AF: JMP $B95C
    cpu.m_pc = 0xB95C;

    // B9B2: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // B9B4: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // B9B7: BCS $B9AB
    if (cpu.carry_flag()) cpu.m_pc = 0xB9AB;

    // B9B9: LDU #$50D0
    cpu.m_u = 0x50D0;

    // B9BC: JSR $CDC3
    cpu.call_function(0xCDC3);

    // B9C0: LDD $6,X
    // TODO: Fix comma operator: LDD $6,X

    // B9C2: ADDD ,X
    // TODO: Complex indexed addressing: ,X

    // B9C4: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // B9C6: LDD #$0000
    cpu.m_d = 0x0000;

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
    cpu.m_d = 0x0000;

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

    // B9E8: BVS $B9F1
    // TODO: Convert BVS $B9F1

    // B9EA: BGE $B9EF
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB9EF;

    // B9EC: LDD #$0000
    cpu.m_d = 0x0000;

    // B9EF: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // B9F1: LDD $A,X
    // TODO: Fix comma operator: LDD $A,X

    // B9F3: SUBD #$00C8
    cpu.m_d -= 0x00C8;

    // B9F6: STD $A,X
    // TODO: Handle indexed addressing: STD $A,X

    // B9F9: LDD $6,X
    // TODO: Fix comma operator: LDD $6,X

    // B9FB: ADDD ,X
    // TODO: Complex indexed addressing: ,X

    // B9FD: BVS $BA01
    // TODO: Convert BVS $BA01

    // B9FF: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // BA01: LDD $8,X
    // TODO: Fix comma operator: LDD $8,X

    // BA03: ADDD $2,X
    // TODO: Fix comma operator: ADDD $2,X

    // BA05: BVS $BA09
    // TODO: Convert BVS $BA09

    // BA07: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // BA09: LDD $A,X
    // TODO: Fix comma operator: LDD $A,X

    // BA0B: ADDD $4,X
    // TODO: Fix comma operator: ADDD $4,X

    // BA0D: BVS $BA11
    // TODO: Convert BVS $BA11

    // BA0F: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // BA12: LDA #$18
    cpu.m_a = 0x18;

    // BA14: JSR $CE18
    cpu.call_function(0xCE18);

    // BA17: LDA #$40
    cpu.m_a = 0x40;

    // BA19: JSR $CDBA
    cpu.call_function(0xCDBA);

    // BA1C: LDX #$49E2
    cpu.m_x = 0x49E2;

    // BA1F: STX <$64
    cpu.write_memory16(0x64, cpu.m_x);

    // BA21: LDA $D,X
    // TODO: Fix comma operator: LDA $D,X

    // BA23: BEQ $BA28
    if (cpu.zero_flag()) cpu.m_pc = 0xBA28;

    // BA25: JSR $BA32
    cpu.call_function(0xBA32);

    // BA28: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);

    // BA2A: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // BA2C: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // BA2F: BCS $BA1F
    if (cpu.carry_flag()) cpu.m_pc = 0xBA1F;

    // BA32: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // BA34: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // BA37: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // BA39: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // BA3C: LDD $4,X
    // TODO: Fix comma operator: LDD $4,X

    // BA3E: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // BA41: LDD #$000F
    cpu.m_d = 0x000F;

    // BA44: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // BA47: LDA #$67
    cpu.m_a = 0x67;

    // BA49: JSR $CDBA
    cpu.call_function(0xCDBA);

    // BA4C: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // BA4F: BMI $BA9D
    if (cpu.negative_flag()) cpu.m_pc = 0xBA9D;

    // BA51: STD $5018
    cpu.write_memory16(0x5018, cpu.m_d);

    // BA54: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // BA57: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // BA5A: STD $501A
    cpu.write_memory16(0x501A, cpu.m_d);

    // BA5D: BPL $BA63
    if (!cpu.negative_flag()) cpu.m_pc = 0xBA63;

    // BA61: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // BA63: SUBD $5018
    cpu.m_d -= 0x5018;

    // BA66: BGE $BA9D
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xBA9D;

    // BA68: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);

    // BA6B: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);

    // BA6E: BPL $BA74
    if (!cpu.negative_flag()) cpu.m_pc = 0xBA74;

    // BA72: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // BA76: SUBD $5018
    cpu.m_d -= 0x5018;

    // BA79: BGE $BA9D
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xBA9D;

    // BA7B: LDB $C,X
    // TODO: Fix comma operator: LDB $C,X

    // BA7D: CMPB #$09
    cpu.compare_b(0x09);

    // BA7F: BCS $BA82
    if (cpu.carry_flag()) cpu.m_pc = 0xBA82;

    // BA82: LDU #$B75A
    cpu.m_u = 0xB75A;

    // BA86: JSR [B,U]
    // TODO: Complex indexed addressing: [B,U]

    // BA88: JSR $CCD8
    cpu.call_function(0xCCD8);

    // BA8B: JSR $CD20
    cpu.call_function(0xCD20);

    // BA8E: JSR $CD2C
    cpu.call_function(0xCD2C);

    // BA91: LDD #$7200
    cpu.m_d = 0x7200;

    // BA94: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BA96: LDD #$8040
    cpu.m_d = 0x8040;

    // BA99: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BA9B: BRA $BA9F
    cpu.m_pc = 0xBA9F;

    // BA9D: CLR $D,X
    // TODO: Fix comma operator: CLR $D,X

    // BAA0: LDA #$14
    cpu.m_a = 0x14;

    // BAA2: BRA $BABE
    cpu.m_pc = 0xBABE;

    // BAA4: LDA #$15
    cpu.m_a = 0x15;

    // BAA6: BRA $BABE
    cpu.m_pc = 0xBABE;

    // BAA8: LDA #$16
    cpu.m_a = 0x16;

    // BAAA: BRA $BABE
    cpu.m_pc = 0xBABE;

    // BAAC: LDA #$11
    cpu.m_a = 0x11;

    // BAAE: BRA $BAB8
    cpu.m_pc = 0xBAB8;

    // BAB0: LDA #$12
    cpu.m_a = 0x12;

    // BAB2: BRA $BAB8
    cpu.m_pc = 0xBAB8;

    // BAB4: LDA #$13
    cpu.m_a = 0x13;

    // BAB6: BRA $BAB8
    cpu.m_pc = 0xBAB8;

    // BAB8: STA <$DC
    cpu.write_memory(0xDC, cpu.m_a);

    // BABA: LDA #$67
    cpu.m_a = 0x67;

    // BABC: BRA $BAC2
    cpu.m_pc = 0xBAC2;

    // BABE: STA <$DC
    cpu.write_memory(0xDC, cpu.m_a);

    // BAC0: LDA #$64
    cpu.m_a = 0x64;

    // BAC2: LDB $D,X
    // TODO: Fix comma operator: LDB $D,X

    // BAC4: CMPB #$07
    cpu.compare_b(0x07);

    // BAC6: BHI $BACE
    // TODO: Convert BHI $BACE

    // BACC: BRA $BAD0
    cpu.m_pc = 0xBAD0;

    // BACE: LDB #$80
    cpu.m_b = 0x80;

    // BAD0: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BAD2: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // BAD4: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // BAD7: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // BAD9: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // BADC: LDD #$0000
    cpu.m_d = 0x0000;

    // BADF: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // BAE2: LDD #$000F
    cpu.m_d = 0x000F;

    // BAE5: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // BAE8: LDD $501C
    cpu.m_d = cpu.read_memory16(0x501C);

    // BAEB: PSHS U,X,D
    // TODO: Convert PSHS U,X,D

    // BAED: LDU $501A
    cpu.m_u = cpu.read_memory16(0x501A);

    // BAF0: LDX $5018
    cpu.m_x = cpu.read_memory16(0x5018);

    // BAF3: LDA #$67
    cpu.m_a = 0x67;

    // BAF5: JSR $CDBA
    cpu.call_function(0xCDBA);

    // BAF8: STX $5018
    cpu.write_memory16(0x5018, cpu.m_x);

    // BAFB: STU $501A
    cpu.write_memory16(0x501A, cpu.m_u);

    // BAFE: PULS D,X,U
    // TODO: Convert PULS D,X,U

    // BB00: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);

    // BB03: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // BB06: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // BB09: JSR $CCF0
    cpu.call_function(0xCCF0);

    // BB0C: LDA #$72
    cpu.m_a = 0x72;

    // BB0E: LDB $5018
    cpu.m_b = cpu.read_memory(0x5018);

    // BB13: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BB16: LDB #$03
    cpu.m_b = 0x03;

    // BB18: BRA $BB22
    cpu.m_pc = 0xBB22;

    // BB1A: LDB #$01
    cpu.m_b = 0x01;

    // BB1C: BRA $BB22
    cpu.m_pc = 0xBB22;

    // BB1E: LDB #$02
    cpu.m_b = 0x02;

    // BB20: BRA $BB22
    cpu.m_pc = 0xBB22;

    // BB22: STB <$DC
    cpu.write_memory(0xDC, cpu.m_b);

    // BB24: LDB $D,X
    // TODO: Fix comma operator: LDB $D,X

    // BB26: CMPB #$1F
    cpu.compare_b(0x1F);

    // BB28: BLS $BB2F
    // TODO: Convert BLS $BB2F

    // BB2A: LDD #$A018
    cpu.m_d = 0xA018;

    // BB2D: BRA $BB35
    cpu.m_pc = 0xBB35;

    // BB2F: LDU #$BB3B
    cpu.m_u = 0xBB3B;

    // BB33: LDD B,U
    // TODO: Fix comma operator: LDD B,U

    // BB35: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BB37: JSR $CC00
    cpu.call_function(0xCC00);

}

} // namespace StarWars