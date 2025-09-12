#include "cpu_6809.h"

namespace StarWars {

void routine_8a00_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_8a00.md
    // Address: 0x8A00

    // 8A00: ADDD $6,U
    // TODO: Fix comma operator: ADDD $6,U

    // 8A02: STD $6,U
    // TODO: Handle indexed addressing: STD $6,U

    // 8A05: LDD -$10,U
    // TODO: Fix comma operator: LDD -$10,U

    // 8A07: JSR $CD9C
    cpu.call_function(0xCD9C);

    // 8A0A: ADDD -$A,U
    // TODO: Fix comma operator: ADDD -$A,U

    // 8A0C: STD -$A,U
    // TODO: Handle indexed addressing: STD -$A,U

    // 8A0E: LDD -$8,U
    // TODO: Fix comma operator: LDD -$8,U

    // 8A10: JSR $CD9C
    cpu.call_function(0xCD9C);

    // 8A13: ADDD -$2,U
    // TODO: Fix comma operator: ADDD -$2,U

    // 8A15: STD -$2,U
    // TODO: Handle indexed addressing: STD -$2,U

    // 8A17: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // 8A19: JSR $CD9C
    cpu.call_function(0xCD9C);

    // 8A1C: ADDD $6,U
    // TODO: Fix comma operator: ADDD $6,U

    // 8A1E: STD $6,U
    // TODO: Handle indexed addressing: STD $6,U

    // 8A21: LDD -$C,U
    // TODO: Fix comma operator: LDD -$C,U

    // 8A23: JSR $CD9C
    cpu.call_function(0xCD9C);

    // 8A26: ADDD -$A,U
    // TODO: Fix comma operator: ADDD -$A,U

    // 8A28: STD -$A,U
    // TODO: Handle indexed addressing: STD -$A,U

    // 8A2A: LDD -$4,U
    // TODO: Fix comma operator: LDD -$4,U

    // 8A2C: JSR $CD9C
    cpu.call_function(0xCD9C);

    // 8A2F: ADDD -$2,U
    // TODO: Fix comma operator: ADDD -$2,U

    // 8A31: STD -$2,U
    // TODO: Handle indexed addressing: STD -$2,U

    // 8A33: LDD $4,U
    // TODO: Fix comma operator: LDD $4,U

    // 8A35: JSR $CD9C
    cpu.call_function(0xCD9C);

    // 8A38: ADDD $6,U
    // TODO: Fix comma operator: ADDD $6,U

    // 8A3A: STD $6,U
    // TODO: Handle indexed addressing: STD $6,U

    // 8A3D: LDD -$C,U
    // TODO: Fix comma operator: LDD -$C,U

    // 8A3F: JSR $CD9E
    cpu.call_function(0xCD9E);

    // 8A42: ADDD -$A,U
    // TODO: Fix comma operator: ADDD -$A,U

    // 8A44: STD -$A,U
    // TODO: Handle indexed addressing: STD -$A,U

    // 8A46: LDD -$4,U
    // TODO: Fix comma operator: LDD -$4,U

    // 8A48: JSR $CD9E
    cpu.call_function(0xCD9E);

    // 8A4B: ADDD -$2,U
    // TODO: Fix comma operator: ADDD -$2,U

    // 8A4D: STD -$2,U
    // TODO: Handle indexed addressing: STD -$2,U

    // 8A4F: LDD $4,U
    // TODO: Fix comma operator: LDD $4,U

    // 8A51: JSR $CD9E
    cpu.call_function(0xCD9E);

    // 8A54: ADDD $6,U
    // TODO: Fix comma operator: ADDD $6,U

    // 8A56: STD $6,U
    // TODO: Handle indexed addressing: STD $6,U

    // 8A59: LDD #$0000
    cpu.state_.d = 0x0000;

    // 8A5C: SUBD -$C,U
    // TODO: Fix comma operator: SUBD -$C,U

    // 8A5E: JSR $CD9C
    cpu.call_function(0xCD9C);

    // 8A61: ADDD -$A,U
    // TODO: Fix comma operator: ADDD -$A,U

    // 8A63: STD -$A,U
    // TODO: Handle indexed addressing: STD -$A,U

    // 8A65: LDD #$0000
    cpu.state_.d = 0x0000;

    // 8A68: SUBD -$4,U
    // TODO: Fix comma operator: SUBD -$4,U

    // 8A6A: JSR $CD9C
    cpu.call_function(0xCD9C);

    // 8A6D: ADDD -$2,U
    // TODO: Fix comma operator: ADDD -$2,U

    // 8A6F: STD -$2,U
    // TODO: Handle indexed addressing: STD -$2,U

    // 8A71: LDD #$0000
    cpu.state_.d = 0x0000;

    // 8A74: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // 8A76: JSR $CD9C
    cpu.call_function(0xCD9C);

    // 8A79: ADDD $6,U
    // TODO: Fix comma operator: ADDD $6,U

    // 8A7B: STD $6,U
    // TODO: Handle indexed addressing: STD $6,U

    // 8A7E: LDD #$0000
    cpu.state_.d = 0x0000;

    // 8A81: SUBD -$C,U
    // TODO: Fix comma operator: SUBD -$C,U

    // 8A83: JSR $CD9E
    cpu.call_function(0xCD9E);

    // 8A86: ADDD -$A,U
    // TODO: Fix comma operator: ADDD -$A,U

    // 8A88: STD -$A,U
    // TODO: Handle indexed addressing: STD -$A,U

    // 8A8A: LDD #$0000
    cpu.state_.d = 0x0000;

    // 8A8D: SUBD -$4,U
    // TODO: Fix comma operator: SUBD -$4,U

    // 8A8F: JSR $CD9E
    cpu.call_function(0xCD9E);

    // 8A92: ADDD -$2,U
    // TODO: Fix comma operator: ADDD -$2,U

    // 8A94: STD -$2,U
    // TODO: Handle indexed addressing: STD -$2,U

    // 8A96: LDD #$0000
    cpu.state_.d = 0x0000;

    // 8A99: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // 8A9B: JSR $CD9E
    cpu.call_function(0xCD9E);

    // 8A9E: ADDD $6,U
    // TODO: Fix comma operator: ADDD $6,U

    // 8AA0: STD $6,U
    // TODO: Handle indexed addressing: STD $6,U

    // 8AA5: BITB $D,Y
    // TODO: Convert BITB $D,Y

    // 8AAB: ROL [A,S]
    // TODO: Convert ROL [A,S]

    // 8AAD: JSR -$D,Y
    // TODO: Fix comma operator: JSR -$D,Y

    // 8AAF: ORA $8,Y
    // TODO: Fix comma operator: ORA $8,Y

    // 8AB1: LDA $B,X
    // TODO: Fix comma operator: LDA $B,X

    // 8AB3: STB $58D1
    cpu.write_memory(0x58D1, cpu.state_.b);

    // 8AB6: LDD -$A,U
    // TODO: Fix comma operator: LDD -$A,U

    // 8AB8: ADDD $8,U
    // TODO: Fix comma operator: ADDD $8,U

    // 8ABA: BVS $00BE
    // TODO: Convert BVS $00BE

    // 8ABC: STD $8,U
    // TODO: Handle indexed addressing: STD $8,U

    // 8ABE: LDD -$2,U
    // TODO: Fix comma operator: LDD -$2,U

    // 8AC0: ADDD $A,U
    // TODO: Fix comma operator: ADDD $A,U

    // 8AC2: BVS $00C6
    // TODO: Convert BVS $00C6

    // 8AC4: STD $A,U
    // TODO: Handle indexed addressing: STD $A,U

    // 8AC6: LDD $C,U
    // TODO: Fix comma operator: LDD $C,U

    // 8AC8: ADDD $6,U
    // TODO: Fix comma operator: ADDD $6,U

    // 8ACA: BVS $00CE
    // TODO: Convert BVS $00CE

    // 8ACC: STD $C,U
    // TODO: Handle indexed addressing: STD $C,U

    // 8ACF: LDX <$C2
    cpu.state_.x = cpu.read_memory_word(0xC2);

    // 8AD1: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8AD3: CMPA #$01
    cpu.compare_a(0x01);

    // 8AD5: BNE $00DB
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8AB2;

    // 8AD7: LDA $6,X
    // TODO: Fix comma operator: LDA $6,X

    // 8AD9: BEQ $00DC
    if (cpu.zero_flag()) cpu.state_.pc = 0x8AB7;

    // 8ADC: JSR $CE45
    cpu.call_function(0xCE45);

    // 8ADF: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8AE1: CMPA #$01
    cpu.compare_a(0x01);

    // 8AE3: BNE $00ED
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8AD2;

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

    // 8AF3: LBLE $0157
    // TODO: Convert LBLE $0157

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

    // 8B30: BCS $0133
    if (cpu.carry_flag()) cpu.state_.pc = 0x8B65;

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

    // 8B42: BCS $0145
    if (cpu.carry_flag()) cpu.state_.pc = 0x8B89;

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

    // 8B51: BPL $0118
    if (!cpu.negative_flag()) cpu.state_.pc = 0x8B6B;

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

    // 8B61: BNE $0166
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8BC9;

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

    // 8B76: BEQ $017B
    if (cpu.zero_flag()) cpu.state_.pc = 0x8BF3;

    // 8B78: JSR $8BE1
    cpu.call_function(0x8BE1);

    // 8B7B: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8B7D: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 8B80: CMPX #$494B
    cpu.compare_x(0x494B);

    // 8B83: BCS $0170
    if (cpu.carry_flag()) cpu.state_.pc = 0x8BF5;

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

    // 8B91: BNE $01D6
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8B69;

    // 8B93: LDA $A,U
    // TODO: Fix comma operator: LDA $A,U

    // 8B95: CMPA #$09
    cpu.compare_a(0x09);

    // 8B97: BLT $019B
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x8B34;

    // 8B99: SUBA #$02
    cpu.state_.a -= 0x02;

    // 8B9B: CMPA #$F7
    cpu.compare_a(0xF7);

    // 8B9D: BGT $01A1
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8B40;

    // 8B9F: ADDA #$02
    cpu.state_.a += 0x02;

    // 8BA1: STA $A,U
    // TODO: Handle indexed addressing: STA $A,U

    // 8BA3: LDA $C,U
    // TODO: Fix comma operator: LDA $C,U

    // 8BA5: CMPA #$09
    cpu.compare_a(0x09);

    // 8BA7: BLT $01AB
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x8B54;

    // 8BA9: SUBA #$03
    cpu.state_.a -= 0x03;

    // 8BAB: CMPA #$F7
    cpu.compare_a(0xF7);

    // 8BAD: BGT $01B1
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8B60;

    // 8BAF: ADDA #$03
    cpu.state_.a += 0x03;

    // 8BB1: STA $C,U
    // TODO: Handle indexed addressing: STA $C,U

    // 8BB3: LDD $8,U
    // TODO: Fix comma operator: LDD $8,U

    // 8BB5: ADDD #$0400
    cpu.state_.d += 0x0400;

    // 8BB8: BVS $01BE
    // TODO: Convert BVS $01BE

    // 8BBA: STD $8,U
    // TODO: Handle indexed addressing: STD $8,U

    // 8BBC: BRA $01D6
    cpu.state_.pc = 0x8B94;

    // 8BBE: LDA $A,U
    // TODO: Fix comma operator: LDA $A,U

    // 8BC1: BPL $01C4
    if (!cpu.negative_flag()) cpu.state_.pc = 0x8B87;

    // 8BC4: CMPA #$08
    cpu.compare_a(0x08);

    // 8BC6: BGT $01D6
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8B9E;

    // 8BC8: LDA $C,U
    // TODO: Fix comma operator: LDA $C,U

    // 8BCB: BPL $01CE
    if (!cpu.negative_flag()) cpu.state_.pc = 0x8B9B;

    // 8BCE: CMPA #$08
    cpu.compare_a(0x08);

    // 8BD0: BGT $01D6
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8BA8;

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

    // 8BDE: BCS $0189
    if (cpu.carry_flag()) cpu.state_.pc = 0x8B69;

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

    // 8BFF: BMI $0201
    if (cpu.negative_flag()) cpu.state_.pc = 0x8C02;

}

} // namespace StarWars