#include "cpu_6809.h"

namespace StarWars {

void routine_c450_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_c450.md
    // Address: 0xC450

    // C450: LDA #$65
    cpu.state_.a = 0x65;

    // C452: JSR $D8DF
    cpu.call_function(0xD8DF);

    // C456: CMPA #$74
    cpu.compare_a(0x74);

    // C458: BCS $0002
    if (cpu.carry_flag()) cpu.state_.pc = 0xC45C;

    // C45A: LDA #$D4
    cpu.state_.a = 0xD4;

    // C45C: JSR $D8DF
    cpu.call_function(0xD8DF);

    // C45F: LDD #$6280
    cpu.state_.d = 0x6280;

    // C462: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C464: LDA #$0B
    cpu.state_.a = 0x0B;

    // C466: STA $4AFE
    cpu.write_memory(0x4AFE, cpu.state_.a);

    // C469: LDA $4AFE
    cpu.state_.a = cpu.read_memory(0x4AFE);

    // C46C: JSR $C5A4
    cpu.call_function(0xC5A4);

    // C46F: DEC $4AFE
    // TODO: Convert DEC $4AFE

    // C472: BPL $0019
    if (!cpu.negative_flag()) cpu.state_.pc = 0xC48D;

    // C474: JSR $C690
    cpu.call_function(0xC690);

    // C477: LDA $4598
    cpu.state_.a = cpu.read_memory(0x4598);

    // C47A: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // C47C: BEQ $009A
    if (cpu.zero_flag()) cpu.state_.pc = 0xC518;

    // C47E: LDB #$D5
    cpu.state_.b = 0xD5;

    // C480: JSR $E7C7
    cpu.call_function(0xE7C7);

    // C483: LDA <$AC
    cpu.state_.a = cpu.read_memory(0xAC);

    // C485: ANDA #$40
    cpu.state_.a &= 0x40;

    // C487: BEQ $009A
    if (cpu.zero_flag()) cpu.state_.pc = 0xC523;

    // C489: LDA $4598
    cpu.state_.a = cpu.read_memory(0x4598);

    // C48C: ANDA #$08
    cpu.state_.a &= 0x08;

    // C48E: BEQ $0048
    if (cpu.zero_flag()) cpu.state_.pc = 0xC4D8;

    // C490: LDA #$01
    cpu.state_.a = 0x01;

    // C492: JSR $C24E
    cpu.call_function(0xC24E);

    // C495: JSR $CC18
    cpu.call_function(0xCC18);

    // C498: LDA $4598
    cpu.state_.a = cpu.read_memory(0x4598);

    // C49B: ANDA #$04
    cpu.state_.a &= 0x04;

    // C49D: BEQ $0061
    if (cpu.zero_flag()) cpu.state_.pc = 0xC500;

    // C49F: LDX #$454E
    cpu.state_.x = 0x454E;

    // C4A2: LDD #$0000
    cpu.state_.d = 0x0000;

    // C4A5: STD ,X++
    cpu.write_memory(cpu.state_.x++, cpu.state_.d);

    // C4A7: CMPX #$458E
    cpu.compare_x(0x458E);

    // C4AA: BCS $0055
    if (cpu.carry_flag()) cpu.state_.pc = 0xC501;

    // C4AC: LDA #$02
    cpu.state_.a = 0x02;

    // C4AE: JSR $C2B3
    cpu.call_function(0xC2B3);

    // C4B1: LDA $4598
    cpu.state_.a = cpu.read_memory(0x4598);

    // C4B4: ANDA #$02
    cpu.state_.a &= 0x02;

    // C4B6: BEQ $008A
    if (cpu.zero_flag()) cpu.state_.pc = 0xC542;

    // C4B8: LDA #$00
    cpu.state_.a = 0x00;

    // C4BA: JSR $C24E
    cpu.call_function(0xC24E);

    // C4BD: LDX #$C7B6
    cpu.state_.x = 0xC7B6;

    // C4C0: LDB $0003,X
    // TODO: Fix comma operator: LDB $0003,X

    // C4C4: LDX #$4500
    cpu.state_.x = 0x4500;

    // C4C8: LDU #$4500
    cpu.state_.u = 0x4500;

    // C4CB: LDB $C7B7
    cpu.state_.b = cpu.read_memory(0xC7B7);

    // C4CE: STB $4B02
    cpu.write_memory(0x4B02, cpu.state_.b);

    // C4D1: LDB ,U+
    // TODO: Complex indexed addressing: ,U+

    // C4D3: STB ,X+
    // TODO: Handle indexed addressing: STB ,X+

    // C4D5: DEC $4B02
    // TODO: Convert DEC $4B02

    // C4D8: BNE $0081
    if (!cpu.zero_flag()) cpu.state_.pc = 0xC55B;

    // C4DA: LDA $4598
    cpu.state_.a = cpu.read_memory(0x4598);

    // C4DD: ANDA #$01
    cpu.state_.a &= 0x01;

    // C4DF: BEQ $0094
    if (cpu.zero_flag()) cpu.state_.pc = 0xC575;

    // C4E1: JSR $C5F2
    cpu.call_function(0xC5F2);

    // C4E4: LDD #$0000
    cpu.state_.d = 0x0000;

    // C4E7: STD $4598
    cpu.write_memory(0x4598, cpu.state_.d);

    // C4EB: LDB <$43
    cpu.state_.b = cpu.read_memory(0x43);

    // C4ED: ANDB #$0F
    cpu.state_.b &= 0x0F;

    // C4EF: BNE $00C9
    if (!cpu.zero_flag()) cpu.state_.pc = 0xC5BA;

    // C4F1: LDB $487F
    cpu.state_.b = cpu.read_memory(0x487F);

    // C4F4: CMPB #$D0
    cpu.compare_b(0xD0);

    // C4F6: BCC $00C9
    if (!cpu.carry_flag()) cpu.state_.pc = 0xC5C1;

    // C4F8: CMPB #$30
    cpu.compare_b(0x30);

    // C4FA: BLS $00C9
    // TODO: Convert BLS $00C9

    // C4FD: BMI $00BC
    if (cpu.negative_flag()) cpu.state_.pc = 0xC5BB;

    // C4FF: LDB $4AF6
    cpu.state_.b = cpu.read_memory(0x4AF6);

    // C503: BPL $00B7
    if (!cpu.negative_flag()) cpu.state_.pc = 0xC5BC;

    // C505: LDB #$0B
    cpu.state_.b = 0x0B;

    // C507: STB $4AF6
    cpu.write_memory(0x4AF6, cpu.state_.b);

    // C50A: BRA $00C9
    cpu.state_.pc = 0xC5D5;

    // C50C: LDB $4AF6
    cpu.state_.b = cpu.read_memory(0x4AF6);

    // C510: CMPB #$0B
    cpu.compare_b(0x0B);

    // C512: BLS $00C6
    // TODO: Convert BLS $00C6

    // C514: LDB #$00
    cpu.state_.b = 0x00;

    // C516: STB $4AF6
    cpu.write_memory(0x4AF6, cpu.state_.b);

    // C519: LDX #$C797
    cpu.state_.x = 0xC797;

    // C51C: LDA $4AF6
    cpu.state_.a = cpu.read_memory(0x4AF6);

    // C51F: LDB A,X
    // TODO: Fix comma operator: LDB A,X

    // C521: STB $4AFC
    cpu.write_memory(0x4AFC, cpu.state_.b);

    // C527: ANDB #$03
    cpu.state_.b &= 0x03;

    // C529: LDX #$C737
    cpu.state_.x = 0xC737;

    // C52C: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // C52E: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.a);

    // C531: LDB <$AC
    cpu.state_.b = cpu.read_memory(0xAC);

    // C533: ANDB #$80
    cpu.state_.b &= 0x80;

    // C535: BEQ $0153
    if (cpu.zero_flag()) cpu.state_.pc = 0xC68A;

    // C537: LDB $4AF5
    cpu.state_.b = cpu.read_memory(0x4AF5);

    // C53B: CMPB $4AFA
    cpu.compare_b(cpu.read_memory(0x4AFA));

    // C53E: BLS $00F2
    // TODO: Convert BLS $00F2

    // C540: LDB #$00
    cpu.state_.b = 0x00;

    // C542: STA $4AF5
    cpu.write_memory(0x4AF5, cpu.state_.a);

    // C545: LDA $4AFC
    cpu.state_.a = cpu.read_memory(0x4AFC);

    // C54C: ANDA #$07
    cpu.state_.a &= 0x07;

    // C54F: BMI $0107
    if (cpu.negative_flag()) cpu.state_.pc = 0xC658;

    // C552: ASL $4AFA
    // TODO: Convert ASL $4AFA

    // C555: BRA $00FE
    cpu.state_.pc = 0xC655;

    // C557: LDA $4AFC
    cpu.state_.a = cpu.read_memory(0x4AFC);

    // C55A: ANDA #$07
    cpu.state_.a &= 0x07;

    // C55D: LDX #$4590
    cpu.state_.x = 0x4590;

    // C560: LEAX A,X
    // TODO: Fix comma operator: LEAX A,X

    // C562: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // C568: STA $4AFB
    cpu.write_memory(0x4AFB, cpu.state_.a);

    // C56B: LDA $1,X
    // TODO: Fix comma operator: LDA $1,X

    // C56D: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // C56F: ADDA $4AFB
    cpu.state_.a += 0x4AFB;

    // C572: STA $4AFB
    cpu.write_memory(0x4AFB, cpu.state_.a);

    // C575: EORB $4AFB
    cpu.state_.b ^= 0x4AFB;

    // C578: ANDB $4AFA
    cpu.state_.b &= 0x4AFA;

    // C57B: EORB $4AFB
    cpu.state_.b ^= 0x4AFB;

    // C57E: STB $1,X
    // TODO: Handle indexed addressing: STB $1,X

    // C584: STB ,X
    // TODO: Handle indexed addressing: STB ,X

    // C586: LDA #$03
    cpu.state_.a = 0x03;

    // C588: JSR $C2B3
    cpu.call_function(0xC2B3);

    // C58B: LDX #$4500
    cpu.state_.x = 0x4500;

    // C58E: LDU #$4C00
    cpu.state_.u = 0x4C00;

    // C591: LDD ,X++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.x++);

    // C593: STD ,U++
    cpu.write_memory(cpu.state_.u++, cpu.state_.d);

    // C595: CMPX #$45FF
    cpu.compare_x(0x45FF);

    // C598: BCS $0141
    if (cpu.carry_flag()) cpu.state_.pc = 0xC6DB;

    // C59A: JSR $C3A7
    cpu.call_function(0xC3A7);

    // C59D: LDA $4AF6
    cpu.state_.a = cpu.read_memory(0x4AF6);

    // C5A0: JSR $C5A4
    cpu.call_function(0xC5A4);

    // C5A4: LDX #$C797
    cpu.state_.x = 0xC797;

    // C5A7: LDB A,X
    // TODO: Fix comma operator: LDB A,X

    // C5A9: STB $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.b);

    // C5AC: ANDB #$07
    cpu.state_.b &= 0x07;

    // C5AE: LDX #$4590
    cpu.state_.x = 0x4590;

    // C5B3: LDB $4AFA
    cpu.state_.b = cpu.read_memory(0x4AFA);

    // C5B9: STB $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.b);

    // C5BC: ANDB #$03
    cpu.state_.b &= 0x03;

    // C5BE: LDU #$C737
    cpu.state_.u = 0xC737;

    // C5C1: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // C5C3: LDB $4AFA
    cpu.state_.b = cpu.read_memory(0x4AFA);

    // C5C8: STB $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.b);

    // C5CB: LDB ,X
    // TODO: Complex indexed addressing: ,X

    // C5D1: STB $4AFB
    cpu.write_memory(0x4AFB, cpu.state_.b);

    // C5D4: LDB $1,X
    // TODO: Fix comma operator: LDB $1,X

    // C5D6: ANDB #$0F
    cpu.state_.b &= 0x0F;

    // C5D8: ADDB $4AFB
    cpu.state_.b += 0x4AFB;

    // C5DB: DEC $4AFA
    // TODO: Convert DEC $4AFA

    // C5DE: BMI $0193
    if (cpu.negative_flag()) cpu.state_.pc = 0xC773;

    // C5E1: BRA $018B
    cpu.state_.pc = 0xC76E;

    // C5E3: ANDB ,U
    // TODO: Complex indexed addressing: ,U

    // C5E5: STB $4AF5
    cpu.write_memory(0x4AF5, cpu.state_.b);

    // C5E8: LDX #$C7F1
    cpu.state_.x = 0xC7F1;

    // C5EB: LEAX A,X
    // TODO: Fix comma operator: LEAX A,X

    // C5ED: ADDB ,X
    // TODO: Complex indexed addressing: ,X

    // C5EF: JMP $E7D3
    cpu.state_.pc = 0xE7D3;

    // C5F2: LDX #$4500
    cpu.state_.x = 0x4500;

    // C5F5: LDU #$4C00
    cpu.state_.u = 0x4C00;

    // C5F8: LDD ,X++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.x++);

    // C5FA: STD ,U++
    cpu.write_memory(cpu.state_.u++, cpu.state_.d);

    // C5FC: CMPX #$4600
    cpu.compare_x(0x4600);

    // C5FF: BCS $01A8
    if (cpu.carry_flag()) cpu.state_.pc = 0xC7A9;

    // C601: LDX #$4500
    cpu.state_.x = 0x4500;

    // C604: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // C607: STA ,X+
    // TODO: Handle indexed addressing: STA ,X+

    // C609: CMPX #$4600
    cpu.compare_x(0x4600);

    // C60C: BCS $01B4
    if (cpu.carry_flag()) cpu.state_.pc = 0xC7C2;

    // C60E: STA $46A0
    cpu.write_memory(0x46A0, cpu.state_.a);

    // C611: JSR $C688
    cpu.call_function(0xC688);

    // C614: JSR $C67A
    cpu.call_function(0xC67A);

    // C617: JSR $C6B8
    cpu.call_function(0xC6B8);

    // C61A: LDX #$4500
    cpu.state_.x = 0x4500;

    // C61D: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // C620: STA ,X+
    // TODO: Handle indexed addressing: STA ,X+

    // C622: CMPX #$4600
    cpu.compare_x(0x4600);

    // C625: BCS $01CD
    if (cpu.carry_flag()) cpu.state_.pc = 0xC7F4;

    // C627: STA $46A0
    cpu.write_memory(0x46A0, cpu.state_.a);

    // C62A: JSR $C688
    cpu.call_function(0xC688);

    // C62D: JSR $C641
    cpu.call_function(0xC641);

    // C630: BNE $020B
    if (!cpu.zero_flag()) cpu.state_.pc = 0xC83D;

    // C632: JSR $C67A
    cpu.call_function(0xC67A);

    // C635: JSR $C6B8
    cpu.call_function(0xC6B8);

    // C638: JSR $C641
    cpu.call_function(0xC641);

    // C63B: BEQ $01F0
    if (cpu.zero_flag()) cpu.state_.pc = 0xC82D;

    // C63D: JMP $C65B
    cpu.state_.pc = 0xC65B;

    // C641: LDX #$4500
    cpu.state_.x = 0x4500;

    // C644: LDU #$4C00
    cpu.state_.u = 0x4C00;

    // C647: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C649: EORA ,U+
    // TODO: Complex indexed addressing: ,U+

    // C64B: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // C64D: BNE $020A
    if (!cpu.zero_flag()) cpu.state_.pc = 0xC859;

    // C64F: CMPX #$0000
    cpu.compare_x(0x0000);

}

} // namespace StarWars