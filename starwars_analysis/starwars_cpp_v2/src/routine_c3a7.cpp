#include "cpu_6809.h"

namespace StarWars {

void routine_c3a7_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_c3a7.md
    // Address: 0xC3A7

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

    // C3C4: BNE $0016
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0016;

    // C3C6: LDA #$02
    cpu.state_.a = 0x02;

    // C3C8: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C3CB: BEQ $0031
    if (cpu.zero_flag()) cpu.state_.pc += 0x0031;

    // C3CD: JSR $C3EE
    cpu.call_function(0xC3EE);

    // C3D0: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C3D3: BEQ $0031
    if (cpu.zero_flag()) cpu.state_.pc += 0x0031;

    // C3D5: JSR $C24E
    cpu.call_function(0xC24E);

    // C3D9: BNE $0021
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0021;

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

    // C410: BCS $0062
    if (cpu.carry_flag()) cpu.state_.pc += 0x0062;

    // C413: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C416: BEQ $00A8
    if (cpu.zero_flag()) cpu.state_.pc += 0x00A8;

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

    // C428: BCS $007A
    if (cpu.carry_flag()) cpu.state_.pc += 0x007A;

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

    // C43F: BCS $008D
    if (cpu.carry_flag()) cpu.state_.pc += 0x008D;

    // C441: LDA $4AFA
    cpu.state_.a = cpu.read_memory(0x4AFA);

    // C444: JSR $C3EE
    cpu.call_function(0xC3EE);

    // C447: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C44A: BEQ $00A8
    if (cpu.zero_flag()) cpu.state_.pc += 0x00A8;

    // C44C: JSR $C24E
    cpu.call_function(0xC24E);

    // C450: LDA #$65
    cpu.state_.a = 0x65;

    // C452: JSR $D8DF
    cpu.call_function(0xD8DF);

    // C456: CMPA #$74
    cpu.compare_a(0x74);

    // C458: BCS $00AB
    if (cpu.carry_flag()) cpu.state_.pc += 0x00AB;

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

    // C472: BPL $00C2
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00C2;

    // C474: JSR $C690
    cpu.call_function(0xC690);

    // C477: LDA $4598
    cpu.state_.a = cpu.read_memory(0x4598);

    // C47A: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // C47C: BEQ $0143
    if (cpu.zero_flag()) cpu.state_.pc += 0x0143;

    // C47E: LDB #$D5
    cpu.state_.b = 0xD5;

    // C480: JSR $E7C7
    cpu.call_function(0xE7C7);

    // C483: LDA <$AC
    cpu.state_.a = cpu.read_memory(0xAC);

    // C485: ANDA #$40
    cpu.state_.a &= 0x40;

    // C487: BEQ $0143
    if (cpu.zero_flag()) cpu.state_.pc += 0x0143;

    // C489: LDA $4598
    cpu.state_.a = cpu.read_memory(0x4598);

    // C48C: ANDA #$08
    cpu.state_.a &= 0x08;

    // C48E: BEQ $00F1
    if (cpu.zero_flag()) cpu.state_.pc += 0x00F1;

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

    // C49D: BEQ $010A
    if (cpu.zero_flag()) cpu.state_.pc += 0x010A;

    // C49F: LDX #$454E
    cpu.state_.x = 0x454E;

    // C4A2: LDD #$0000
    cpu.state_.d = 0x0000;

    // C4A5: STD ,X++
    cpu.write_memory(cpu.state_.x++, cpu.state_.d);

    // C4A7: CMPX #$458E
    cpu.compare_x(0x458E);

    // C4AA: BCS $00FE
    if (cpu.carry_flag()) cpu.state_.pc += 0x00FE;

    // C4AC: LDA #$02
    cpu.state_.a = 0x02;

    // C4AE: JSR $C2B3
    cpu.call_function(0xC2B3);

    // C4B1: LDA $4598
    cpu.state_.a = cpu.read_memory(0x4598);

    // C4B4: ANDA #$02
    cpu.state_.a &= 0x02;

    // C4B6: BEQ $0133
    if (cpu.zero_flag()) cpu.state_.pc += 0x0133;

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

    // C4D8: BNE $012A
    if (!cpu.zero_flag()) cpu.state_.pc += 0x012A;

    // C4DA: LDA $4598
    cpu.state_.a = cpu.read_memory(0x4598);

    // C4DD: ANDA #$01
    cpu.state_.a &= 0x01;

    // C4DF: BEQ $013D
    if (cpu.zero_flag()) cpu.state_.pc += 0x013D;

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

    // C4EF: BNE $0172
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0172;

    // C4F1: LDB $487F
    cpu.state_.b = cpu.read_memory(0x487F);

    // C4F4: CMPB #$D0
    cpu.compare_b(0xD0);

    // C4F6: BCC $0172
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0172;

    // C4F8: CMPB #$30
    cpu.compare_b(0x30);

    // C4FA: BLS $0172
    // TODO: Convert BLS $0172

    // C4FD: BMI $0165
    if (cpu.negative_flag()) cpu.state_.pc += 0x0165;

    // C4FF: LDB $4AF6
    cpu.state_.b = cpu.read_memory(0x4AF6);

    // C503: BPL $0160
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0160;

    // C505: LDB #$0B
    cpu.state_.b = 0x0B;

    // C507: STB $4AF6
    cpu.write_memory(0x4AF6, cpu.state_.b);

    // C50A: BRA $0172
    cpu.state_.pc += 0x0172;

    // C50C: LDB $4AF6
    cpu.state_.b = cpu.read_memory(0x4AF6);

    // C510: CMPB #$0B
    cpu.compare_b(0x0B);

    // C512: BLS $016F
    // TODO: Convert BLS $016F

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

    // C535: BEQ $01FC
    if (cpu.zero_flag()) cpu.state_.pc += 0x01FC;

    // C537: LDB $4AF5
    cpu.state_.b = cpu.read_memory(0x4AF5);

    // C53B: CMPB $4AFA
    cpu.compare_b(cpu.read_memory(0x4AFA));

    // C53E: BLS $019B
    // TODO: Convert BLS $019B

    // C540: LDB #$00
    cpu.state_.b = 0x00;

    // C542: STA $4AF5
    cpu.write_memory(0x4AF5, cpu.state_.a);

    // C545: LDA $4AFC
    cpu.state_.a = cpu.read_memory(0x4AFC);

    // C54C: ANDA #$07
    cpu.state_.a &= 0x07;

    // C54F: BMI $01B0
    if (cpu.negative_flag()) cpu.state_.pc += 0x01B0;

    // C552: ASL $4AFA
    // TODO: Convert ASL $4AFA

    // C555: BRA $01A7
    cpu.state_.pc += 0x01A7;

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

    // C598: BCS $01EA
    if (cpu.carry_flag()) cpu.state_.pc += 0x01EA;

    // C59A: JSR $C3A7
    cpu.call_function(0xC3A7);

    // C59D: LDA $4AF6
    cpu.state_.a = cpu.read_memory(0x4AF6);

    // C5A0: JSR $C5A4
    cpu.call_function(0xC5A4);

    // C5A4: LDX #$C797
    cpu.state_.x = 0xC797;

}

} // namespace StarWars