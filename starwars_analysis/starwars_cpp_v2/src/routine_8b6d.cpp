#include "cpu_6809.h"

namespace StarWars {

void routine_8b6d_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_8b6d.md
    // Address: 0x8B6D

    // 8B6D: LDX #$4900
    cpu.state_.x = 0x4900;

    // 8B70: STX <$5A
    cpu.write_memory(0x5A, cpu.state_.x);

    // 8B72: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8B74: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8B76: BEQ $000E
    if (cpu.zero_flag()) cpu.state_.pc = 0x8B86;

    // 8B78: JSR $8BE1
    cpu.call_function(0x8BE1);

    // 8B7B: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8B7D: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 8B80: CMPX #$494B
    cpu.compare_x(0x494B);

    // 8B83: BCS $0003
    if (cpu.carry_flag()) cpu.state_.pc = 0x8B88;

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

    // 8B91: BNE $0069
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8BFC;

    // 8B93: LDA $A,U
    // TODO: Fix comma operator: LDA $A,U

    // 8B95: CMPA #$09
    cpu.compare_a(0x09);

    // 8B97: BLT $002E
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x8BC7;

    // 8B99: SUBA #$02
    cpu.state_.a -= 0x02;

    // 8B9B: CMPA #$F7
    cpu.compare_a(0xF7);

    // 8B9D: BGT $0034
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8BD3;

    // 8B9F: ADDA #$02
    cpu.state_.a += 0x02;

    // 8BA1: STA $A,U
    // TODO: Handle indexed addressing: STA $A,U

    // 8BA3: LDA $C,U
    // TODO: Fix comma operator: LDA $C,U

    // 8BA5: CMPA #$09
    cpu.compare_a(0x09);

    // 8BA7: BLT $003E
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x8BE7;

    // 8BA9: SUBA #$03
    cpu.state_.a -= 0x03;

    // 8BAB: CMPA #$F7
    cpu.compare_a(0xF7);

    // 8BAD: BGT $0044
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8BF3;

    // 8BAF: ADDA #$03
    cpu.state_.a += 0x03;

    // 8BB1: STA $C,U
    // TODO: Handle indexed addressing: STA $C,U

    // 8BB3: LDD $8,U
    // TODO: Fix comma operator: LDD $8,U

    // 8BB5: ADDD #$0400
    cpu.state_.d += 0x0400;

    // 8BB8: BVS $0051
    // TODO: Convert BVS $0051

    // 8BBA: STD $8,U
    // TODO: Handle indexed addressing: STD $8,U

    // 8BBC: BRA $0069
    cpu.state_.pc = 0x8C27;

    // 8BBE: LDA $A,U
    // TODO: Fix comma operator: LDA $A,U

    // 8BC1: BPL $0057
    if (!cpu.negative_flag()) cpu.state_.pc = 0x8C1A;

    // 8BC4: CMPA #$08
    cpu.compare_a(0x08);

    // 8BC6: BGT $0069
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8C31;

    // 8BC8: LDA $C,U
    // TODO: Fix comma operator: LDA $C,U

    // 8BCB: BPL $0061
    if (!cpu.negative_flag()) cpu.state_.pc = 0x8C2E;

    // 8BCE: CMPA #$08
    cpu.compare_a(0x08);

    // 8BD0: BGT $0069
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8C3B;

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

    // 8BDE: BCS $001C
    if (cpu.carry_flag()) cpu.state_.pc = 0x8BFC;

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

    // 8BFF: BMI $00A8
    if (cpu.negative_flag()) cpu.state_.pc = 0x8BA9;

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

    // 8C1C: BCC $00B4
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8BD2;

    // 8C1E: JSR $8961
    cpu.call_function(0x8961);

    // 8C21: LSR <$50
    // TODO: Convert LSR <$50

    // 8C23: BCC $00BB
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8BE0;

    // 8C25: JSR $8969
    cpu.call_function(0x8969);

    // 8C28: LSR <$50
    // TODO: Convert LSR <$50

    // 8C2A: BCC $00C2
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8BEE;

    // 8C2C: JSR $8951
    cpu.call_function(0x8951);

    // 8C2F: LSR <$50
    // TODO: Convert LSR <$50

    // 8C31: BCC $00C9
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8BFC;

    // 8C33: JSR $8959
    cpu.call_function(0x8959);

    // 8C36: LSR <$50
    // TODO: Convert LSR <$50

    // 8C38: BCC $00D0
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8C0A;

    // 8C3A: JSR $8979
    cpu.call_function(0x8979);

    // 8C3D: LSR <$50
    // TODO: Convert LSR <$50

    // 8C3F: BCC $00D7
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8C18;

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

    // 8C4E: LBNE $01F9
    // TODO: Convert LBNE $01F9

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

    // 8C66: BEQ $0114
    if (cpu.zero_flag()) cpu.state_.pc = 0x8C7C;

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

    // 8C7F: BRA $0119
    cpu.state_.pc = 0x8C9A;

    // 8C81: LDA #$67
    cpu.state_.a = 0x67;

    // 8C83: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8C86: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 8C89: BMI $0141
    if (cpu.negative_flag()) cpu.state_.pc = 0x8CCC;

    // 8C8B: INC $A,X
    // TODO: Convert INC $A,X

    // 8C8D: SUBD #$4000
    cpu.state_.d -= 0x4000;

    // 8C90: BGE $0141
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8CD3;

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

    // 8CA4: BHI $0141
    // TODO: Convert BHI $0141

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

    // 8CB3: BEQ $0198
    if (cpu.zero_flag()) cpu.state_.pc = 0x8C4D;

    // 8CB5: LDD $11,X
    // TODO: Fix comma operator: LDD $11,X

    // 8CB8: BITA #$40
    // TODO: Convert BITA #$40

    // 8CBA: BNE $0198
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8C54;

    // 8CBC: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 8CBF: SUBD #$0800
    cpu.state_.d -= 0x0800;

    // 8CC2: BLE $0198
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x8C5C;

    // 8CC4: LDA $6,X
    // TODO: Fix comma operator: LDA $6,X

    // 8CC6: BNE $0198
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8C60;

    // 8CC8: LDB $4B19
    cpu.state_.b = cpu.read_memory(0x4B19);

    // 8CCB: CMPB #$0B
    cpu.compare_b(0x0B);

    // 8CCD: BCS $0167
    if (cpu.carry_flag()) cpu.state_.pc = 0x8D36;

    // 8CCF: LDU #$8D99
    cpu.state_.u = 0x8D99;

    // 8CD2: BRA $016E
    cpu.state_.pc = 0x8D42;

    // 8CD6: LDU #$8D71
    cpu.state_.u = 0x8D71;

    // 8CD9: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // 8CDB: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 8CDD: ANDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8CDF: BNE $0198
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8C79;

    // 8CE1: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 8CE4: CMPA $1,U
    // TODO: Fix comma operator: CMPA $1,U

    // 8CE6: BLS $0198
    // TODO: Convert BLS $0198

    // 8CE8: LDU $2,U
    // TODO: Fix comma operator: LDU $2,U

    // 8CEA: LDA $3,U
    // TODO: Fix comma operator: LDA $3,U

    // 8CEC: BNE $0190
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8C7E;

    // 8CEE: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8CF0: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8CF3: ORB #$40
    cpu.state_.b |= 0x40;

    // 8CF5: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 8CF8: JSR $A68B
    cpu.call_function(0xA68B);

    // 8CFB: BRA $0198
    cpu.state_.pc = 0x8C95;

    // 8CFD: LEAU $6,U
    // TODO: Fix comma operator: LEAU $6,U

    // 8CFF: CMPU #$496F
    // TODO: Convert CMPU #$496F

    // 8D03: BCS $017D
    if (cpu.carry_flag()) cpu.state_.pc = 0x8D82;

    // 8D05: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8D07: LDA $11,X
    // TODO: Fix comma operator: LDA $11,X

    // 8D0A: BITA #$80
    // TODO: Convert BITA #$80

    // 8D0C: BEQ $01F9
    if (cpu.zero_flag()) cpu.state_.pc = 0x8D07;

    // 8D0E: LDA <$4F
    cpu.state_.a = cpu.read_memory(0x4F);

    // 8D10: BNE $01CD
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8CDF;

    // 8D12: LDA $5002
    cpu.state_.a = cpu.read_memory(0x5002);

    // 8D15: BMI $01AF
    if (cpu.negative_flag()) cpu.state_.pc = 0x8CC6;

    // 8D17: JSR $8979
    cpu.call_function(0x8979);

    // 8D1A: BRA $01B2
    cpu.state_.pc = 0x8CCE;

    // 8D1C: JSR $8971
    cpu.call_function(0x8971);

    // 8D1F: LDA <$4E
    cpu.state_.a = cpu.read_memory(0x4E);

    // 8D21: BNE $01CD
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8CF0;

    // 8D23: LDB $5004
    cpu.state_.b = cpu.read_memory(0x5004);

    // 8D27: ADDB #$01
    cpu.state_.b += 0x01;

    // 8D29: CMPB #$01
    cpu.compare_b(0x01);

    // 8D2B: BLS $01CD
    // TODO: Convert BLS $01CD

    // 8D2D: EORA $5002
    cpu.state_.a ^= 0x5002;

    // 8D30: BMI $01CA
    if (cpu.negative_flag()) cpu.state_.pc = 0x8CFC;

    // 8D32: JSR $8961
    cpu.call_function(0x8961);

    // 8D35: BRA $01CD
    cpu.state_.pc = 0x8D04;

    // 8D37: JSR $8969
    cpu.call_function(0x8969);

    // 8D3A: LDA <$4D
    cpu.state_.a = cpu.read_memory(0x4D);

    // 8D3C: BNE $01F9
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8D37;

    // 8D3E: LDA $5004
    cpu.state_.a = cpu.read_memory(0x5004);

    // 8D41: BMI $01DB
    if (cpu.negative_flag()) cpu.state_.pc = 0x8D1E;

    // 8D43: JSR $8951
    cpu.call_function(0x8951);

    // 8D46: BRA $01DE
    cpu.state_.pc = 0x8D26;

    // 8D48: JSR $8959
    cpu.call_function(0x8959);

    // 8D4B: LDA <$4E
    cpu.state_.a = cpu.read_memory(0x4E);

    // 8D4D: BNE $01F9
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8D48;

    // 8D4F: LDB $5002
    cpu.state_.b = cpu.read_memory(0x5002);

    // 8D53: ADDB #$01
    cpu.state_.b += 0x01;

    // 8D55: CMPB #$01
    cpu.compare_b(0x01);

    // 8D57: BLS $01F9
    // TODO: Convert BLS $01F9

    // 8D59: EORA $5004
    cpu.state_.a ^= 0x5004;

    // 8D5C: BMI $01F6
    if (cpu.negative_flag()) cpu.state_.pc = 0x8D54;

    // 8D5E: JSR $8969
    cpu.call_function(0x8969);

    // 8D61: BRA $01F9
    cpu.state_.pc = 0x8D5C;

    // 8D63: JSR $8961
    cpu.call_function(0x8961);

    // 8D66: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8D68: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8D6B: ANDA #$EF
    cpu.state_.a &= 0xEF;

}

} // namespace StarWars