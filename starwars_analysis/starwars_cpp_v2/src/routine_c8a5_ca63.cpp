#include "cpu_6809.h"

namespace StarWars {

void routine_c8a5_ca63_impl(CPU6809& cpu) {
    // Converted from rom_disasm_c8a5_ca63.md
    // Address: 0xC8A5_CA63

    label_C8A5:
    // C8A5: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // C8A7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C8A9: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C8AB: BNE $C8BC
    if (!cpu.zero_flag()) cpu.m_pc = 0xC8BC;

    // C8AD: TST $4AEC
    // TODO: Convert TST $4AEC

    // C8B0: BMI $C8B7
    if (cpu.negative_flag()) cpu.m_pc = 0xC8B7;

    // C8B2: LDD $3054
    cpu.m_d = cpu.read_memory16(0x3054);

    // C8B5: BRA $C8BA
    goto label_C8BA;

    // C8B7: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    label_C8BA:
    // C8BA: BRA $C8BF
    goto label_C8BF;

    // C8BD: LDD A,U
    // TODO: Fix comma operator: LDD A,U

    label_C8BF:
    // C8BF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C8C1: TST $4AEC
    // TODO: Convert TST $4AEC

    // C8C4: BMI $C8E1
    if (cpu.negative_flag()) cpu.m_pc = 0xC8E1;

    // C8C6: LDA $4AEE
    cpu.m_a = cpu.read_memory(0x4AEE);

    // C8C9: CMPA #$02
    cpu.compare_a(0x02);

    // C8CB: BNE $C8DD
    if (!cpu.zero_flag()) cpu.m_pc = 0xC8DD;

    // C8CD: LDA $4843
    cpu.m_a = cpu.read_memory(0x4843);

    // C8D0: ANDA #$01
    cpu.m_a &= 0x01;

    // C8D2: BNE $C8D9
    if (!cpu.zero_flag()) cpu.m_pc = 0xC8D9;

    // C8D4: LDD $4B10
    cpu.m_d = cpu.read_memory16(0x4B10);

    // C8D7: BRA $C8DB
    goto label_C8DB;

    // C8D9: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    label_C8DB:
    // C8DB: BRA $C8DF
    goto label_C8DF;

    // C8DD: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    label_C8DF:
    // C8DF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C8E1: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C8E3: BNE $C8F4
    if (!cpu.zero_flag()) cpu.m_pc = 0xC8F4;

    // C8E5: TST $4AEC
    // TODO: Convert TST $4AEC

    // C8E8: BMI $C8EF
    if (cpu.negative_flag()) cpu.m_pc = 0xC8EF;

    // C8EA: LDD $3054
    cpu.m_d = cpu.read_memory16(0x3054);

    // C8ED: BRA $C8F2
    goto label_C8F2;

    // C8EF: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    label_C8F2:
    // C8F2: BRA $C8F7
    goto label_C8F7;

    // C8F5: LDD A,U
    // TODO: Fix comma operator: LDD A,U

    label_C8F7:
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

    // C914: BCS $C918
    if (cpu.carry_flag()) cpu.m_pc = 0xC918;

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

    // C957: LBCS $C826
    // TODO: Convert LBCS $C826

    // C95B: LDD #$7200
    cpu.m_d = 0x7200;

    // C95E: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C960: LDD $4AEC
    cpu.m_d = cpu.read_memory16(0x4AEC);

    // C963: BPL $C966
    if (!cpu.negative_flag()) cpu.m_pc = 0xC966;

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

    // C98B: BCS $C971
    if (cpu.carry_flag()) cpu.m_pc = 0xC971;

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

    // C9AF: BNE $C9B6
    if (!cpu.zero_flag()) cpu.m_pc = 0xC9B6;

    // C9B1: LDD #$6750
    cpu.m_d = 0x6750;

    // C9B4: BRA $C9B9
    goto label_C9B9;

    // C9B6: LDD #$6450
    cpu.m_d = 0x6450;

    label_C9B9:
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

    // C9ED: BNE $C9F4
    if (!cpu.zero_flag()) cpu.m_pc = 0xC9F4;

    // C9EF: LDD #$6750
    cpu.m_d = 0x6750;

    // C9F2: BRA $C9F7
    goto label_C9F7;

    // C9F4: LDD #$6450
    cpu.m_d = 0x6450;

    label_C9F7:
    // C9F7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C9F9: LDD $6,X
    // TODO: Fix comma operator: LDD $6,X

    // C9FB: ANDA #$1F
    cpu.m_a &= 0x1F;

    // C9FD: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C9FF: LDD $4,X
    // TODO: Fix comma operator: LDD $4,X

    // CA01: SUBD #$0008
    cpu.m_d -= 0x0008;

    // CA04: ANDA #$1F
    cpu.m_a &= 0x1F;

    // CA06: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // CA08: LDD #$71C0
    cpu.m_d = 0x71C0;

    // CA0B: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // CA0D: LDD $3020
    cpu.m_d = cpu.read_memory16(0x3020);

    // CA10: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // CA12: LDD $3032
    cpu.m_d = cpu.read_memory16(0x3032);

    // CA15: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // CA17: LDD $301E
    cpu.m_d = cpu.read_memory16(0x301E);

    // CA1A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // CA1C: LDD #$7200
    cpu.m_d = 0x7200;

    // CA1F: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // CA21: LDD #$8040
    cpu.m_d = 0x8040;

    // CA24: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // CA26: LDD #$6780
    cpu.m_d = 0x6780;

    // CA29: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // CA2B: LDB $4AEF
    cpu.m_b = cpu.read_memory(0x4AEF);

    // CA2E: CMPB #$1B
    cpu.compare_b(0x1B);

    // CA30: BCC $CA5B
    if (!cpu.carry_flag()) cpu.m_pc = 0xCA5B;

    // CA34: LDX #$CBA4
    cpu.m_x = 0xCBA4;

    // CA38: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // CA3A: ANDA #$1F
    cpu.m_a &= 0x1F;

    // CA3C: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // CA3E: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // CA40: ANDA #$1F
    cpu.m_a &= 0x1F;

    // CA42: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // CA44: LDB $4AEF
    cpu.m_b = cpu.read_memory(0x4AEF);

    // CA47: BNE $CA4E
    if (!cpu.zero_flag()) cpu.m_pc = 0xCA4E;

    // CA49: LDD $3054
    cpu.m_d = cpu.read_memory16(0x3054);

    // CA4C: BRA $CA54
    goto label_CA54;

    // CA4F: LDX #$3016
    cpu.m_x = 0x3016;

    // CA52: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    label_CA54:
    // CA54: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // CA56: LDD #$8040
    cpu.m_d = 0x8040;

    // CA59: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // CA5B: LDD #$6680
    cpu.m_d = 0x6680;

    // CA5E: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // CA60: JSR $B6CC
    cpu.call_function(0xB6CC);

}

} // namespace StarWars