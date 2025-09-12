#include "cpu_6809.h"

namespace StarWars {

void routine_8951_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_8951.md
    // Address: 0x8951

    // 8951: JSR $8981
    cpu.call_function(0x8981);

    // 8954: INC <$4D
    // TODO: Convert INC <$4D

    // 8956: JMP $89D3
    cpu.state_.pc = 0x89D3;

    // 8959: JSR $8993
    cpu.call_function(0x8993);

    // 895C: DEC <$4D
    // TODO: Convert DEC <$4D

    // 895E: JMP $89D3
    cpu.state_.pc = 0x89D3;

    // 8961: JSR $8993
    cpu.call_function(0x8993);

    // 8964: DEC <$4E
    // TODO: Convert DEC <$4E

    // 8966: JMP $89C8
    cpu.state_.pc = 0x89C8;

    // 8969: JSR $8981
    cpu.call_function(0x8981);

    // 896C: INC <$4E
    // TODO: Convert INC <$4E

    // 896E: JMP $89C8
    cpu.state_.pc = 0x89C8;

    // 8971: JSR $8981
    cpu.call_function(0x8981);

    // 8974: DEC <$4F
    // TODO: Convert DEC <$4F

    // 8976: JMP $89DE
    cpu.state_.pc = 0x89DE;

    // 8979: JSR $8993
    cpu.call_function(0x8993);

    // 897C: INC <$4F
    // TODO: Convert INC <$4F

    // 897E: JMP $89DE
    cpu.state_.pc = 0x89DE;

    // 8981: LDA #$14
    cpu.state_.a = 0x14;

    // 8983: LDU #$89A8
    cpu.state_.u = 0x89A8;

    // 8986: LEAU A,U
    // TODO: Fix comma operator: LEAU A,U

    // 8988: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // 898A: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // 898D: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // 898F: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // 8993: LDA #$14
    cpu.state_.a = 0x14;

    // 8995: LDU #$89A8
    cpu.state_.u = 0x89A8;

    // 8998: LEAU A,U
    // TODO: Fix comma operator: LEAU A,U

    // 899A: LDD #$0000
    cpu.state_.d = 0x0000;

    // 899D: SUBD ,U
    // TODO: Complex indexed addressing: ,U

    // 899F: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // 89A2: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // 89A4: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // 89A8: NEG <$B5
    // TODO: Convert NEG <$B5

    // 89AB: STU $0100
    cpu.write_memory(0x0100, cpu.state_.u);

    // 89AF: LDU $016A
    cpu.state_.u = cpu.read_memory_word(0x016A);

    // 89B3: LDD $021F
    cpu.state_.d = cpu.read_memory_word(0x021F);

    // 89B7: STB $03DF
    cpu.write_memory(0x03DF, cpu.state_.b);

    // 89BB: SBCB $4,X
    // TODO: Convert SBCB $4,X

    // 89BD: STU $3FCE
    cpu.write_memory(0x3FCE, cpu.state_.u);

    // 89C0: LSR <$90
    // TODO: Convert LSR <$90

    // 89C3: SBCB #$05
    // TODO: Convert SBCB #$05

    // 89C5: SUBA <$3F
    cpu.state_.a -= 0x3F;

    // 89C7: SBCB #$4F
    // TODO: Convert SBCB #$4F

    // 89C9: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

    // 89CB: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 89CE: LDA #$00
    cpu.state_.a = 0x00;

    // 89D0: JMP $CDBA
    cpu.state_.pc = 0xCDBA;

    // 89D4: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

    // 89D6: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 89D9: LDA #$0E
    cpu.state_.a = 0x0E;

    // 89DB: JMP $CDBA
    cpu.state_.pc = 0xCDBA;

    // 89DF: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

    // 89E1: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 89E4: LDA #$1C
    cpu.state_.a = 0x1C;

    // 89E6: JMP $CDBA
    cpu.state_.pc = 0xCDBA;

    // 89E9: LDD -$10,U
    // TODO: Fix comma operator: LDD -$10,U

    // 89EB: JSR $CD9E
    cpu.call_function(0xCD9E);

    // 89EE: ADDD -$A,U
    // TODO: Fix comma operator: ADDD -$A,U

    // 89F0: STD -$A,U
    // TODO: Handle indexed addressing: STD -$A,U

    // 89F2: LDD -$8,U
    // TODO: Fix comma operator: LDD -$8,U

    // 89F4: JSR $CD9E
    cpu.call_function(0xCD9E);

    // 89F7: ADDD -$2,U
    // TODO: Fix comma operator: ADDD -$2,U

    // 89F9: STD -$2,U
    // TODO: Handle indexed addressing: STD -$2,U

    // 89FB: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // 89FD: JSR $CD9E
    cpu.call_function(0xCD9E);

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

    // 8ABA: BVS $016D
    // TODO: Convert BVS $016D

    // 8ABC: STD $8,U
    // TODO: Handle indexed addressing: STD $8,U

    // 8ABE: LDD -$2,U
    // TODO: Fix comma operator: LDD -$2,U

    // 8AC0: ADDD $A,U
    // TODO: Fix comma operator: ADDD $A,U

    // 8AC2: BVS $0175
    // TODO: Convert BVS $0175

    // 8AC4: STD $A,U
    // TODO: Handle indexed addressing: STD $A,U

    // 8AC6: LDD $C,U
    // TODO: Fix comma operator: LDD $C,U

    // 8AC8: ADDD $6,U
    // TODO: Fix comma operator: ADDD $6,U

    // 8ACA: BVS $017D
    // TODO: Convert BVS $017D

    // 8ACC: STD $C,U
    // TODO: Handle indexed addressing: STD $C,U

    // 8ACF: LDX <$C2
    cpu.state_.x = cpu.read_memory_word(0xC2);

    // 8AD1: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8AD3: CMPA #$01
    cpu.compare_a(0x01);

    // 8AD5: BNE $018A
    if (!cpu.zero_flag()) cpu.state_.pc += 0x018A;

    // 8AD7: LDA $6,X
    // TODO: Fix comma operator: LDA $6,X

    // 8AD9: BEQ $018B
    if (cpu.zero_flag()) cpu.state_.pc += 0x018B;

    // 8ADC: JSR $CE45
    cpu.call_function(0xCE45);

    // 8ADF: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8AE1: CMPA #$01
    cpu.compare_a(0x01);

    // 8AE3: BNE $019C
    if (!cpu.zero_flag()) cpu.state_.pc += 0x019C;

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

    // 8AF3: LBLE $0206
    // TODO: Convert LBLE $0206

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

    // 8B30: BCS $01E2
    if (cpu.carry_flag()) cpu.state_.pc += 0x01E2;

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

    // 8B42: BCS $01F4
    if (cpu.carry_flag()) cpu.state_.pc += 0x01F4;

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

}

} // namespace StarWars