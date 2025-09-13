#include "cpu_6809.h"

namespace StarWars {

void routine_882f_8b6d_impl(CPU6809& cpu) {
    // Converted from rom_disasm_882f_8b6d.md
    // Address: 0x882F_8B6D

    label_882F:
    // 882F: SUBD $5000
    cpu.m_d -= 0x5000;
    // 8832: BGT $8866
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8866;
    // 8834: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);
    // 8837: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);
    // 883A: LDD #$0000
    cpu.m_d = 0x0000;
    // 883D: STD <$D6
    cpu.write_memory16(0xD6, cpu.m_d);
    // 883F: LDD #$0068
    cpu.m_d = 0x0068;
    // 8842: STD <$D8
    cpu.write_memory16(0xD8, cpu.m_d);
    // 8844: JSR $CD08
    cpu.call_function(0xCD08);
    // 8847: LDD #$0000
    cpu.m_d = 0x0000;
    // 884A: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);
    // 884D: LDD #$000F
    cpu.m_d = 0x000F;
    // 8850: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);
    // 8853: LDA #$67
    cpu.m_a = 0x67;
    // 8855: JSR $CDBA
    cpu.call_function(0xCDBA);
    // 8858: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);
    // 885B: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);
    // 885E: JSR $CCFC
    cpu.call_function(0xCCFC);
    // 8861: LDD #$8040
    cpu.m_d = 0x8040;
    // 8864: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 8866: LDU $49B9
    cpu.m_u = cpu.read_memory16(0x49B9);
    // 8869: LDB ,U
    // TODO: Complex indexed addressing: ,U
    // 886B: CMPB #$01
    cpu.compare_b(0x01);
    // 886D: BNE $8874
    if (!cpu.zero_flag()) cpu.m_pc = 0x8874;
    // 886F: LDD #$0800
    cpu.m_d = 0x0800;
    // 8872: BRA $8877
    goto label_8877;
    // 8874: LDD #$1000
    cpu.m_d = 0x1000;
    label_8877:
    // 8877: ADDD $49BB
    cpu.m_d += 0x49BB;
    // 887A: STD $49BB
    cpu.write_memory16(0x49BB, cpu.m_d);
    // 887D: SUBD $5040
    cpu.m_d -= 0x5040;
    // 8880: BMI $889E
    if (cpu.negative_flag()) cpu.m_pc = 0x889E;
    // 8882: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U
    // 8884: LDB ,U
    // TODO: Complex indexed addressing: ,U
    // 8886: CMPB #$03
    cpu.compare_b(0x03);
    // 8888: BEQ $889E
    if (cpu.zero_flag()) cpu.m_pc = 0x889E;
    // 888A: CMPB #$05
    cpu.compare_b(0x05);
    // 888C: BNE $8898
    if (!cpu.zero_flag()) cpu.m_pc = 0x8898;
    // 888E: LDU $49AD
    cpu.m_u = cpu.read_memory16(0x49AD);
    // 8891: LEAU $2,U
    // TODO: Fix comma operator: LEAU $2,U
    // 8893: STU $49AD
    cpu.write_memory16(0x49AD, cpu.m_u);
    // 8896: LDU ,U
    // TODO: Complex indexed addressing: ,U
    // 8898: STU $49B9
    cpu.write_memory16(0x49B9, cpu.m_u);
    // 889B: JMP $87F5
    goto label_87F5;
    // 889E: RTS 
    return;
    // 889F: LDB #$10
    cpu.m_b = 0x10;
    // 88A1: STB <$DC
    cpu.write_memory(0xDC, cpu.m_b);
    // 88A3: JSR $CD38
    cpu.call_function(0xCD38);
    // 88A6: LDD #$F000
    cpu.m_d = 0xF000;
    // 88A9: STD $5E04
    cpu.write_memory16(0x5E04, cpu.m_d);
    // 88AC: LDD #$0000
    cpu.m_d = 0x0000;
    // 88AF: STD $5E02
    cpu.write_memory16(0x5E02, cpu.m_d);
    // 88B2: LDD <$96
    cpu.m_d = cpu.read_memory16(0x96);
    // 88B4: STD $5E00
    cpu.write_memory16(0x5E00, cpu.m_d);
    // 88B7: LDD #$01C0
    cpu.m_d = 0x01C0;
    // 88BA: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);
    // 88BD: LDA #$67
    cpu.m_a = 0x67;
    // 88BF: JSR $CDBA
    cpu.call_function(0xCDBA);
    // 88C2: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);
    // 88C5: CMPD #$FE00
    // TODO: Convert CMPD #$FE00
    // 88C9: BGT $88D0
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x88D0;
    // 88CB: LDA #$00
    cpu.m_a = 0x00;
    // 88CD: STA <$95
    cpu.write_memory(0x95, cpu.m_a);
    // 88CF: RTS 
    return;
    // 88D0: SUBD #$7000
    cpu.m_d -= 0x7000;
    // 88D3: BGT $88F4
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x88F4;
    // 88D5: LDD #$A018
    cpu.m_d = 0xA018;
    // 88D8: STD $5E00
    cpu.write_memory16(0x5E00, cpu.m_d);
    // 88DB: LDD #$7200
    cpu.m_d = 0x7200;
    // 88DE: STD $5E04
    cpu.write_memory16(0x5E04, cpu.m_d);
    // 88E1: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);
    // 88E4: SUBD #$1000
    cpu.m_d -= 0x1000;
    // 88E7: BGE $88EE
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x88EE;
    // 88E9: JSR $CD5C
    cpu.call_function(0xCD5C);
    // 88EC: BRA $88F1
    goto label_88F1;
    // 88EE: JSR $CD50
    cpu.call_function(0xCD50);
    label_88F1:
    // 88F1: JSR $CD74
    cpu.call_function(0xCD74);
    // 88F4: RTS 
    return;
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
    // 890B: COMA 
    cpu.m_a = ~cpu.m_a;
    // 890C: NEGB 
    cpu.m_b = -cpu.m_b;
    // 890D: SBCA #$FF
    // TODO: Convert SBCA #$FF
    // 890F: BRA $8914
    goto label_8914;
    // 8911: LDD #$0000
    cpu.m_d = 0x0000;
    label_8914:
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
    // 8950: RTS 
    return;
    // 8951: JSR $8981
    cpu.call_function(0x8981);
    // 8954: INC <$4D
    // TODO: Convert INC <$4D
    // 8956: JMP $89D3
    goto label_89D3;
    // 8959: JSR $8993
    cpu.call_function(0x8993);
    // 895C: DEC <$4D
    // TODO: Convert DEC <$4D
    // 895E: JMP $89D3
    goto label_89D3;
    // 8961: JSR $8993
    cpu.call_function(0x8993);
    // 8964: DEC <$4E
    // TODO: Convert DEC <$4E
    // 8966: JMP $89C8
    goto label_89C8;
    // 8969: JSR $8981
    cpu.call_function(0x8981);
    // 896C: INC <$4E
    // TODO: Convert INC <$4E
    // 896E: JMP $89C8
    goto label_89C8;
    // 8971: JSR $8981
    cpu.call_function(0x8981);
    // 8974: DEC <$4F
    // TODO: Convert DEC <$4F
    // 8976: JMP $89DE
    goto label_89DE;
    // 8979: JSR $8993
    cpu.call_function(0x8993);
    // 897C: INC <$4F
    // TODO: Convert INC <$4F
    // 897E: JMP $89DE
    goto label_89DE;
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
    // 8992: RTS 
    return;
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
    // 89A7: RTS 
    return;
    // 89A8: NEG <$B5
    // TODO: Convert NEG <$B5
    // 89AA: SWI 
    // TODO: Convert SWI 
    // 89AB: STU $0100
    cpu.write_memory16(0x0100, cpu.m_u);
    // 89AE: SWI 
    // TODO: Convert SWI 
    // 89AF: LDU $016A
    cpu.m_u = cpu.read_memory16(0x016A);
    // 89B2: SWI 
    // TODO: Convert SWI 
    // 89B3: LDD $021F
    cpu.m_d = cpu.read_memory16(0x021F);
    // 89B6: SWI 
    // TODO: Convert SWI 
    // 89B7: STB $03DF
    cpu.write_memory(0x03DF, cpu.m_b);
    // 89BA: SWI 
    // TODO: Convert SWI 
    // 89BB: SBCB $4,X
    // TODO: Convert SBCB $4,X
    // 89BD: STU $3FCE
    cpu.write_memory16(0x3FCE, cpu.m_u);
    // 89C0: LSR <$90
    // TODO: Convert LSR <$90
    // 89C2: SWI 
    // TODO: Convert SWI 
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
    goto label_CDBA;
    label_89D3:
    // 89D3: CLRA 
    cpu.m_a = 0;
    // 89D4: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X
    // 89D6: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);
    // 89D9: LDA #$0E
    cpu.m_a = 0x0E;
    // 89DB: JMP $CDBA
    goto label_CDBA;
    label_89DE:
    // 89DE: CLRA 
    cpu.m_a = 0;
    // 89DF: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X
    // 89E1: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);
    // 89E4: LDA #$1C
    cpu.m_a = 0x1C;
    // 89E6: JMP $CDBA
    goto label_CDBA;
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
    // 8A04: RTS 
    return;
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
    // 8A20: RTS 
    return;
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
    // 8A3C: RTS 
    return;
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
    // 8A58: RTS 
    return;
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
    // 8A7D: RTS 
    return;
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
    // 8AA2: RTS 
    return;
    // 8AA3: LSRB 
    cpu.m_b >>= 1;
    // 8AA4: XHCF 
    // TODO: Convert XHCF 
    // 8AA5: BITB $D,Y
    // TODO: Convert BITB $D,Y
    // 8AA7: SWI 
    // TODO: Convert SWI 
    // 8AA8: XHCF 
    // TODO: Convert XHCF 
    // 8AA9: NOP 
    // NOP;
    // 8AAA: XHCF 
    // TODO: Convert XHCF 
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
    // 8ACE: RTS 
    return;
    label_8ACF:
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
    // 8ADB: RTS 
    return;
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
    // 8AF3: LBLE $8B57
    // TODO: Convert LBLE $8B57
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
    // 8B1F: MUL 
    // TODO: Convert MUL 
    // 8B20: TFR A,B
    cpu.m_b = cpu.m_a;
    // 8B22: ASLB 
    cpu.m_b <<= 1;
    // 8B23: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // 8B24: SEX 
    // TODO: Convert SEX 
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
    // 8B2F: MUL 
    // TODO: Convert MUL 
    // 8B30: BCS $8B33
    if (cpu.carry_flag()) cpu.m_pc = 0x8B33;
    // 8B32: NEGA 
    cpu.m_a = -cpu.m_a;
    // 8B33: TFR A,B
    cpu.m_b = cpu.m_a;
    // 8B35: NOP 
    // NOP;
    // 8B36: SEX 
    // TODO: Convert SEX 
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
    // 8B41: MUL 
    // TODO: Convert MUL 
    // 8B42: BCS $8B45
    if (cpu.carry_flag()) cpu.m_pc = 0x8B45;
    // 8B44: NEGA 
    cpu.m_a = -cpu.m_a;
    // 8B45: TFR A,B
    cpu.m_b = cpu.m_a;
    // 8B47: NOP 
    // NOP;
    // 8B48: SEX 
    // TODO: Convert SEX 
    // 8B49: ADDD $6,U
    // TODO: Fix comma operator: ADDD $6,U
    // 8B4B: STD $6,U
    // TODO: Handle indexed addressing: STD $6,U
    // 8B4D: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X
    // 8B4F: DEC <$01
    // TODO: Convert DEC <$01
    // 8B51: BPL $8B18
    if (!cpu.negative_flag()) cpu.m_pc = 0x8B18;
    // 8B53: JSR $BDFD
    cpu.call_function(0xBDFD);
    // 8B56: RTS 
    return;
    // 8B57: LDX <$C2
    cpu.m_x = cpu.read_memory16(0xC2);
    // 8B59: JSR $BDFD
    cpu.call_function(0xBDFD);
    // 8B5C: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X
    // 8B5E: CMPA $4B38
    cpu.compare_a(cpu.read_memory(0x4B38));
    // 8B61: BNE $8B66
    if (!cpu.zero_flag()) cpu.m_pc = 0x8B66;
    // 8B63: JSR $BDCB
    cpu.call_function(0xBDCB);
    // 8B66: JSR $B739
    cpu.call_function(0xB739);
    // 8B69: JSR $97E8
    cpu.call_function(0x97E8);
    // 8B6C: RTS 
    return;
    label_8B6D:
    // 8B6D: JMP $8b6d
    goto label_8B6D;
}

} // namespace StarWars