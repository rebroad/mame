#include "cpu_6809.h"

namespace StarWars {

void routine_c6f7_impl(CPU6809& cpu) {
    // Converted from rom_disasm_c6f7.md
    // Address: 0xC6F7

    // C6F7: LDA #$02
    cpu.m_a = 0x02;

    // C6F9: STA $4B02
    cpu.write_memory(0x4B02, cpu.m_a);

    // C6FC: LDA ,U+
    // TODO: Complex indexed addressing: ,U+

    // C6FE: STA $1,X
    // TODO: Handle indexed addressing: STA $1,X

    // C704: STA ,X++
    cpu.write_memory(cpu.m_x++, cpu.m_a);

    // C706: DEC $4B02
    // TODO: Convert DEC $4B02

    // C709: BPL $0005
    if (!cpu.negative_flag()) cpu.m_pc = 0xC710;

    // C70B: LEAX -$6,X
    // TODO: Fix comma operator: LEAX -$6,X

    // C70E: LDB #$00
    cpu.m_b = 0x00;

    // C710: STB <$AD
    cpu.write_memory(0xAD, cpu.m_b);

    // C712: TFR A,B
    cpu.m_b = cpu.m_a;

    // C718: CMPA #$0A
    cpu.compare_a(0x0A);

    // C71A: BCS $0027
    if (cpu.carry_flag()) cpu.m_pc = 0xC743;

    // C71C: LDA #$09
    cpu.m_a = 0x09;

    // C71E: JSR $E7AD
    cpu.call_function(0xE7AD);

    // C721: LDA #$B8
    cpu.m_a = 0xB8;

    // C723: STA ,Y+
    // TODO: Handle indexed addressing: STA ,Y+

    // C725: LDA #$DF
    cpu.m_a = 0xDF;

    // C727: STA ,Y+
    // TODO: Handle indexed addressing: STA ,Y+

    // C72A: ANDB #$0F
    cpu.m_b &= 0x0F;

    // C72C: BEQ $003D
    if (cpu.zero_flag()) cpu.m_pc = 0xC76B;

    // C72E: ADDA #$04
    cpu.m_a += 0x04;

    // C732: BNE $0037
    if (!cpu.zero_flag()) cpu.m_pc = 0xC76B;

    // C734: JMP $E790
    cpu.m_pc = 0xE790;

    // C737: NEG <$03
    // TODO: Convert NEG <$03

    // C739: ASR <$0F
    // TODO: Convert ASR <$0F

    // C73B: ASL <$00
    // TODO: Convert ASL <$00

    // C73D: ASL <$00
    // TODO: Convert ASL <$00

    // C73F: ASL <$00
    // TODO: Convert ASL <$00

    // C741: ASL <$00
    // TODO: Convert ASL <$00

    // C743: NEG <$00
    // TODO: Convert NEG <$00

    // C745: NEG <$00
    // TODO: Convert NEG <$00

    // C747: NEG <$00
    // TODO: Convert NEG <$00

    // C749: NEG <$00
    // TODO: Convert NEG <$00

    // C74B: NEG <$00
    // TODO: Convert NEG <$00

    // C74D: NEG <$00
    // TODO: Convert NEG <$00

    // C74F: NEG <$00
    // TODO: Convert NEG <$00

    // C751: NEG <$00
    // TODO: Convert NEG <$00

    // C753: NEG <$00
    // TODO: Convert NEG <$00

    // C755: NEG <$00
    // TODO: Convert NEG <$00

    // C757: NEG <$00
    // TODO: Convert NEG <$00

    // C759: NEG <$00
    // TODO: Convert NEG <$00

    // C75B: NEG <$00
    // TODO: Convert NEG <$00

    // C75D: NEG <$00
    // TODO: Convert NEG <$00

    // C75F: NEG <$00
    // TODO: Convert NEG <$00

    // C761: NEG <$00
    // TODO: Convert NEG <$00

    // C763: NEG <$00
    // TODO: Convert NEG <$00

    // C765: NEG <$00
    // TODO: Convert NEG <$00

    // C767: NEG <$00
    // TODO: Convert NEG <$00

    // C769: NEG <$00
    // TODO: Convert NEG <$00

    // C76B: NEG <$00
    // TODO: Convert NEG <$00

    // C76D: NEG <$00
    // TODO: Convert NEG <$00

    // C76F: NEG <$00
    // TODO: Convert NEG <$00

    // C771: NEG <$00
    // TODO: Convert NEG <$00

    // C773: NEG <$00
    // TODO: Convert NEG <$00

    // C775: NEG <$00
    // TODO: Convert NEG <$00

    // C777: NEG <$00
    // TODO: Convert NEG <$00

    // C779: NEG <$00
    // TODO: Convert NEG <$00

    // C77B: NEG <$00
    // TODO: Convert NEG <$00

    // C77D: NEG <$00
    // TODO: Convert NEG <$00

    // C77F: NEG <$00
    // TODO: Convert NEG <$00

    // C781: NEG <$00
    // TODO: Convert NEG <$00

    // C783: NEG <$00
    // TODO: Convert NEG <$00

    // C785: NEG <$00
    // TODO: Convert NEG <$00

    // C787: NEG <$00
    // TODO: Convert NEG <$00

    // C789: NEG <$00
    // TODO: Convert NEG <$00

    // C78B: NEG <$00
    // TODO: Convert NEG <$00

    // C78D: NEG <$00
    // TODO: Convert NEG <$00

    // C78F: NEG <$00
    // TODO: Convert NEG <$00

    // C791: NEG <$00
    // TODO: Convert NEG <$00

    // C793: NEG <$00
    // TODO: Convert NEG <$00

    // C795: NEG <$00
    // TODO: Convert NEG <$00

    // C797: ASL <$80
    // TODO: Convert ASL <$80

    // C79A: SUBA $0949
    cpu.m_a -= 0x0949;

    // C79D: ADCA #$C1
    // TODO: Convert ADCA #$C1

    // C79F: ANDB ,U
    // TODO: Complex indexed addressing: ,U

    // C7A1: ANDA ,X
    // TODO: Complex indexed addressing: ,X

    // C7A3: NEG <$05
    // TODO: Convert NEG <$05

    // C7A5: DEC <$10
    // TODO: Convert DEC <$10

    // C7A8: ORCC #$20
    cpu.m_cc |= 0x20;

    // C7AA: BCS $00DF
    if (cpu.carry_flag()) cpu.m_pc = 0xC78B;

    // C7AC: LEAX -$B,Y
    // TODO: Fix comma operator: LEAX -$B,Y

    // C7B5: NEG $0,X
    // TODO: Convert NEG $0,X

    // C7B7: ASL <$34
    // TODO: Convert ASL <$34

    // C7B9: SUBA <$98
    cpu.m_a -= 0x98;

    // C7BB: NEG <$B8
    // TODO: Convert NEG <$B8

    // C7BD: NEG <$90
    // TODO: Convert NEG <$90

    // C7BF: NEG <$68
    // TODO: Convert NEG <$68

    // C7C1: NEG <$18
    // TODO: Convert NEG <$18

    // C7C3: NEG <$40
    // TODO: Convert NEG <$40

    // C7C5: NEG <$B4
    // TODO: Convert NEG <$B4

    // C7C7: NEG <$50
    // TODO: Convert NEG <$50

    // C7C9: NEG <$DC
    // TODO: Convert NEG <$DC

    // C7CB: NEG <$78
    // TODO: Convert NEG <$78

    // C7CD: EXG inv,DP
    // TODO: Convert EXG inv,DP

    // C7CF: EXG B,A
    // TODO: Convert EXG B,A

    // C7D1: EXG inv,PC
    // TODO: Convert EXG inv,PC

    // C7D3: EXG inv,Y
    // TODO: Convert EXG inv,Y

    // C7D5: TFR X,inv
    cpu.m_inv = cpu.m_x;

    // C7D7: TFR S,inv
    cpu.m_inv = cpu.m_sp;

    // C7D9: TFR inv,B
    cpu.m_b = cpu.m_inv;

    // C7DB: TFR CC,inv
    cpu.m_inv = cpu.m_cc;

    // C7DD: TFR inv,U
    cpu.m_u = cpu.m_inv;

    // C7DF: EXG inv,DP
    // TODO: Convert EXG inv,DP

    // C7E1: EXG B,A
    // TODO: Convert EXG B,A

    // C7E3: EXG inv,PC
    // TODO: Convert EXG inv,PC

    // C7E5: EXG inv,Y
    // TODO: Convert EXG inv,Y

    // C7E7: TFR X,inv
    cpu.m_inv = cpu.m_x;

    // C7E9: TFR S,inv
    cpu.m_inv = cpu.m_sp;

    // C7EB: TFR inv,B
    cpu.m_b = cpu.m_inv;

    // C7ED: TFR CC,inv
    cpu.m_inv = cpu.m_cc;

    // C7EF: TFR inv,U
    cpu.m_u = cpu.m_inv;

    // C7F1: LSR $787A
    // TODO: Convert LSR $787A

    // C7F4: JMP $868A
    cpu.m_pc = 0x868A;

    // C7F7: LDX #$9294
    cpu.m_x = 0x9294;

    // C7FA: LDA <$98
    cpu.m_a = cpu.read_memory(0x98);

    // C7FC: ORA <$7D
    cpu.m_a |= 0x7D;

    // C7FF: LDD $B,Y
    // TODO: Fix comma operator: LDD $B,Y

    // C801: CLR <$86
    cpu.write_memory(0x86, 0);

    // C804: JSR $D8DF
    cpu.call_function(0xD8DF);

    // C807: LDD #$7200
    cpu.m_d = 0x7200;

    // C80A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C80C: LDD #$CA64
    cpu.m_d = 0xCA64;

    // C80F: BRA $0127
    cpu.m_pc = 0xC838;

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

    // C840: BNE $0150
    if (!cpu.zero_flag()) cpu.m_pc = 0xC892;

    // C842: LDD #$6780
    cpu.m_d = 0x6780;

    // C845: BRA $0153
    cpu.m_pc = 0xC89A;

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

    // C854: BMI $017A
    if (cpu.negative_flag()) cpu.m_pc = 0xC8D0;

    // C856: LDA $4AEE
    cpu.m_a = cpu.read_memory(0x4AEE);

    // C859: CMPA #$00
    cpu.compare_a(0x00);

    // C85B: BNE $0176
    if (!cpu.zero_flag()) cpu.m_pc = 0xC8D3;

    // C85D: LDA $4843
    cpu.m_a = cpu.read_memory(0x4843);

    // C860: ANDA #$01
    cpu.m_a &= 0x01;

    // C862: BNE $0172
    if (!cpu.zero_flag()) cpu.m_pc = 0xC8D6;

    // C864: LDD $4B10
    cpu.m_d = cpu.read_memory16(0x4B10);

    // C867: BRA $0174
    cpu.m_pc = 0xC8DD;

    // C869: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // C86B: BRA $0178
    cpu.m_pc = 0xC8E5;

    // C86D: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // C86F: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C871: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C873: BNE $018D
    if (!cpu.zero_flag()) cpu.m_pc = 0xC802;

    // C875: TST $4AEC
    // TODO: Convert TST $4AEC

    // C878: BMI $0188
    if (cpu.negative_flag()) cpu.m_pc = 0xC802;

    // C87A: LDD $3054
    cpu.m_d = cpu.read_memory16(0x3054);

    // C87D: BRA $018B
    cpu.m_pc = 0xC80A;

    // C87F: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    // C882: BRA $0190
    cpu.m_pc = 0xC814;

    // C885: LDD A,U
    // TODO: Fix comma operator: LDD A,U

    // C887: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C889: TST $4AEC
    // TODO: Convert TST $4AEC

    // C88C: BMI $01B2
    if (cpu.negative_flag()) cpu.m_pc = 0xC840;

    // C88E: LDA $4AEE
    cpu.m_a = cpu.read_memory(0x4AEE);

    // C891: CMPA #$01
    cpu.compare_a(0x01);

    // C893: BNE $01AE
    if (!cpu.zero_flag()) cpu.m_pc = 0xC843;

    // C895: LDA $4843
    cpu.m_a = cpu.read_memory(0x4843);

    // C898: ANDA #$01
    cpu.m_a &= 0x01;

    // C89A: BNE $01AA
    if (!cpu.zero_flag()) cpu.m_pc = 0xC846;

    // C89C: LDD $4B10
    cpu.m_d = cpu.read_memory16(0x4B10);

    // C89F: BRA $01AC
    cpu.m_pc = 0xC84D;

    // C8A1: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // C8A3: BRA $01B0
    cpu.m_pc = 0xC855;

    // C8A5: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // C8A7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C8A9: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C8AB: BNE $01C5
    if (!cpu.zero_flag()) cpu.m_pc = 0xC872;

    // C8AD: TST $4AEC
    // TODO: Convert TST $4AEC

    // C8B0: BMI $01C0
    if (cpu.negative_flag()) cpu.m_pc = 0xC872;

    // C8B2: LDD $3054
    cpu.m_d = cpu.read_memory16(0x3054);

    // C8B5: BRA $01C3
    cpu.m_pc = 0xC87A;

    // C8B7: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    // C8BA: BRA $01C8
    cpu.m_pc = 0xC884;

    // C8BD: LDD A,U
    // TODO: Fix comma operator: LDD A,U

    // C8BF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C8C1: TST $4AEC
    // TODO: Convert TST $4AEC

    // C8C4: BMI $01EA
    if (cpu.negative_flag()) cpu.m_pc = 0xC8B0;

    // C8C6: LDA $4AEE
    cpu.m_a = cpu.read_memory(0x4AEE);

    // C8C9: CMPA #$02
    cpu.compare_a(0x02);

    // C8CB: BNE $01E6
    if (!cpu.zero_flag()) cpu.m_pc = 0xC8B3;

    // C8CD: LDA $4843
    cpu.m_a = cpu.read_memory(0x4843);

    // C8D0: ANDA #$01
    cpu.m_a &= 0x01;

    // C8D2: BNE $01E2
    if (!cpu.zero_flag()) cpu.m_pc = 0xC8B6;

    // C8D4: LDD $4B10
    cpu.m_d = cpu.read_memory16(0x4B10);

    // C8D7: BRA $01E4
    cpu.m_pc = 0xC8BD;

    // C8D9: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // C8DB: BRA $01E8
    cpu.m_pc = 0xC8C5;

    // C8DD: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // C8DF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C8E1: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C8E3: BNE $01FD
    if (!cpu.zero_flag()) cpu.m_pc = 0xC8E2;

    // C8E5: TST $4AEC
    // TODO: Convert TST $4AEC

    // C8E8: BMI $01F8
    if (cpu.negative_flag()) cpu.m_pc = 0xC8E2;

    // C8EA: LDD $3054
    cpu.m_d = cpu.read_memory16(0x3054);

    // C8ED: BRA $01FB
    cpu.m_pc = 0xC8EA;

    // C8EF: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    // C8F2: BRA $0200
    cpu.m_pc = 0xC8F4;

    // C8F5: LDD A,U
    // TODO: Fix comma operator: LDD A,U

}

} // namespace StarWars