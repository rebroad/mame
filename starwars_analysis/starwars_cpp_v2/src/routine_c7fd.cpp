#include "cpu_6809.h"

namespace StarWars {

void routine_c7fd_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_c7fd.md
    // Address: 0xC7FD

    // C7FD: TST $4AEC
    // TODO: Convert TST $4AEC

    // C800: BMI $0014
    if (cpu.negative_flag()) cpu.state_.pc += 0x0014;

    // C802: LDA #$3E
    cpu.state_.a = 0x3E;

    // C804: JSR $D8DF
    cpu.call_function(0xD8DF);

    // C807: LDD #$7200
    cpu.state_.d = 0x7200;

    // C80A: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C80C: LDD #$CA64
    cpu.state_.d = 0xCA64;

    // C80F: BRA $0021
    cpu.state_.pc += 0x0021;

    // C811: LDA #$3F
    cpu.state_.a = 0x3F;

    // C813: JSR $D8DF
    cpu.call_function(0xD8DF);

    // C816: LDD #$7140
    cpu.state_.d = 0x7140;

    // C819: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C81B: LDD #$CA78
    cpu.state_.d = 0xCA78;

    // C81E: STD $4AF1
    cpu.write_memory(0x4AF1, cpu.state_.d);

    // C821: LDA #$00
    cpu.state_.a = 0x00;

    // C823: STA $4AEA
    cpu.write_memory(0x4AEA, cpu.state_.a);

    // C826: LDU $4AF1
    cpu.state_.u = cpu.read_memory_word(0x4AF1);

    // C829: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // C82B: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C82D: LDD #$1F80
    cpu.state_.d = 0x1F80;

    // C830: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C832: LDB $4AEA
    cpu.state_.b = cpu.read_memory(0x4AEA);

    // C836: ADDB $4AEA
    cpu.state_.b += 0x4AEA;

    // C839: LDX #$4AB6
    cpu.state_.x = 0x4AB6;

    // C83D: CMPX $4AEC
    cpu.compare_x(cpu.read_memory_word(0x4AEC));

    // C840: BNE $004A
    if (!cpu.zero_flag()) cpu.state_.pc += 0x004A;

    // C842: LDD #$6780
    cpu.state_.d = 0x6780;

    // C845: BRA $004D
    cpu.state_.pc += 0x004D;

    // C847: LDD $4B10
    cpu.state_.d = cpu.read_memory_word(0x4B10);

    // C84A: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C84C: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // C84E: LDU #$3016
    cpu.state_.u = 0x3016;

    // C851: TST $4AEC
    // TODO: Convert TST $4AEC

    // C854: BMI $0074
    if (cpu.negative_flag()) cpu.state_.pc += 0x0074;

    // C856: LDA $4AEE
    cpu.state_.a = cpu.read_memory(0x4AEE);

    // C859: CMPA #$00
    cpu.compare_a(0x00);

    // C85B: BNE $0070
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0070;

    // C85D: LDA $4843
    cpu.state_.a = cpu.read_memory(0x4843);

    // C860: ANDA #$01
    cpu.state_.a &= 0x01;

    // C862: BNE $006C
    if (!cpu.zero_flag()) cpu.state_.pc += 0x006C;

    // C864: LDD $4B10
    cpu.state_.d = cpu.read_memory_word(0x4B10);

    // C867: BRA $006E
    cpu.state_.pc += 0x006E;

    // C869: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // C86B: BRA $0072
    cpu.state_.pc += 0x0072;

    // C86D: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // C86F: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C871: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C873: BNE $0087
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0087;

    // C875: TST $4AEC
    // TODO: Convert TST $4AEC

    // C878: BMI $0082
    if (cpu.negative_flag()) cpu.state_.pc += 0x0082;

    // C87A: LDD $3054
    cpu.state_.d = cpu.read_memory_word(0x3054);

    // C87D: BRA $0085
    cpu.state_.pc += 0x0085;

    // C87F: LDD $3002
    cpu.state_.d = cpu.read_memory_word(0x3002);

    // C882: BRA $008A
    cpu.state_.pc += 0x008A;

    // C885: LDD A,U
    // TODO: Fix comma operator: LDD A,U

    // C887: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C889: TST $4AEC
    // TODO: Convert TST $4AEC

    // C88C: BMI $00AC
    if (cpu.negative_flag()) cpu.state_.pc += 0x00AC;

    // C88E: LDA $4AEE
    cpu.state_.a = cpu.read_memory(0x4AEE);

    // C891: CMPA #$01
    cpu.compare_a(0x01);

    // C893: BNE $00A8
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00A8;

    // C895: LDA $4843
    cpu.state_.a = cpu.read_memory(0x4843);

    // C898: ANDA #$01
    cpu.state_.a &= 0x01;

    // C89A: BNE $00A4
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00A4;

    // C89C: LDD $4B10
    cpu.state_.d = cpu.read_memory_word(0x4B10);

    // C89F: BRA $00A6
    cpu.state_.pc += 0x00A6;

    // C8A1: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // C8A3: BRA $00AA
    cpu.state_.pc += 0x00AA;

    // C8A5: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // C8A7: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C8A9: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C8AB: BNE $00BF
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00BF;

    // C8AD: TST $4AEC
    // TODO: Convert TST $4AEC

    // C8B0: BMI $00BA
    if (cpu.negative_flag()) cpu.state_.pc += 0x00BA;

    // C8B2: LDD $3054
    cpu.state_.d = cpu.read_memory_word(0x3054);

    // C8B5: BRA $00BD
    cpu.state_.pc += 0x00BD;

    // C8B7: LDD $3002
    cpu.state_.d = cpu.read_memory_word(0x3002);

    // C8BA: BRA $00C2
    cpu.state_.pc += 0x00C2;

    // C8BD: LDD A,U
    // TODO: Fix comma operator: LDD A,U

    // C8BF: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C8C1: TST $4AEC
    // TODO: Convert TST $4AEC

    // C8C4: BMI $00E4
    if (cpu.negative_flag()) cpu.state_.pc += 0x00E4;

    // C8C6: LDA $4AEE
    cpu.state_.a = cpu.read_memory(0x4AEE);

    // C8C9: CMPA #$02
    cpu.compare_a(0x02);

    // C8CB: BNE $00E0
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00E0;

    // C8CD: LDA $4843
    cpu.state_.a = cpu.read_memory(0x4843);

    // C8D0: ANDA #$01
    cpu.state_.a &= 0x01;

    // C8D2: BNE $00DC
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00DC;

    // C8D4: LDD $4B10
    cpu.state_.d = cpu.read_memory_word(0x4B10);

    // C8D7: BRA $00DE
    cpu.state_.pc += 0x00DE;

    // C8D9: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // C8DB: BRA $00E2
    cpu.state_.pc += 0x00E2;

    // C8DD: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // C8DF: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C8E1: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C8E3: BNE $00F7
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00F7;

    // C8E5: TST $4AEC
    // TODO: Convert TST $4AEC

    // C8E8: BMI $00F2
    if (cpu.negative_flag()) cpu.state_.pc += 0x00F2;

    // C8EA: LDD $3054
    cpu.state_.d = cpu.read_memory_word(0x3054);

    // C8ED: BRA $00F5
    cpu.state_.pc += 0x00F5;

    // C8EF: LDD $3002
    cpu.state_.d = cpu.read_memory_word(0x3002);

    // C8F2: BRA $00FA
    cpu.state_.pc += 0x00FA;

    // C8F5: LDD A,U
    // TODO: Fix comma operator: LDD A,U

    // C8F7: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C8F9: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // C8FB: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C8FD: LDD #$8040
    cpu.state_.d = 0x8040;

    // C900: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C902: LDU $4AF1
    cpu.state_.u = cpu.read_memory_word(0x4AF1);

    // C905: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // C907: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C909: LDD #$1F38
    cpu.state_.d = 0x1F38;

    // C90C: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C90E: LDA $4AEA
    cpu.state_.a = cpu.read_memory(0x4AEA);

    // C912: CMPA #$0A
    cpu.compare_a(0x0A);

    // C914: BCS $011B
    if (cpu.carry_flag()) cpu.state_.pc += 0x011B;

    // C916: LDA #$10
    cpu.state_.a = 0x10;

    // C918: LDB #$01
    cpu.state_.b = 0x01;

    // C91A: STB <$AD
    cpu.write_memory(0xAD, cpu.state_.b);

    // C91C: JSR $E790
    cpu.call_function(0xE790);

    // C91F: LDD #$B8DC
    cpu.state_.d = 0xB8DC;

    // C922: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C924: LDD #$8040
    cpu.state_.d = 0x8040;

    // C927: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C929: LDB $4AEA
    cpu.state_.b = cpu.read_memory(0x4AEA);

    // C92E: LDX #$4A8E
    cpu.state_.x = 0x4A8E;

    // C932: LDU $4AF1
    cpu.state_.u = cpu.read_memory_word(0x4AF1);

    // C935: LDD ,U++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.u++);

    // C937: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C939: LDD #$1FF0
    cpu.state_.d = 0x1FF0;

    // C93C: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C93E: STU $4AF1
    cpu.write_memory(0x4AF1, cpu.state_.u);

    // C941: LDB #$06
    cpu.state_.b = 0x06;

    // C943: STB <$AD
    cpu.write_memory(0xAD, cpu.state_.b);

    // C945: JSR $E764
    cpu.call_function(0xE764);

    // C948: LEAX $4,X
    // TODO: Fix comma operator: LEAX $4,X

    // C94A: LDD #$8040
    cpu.state_.d = 0x8040;

    // C94D: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C94F: INC $4AEA
    // TODO: Convert INC $4AEA

    // C952: LDA $4AEA
    cpu.state_.a = cpu.read_memory(0x4AEA);

    // C955: CMPA #$0A
    cpu.compare_a(0x0A);

    // C957: LBCS $0029
    // TODO: Convert LBCS $0029

    // C95B: LDD #$7200
    cpu.state_.d = 0x7200;

    // C95E: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C960: LDD $4AEC
    cpu.state_.d = cpu.read_memory_word(0x4AEC);

    // C963: BPL $0169
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0169;

    // C966: LDD #$6480
    cpu.state_.d = 0x6480;

    // C969: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C96B: LDX #$CBA8
    cpu.state_.x = 0xCBA8;

    // C96E: LDU #$3018
    cpu.state_.u = 0x3018;

    // C971: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // C973: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // C975: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C977: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // C979: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // C97B: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C97D: LDD ,U++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.u++);

    // C97F: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C981: LDD #$8040
    cpu.state_.d = 0x8040;

    // C984: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C986: LEAX $4,X
    // TODO: Fix comma operator: LEAX $4,X

    // C988: CMPX #$CC10
    cpu.compare_x(0xCC10);

    // C98B: BCS $0174
    if (cpu.carry_flag()) cpu.state_.pc += 0x0174;

    // C98D: LDD $CBA6
    cpu.state_.d = cpu.read_memory_word(0xCBA6);

    // C990: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // C992: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C994: LDD $CBA4
    cpu.state_.d = cpu.read_memory_word(0xCBA4);

    // C997: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // C999: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C99B: LDD $3054
    cpu.state_.d = cpu.read_memory_word(0x3054);

    // C99E: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C9A0: LDD #$7200
    cpu.state_.d = 0x7200;

    // C9A3: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C9A5: LDD #$8040
    cpu.state_.d = 0x8040;

    // C9A8: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C9AA: LDB $4AEF
    cpu.state_.b = cpu.read_memory(0x4AEF);

    // C9AD: CMPB #$1B
    cpu.compare_b(0x1B);

    // C9AF: BNE $01B9
    if (!cpu.zero_flag()) cpu.state_.pc += 0x01B9;

    // C9B1: LDD #$6750
    cpu.state_.d = 0x6750;

    // C9B4: BRA $01BC
    cpu.state_.pc += 0x01BC;

    // C9B6: LDD #$6450
    cpu.state_.d = 0x6450;

    // C9B9: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C9BB: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // C9BD: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // C9BF: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C9C1: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // C9C3: SUBD #$0008
    cpu.state_.d -= 0x0008;

    // C9C6: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // C9C8: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C9CA: LDD #$71C0
    cpu.state_.d = 0x71C0;

    // C9CD: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C9CF: LDD $303A
    cpu.state_.d = cpu.read_memory_word(0x303A);

    // C9D2: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C9D4: LDD $3040
    cpu.state_.d = cpu.read_memory_word(0x3040);

    // C9D7: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C9D9: LDD $301A
    cpu.state_.d = cpu.read_memory_word(0x301A);

    // C9DC: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C9DE: LDD #$7200
    cpu.state_.d = 0x7200;

    // C9E1: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C9E3: LDD #$8040
    cpu.state_.d = 0x8040;

    // C9E6: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C9E8: LDB $4AEF
    cpu.state_.b = cpu.read_memory(0x4AEF);

    // C9EB: CMPB #$1C
    cpu.compare_b(0x1C);

    // C9ED: BNE $01F7
    if (!cpu.zero_flag()) cpu.state_.pc += 0x01F7;

    // C9EF: LDD #$6750
    cpu.state_.d = 0x6750;

    // C9F2: BRA $01FA
    cpu.state_.pc += 0x01FA;

    // C9F4: LDD #$6450
    cpu.state_.d = 0x6450;

    // C9F7: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C9F9: LDD $6,X
    // TODO: Fix comma operator: LDD $6,X

    // C9FB: ANDA #$1F
    cpu.state_.a &= 0x1F;

}

} // namespace StarWars