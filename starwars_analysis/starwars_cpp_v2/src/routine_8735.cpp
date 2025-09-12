#include "cpu_6809.h"

namespace StarWars {

void routine_8735_impl(CPU6809& cpu) {
    // Converted from rom_disasm_8735.md
    // Address: 0x8735

    // 8735: LDU $49AF
    cpu.m_u = cpu.read_memory16(0x49AF);

    // 8738: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 873A: CMPB #$03
    cpu.compare_b(0x03);

    // 873C: BNE $000A
    if (!cpu.zero_flag()) cpu.m_pc = 0x8748;

    // 873F: CMPB #$01
    cpu.compare_b(0x01);

    // 8741: BNE $0013
    if (!cpu.zero_flag()) cpu.m_pc = 0x8756;

    // 8743: LDD #$0800
    cpu.m_d = 0x0800;

    // 8746: BRA $0016
    cpu.m_pc = 0x875E;

    // 8748: LDD #$1000
    cpu.m_d = 0x1000;

    // 874B: ADDD $49B1
    cpu.m_d += 0x49B1;

    // 874E: SUBD $5040
    cpu.m_d -= 0x5040;

    // 8751: BPL $0051
    if (!cpu.negative_flag()) cpu.m_pc = 0x87A4;

    // 8753: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8755: CMPB #$01
    cpu.compare_b(0x01);

    // 8757: BNE $0029
    if (!cpu.zero_flag()) cpu.m_pc = 0x8782;

    // 8759: LDD #$0800
    cpu.m_d = 0x0800;

    // 875C: BRA $002C
    cpu.m_pc = 0x878A;

    // 875E: LDD #$1000
    cpu.m_d = 0x1000;

    // 8761: ADDD $49B1
    cpu.m_d += 0x49B1;

    // 8764: STD $49B1
    cpu.write_memory16(0x49B1, cpu.m_d);

    // 8767: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8769: STU $49AF
    cpu.write_memory16(0x49AF, cpu.m_u);

    // 876C: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 876E: CMPB #$03
    cpu.compare_b(0x03);

    // 8770: BNE $003E
    if (!cpu.zero_flag()) cpu.m_pc = 0x87B0;

    // 8773: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8775: CMPB #$05
    cpu.compare_b(0x05);

    // 8777: BNE $004E
    if (!cpu.zero_flag()) cpu.m_pc = 0x87C7;

    // 8779: LDU $49A9
    cpu.m_u = cpu.read_memory16(0x49A9);

    // 877C: LEAU $2,U
    // TODO: Fix comma operator: LEAU $2,U

    // 877E: STU $49A9
    cpu.write_memory16(0x49A9, cpu.m_u);

    // 8781: LDU ,U
    // TODO: Complex indexed addressing: ,U

    // 8783: STU $49AF
    cpu.write_memory16(0x49AF, cpu.m_u);

    // 8786: LDD #$6260
    cpu.m_d = 0x6260;

    // 8789: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 878B: JSR $83CE
    cpu.call_function(0x83CE);

    // 878E: LDD $49A9
    cpu.m_d = cpu.read_memory16(0x49A9);

    // 8791: STD $49AD
    cpu.write_memory16(0x49AD, cpu.m_d);

    // 8794: LDD $49AF
    cpu.m_d = cpu.read_memory16(0x49AF);

    // 8797: STD $49B9
    cpu.write_memory16(0x49B9, cpu.m_d);

    // 879A: LDD $49B1
    cpu.m_d = cpu.read_memory16(0x49B1);

    // 879D: STD $49BB
    cpu.write_memory16(0x49BB, cpu.m_d);

    // 87A0: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 87A3: LDD #$FC00
    cpu.m_d = 0xFC00;

    // 87A6: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // 87A9: JSR $87CB
    cpu.call_function(0x87CB);

    // 87AC: LDD $49A9
    cpu.m_d = cpu.read_memory16(0x49A9);

    // 87AF: STD $49AD
    cpu.write_memory16(0x49AD, cpu.m_d);

    // 87B2: LDD $49AF
    cpu.m_d = cpu.read_memory16(0x49AF);

    // 87B5: STD $49B9
    cpu.write_memory16(0x49B9, cpu.m_d);

    // 87B8: LDD $49B1
    cpu.m_d = cpu.read_memory16(0x49B1);

    // 87BB: STD $49BB
    cpu.write_memory16(0x49BB, cpu.m_d);

    // 87BE: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 87C1: LDD #$0400
    cpu.m_d = 0x0400;

    // 87C4: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // 87C7: JSR $87CB
    cpu.call_function(0x87CB);

    // 87CB: LDD $49BB
    cpu.m_d = cpu.read_memory16(0x49BB);

    // 87CE: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 87D1: SUBD $5040
    cpu.m_d -= 0x5040;

    // 87D4: LBMI $0131
    // TODO: Convert LBMI $0131

    // 87D8: CMPD #$0800
    // TODO: Convert CMPD #$0800

    // 87DC: BGE $00C0
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x879E;

    // 87E2: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 87E4: ADDD $5044
    cpu.m_d += 0x5044;

    // 87E7: CMPD #$F000
    // TODO: Convert CMPD #$F000

    // 87EB: BGE $00BB
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x87A8;

    // 87ED: LDD #$F000
    cpu.m_d = 0xF000;

    // 87F0: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // 87F3: BRA $00CC
    cpu.m_pc = 0x87C1;

    // 87F5: LDD $49BB
    cpu.m_d = cpu.read_memory16(0x49BB);

    // 87F8: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 87FB: LDD #$F000
    cpu.m_d = 0xF000;

    // 87FE: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // 8801: LDA <$92
    cpu.m_a = cpu.read_memory(0x92);

    // 8803: BEQ $00D9
    if (cpu.zero_flag()) cpu.m_pc = 0x87DE;

    // 8805: LDD $5078
    cpu.m_d = cpu.read_memory16(0x5078);

    // 8808: SUBD <$93
    cpu.m_d -= 0x93;

    // 880A: LBPL $0169
    // TODO: Convert LBPL $0169

    // 880E: LDD $5078
    cpu.m_d = cpu.read_memory16(0x5078);

    // 8811: SUBD $5098
    cpu.m_d -= 0x5098;

    // 8814: SUBD #$7000
    cpu.m_d -= 0x7000;

    // 8817: LBPL $0169
    // TODO: Convert LBPL $0169

    // 881B: LDD #$000F
    cpu.m_d = 0x000F;

    // 881E: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 8821: LDA #$67
    cpu.m_a = 0x67;

    // 8823: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8826: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // 8829: BPL $00FA
    if (!cpu.negative_flag()) cpu.m_pc = 0x8825;

    // 882D: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 882F: SUBD $5000
    cpu.m_d -= 0x5000;

    // 8832: BGT $0131
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8865;

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

    // 886D: BNE $013F
    if (!cpu.zero_flag()) cpu.m_pc = 0x88AE;

    // 886F: LDD #$0800
    cpu.m_d = 0x0800;

    // 8872: BRA $0142
    cpu.m_pc = 0x88B6;

    // 8874: LDD #$1000
    cpu.m_d = 0x1000;

    // 8877: ADDD $49BB
    cpu.m_d += 0x49BB;

    // 887A: STD $49BB
    cpu.write_memory16(0x49BB, cpu.m_d);

    // 887D: SUBD $5040
    cpu.m_d -= 0x5040;

    // 8880: BMI $0169
    if (cpu.negative_flag()) cpu.m_pc = 0x88EB;

    // 8882: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8884: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8886: CMPB #$03
    cpu.compare_b(0x03);

    // 8888: BEQ $0169
    if (cpu.zero_flag()) cpu.m_pc = 0x88F3;

    // 888A: CMPB #$05
    cpu.compare_b(0x05);

    // 888C: BNE $0163
    if (!cpu.zero_flag()) cpu.m_pc = 0x88F1;

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
    cpu.m_pc = 0x87F5;

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

    // 88C9: BGT $019B
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8866;

    // 88CB: LDA #$00
    cpu.m_a = 0x00;

    // 88CD: STA <$95
    cpu.write_memory(0x95, cpu.m_a);

    // 88D0: SUBD #$7000
    cpu.m_d -= 0x7000;

    // 88D3: BGT $01BF
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8894;

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

    // 88E7: BGE $01B9
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x88A2;

    // 88E9: JSR $CD5C
    cpu.call_function(0xCD5C);

    // 88EC: BRA $01BC
    cpu.m_pc = 0x88AA;

    // 88EE: JSR $CD50
    cpu.call_function(0xCD50);

    // 88F1: JSR $CD74
    cpu.call_function(0xCD74);

    // 88F5: LDD #$6280
    cpu.m_d = 0x6280;

    // 88F8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 88FA: LDA <$92
    cpu.m_a = cpu.read_memory(0x92);

    // 88FC: BEQ $021B
    if (cpu.zero_flag()) cpu.m_pc = 0x8919;

    // 88FE: LDD <$93
    cpu.m_d = cpu.read_memory16(0x93);

    // 8900: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 8903: SUBD $5098
    cpu.m_d -= 0x5098;

    // 8906: SUBD #$7000
    cpu.m_d -= 0x7000;

    // 8909: BMI $01DC
    if (cpu.negative_flag()) cpu.m_pc = 0x88E7;

    // 890D: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 890F: BRA $01DF
    cpu.m_pc = 0x88F0;

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

    // 8934: STD >$0000
    cpu.write_memory16(0x0000, cpu.m_d);

}

} // namespace StarWars