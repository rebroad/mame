#include "cpu_6809.h"

namespace StarWars {

void routine_88f5_impl(CPU6809& cpu) {
    // Converted from rom_disasm_88f5.md
    // Address: 0x88F5

    // 88F5: LDD #$6280
    cpu.m_d = 0x6280;

    // 88F8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 88FA: LDA <$92
    cpu.m_a = cpu.read_memory(0x92);

    // 88FC: BEQ $8950
    if (cpu.zero_flag()) cpu.m_pc = 0x8950;

    // 88FE: LDD <$93
    cpu.m_d = cpu.read_memory16(0x93);

    // 8900: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 8903: SUBD $5098
    cpu.m_d -= 0x5098;

    // 8906: SUBD #$7000
    cpu.m_d -= 0x7000;

    // 8909: BMI $8911
    if (cpu.negative_flag()) cpu.m_pc = 0x8911;

    // 890D: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 890F: BRA $8914
    cpu.m_pc = 0x8914;

    // 8911: LDD #$0000
    cpu.m_d = 0x0000;

    // 8914: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // 8917: LDD #$FC00
    cpu.m_d = 0xFC00;

    // 891A: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // 891D: LDD #$000F
    cpu.m_d = 0x000F;

    // 8920: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 8923: LDA #$67
    cpu.m_a = 0x67;

    // 8925: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8928: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // 892B: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // 892E: JSR $CCE4
    cpu.call_function(0xCCE4);

    // 8931: LDD #$0400
    cpu.m_d = 0x0400;

    // 8934: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // 8937: LDD #$000F
    cpu.m_d = 0x000F;

    // 893A: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 893D: LDA #$67
    cpu.m_a = 0x67;

    // 893F: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8942: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // 8945: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // 8948: JSR $CCFC
    cpu.call_function(0xCCFC);

    // 894B: LDD #$8040
    cpu.m_d = 0x8040;

    // 894E: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 8951: JSR $8981
    cpu.call_function(0x8981);

    // 8954: INC <$4D
    // TODO: Convert INC <$4D

    // 8956: JMP $89D3
    cpu.m_pc = 0x89D3;

    // 8959: JSR $8993
    cpu.call_function(0x8993);

    // 895C: DEC <$4D
    // TODO: Convert DEC <$4D

    // 895E: JMP $89D3
    cpu.m_pc = 0x89D3;

    // 8961: JSR $8993
    cpu.call_function(0x8993);

    // 8964: DEC <$4E
    // TODO: Convert DEC <$4E

    // 8966: JMP $89C8
    cpu.m_pc = 0x89C8;

    // 8969: JSR $8981
    cpu.call_function(0x8981);

    // 896C: INC <$4E
    // TODO: Convert INC <$4E

    // 896E: JMP $89C8
    cpu.m_pc = 0x89C8;

    // 8971: JSR $8981
    cpu.call_function(0x8981);

    // 8974: DEC <$4F
    // TODO: Convert DEC <$4F

    // 8976: JMP $89DE
    cpu.m_pc = 0x89DE;

    // 8979: JSR $8993
    cpu.call_function(0x8993);

    // 897C: INC <$4F
    // TODO: Convert INC <$4F

    // 897E: JMP $89DE
    cpu.m_pc = 0x89DE;

    // 8981: LDA #$14
    cpu.m_a = 0x14;

    // 8983: LDU #$89A8
    cpu.m_u = 0x89A8;

    // 8986: LEAU A,U
    // TODO: Fix comma operator: LEAU A,U

    // 8988: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // 898A: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 898D: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // 898F: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // 8993: LDA #$14
    cpu.m_a = 0x14;

    // 8995: LDU #$89A8
    cpu.m_u = 0x89A8;

    // 8998: LEAU A,U
    // TODO: Fix comma operator: LEAU A,U

    // 899A: LDD #$0000
    cpu.m_d = 0x0000;

    // 899D: SUBD ,U
    // TODO: Complex indexed addressing: ,U

    // 899F: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 89A2: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // 89A4: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // 89A8: NEG <$B5
    // TODO: Convert NEG <$B5

    // 89AB: STU $0100
    cpu.write_memory16(0x0100, cpu.m_u);

    // 89AF: LDU $016A
    cpu.m_u = cpu.read_memory16(0x016A);

    // 89B3: LDD $021F
    cpu.m_d = cpu.read_memory16(0x021F);

    // 89B7: STB $03DF
    cpu.write_memory(0x03DF, cpu.m_b);

    // 89BB: SBCB $4,X
    // TODO: Convert SBCB $4,X

    // 89BD: STU $3FCE
    cpu.write_memory16(0x3FCE, cpu.m_u);

    // 89C0: LSR <$90
    // TODO: Convert LSR <$90

    // 89C3: SBCB #$05
    // TODO: Convert SBCB #$05

    // 89C5: SUBA <$3F
    cpu.m_a -= 0x3F;

    // 89C7: SBCB #$4F
    // TODO: Convert SBCB #$4F

    // 89C9: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

    // 89CB: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 89CE: LDA #$00
    cpu.m_a = 0x00;

    // 89D0: JMP $CDBA
    cpu.m_pc = 0xCDBA;

    // 89D4: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

    // 89D6: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 89D9: LDA #$0E
    cpu.m_a = 0x0E;

    // 89DB: JMP $CDBA
    cpu.m_pc = 0xCDBA;

    // 89DF: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

    // 89E1: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 89E4: LDA #$1C
    cpu.m_a = 0x1C;

    // 89E6: JMP $CDBA
    cpu.m_pc = 0xCDBA;

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

    // 8ABA: BVS $8ABE
    // TODO: Convert BVS $8ABE

    // 8ABC: STD $8,U
    // TODO: Handle indexed addressing: STD $8,U

    // 8ABE: LDD -$2,U
    // TODO: Fix comma operator: LDD -$2,U

    // 8AC0: ADDD $A,U
    // TODO: Fix comma operator: ADDD $A,U

    // 8AC2: BVS $8AC6
    // TODO: Convert BVS $8AC6

    // 8AC4: STD $A,U
    // TODO: Handle indexed addressing: STD $A,U

    // 8AC6: LDD $C,U
    // TODO: Fix comma operator: LDD $C,U

    // 8AC8: ADDD $6,U
    // TODO: Fix comma operator: ADDD $6,U

    // 8ACA: BVS $8ACE
    // TODO: Convert BVS $8ACE

    // 8ACC: STD $C,U
    // TODO: Handle indexed addressing: STD $C,U

    // 8ACF: LDX <$C2
    cpu.m_x = cpu.read_memory16(0xC2);

    // 8AD1: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8AD3: CMPA #$01
    cpu.compare_a(0x01);

    // 8AD5: BNE $8ADB
    if (!cpu.zero_flag()) cpu.m_pc = 0x8ADB;

    // 8AD7: LDA $6,X
    // TODO: Fix comma operator: LDA $6,X

    // 8AD9: BEQ $8ADC
    if (cpu.zero_flag()) cpu.m_pc = 0x8ADC;

    // 8ADC: JSR $CE45
    cpu.call_function(0xCE45);

    // 8ADF: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8AE1: CMPA #$01
    cpu.compare_a(0x01);

    // 8AE3: BNE $8AED
    if (!cpu.zero_flag()) cpu.m_pc = 0x8AED;

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

    // 8AF3: LBLE $8AF7
    // TODO: Convert LBLE $8AF7

}

} // namespace StarWars