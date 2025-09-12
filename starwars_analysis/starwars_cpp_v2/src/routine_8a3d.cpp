#include "cpu_6809.h"

namespace StarWars {

void routine_8a3d_impl(CPU6809& cpu) {
    // Converted from rom_disasm_8a3d.md
    // Address: 0x8A3D

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
    cpu.m_d = 0x0000;

    // 8A5C: SUBD -$C,U
    // TODO: Fix comma operator: SUBD -$C,U

    // 8A5E: JSR $CD9C
    cpu.call_function(0xCD9C);

    // 8A61: ADDD -$A,U
    // TODO: Fix comma operator: ADDD -$A,U

    // 8A63: STD -$A,U
    // TODO: Handle indexed addressing: STD -$A,U

    // 8A65: LDD #$0000
    cpu.m_d = 0x0000;

    // 8A68: SUBD -$4,U
    // TODO: Fix comma operator: SUBD -$4,U

    // 8A6A: JSR $CD9C
    cpu.call_function(0xCD9C);

    // 8A6D: ADDD -$2,U
    // TODO: Fix comma operator: ADDD -$2,U

    // 8A6F: STD -$2,U
    // TODO: Handle indexed addressing: STD -$2,U

    // 8A71: LDD #$0000
    cpu.m_d = 0x0000;

    // 8A74: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // 8A76: JSR $CD9C
    cpu.call_function(0xCD9C);

    // 8A79: ADDD $6,U
    // TODO: Fix comma operator: ADDD $6,U

    // 8A7B: STD $6,U
    // TODO: Handle indexed addressing: STD $6,U

    // 8A7E: LDD #$0000
    cpu.m_d = 0x0000;

    // 8A81: SUBD -$C,U
    // TODO: Fix comma operator: SUBD -$C,U

    // 8A83: JSR $CD9E
    cpu.call_function(0xCD9E);

    // 8A86: ADDD -$A,U
    // TODO: Fix comma operator: ADDD -$A,U

    // 8A88: STD -$A,U
    // TODO: Handle indexed addressing: STD -$A,U

    // 8A8A: LDD #$0000
    cpu.m_d = 0x0000;

    // 8A8D: SUBD -$4,U
    // TODO: Fix comma operator: SUBD -$4,U

    // 8A8F: JSR $CD9E
    cpu.call_function(0xCD9E);

    // 8A92: ADDD -$2,U
    // TODO: Fix comma operator: ADDD -$2,U

    // 8A94: STD -$2,U
    // TODO: Handle indexed addressing: STD -$2,U

    // 8A96: LDD #$0000
    cpu.m_d = 0x0000;

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
    cpu.write_memory(0x58D1, cpu.m_b);

    // 8AB6: LDD -$A,U
    // TODO: Fix comma operator: LDD -$A,U

    // 8AB8: ADDD $8,U
    // TODO: Fix comma operator: ADDD $8,U

    // 8ABA: BVS $0081
    // TODO: Convert BVS $0081

    // 8ABC: STD $8,U
    // TODO: Handle indexed addressing: STD $8,U

    // 8ABE: LDD -$2,U
    // TODO: Fix comma operator: LDD -$2,U

    // 8AC0: ADDD $A,U
    // TODO: Fix comma operator: ADDD $A,U

    // 8AC2: BVS $0089
    // TODO: Convert BVS $0089

    // 8AC4: STD $A,U
    // TODO: Handle indexed addressing: STD $A,U

    // 8AC6: LDD $C,U
    // TODO: Fix comma operator: LDD $C,U

    // 8AC8: ADDD $6,U
    // TODO: Fix comma operator: ADDD $6,U

    // 8ACA: BVS $0091
    // TODO: Convert BVS $0091

    // 8ACC: STD $C,U
    // TODO: Handle indexed addressing: STD $C,U

    // 8ACF: LDX <$C2
    cpu.m_x = cpu.read_memory16(0xC2);

    // 8AD1: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8AD3: CMPA #$01
    cpu.compare_a(0x01);

    // 8AD5: BNE $009E
    if (!cpu.zero_flag()) cpu.m_pc = 0x8A75;

    // 8AD7: LDA $6,X
    // TODO: Fix comma operator: LDA $6,X

    // 8AD9: BEQ $009F
    if (cpu.zero_flag()) cpu.m_pc = 0x8A7A;

    // 8ADC: JSR $CE45
    cpu.call_function(0xCE45);

    // 8ADF: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8AE1: CMPA #$01
    cpu.compare_a(0x01);

    // 8AE3: BNE $00B0
    if (!cpu.zero_flag()) cpu.m_pc = 0x8A95;

    // 8AE5: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8AE8: ORB #$01
    cpu.m_b |= 0x01;

    // 8AEA: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 8AED: LDX <$C2
    cpu.m_x = cpu.read_memory16(0xC2);

    // 8AEF: INC $8,X
    // TODO: Convert INC $8,X

    // 8AF1: DEC $7,X
    // TODO: Convert DEC $7,X

    // 8AF3: LBLE $011A
    // TODO: Convert LBLE $011A

    // 8AF7: LDA #$05
    cpu.m_a = 0x05;

    // 8AF9: STA $7,X
    // TODO: Handle indexed addressing: STA $7,X

    // 8AFB: JSR $97ED
    cpu.call_function(0x97ED);

    // 8AFE: LDA #$1F
    cpu.m_a = 0x1F;

    // 8B00: STA $9,X
    // TODO: Handle indexed addressing: STA $9,X

    // 8B02: STA $6,X
    // TODO: Handle indexed addressing: STA $6,X

    // 8B04: LDX #$5090
    cpu.m_x = 0x5090;

    // 8B07: LDU <$C2
    cpu.m_u = cpu.read_memory16(0xC2);

    // 8B09: LDU ,U
    // TODO: Complex indexed addressing: ,U

    // 8B0B: LDD #$0000
    cpu.m_d = 0x0000;

    // 8B0E: STD -$A,U
    // TODO: Handle indexed addressing: STD -$A,U

    // 8B10: STD -$2,U
    // TODO: Handle indexed addressing: STD -$2,U

    // 8B12: STD $6,U
    // TODO: Handle indexed addressing: STD $6,U

    // 8B14: LDA #$02
    cpu.m_a = 0x02;

    // 8B16: STA <$01
    cpu.write_memory(0x01, cpu.m_a);

    // 8B18: LDD #$4000
    cpu.m_d = 0x4000;

    // 8B1B: SUBD <$C4
    cpu.m_d -= 0xC4;

    // 8B1D: LDB -$10,X
    // TODO: Fix comma operator: LDB -$10,X

    // 8B20: TFR A,B
    cpu.m_b = cpu.m_a;

    // 8B25: ADDD -$A,U
    // TODO: Fix comma operator: ADDD -$A,U

    // 8B27: STD -$A,U
    // TODO: Handle indexed addressing: STD -$A,U

    // 8B29: LDA <$53
    cpu.m_a = cpu.read_memory(0x53);

    // 8B2B: ORA #$80
    cpu.m_a |= 0x80;

    // 8B2D: LDB -$8,X
    // TODO: Fix comma operator: LDB -$8,X

    // 8B30: BCS $00F6
    if (cpu.carry_flag()) cpu.m_pc = 0x8B28;

    // 8B33: TFR A,B
    cpu.m_b = cpu.m_a;

    // 8B37: ADDD -$2,U
    // TODO: Fix comma operator: ADDD -$2,U

    // 8B39: STD -$2,U
    // TODO: Handle indexed addressing: STD -$2,U

    // 8B3B: LDA <$54
    cpu.m_a = cpu.read_memory(0x54);

    // 8B3D: ORA #$80
    cpu.m_a |= 0x80;

    // 8B3F: LDB ,X
    // TODO: Complex indexed addressing: ,X

    // 8B42: BCS $0108
    if (cpu.carry_flag()) cpu.m_pc = 0x8B4C;

    // 8B45: TFR A,B
    cpu.m_b = cpu.m_a;

    // 8B49: ADDD $6,U
    // TODO: Fix comma operator: ADDD $6,U

    // 8B4B: STD $6,U
    // TODO: Handle indexed addressing: STD $6,U

    // 8B4D: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // 8B4F: DEC <$01
    // TODO: Convert DEC <$01

    // 8B51: BPL $00DB
    if (!cpu.negative_flag()) cpu.m_pc = 0x8B2E;

    // 8B53: JSR $BDFD
    cpu.call_function(0xBDFD);

    // 8B57: LDX <$C2
    cpu.m_x = cpu.read_memory16(0xC2);

    // 8B59: JSR $BDFD
    cpu.call_function(0xBDFD);

    // 8B5C: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X

    // 8B5E: CMPA $4B38
    cpu.compare_a(cpu.read_memory(0x4B38));

    // 8B61: BNE $0129
    if (!cpu.zero_flag()) cpu.m_pc = 0x8B8C;

    // 8B63: JSR $BDCB
    cpu.call_function(0xBDCB);

    // 8B66: JSR $B739
    cpu.call_function(0xB739);

    // 8B69: JSR $97E8
    cpu.call_function(0x97E8);

    // 8B6D: LDX #$4900
    cpu.m_x = 0x4900;

    // 8B70: STX <$5A
    cpu.write_memory16(0x5A, cpu.m_x);

    // 8B72: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8B74: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8B76: BEQ $013E
    if (cpu.zero_flag()) cpu.m_pc = 0x8BB6;

    // 8B78: JSR $8BE1
    cpu.call_function(0x8BE1);

    // 8B7B: LDX <$5A
    cpu.m_x = cpu.read_memory16(0x5A);

    // 8B7D: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 8B80: CMPX #$494B
    cpu.compare_x(0x494B);

    // 8B83: BCS $0133
    if (cpu.carry_flag()) cpu.m_pc = 0x8BB8;

    // 8B86: LDX #$4900
    cpu.m_x = 0x4900;

    // 8B89: STX <$5A
    cpu.write_memory16(0x5A, cpu.m_x);

    // 8B8B: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8B8D: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8B8F: CMPA #$01
    cpu.compare_a(0x01);

    // 8B91: BNE $0199
    if (!cpu.zero_flag()) cpu.m_pc = 0x8B2C;

    // 8B93: LDA $A,U
    // TODO: Fix comma operator: LDA $A,U

    // 8B95: CMPA #$09
    cpu.compare_a(0x09);

    // 8B97: BLT $015E
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x8BF7;

    // 8B99: SUBA #$02
    cpu.m_a -= 0x02;

    // 8B9B: CMPA #$F7
    cpu.compare_a(0xF7);

    // 8B9D: BGT $0164
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8C03;

    // 8B9F: ADDA #$02
    cpu.m_a += 0x02;

    // 8BA1: STA $A,U
    // TODO: Handle indexed addressing: STA $A,U

    // 8BA3: LDA $C,U
    // TODO: Fix comma operator: LDA $C,U

    // 8BA5: CMPA #$09
    cpu.compare_a(0x09);

    // 8BA7: BLT $016E
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x8C17;

    // 8BA9: SUBA #$03
    cpu.m_a -= 0x03;

    // 8BAB: CMPA #$F7
    cpu.compare_a(0xF7);

    // 8BAD: BGT $0174
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8C23;

    // 8BAF: ADDA #$03
    cpu.m_a += 0x03;

    // 8BB1: STA $C,U
    // TODO: Handle indexed addressing: STA $C,U

    // 8BB3: LDD $8,U
    // TODO: Fix comma operator: LDD $8,U

    // 8BB5: ADDD #$0400
    cpu.m_d += 0x0400;

    // 8BB8: BVS $0181
    // TODO: Convert BVS $0181

    // 8BBA: STD $8,U
    // TODO: Handle indexed addressing: STD $8,U

    // 8BBC: BRA $0199
    cpu.m_pc = 0x8B57;

    // 8BBE: LDA $A,U
    // TODO: Fix comma operator: LDA $A,U

    // 8BC1: BPL $0187
    if (!cpu.negative_flag()) cpu.m_pc = 0x8B4A;

    // 8BC4: CMPA #$08
    cpu.compare_a(0x08);

    // 8BC6: BGT $0199
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8B61;

    // 8BC8: LDA $C,U
    // TODO: Fix comma operator: LDA $C,U

    // 8BCB: BPL $0191
    if (!cpu.negative_flag()) cpu.m_pc = 0x8B5E;

    // 8BCE: CMPA #$08
    cpu.compare_a(0x08);

    // 8BD0: BGT $0199
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8B6B;

    // 8BD2: LDA #$00
    cpu.m_a = 0x00;

    // 8BD4: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // 8BD6: LDX <$5A
    cpu.m_x = cpu.read_memory16(0x5A);

    // 8BD8: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 8BDB: CMPX #$494B
    cpu.compare_x(0x494B);

    // 8BDE: BCS $014C
    if (cpu.carry_flag()) cpu.m_pc = 0x8C2C;

    // 8BE1: JSR $8E3A
    cpu.call_function(0x8E3A);

    // 8BE4: LDD #$0000
    cpu.m_d = 0x0000;

    // 8BE7: STA <$4C
    cpu.write_memory(0x4C, cpu.m_a);

    // 8BE9: STA <$4E
    cpu.write_memory(0x4E, cpu.m_a);

    // 8BEB: STA <$4D
    cpu.write_memory(0x4D, cpu.m_a);

    // 8BED: STA <$4F
    cpu.write_memory(0x4F, cpu.m_a);

    // 8BEF: LDA $15,X
    // TODO: Fix comma operator: LDA $15,X

    // 8BF2: ANDA #$10
    cpu.m_a &= 0x10;

    // 8BF4: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // 8BF7: ANDB #$30
    cpu.m_b &= 0x30;

    // 8BF9: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 8BFC: LDA $9,X
    // TODO: Fix comma operator: LDA $9,X

    // 8BFF: BMI $01D8
    if (cpu.negative_flag()) cpu.m_pc = 0x8BD9;

    // 8C01: STA $9,X
    // TODO: Handle indexed addressing: STA $9,X

    // 8C03: LDD #$1640
    cpu.m_d = 0x1640;

    // 8C06: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 8C09: LDD #$3C02
    cpu.m_d = 0x3C02;

    // 8C0C: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // 8C0F: JSR $89C8
    cpu.call_function(0x89C8);

    // 8C12: JMP $8C44
    cpu.m_pc = 0x8C44;

    // 8C15: LDB $11,X
    // TODO: Fix comma operator: LDB $11,X

    // 8C18: STB <$50
    cpu.write_memory(0x50, cpu.m_b);

    // 8C1A: LSR <$50
    // TODO: Convert LSR <$50

    // 8C1C: BCC $01E4
    if (!cpu.carry_flag()) cpu.m_pc = 0x8C02;

    // 8C1E: JSR $8961
    cpu.call_function(0x8961);

    // 8C21: LSR <$50
    // TODO: Convert LSR <$50

    // 8C23: BCC $01EB
    if (!cpu.carry_flag()) cpu.m_pc = 0x8C10;

    // 8C25: JSR $8969
    cpu.call_function(0x8969);

    // 8C28: LSR <$50
    // TODO: Convert LSR <$50

    // 8C2A: BCC $01F2
    if (!cpu.carry_flag()) cpu.m_pc = 0x8C1E;

    // 8C2C: JSR $8951
    cpu.call_function(0x8951);

    // 8C2F: LSR <$50
    // TODO: Convert LSR <$50

    // 8C31: BCC $01F9
    if (!cpu.carry_flag()) cpu.m_pc = 0x8C2C;

    // 8C33: JSR $8959
    cpu.call_function(0x8959);

    // 8C36: LSR <$50
    // TODO: Convert LSR <$50

    // 8C38: BCC $0200
    if (!cpu.carry_flag()) cpu.m_pc = 0x8C3A;

    // 8C3A: JSR $8979
    cpu.call_function(0x8979);

}

} // namespace StarWars