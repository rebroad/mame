#include "cpu_6809.h"

namespace StarWars {

void routine_c7fd_impl(CPU6809& cpu) {
    // Converted from rom_disasm_c7fd.md
    // Address: 0xC7FD

    // C7FD: TST $4AEC
    // TODO: Convert TST $4AEC

    // C800: BMI $0014
    if (cpu.negative_flag()) cpu.m_pc = 0xC816;

    // C802: LDA #$3E
    cpu.m_a = 0x3E;

    // C804: JSR $D8DF
    cpu.call_function(0xD8DF);

    // C807: LDD #$7200
    cpu.m_d = 0x7200;

    // C80A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C80C: LDD #$CA64
    cpu.m_d = 0xCA64;

    // C80F: BRA $0021
    cpu.m_pc = 0xC832;

    // C811: LDA #$3F
    cpu.m_a = 0x3F;

    // C813: JSR $D8DF
    cpu.call_function(0xD8DF);

    // C816: LDD #$7140
    cpu.m_d = 0x7140;

    // C819: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C81B: LDD #$CA78
    cpu.m_d = 0xCA78;

    // C81E: STD $4AF1
    cpu.write_memory16(0x4AF1, cpu.m_d);

    // C821: LDA #$00
    cpu.m_a = 0x00;

    // C823: STA $4AEA
    cpu.write_memory(0x4AEA, cpu.m_a);

    // C826: LDU $4AF1
    cpu.m_u = cpu.read_memory16(0x4AF1);

    // C829: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // C82B: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C82D: LDD #$1F80
    cpu.m_d = 0x1F80;

    // C830: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C832: LDB $4AEA
    cpu.m_b = cpu.read_memory(0x4AEA);

    // C836: ADDB $4AEA
    cpu.m_b += 0x4AEA;

    // C839: LDX #$4AB6
    cpu.m_x = 0x4AB6;

    // C83D: CMPX $4AEC
    cpu.compare_x(cpu.read_memory16(0x4AEC));

    // C840: BNE $004A
    if (!cpu.zero_flag()) cpu.m_pc = 0xC88C;

    // C842: LDD #$6780
    cpu.m_d = 0x6780;

    // C845: BRA $004D
    cpu.m_pc = 0xC894;

    // C847: LDD $4B10
    cpu.m_d = cpu.read_memory16(0x4B10);

    // C84A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C84C: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // C84E: LDU #$3016
    cpu.m_u = 0x3016;

    // C851: TST $4AEC
    // TODO: Convert TST $4AEC

    // C854: BMI $0074
    if (cpu.negative_flag()) cpu.m_pc = 0xC8CA;

    // C856: LDA $4AEE
    cpu.m_a = cpu.read_memory(0x4AEE);

    // C859: CMPA #$00
    cpu.compare_a(0x00);

    // C85B: BNE $0070
    if (!cpu.zero_flag()) cpu.m_pc = 0xC8CD;

    // C85D: LDA $4843
    cpu.m_a = cpu.read_memory(0x4843);

    // C860: ANDA #$01
    cpu.m_a &= 0x01;

    // C862: BNE $006C
    if (!cpu.zero_flag()) cpu.m_pc = 0xC8D0;

    // C864: LDD $4B10
    cpu.m_d = cpu.read_memory16(0x4B10);

    // C867: BRA $006E
    cpu.m_pc = 0xC8D7;

    // C869: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // C86B: BRA $0072
    cpu.m_pc = 0xC8DF;

    // C86D: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // C86F: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C871: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C873: BNE $0087
    if (!cpu.zero_flag()) cpu.m_pc = 0xC7FC;

    // C875: TST $4AEC
    // TODO: Convert TST $4AEC

    // C878: BMI $0082
    if (cpu.negative_flag()) cpu.m_pc = 0xC7FC;

    // C87A: LDD $3054
    cpu.m_d = cpu.read_memory16(0x3054);

    // C87D: BRA $0085
    cpu.m_pc = 0xC804;

    // C87F: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    // C882: BRA $008A
    cpu.m_pc = 0xC80E;

    // C885: LDD A,U
    // TODO: Fix comma operator: LDD A,U

    // C887: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C889: TST $4AEC
    // TODO: Convert TST $4AEC

    // C88C: BMI $00AC
    if (cpu.negative_flag()) cpu.m_pc = 0xC83A;

    // C88E: LDA $4AEE
    cpu.m_a = cpu.read_memory(0x4AEE);

    // C891: CMPA #$01
    cpu.compare_a(0x01);

    // C893: BNE $00A8
    if (!cpu.zero_flag()) cpu.m_pc = 0xC83D;

    // C895: LDA $4843
    cpu.m_a = cpu.read_memory(0x4843);

    // C898: ANDA #$01
    cpu.m_a &= 0x01;

    // C89A: BNE $00A4
    if (!cpu.zero_flag()) cpu.m_pc = 0xC840;

    // C89C: LDD $4B10
    cpu.m_d = cpu.read_memory16(0x4B10);

    // C89F: BRA $00A6
    cpu.m_pc = 0xC847;

    // C8A1: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // C8A3: BRA $00AA
    cpu.m_pc = 0xC84F;

    // C8A5: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // C8A7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C8A9: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C8AB: BNE $00BF
    if (!cpu.zero_flag()) cpu.m_pc = 0xC86C;

    // C8AD: TST $4AEC
    // TODO: Convert TST $4AEC

    // C8B0: BMI $00BA
    if (cpu.negative_flag()) cpu.m_pc = 0xC86C;

    // C8B2: LDD $3054
    cpu.m_d = cpu.read_memory16(0x3054);

    // C8B5: BRA $00BD
    cpu.m_pc = 0xC874;

    // C8B7: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    // C8BA: BRA $00C2
    cpu.m_pc = 0xC87E;

    // C8BD: LDD A,U
    // TODO: Fix comma operator: LDD A,U

    // C8BF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C8C1: TST $4AEC
    // TODO: Convert TST $4AEC

    // C8C4: BMI $00E4
    if (cpu.negative_flag()) cpu.m_pc = 0xC8AA;

    // C8C6: LDA $4AEE
    cpu.m_a = cpu.read_memory(0x4AEE);

    // C8C9: CMPA #$02
    cpu.compare_a(0x02);

    // C8CB: BNE $00E0
    if (!cpu.zero_flag()) cpu.m_pc = 0xC8AD;

    // C8CD: LDA $4843
    cpu.m_a = cpu.read_memory(0x4843);

    // C8D0: ANDA #$01
    cpu.m_a &= 0x01;

    // C8D2: BNE $00DC
    if (!cpu.zero_flag()) cpu.m_pc = 0xC8B0;

    // C8D4: LDD $4B10
    cpu.m_d = cpu.read_memory16(0x4B10);

    // C8D7: BRA $00DE
    cpu.m_pc = 0xC8B7;

    // C8D9: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // C8DB: BRA $00E2
    cpu.m_pc = 0xC8BF;

    // C8DD: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // C8DF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C8E1: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C8E3: BNE $00F7
    if (!cpu.zero_flag()) cpu.m_pc = 0xC8DC;

    // C8E5: TST $4AEC
    // TODO: Convert TST $4AEC

    // C8E8: BMI $00F2
    if (cpu.negative_flag()) cpu.m_pc = 0xC8DC;

    // C8EA: LDD $3054
    cpu.m_d = cpu.read_memory16(0x3054);

    // C8ED: BRA $00F5
    cpu.m_pc = 0xC8E4;

    // C8EF: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    // C8F2: BRA $00FA
    cpu.m_pc = 0xC8EE;

    // C8F5: LDD A,U
    // TODO: Fix comma operator: LDD A,U

    // C8F7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C8F9: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // C8FB: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C8FD: LDD #$8040
    cpu.m_d = 0x8040;

    // C900: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C902: LDU $4AF1
    cpu.m_u = cpu.read_memory16(0x4AF1);

    // C905: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // C907: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C909: LDD #$1F38
    cpu.m_d = 0x1F38;

    // C90C: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C90E: LDA $4AEA
    cpu.m_a = cpu.read_memory(0x4AEA);

    // C912: CMPA #$0A
    cpu.compare_a(0x0A);

    // C914: BCS $011B
    if (cpu.carry_flag()) cpu.m_pc = 0xC931;

    // C916: LDA #$10
    cpu.m_a = 0x10;

    // C918: LDB #$01
    cpu.m_b = 0x01;

    // C91A: STB <$AD
    cpu.write_memory(0xAD, cpu.m_b);

    // C91C: JSR $E790
    cpu.call_function(0xE790);

    // C91F: LDD #$B8DC
    cpu.m_d = 0xB8DC;

    // C922: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C924: LDD #$8040
    cpu.m_d = 0x8040;

    // C927: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C929: LDB $4AEA
    cpu.m_b = cpu.read_memory(0x4AEA);

    // C92E: LDX #$4A8E
    cpu.m_x = 0x4A8E;

    // C932: LDU $4AF1
    cpu.m_u = cpu.read_memory16(0x4AF1);

    // C935: LDD ,U++
    cpu.m_d = cpu.read_memory16(cpu.m_u++);

    // C937: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C939: LDD #$1FF0
    cpu.m_d = 0x1FF0;

    // C93C: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C93E: STU $4AF1
    cpu.write_memory16(0x4AF1, cpu.m_u);

    // C941: LDB #$06
    cpu.m_b = 0x06;

    // C943: STB <$AD
    cpu.write_memory(0xAD, cpu.m_b);

    // C945: JSR $E764
    cpu.call_function(0xE764);

    // C948: LEAX $4,X
    // TODO: Fix comma operator: LEAX $4,X

    // C94A: LDD #$8040
    cpu.m_d = 0x8040;

    // C94D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C94F: INC $4AEA
    // TODO: Convert INC $4AEA

    // C952: LDA $4AEA
    cpu.m_a = cpu.read_memory(0x4AEA);

    // C955: CMPA #$0A
    cpu.compare_a(0x0A);

    // C957: LBCS $0029
    // TODO: Convert LBCS $0029

    // C95B: LDD #$7200
    cpu.m_d = 0x7200;

    // C95E: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C960: LDD $4AEC
    cpu.m_d = cpu.read_memory16(0x4AEC);

    // C963: BPL $0169
    if (!cpu.negative_flag()) cpu.m_pc = 0xC9CE;

    // C966: LDD #$6480
    cpu.m_d = 0x6480;

    // C969: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C96B: LDX #$CBA8
    cpu.m_x = 0xCBA8;

    // C96E: LDU #$3018
    cpu.m_u = 0x3018;

    // C971: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // C973: ANDA #$1F
    cpu.m_a &= 0x1F;

    // C975: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C977: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // C979: ANDA #$1F
    cpu.m_a &= 0x1F;

    // C97B: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C97D: LDD ,U++
    cpu.m_d = cpu.read_memory16(cpu.m_u++);

    // C97F: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C981: LDD #$8040
    cpu.m_d = 0x8040;

    // C984: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C986: LEAX $4,X
    // TODO: Fix comma operator: LEAX $4,X

    // C988: CMPX #$CC10
    cpu.compare_x(0xCC10);

    // C98B: BCS $0174
    if (cpu.carry_flag()) cpu.m_pc = 0xCA01;

    // C98D: LDD $CBA6
    cpu.m_d = cpu.read_memory16(0xCBA6);

    // C990: ANDA #$1F
    cpu.m_a &= 0x1F;

    // C992: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C994: LDD $CBA4
    cpu.m_d = cpu.read_memory16(0xCBA4);

    // C997: ANDA #$1F
    cpu.m_a &= 0x1F;

    // C999: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C99B: LDD $3054
    cpu.m_d = cpu.read_memory16(0x3054);

    // C99E: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C9A0: LDD #$7200
    cpu.m_d = 0x7200;

    // C9A3: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C9A5: LDD #$8040
    cpu.m_d = 0x8040;

    // C9A8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C9AA: LDB $4AEF
    cpu.m_b = cpu.read_memory(0x4AEF);

    // C9AD: CMPB #$1B
    cpu.compare_b(0x1B);

    // C9AF: BNE $01B9
    if (!cpu.zero_flag()) cpu.m_pc = 0xC96A;

    // C9B1: LDD #$6750
    cpu.m_d = 0x6750;

    // C9B4: BRA $01BC
    cpu.m_pc = 0xC972;

    // C9B6: LDD #$6450
    cpu.m_d = 0x6450;

    // C9B9: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C9BB: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // C9BD: ANDA #$1F
    cpu.m_a &= 0x1F;

    // C9BF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C9C1: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // C9C3: SUBD #$0008
    cpu.m_d -= 0x0008;

    // C9C6: ANDA #$1F
    cpu.m_a &= 0x1F;

    // C9C8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C9CA: LDD #$71C0
    cpu.m_d = 0x71C0;

    // C9CD: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C9CF: LDD $303A
    cpu.m_d = cpu.read_memory16(0x303A);

    // C9D2: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C9D4: LDD $3040
    cpu.m_d = cpu.read_memory16(0x3040);

    // C9D7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C9D9: LDD $301A
    cpu.m_d = cpu.read_memory16(0x301A);

    // C9DC: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C9DE: LDD #$7200
    cpu.m_d = 0x7200;

    // C9E1: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C9E3: LDD #$8040
    cpu.m_d = 0x8040;

    // C9E6: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C9E8: LDB $4AEF
    cpu.m_b = cpu.read_memory(0x4AEF);

    // C9EB: CMPB #$1C
    cpu.compare_b(0x1C);

    // C9ED: BNE $01F7
    if (!cpu.zero_flag()) cpu.m_pc = 0xC9E6;

    // C9EF: LDD #$6750
    cpu.m_d = 0x6750;

    // C9F2: BRA $01FA
    cpu.m_pc = 0xC9EE;

    // C9F4: LDD #$6450
    cpu.m_d = 0x6450;

    // C9F7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C9F9: LDD $6,X
    // TODO: Fix comma operator: LDD $6,X

    // C9FB: ANDA #$1F
    cpu.m_a &= 0x1F;

}

} // namespace StarWars