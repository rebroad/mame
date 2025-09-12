#include "cpu_6809.h"

namespace StarWars {

void routine_8ab6_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_8ab6.md
    // Address: 0x8AB6

    // 8AB6: LDD -$A,U
    // TODO: Fix comma operator: LDD -$A,U

    // 8AB8: ADDD $8,U
    // TODO: Fix comma operator: ADDD $8,U

    // 8ABA: BVS $0008
    // TODO: Convert BVS $0008

    // 8ABC: STD $8,U
    // TODO: Handle indexed addressing: STD $8,U

    // 8ABE: LDD -$2,U
    // TODO: Fix comma operator: LDD -$2,U

    // 8AC0: ADDD $A,U
    // TODO: Fix comma operator: ADDD $A,U

    // 8AC2: BVS $0010
    // TODO: Convert BVS $0010

    // 8AC4: STD $A,U
    // TODO: Handle indexed addressing: STD $A,U

    // 8AC6: LDD $C,U
    // TODO: Fix comma operator: LDD $C,U

    // 8AC8: ADDD $6,U
    // TODO: Fix comma operator: ADDD $6,U

    // 8ACA: BVS $0018
    // TODO: Convert BVS $0018

    // 8ACC: STD $C,U
    // TODO: Handle indexed addressing: STD $C,U

    // 8ACF: LDX <$C2
    cpu.state_.x = cpu.read_memory_word(0xC2);

    // 8AD1: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8AD3: CMPA #$01
    cpu.compare_a(0x01);

    // 8AD5: BNE $0025
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8AFC;

    // 8AD7: LDA $6,X
    // TODO: Fix comma operator: LDA $6,X

    // 8AD9: BEQ $0026
    if (cpu.zero_flag()) cpu.state_.pc = 0x8B01;

    // 8ADC: JSR $CE45
    cpu.call_function(0xCE45);

    // 8ADF: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8AE1: CMPA #$01
    cpu.compare_a(0x01);

    // 8AE3: BNE $0037
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8B1C;

    // 8AE5: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8AE8: ORB #$01
    cpu.state_.b |= 0x01;

    // 8AEA: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 8AED: LDX <$C2
    cpu.state_.x = cpu.read_memory_word(0xC2);

    // 8AEF: INC $8,X
    // TODO: Convert INC $8,X

    // 8AF1: DEC $7,X
    // TODO: Convert DEC $7,X

    // 8AF3: LBLE $00A1
    // TODO: Convert LBLE $00A1

    // 8AF7: LDA #$05
    cpu.state_.a = 0x05;

    // 8AF9: STA $7,X
    // TODO: Handle indexed addressing: STA $7,X

    // 8AFB: JSR $97ED
    cpu.call_function(0x97ED);

    // 8AFE: LDA #$1F
    cpu.state_.a = 0x1F;

    // 8B00: STA $9,X
    // TODO: Handle indexed addressing: STA $9,X

    // 8B02: STA $6,X
    // TODO: Handle indexed addressing: STA $6,X

    // 8B04: LDX #$5090
    cpu.state_.x = 0x5090;

    // 8B07: LDU <$C2
    cpu.state_.u = cpu.read_memory_word(0xC2);

    // 8B09: LDU ,U
    // TODO: Complex indexed addressing: ,U

    // 8B0B: LDD #$0000
    cpu.state_.d = 0x0000;

    // 8B0E: STD -$A,U
    // TODO: Handle indexed addressing: STD -$A,U

    // 8B10: STD -$2,U
    // TODO: Handle indexed addressing: STD -$2,U

    // 8B12: STD $6,U
    // TODO: Handle indexed addressing: STD $6,U

    // 8B14: LDA #$02
    cpu.state_.a = 0x02;

    // 8B16: STA <$01
    cpu.write_memory(0x01, cpu.state_.a);

    // 8B18: LDD #$4000
    cpu.state_.d = 0x4000;

    // 8B1B: SUBD <$C4
    cpu.state_.d -= 0xC4;

    // 8B1D: LDB -$10,X
    // TODO: Fix comma operator: LDB -$10,X

    // 8B20: TFR A,B
    cpu.state_.b = cpu.state_.a;

    // 8B25: ADDD -$A,U
    // TODO: Fix comma operator: ADDD -$A,U

    // 8B27: STD -$A,U
    // TODO: Handle indexed addressing: STD -$A,U

    // 8B29: LDA <$53
    cpu.state_.a = cpu.read_memory(0x53);

    // 8B2B: ORA #$80
    cpu.state_.a |= 0x80;

    // 8B2D: LDB -$8,X
    // TODO: Fix comma operator: LDB -$8,X

    // 8B30: BCS $007D
    if (cpu.carry_flag()) cpu.state_.pc = 0x8BAF;

    // 8B33: TFR A,B
    cpu.state_.b = cpu.state_.a;

    // 8B37: ADDD -$2,U
    // TODO: Fix comma operator: ADDD -$2,U

    // 8B39: STD -$2,U
    // TODO: Handle indexed addressing: STD -$2,U

    // 8B3B: LDA <$54
    cpu.state_.a = cpu.read_memory(0x54);

    // 8B3D: ORA #$80
    cpu.state_.a |= 0x80;

    // 8B3F: LDB ,X
    // TODO: Complex indexed addressing: ,X

    // 8B42: BCS $008F
    if (cpu.carry_flag()) cpu.state_.pc = 0x8AD3;

    // 8B45: TFR A,B
    cpu.state_.b = cpu.state_.a;

    // 8B49: ADDD $6,U
    // TODO: Fix comma operator: ADDD $6,U

    // 8B4B: STD $6,U
    // TODO: Handle indexed addressing: STD $6,U

    // 8B4D: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // 8B4F: DEC <$01
    // TODO: Convert DEC <$01

    // 8B51: BPL $0062
    if (!cpu.negative_flag()) cpu.state_.pc = 0x8BB5;

    // 8B53: JSR $BDFD
    cpu.call_function(0xBDFD);

    // 8B57: LDX <$C2
    cpu.state_.x = cpu.read_memory_word(0xC2);

    // 8B59: JSR $BDFD
    cpu.call_function(0xBDFD);

    // 8B5C: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X

    // 8B5E: CMPA $4B38
    cpu.compare_a(cpu.read_memory(0x4B38));

    // 8B61: BNE $00B0
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8B13;

    // 8B63: JSR $BDCB
    cpu.call_function(0xBDCB);

    // 8B66: JSR $B739
    cpu.call_function(0xB739);

    // 8B69: JSR $97E8
    cpu.call_function(0x97E8);

    // 8B6D: LDX #$4900
    cpu.state_.x = 0x4900;

    // 8B70: STX <$5A
    cpu.write_memory(0x5A, cpu.state_.x);

    // 8B72: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8B74: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8B76: BEQ $00C5
    if (cpu.zero_flag()) cpu.state_.pc = 0x8B3D;

    // 8B78: JSR $8BE1
    cpu.call_function(0x8BE1);

    // 8B7B: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8B7D: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 8B80: CMPX #$494B
    cpu.compare_x(0x494B);

    // 8B83: BCS $00BA
    if (cpu.carry_flag()) cpu.state_.pc = 0x8B3F;

    // 8B86: LDX #$4900
    cpu.state_.x = 0x4900;

    // 8B89: STX <$5A
    cpu.write_memory(0x5A, cpu.state_.x);

    // 8B8B: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8B8D: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8B8F: CMPA #$01
    cpu.compare_a(0x01);

    // 8B91: BNE $0120
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8BB3;

    // 8B93: LDA $A,U
    // TODO: Fix comma operator: LDA $A,U

    // 8B95: CMPA #$09
    cpu.compare_a(0x09);

    // 8B97: BLT $00E5
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x8B7E;

    // 8B99: SUBA #$02
    cpu.state_.a -= 0x02;

    // 8B9B: CMPA #$F7
    cpu.compare_a(0xF7);

    // 8B9D: BGT $00EB
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8B8A;

    // 8B9F: ADDA #$02
    cpu.state_.a += 0x02;

    // 8BA1: STA $A,U
    // TODO: Handle indexed addressing: STA $A,U

    // 8BA3: LDA $C,U
    // TODO: Fix comma operator: LDA $C,U

    // 8BA5: CMPA #$09
    cpu.compare_a(0x09);

    // 8BA7: BLT $00F5
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x8B9E;

    // 8BA9: SUBA #$03
    cpu.state_.a -= 0x03;

    // 8BAB: CMPA #$F7
    cpu.compare_a(0xF7);

    // 8BAD: BGT $00FB
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8BAA;

    // 8BAF: ADDA #$03
    cpu.state_.a += 0x03;

    // 8BB1: STA $C,U
    // TODO: Handle indexed addressing: STA $C,U

    // 8BB3: LDD $8,U
    // TODO: Fix comma operator: LDD $8,U

    // 8BB5: ADDD #$0400
    cpu.state_.d += 0x0400;

    // 8BB8: BVS $0108
    // TODO: Convert BVS $0108

    // 8BBA: STD $8,U
    // TODO: Handle indexed addressing: STD $8,U

    // 8BBC: BRA $0120
    cpu.state_.pc = 0x8BDE;

    // 8BBE: LDA $A,U
    // TODO: Fix comma operator: LDA $A,U

    // 8BC1: BPL $010E
    if (!cpu.negative_flag()) cpu.state_.pc = 0x8BD1;

    // 8BC4: CMPA #$08
    cpu.compare_a(0x08);

    // 8BC6: BGT $0120
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8BE8;

    // 8BC8: LDA $C,U
    // TODO: Fix comma operator: LDA $C,U

    // 8BCB: BPL $0118
    if (!cpu.negative_flag()) cpu.state_.pc = 0x8BE5;

    // 8BCE: CMPA #$08
    cpu.compare_a(0x08);

    // 8BD0: BGT $0120
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8BF2;

    // 8BD2: LDA #$00
    cpu.state_.a = 0x00;

    // 8BD4: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // 8BD6: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8BD8: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 8BDB: CMPX #$494B
    cpu.compare_x(0x494B);

    // 8BDE: BCS $00D3
    if (cpu.carry_flag()) cpu.state_.pc = 0x8BB3;

    // 8BE1: JSR $8E3A
    cpu.call_function(0x8E3A);

    // 8BE4: LDD #$0000
    cpu.state_.d = 0x0000;

    // 8BE7: STA <$4C
    cpu.write_memory(0x4C, cpu.state_.a);

    // 8BE9: STA <$4E
    cpu.write_memory(0x4E, cpu.state_.a);

    // 8BEB: STA <$4D
    cpu.write_memory(0x4D, cpu.state_.a);

    // 8BED: STA <$4F
    cpu.write_memory(0x4F, cpu.state_.a);

    // 8BEF: LDA $15,X
    // TODO: Fix comma operator: LDA $15,X

    // 8BF2: ANDA #$10
    cpu.state_.a &= 0x10;

    // 8BF4: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // 8BF7: ANDB #$30
    cpu.state_.b &= 0x30;

    // 8BF9: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 8BFC: LDA $9,X
    // TODO: Fix comma operator: LDA $9,X

    // 8BFF: BMI $015F
    if (cpu.negative_flag()) cpu.state_.pc = 0x8C60;

    // 8C01: STA $9,X
    // TODO: Handle indexed addressing: STA $9,X

    // 8C03: LDD #$1640
    cpu.state_.d = 0x1640;

    // 8C06: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // 8C09: LDD #$3C02
    cpu.state_.d = 0x3C02;

    // 8C0C: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // 8C0F: JSR $89C8
    cpu.call_function(0x89C8);

    // 8C12: JMP $8C44
    cpu.state_.pc = 0x8C44;

    // 8C15: LDB $11,X
    // TODO: Fix comma operator: LDB $11,X

    // 8C18: STB <$50
    cpu.write_memory(0x50, cpu.state_.b);

    // 8C1A: LSR <$50
    // TODO: Convert LSR <$50

    // 8C1C: BCC $016B
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8C89;

    // 8C1E: JSR $8961
    cpu.call_function(0x8961);

    // 8C21: LSR <$50
    // TODO: Convert LSR <$50

    // 8C23: BCC $0172
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8C97;

    // 8C25: JSR $8969
    cpu.call_function(0x8969);

    // 8C28: LSR <$50
    // TODO: Convert LSR <$50

    // 8C2A: BCC $0179
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8CA5;

    // 8C2C: JSR $8951
    cpu.call_function(0x8951);

    // 8C2F: LSR <$50
    // TODO: Convert LSR <$50

    // 8C31: BCC $0180
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8BB3;

    // 8C33: JSR $8959
    cpu.call_function(0x8959);

    // 8C36: LSR <$50
    // TODO: Convert LSR <$50

    // 8C38: BCC $0187
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8BC1;

    // 8C3A: JSR $8979
    cpu.call_function(0x8979);

    // 8C3D: LSR <$50
    // TODO: Convert LSR <$50

    // 8C3F: BCC $018E
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8BCF;

    // 8C41: JSR $8971
    cpu.call_function(0x8971);

    // 8C44: JSR $8D9D
    cpu.call_function(0x8D9D);

    // 8C47: JSR $8DE3
    cpu.call_function(0x8DE3);

    // 8C4A: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8C4C: CMPA #$01
    cpu.compare_a(0x01);

    // 8C4E: LBNE $02B0
    // TODO: Convert LBNE $02B0

    // 8C52: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X

    // 8C54: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 8C57: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8C59: CLR $A,X
    // TODO: Fix comma operator: CLR $A,X

    // 8C5C: LDB #$13
    cpu.state_.b = 0x13;

    // 8C5E: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 8C61: LDA $11,X
    // TODO: Fix comma operator: LDA $11,X

    // 8C64: BITA #$40
    // TODO: Convert BITA #$40

    // 8C66: BEQ $01CB
    if (cpu.zero_flag()) cpu.state_.pc = 0x8C33;

    // 8C68: LDD $5098
    cpu.state_.d = cpu.read_memory_word(0x5098);

    // 8C6B: ADDD #$1000
    cpu.state_.d += 0x1000;

    // 8C6E: STD $5098
    cpu.write_memory(0x5098, cpu.state_.d);

    // 8C71: LDA #$67
    cpu.state_.a = 0x67;

    // 8C73: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8C76: LDD $5098
    cpu.state_.d = cpu.read_memory_word(0x5098);

    // 8C79: SUBD #$1000
    cpu.state_.d -= 0x1000;

    // 8C7C: STD $5098
    cpu.write_memory(0x5098, cpu.state_.d);

    // 8C7F: BRA $01D0
    cpu.state_.pc = 0x8C51;

    // 8C81: LDA #$67
    cpu.state_.a = 0x67;

    // 8C83: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8C86: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 8C89: BMI $01F8
    if (cpu.negative_flag()) cpu.state_.pc = 0x8C83;

    // 8C8B: INC $A,X
    // TODO: Convert INC $A,X

    // 8C8D: SUBD #$4000
    cpu.state_.d -= 0x4000;

    // 8C90: BGE $01F8
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8C8A;

    // 8C92: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8C95: ORB #$08
    cpu.state_.b |= 0x08;

    // 8C97: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 8C9A: LDD $5072
    cpu.state_.d = cpu.read_memory_word(0x5072);

    // 8C9D: ADDD $5074
    cpu.state_.d += 0x5074;

    // 8CA0: CMPD #$0020
    // TODO: Convert CMPD #$0020

    // 8CA4: BHI $01F8
    // TODO: Convert BHI $01F8

    // 8CA6: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8CA9: ORB #$04
    cpu.state_.b |= 0x04;

    // 8CAB: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 8CAE: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8CB1: BITA #$10
    // TODO: Convert BITA #$10

    // 8CB3: BEQ $024F
    if (cpu.zero_flag()) cpu.state_.pc = 0x8D04;

    // 8CB5: LDD $0,X
    // TODO: Fix comma operator: LDD $0,X

}

} // namespace StarWars