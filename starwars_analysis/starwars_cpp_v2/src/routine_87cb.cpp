#include "cpu_6809.h"

namespace StarWars {

void routine_87cb_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_87cb.md
    // Address: 0x87CB

    // 87CB: LDD $49BB
    cpu.state_.d = cpu.read_memory_word(0x49BB);

    // 87CE: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 87D1: SUBD $5040
    cpu.state_.d -= 0x5040;

    // 87D4: LBMI $009B
    // TODO: Convert LBMI $009B

    // 87D8: CMPD #$0800
    // TODO: Convert CMPD #$0800

    // 87DC: BGE $002A
    // TODO: Convert BGE $002A

    // 87E2: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 87E4: ADDD $5044
    cpu.state_.d += 0x5044;

    // 87E7: CMPD #$F000
    // TODO: Convert CMPD #$F000

    // 87EB: BGE $0025
    // TODO: Convert BGE $0025

    // 87ED: LDD #$F000
    cpu.state_.d = 0xF000;

    // 87F0: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // 87F3: BRA $0036
    cpu.state_.pc += 0x0036;

    // 87F5: LDD $49BB
    cpu.state_.d = cpu.read_memory_word(0x49BB);

    // 87F8: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 87FB: LDD #$F000
    cpu.state_.d = 0xF000;

    // 87FE: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // 8801: LDA <$92
    cpu.state_.a = cpu.read_memory(0x92);

    // 8803: BEQ $0043
    if (cpu.zero_flag()) cpu.state_.pc += 0x0043;

    // 8805: LDD $5078
    cpu.state_.d = cpu.read_memory_word(0x5078);

    // 8808: SUBD <$93
    cpu.state_.d -= 0x93;

    // 880A: LBPL $00D3
    // TODO: Convert LBPL $00D3

    // 880E: LDD $5078
    cpu.state_.d = cpu.read_memory_word(0x5078);

    // 8811: SUBD $5098
    cpu.state_.d -= 0x5098;

    // 8814: SUBD #$7000
    cpu.state_.d -= 0x7000;

    // 8817: LBPL $00D3
    // TODO: Convert LBPL $00D3

    // 881B: LDD #$000F
    cpu.state_.d = 0x000F;

    // 881E: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 8821: LDA #$67
    cpu.state_.a = 0x67;

    // 8823: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8826: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // 8829: BPL $0064
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0064;

    // 882D: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 882F: SUBD $5000
    cpu.state_.d -= 0x5000;

    // 8832: BGT $009B
    // TODO: Convert BGT $009B

    // 8834: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 8837: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 883A: LDD #$0000
    cpu.state_.d = 0x0000;

    // 883D: STD <$D6
    cpu.write_memory(0xD6, cpu.state_.d);

    // 883F: LDD #$0068
    cpu.state_.d = 0x0068;

    // 8842: STD <$D8
    cpu.write_memory(0xD8, cpu.state_.d);

    // 8844: JSR $CD08
    cpu.call_function(0xCD08);

    // 8847: LDD #$0000
    cpu.state_.d = 0x0000;

    // 884A: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // 884D: LDD #$000F
    cpu.state_.d = 0x000F;

    // 8850: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 8853: LDA #$67
    cpu.state_.a = 0x67;

    // 8855: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8858: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 885B: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 885E: JSR $CCFC
    cpu.call_function(0xCCFC);

    // 8861: LDD #$8040
    cpu.state_.d = 0x8040;

    // 8864: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 8866: LDU $49B9
    cpu.state_.u = cpu.read_memory_word(0x49B9);

    // 8869: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 886B: CMPB #$01
    cpu.compare_b(0x01);

    // 886D: BNE $00A9
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00A9;

    // 886F: LDD #$0800
    cpu.state_.d = 0x0800;

    // 8872: BRA $00AC
    cpu.state_.pc += 0x00AC;

    // 8874: LDD #$1000
    cpu.state_.d = 0x1000;

    // 8877: ADDD $49BB
    cpu.state_.d += 0x49BB;

    // 887A: STD $49BB
    cpu.write_memory(0x49BB, cpu.state_.d);

    // 887D: SUBD $5040
    cpu.state_.d -= 0x5040;

    // 8880: BMI $00D3
    if (cpu.negative_flag()) cpu.state_.pc += 0x00D3;

    // 8882: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8884: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8886: CMPB #$03
    cpu.compare_b(0x03);

    // 8888: BEQ $00D3
    if (cpu.zero_flag()) cpu.state_.pc += 0x00D3;

    // 888A: CMPB #$05
    cpu.compare_b(0x05);

    // 888C: BNE $00CD
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00CD;

    // 888E: LDU $49AD
    cpu.state_.u = cpu.read_memory_word(0x49AD);

    // 8891: LEAU $2,U
    // TODO: Fix comma operator: LEAU $2,U

    // 8893: STU $49AD
    cpu.write_memory(0x49AD, cpu.state_.u);

    // 8896: LDU ,U
    // TODO: Complex indexed addressing: ,U

    // 8898: STU $49B9
    cpu.write_memory(0x49B9, cpu.state_.u);

    // 889B: JMP $87F5
    cpu.state_.pc = 0x87F5;

    // 889F: LDB #$10
    cpu.state_.b = 0x10;

    // 88A1: STB <$DC
    cpu.write_memory(0xDC, cpu.state_.b);

    // 88A3: JSR $CD38
    cpu.call_function(0xCD38);

    // 88A6: LDD #$F000
    cpu.state_.d = 0xF000;

    // 88A9: STD $5E04
    cpu.write_memory(0x5E04, cpu.state_.d);

    // 88AC: LDD #$0000
    cpu.state_.d = 0x0000;

    // 88AF: STD $5E02
    cpu.write_memory(0x5E02, cpu.state_.d);

    // 88B2: LDD <$96
    cpu.state_.d = cpu.read_memory_word(0x96);

    // 88B4: STD $5E00
    cpu.write_memory(0x5E00, cpu.state_.d);

    // 88B7: LDD #$01C0
    cpu.state_.d = 0x01C0;

    // 88BA: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 88BD: LDA #$67
    cpu.state_.a = 0x67;

    // 88BF: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 88C2: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 88C5: CMPD #$FE00
    // TODO: Convert CMPD #$FE00

    // 88C9: BGT $0105
    // TODO: Convert BGT $0105

    // 88CB: LDA #$00
    cpu.state_.a = 0x00;

    // 88CD: STA <$95
    cpu.write_memory(0x95, cpu.state_.a);

    // 88D0: SUBD #$7000
    cpu.state_.d -= 0x7000;

    // 88D3: BGT $0129
    // TODO: Convert BGT $0129

    // 88D5: LDD #$A018
    cpu.state_.d = 0xA018;

    // 88D8: STD $5E00
    cpu.write_memory(0x5E00, cpu.state_.d);

    // 88DB: LDD #$7200
    cpu.state_.d = 0x7200;

    // 88DE: STD $5E04
    cpu.write_memory(0x5E04, cpu.state_.d);

    // 88E1: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 88E4: SUBD #$1000
    cpu.state_.d -= 0x1000;

    // 88E7: BGE $0123
    // TODO: Convert BGE $0123

    // 88E9: JSR $CD5C
    cpu.call_function(0xCD5C);

    // 88EC: BRA $0126
    cpu.state_.pc += 0x0126;

    // 88EE: JSR $CD50
    cpu.call_function(0xCD50);

    // 88F1: JSR $CD74
    cpu.call_function(0xCD74);

    // 88F5: LDD #$6280
    cpu.state_.d = 0x6280;

    // 88F8: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 88FA: LDA <$92
    cpu.state_.a = cpu.read_memory(0x92);

    // 88FC: BEQ $0185
    if (cpu.zero_flag()) cpu.state_.pc += 0x0185;

    // 88FE: LDD <$93
    cpu.state_.d = cpu.read_memory_word(0x93);

    // 8900: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 8903: SUBD $5098
    cpu.state_.d -= 0x5098;

    // 8906: SUBD #$7000
    cpu.state_.d -= 0x7000;

    // 8909: BMI $0146
    if (cpu.negative_flag()) cpu.state_.pc += 0x0146;

    // 890D: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 890F: BRA $0149
    cpu.state_.pc += 0x0149;

    // 8911: LDD #$0000
    cpu.state_.d = 0x0000;

    // 8914: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // 8917: LDD #$FC00
    cpu.state_.d = 0xFC00;

    // 891A: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // 891D: LDD #$000F
    cpu.state_.d = 0x000F;

    // 8920: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 8923: LDA #$67
    cpu.state_.a = 0x67;

    // 8925: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8928: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 892B: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 892E: JSR $CCE4
    cpu.call_function(0xCCE4);

    // 8931: LDD #$0400
    cpu.state_.d = 0x0400;

    // 8934: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // 8937: LDD #$000F
    cpu.state_.d = 0x000F;

    // 893A: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 893D: LDA #$67
    cpu.state_.a = 0x67;

    // 893F: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8942: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 8945: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 8948: JSR $CCFC
    cpu.call_function(0xCCFC);

    // 894B: LDD #$8040
    cpu.state_.d = 0x8040;

    // 894E: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

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

}

} // namespace StarWars