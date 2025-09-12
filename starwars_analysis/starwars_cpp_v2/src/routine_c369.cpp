#include "cpu_6809.h"

namespace StarWars {

void routine_c369_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_c369.md
    // Address: 0xC369

    // C369: JSR $C24E
    cpu.call_function(0xC24E);

    // C36C: LDX #$C7B6
    cpu.state_.x = 0xC7B6;

    // C36F: LDB $0003,X
    // TODO: Fix comma operator: LDB $0003,X

    // C373: LDX #$4500
    cpu.state_.x = 0x4500;

    // C377: LDU #$4500
    cpu.state_.u = 0x4500;

    // C37A: BRA $004E
    cpu.state_.pc = 0xC3CA;

    // C37C: LDA #$00
    cpu.state_.a = 0x00;

    // C37E: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C381: BNE $003E
    if (!cpu.zero_flag()) cpu.state_.pc = 0xC3C1;

    // C383: LDA $4596
    cpu.state_.a = cpu.read_memory(0x4596);

    // C386: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // C388: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.a);

    // C38B: LDA $4506
    cpu.state_.a = cpu.read_memory(0x4506);

    // C38E: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // C390: CMPA $4AFA
    cpu.compare_a(cpu.read_memory(0x4AFA));

    // C393: BNE $003C
    if (!cpu.zero_flag()) cpu.state_.pc = 0xC3D1;

    // C395: LDA $4597
    cpu.state_.a = cpu.read_memory(0x4597);

    // C398: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // C39A: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.a);

    // C39D: LDA $4507
    cpu.state_.a = cpu.read_memory(0x4507);

    // C3A0: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // C3A2: CMPA $4AFA
    cpu.compare_a(cpu.read_memory(0x4AFA));

    // C3A5: BEQ $005D
    if (cpu.zero_flag()) cpu.state_.pc = 0xC404;

    // C3A7: LDX #$C7B6
    cpu.state_.x = 0xC7B6;

    // C3AA: LDB $0003,X
    // TODO: Fix comma operator: LDB $0003,X

    // C3AE: LDX #$4500
    cpu.state_.x = 0x4500;

    // C3B2: TFR X,U
    cpu.state_.u = cpu.state_.x;

    // C3B4: LDX #$4500
    cpu.state_.x = 0x4500;

    // C3B7: LDB $C7B7
    cpu.state_.b = cpu.read_memory(0xC7B7);

    // C3BA: STB $4B02
    cpu.write_memory(0x4B02, cpu.state_.b);

    // C3BD: LDB ,U+
    // TODO: Complex indexed addressing: ,U+

    // C3BF: STB ,X+
    // TODO: Handle indexed addressing: STB ,X+

    // C3C1: DEC $4B02
    // TODO: Convert DEC $4B02

    // C3C4: BNE $0054
    if (!cpu.zero_flag()) cpu.state_.pc = 0xC41A;

    // C3C6: LDA #$02
    cpu.state_.a = 0x02;

    // C3C8: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C3CB: BEQ $006F
    if (cpu.zero_flag()) cpu.state_.pc = 0xC43C;

    // C3CD: JSR $C3EE
    cpu.call_function(0xC3EE);

    // C3D0: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C3D3: BEQ $006F
    if (cpu.zero_flag()) cpu.state_.pc = 0xC444;

    // C3D5: JSR $C24E
    cpu.call_function(0xC24E);

    // C3D9: BNE $005F
    if (!cpu.zero_flag()) cpu.state_.pc = 0xC43A;

    // C3DB: LDX #$455C
    cpu.state_.x = 0x455C;

    // C3DE: JSR $C6D4
    cpu.call_function(0xC6D4);

    // C3E1: LDD $4AFA
    cpu.state_.d = cpu.read_memory_word(0x4AFA);

    // C3E4: STD $4B04
    cpu.write_memory(0x4B04, cpu.state_.d);

    // C3E7: LDD $4AFC
    cpu.state_.d = cpu.read_memory_word(0x4AFC);

    // C3EA: STD $4B06
    cpu.write_memory(0x4B06, cpu.state_.d);

    // C3EE: LDX #$C7B7
    cpu.state_.x = 0xC7B7;

    // C3F1: LDB A,X
    // TODO: Fix comma operator: LDB A,X

    // C3F3: LDX #$4500
    cpu.state_.x = 0x4500;

    // C3F7: STX $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.x);

    // C3FA: LDX #$C7B6
    cpu.state_.x = 0xC7B6;

    // C3FD: LDB A,X
    // TODO: Fix comma operator: LDB A,X

    // C3FF: LDX #$4C00
    cpu.state_.x = 0x4C00;

    // C403: TFR X,U
    cpu.state_.u = cpu.state_.x;

    // C405: LDX #$4500
    cpu.state_.x = 0x4500;

    // C409: LDB ,U+
    // TODO: Complex indexed addressing: ,U+

    // C40B: STB ,X+
    // TODO: Handle indexed addressing: STB ,X+

    // C40D: CMPX $4AFA
    cpu.compare_x(cpu.read_memory_word(0x4AFA));

    // C410: BCS $00A0
    if (cpu.carry_flag()) cpu.state_.pc = 0xC4B2;

    // C413: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C416: BEQ $00E6
    if (cpu.zero_flag()) cpu.state_.pc = 0xC4FE;

    // C418: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.a);

    // C41B: LDX #$4500
    cpu.state_.x = 0x4500;

    // C41E: LDU #$4C00
    cpu.state_.u = 0x4C00;

    // C421: LDD ,X++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.x++);

    // C423: STD ,U++
    cpu.write_memory(cpu.state_.u++, cpu.state_.d);

    // C425: CMPX #$4600
    cpu.compare_x(0x4600);

    // C428: BCS $00B8
    if (cpu.carry_flag()) cpu.state_.pc = 0xC4E2;

    // C42A: JSR $C6B8
    cpu.call_function(0xC6B8);

    // C42D: LDX #$4500
    cpu.state_.x = 0x4500;

    // C430: LDY #$4C00
    cpu.state_.y = 0x4C00;

    // C434: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // C436: LDD ,Y
    // TODO: Complex indexed addressing: ,Y

    // C438: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // C43A: STD ,X++
    cpu.write_memory(cpu.state_.x++, cpu.state_.d);

    // C43C: CMPX #$4600
    cpu.compare_x(0x4600);

    // C43F: BCS $00CB
    if (cpu.carry_flag()) cpu.state_.pc = 0xC50C;

    // C441: LDA $4AFA
    cpu.state_.a = cpu.read_memory(0x4AFA);

    // C444: JSR $C3EE
    cpu.call_function(0xC3EE);

    // C447: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C44A: BEQ $00E6
    if (cpu.zero_flag()) cpu.state_.pc = 0xC532;

    // C44C: JSR $C24E
    cpu.call_function(0xC24E);

    // C450: LDA #$65
    cpu.state_.a = 0x65;

    // C452: JSR $D8DF
    cpu.call_function(0xD8DF);

    // C456: CMPA #$74
    cpu.compare_a(0x74);

    // C458: BCS $00E9
    if (cpu.carry_flag()) cpu.state_.pc = 0xC543;

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

    // C472: BPL $0100
    if (!cpu.negative_flag()) cpu.state_.pc = 0xC574;

    // C474: JSR $C690
    cpu.call_function(0xC690);

    // C477: LDA $4598
    cpu.state_.a = cpu.read_memory(0x4598);

    // C47A: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // C47C: BEQ $0181
    if (cpu.zero_flag()) cpu.state_.pc = 0xC5FF;

    // C47E: LDB #$D5
    cpu.state_.b = 0xD5;

    // C480: JSR $E7C7
    cpu.call_function(0xE7C7);

    // C483: LDA <$AC
    cpu.state_.a = cpu.read_memory(0xAC);

    // C485: ANDA #$40
    cpu.state_.a &= 0x40;

    // C487: BEQ $0181
    if (cpu.zero_flag()) cpu.state_.pc = 0xC60A;

    // C489: LDA $4598
    cpu.state_.a = cpu.read_memory(0x4598);

    // C48C: ANDA #$08
    cpu.state_.a &= 0x08;

    // C48E: BEQ $012F
    if (cpu.zero_flag()) cpu.state_.pc = 0xC5BF;

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

    // C49D: BEQ $0148
    if (cpu.zero_flag()) cpu.state_.pc = 0xC5E7;

    // C49F: LDX #$454E
    cpu.state_.x = 0x454E;

    // C4A2: LDD #$0000
    cpu.state_.d = 0x0000;

    // C4A5: STD ,X++
    cpu.write_memory(cpu.state_.x++, cpu.state_.d);

    // C4A7: CMPX #$458E
    cpu.compare_x(0x458E);

    // C4AA: BCS $013C
    if (cpu.carry_flag()) cpu.state_.pc = 0xC5E8;

    // C4AC: LDA #$02
    cpu.state_.a = 0x02;

    // C4AE: JSR $C2B3
    cpu.call_function(0xC2B3);

    // C4B1: LDA $4598
    cpu.state_.a = cpu.read_memory(0x4598);

    // C4B4: ANDA #$02
    cpu.state_.a &= 0x02;

    // C4B6: BEQ $0171
    if (cpu.zero_flag()) cpu.state_.pc = 0xC629;

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

    // C4D8: BNE $0168
    if (!cpu.zero_flag()) cpu.state_.pc = 0xC642;

    // C4DA: LDA $4598
    cpu.state_.a = cpu.read_memory(0x4598);

    // C4DD: ANDA #$01
    cpu.state_.a &= 0x01;

    // C4DF: BEQ $017B
    if (cpu.zero_flag()) cpu.state_.pc = 0xC65C;

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

    // C4EF: BNE $01B0
    if (!cpu.zero_flag()) cpu.state_.pc = 0xC6A1;

    // C4F1: LDB $487F
    cpu.state_.b = cpu.read_memory(0x487F);

    // C4F4: CMPB #$D0
    cpu.compare_b(0xD0);

    // C4F6: BCC $01B0
    if (!cpu.carry_flag()) cpu.state_.pc = 0xC6A8;

    // C4F8: CMPB #$30
    cpu.compare_b(0x30);

    // C4FA: BLS $01B0
    // TODO: Convert BLS $01B0

    // C4FD: BMI $01A3
    if (cpu.negative_flag()) cpu.state_.pc = 0xC6A2;

    // C4FF: LDB $4AF6
    cpu.state_.b = cpu.read_memory(0x4AF6);

    // C503: BPL $019E
    if (!cpu.negative_flag()) cpu.state_.pc = 0xC6A3;

    // C505: LDB #$0B
    cpu.state_.b = 0x0B;

    // C507: STB $4AF6
    cpu.write_memory(0x4AF6, cpu.state_.b);

    // C50A: BRA $01B0
    cpu.state_.pc = 0xC6BC;

    // C50C: LDB $4AF6
    cpu.state_.b = cpu.read_memory(0x4AF6);

    // C510: CMPB #$0B
    cpu.compare_b(0x0B);

    // C512: BLS $01AD
    // TODO: Convert BLS $01AD

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

    // C535: BEQ $023A
    if (cpu.zero_flag()) cpu.state_.pc = 0xC771;

    // C537: LDB $4AF5
    cpu.state_.b = cpu.read_memory(0x4AF5);

    // C53B: CMPB $4AFA
    cpu.compare_b(cpu.read_memory(0x4AFA));

    // C53E: BLS $01D9
    // TODO: Convert BLS $01D9

    // C540: LDB #$00
    cpu.state_.b = 0x00;

    // C542: STA $4AF5
    cpu.write_memory(0x4AF5, cpu.state_.a);

    // C545: LDA $4AFC
    cpu.state_.a = cpu.read_memory(0x4AFC);

    // C54C: ANDA #$07
    cpu.state_.a &= 0x07;

    // C54F: BMI $01EE
    if (cpu.negative_flag()) cpu.state_.pc = 0xC73F;

    // C552: ASL $4AFA
    // TODO: Convert ASL $4AFA

    // C555: BRA $01E5
    cpu.state_.pc = 0xC73C;

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

    // C568: STA >$0000
    cpu.write_memory(0x0000, cpu.state_.a);

}

} // namespace StarWars