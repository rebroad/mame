#include "cpu_6809.h"

namespace StarWars {

void routine_c4eb_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_c4eb.md
    // Address: 0xC4EB

    // C4EB: LDB <$43
    cpu.state_.b = cpu.read_memory(0x43);

    // C4ED: ANDB #$0F
    cpu.state_.b &= 0x0F;

    // C4EF: BNE $002E
    if (!cpu.zero_flag()) cpu.state_.pc += 0x002E;

    // C4F1: LDB $487F
    cpu.state_.b = cpu.read_memory(0x487F);

    // C4F4: CMPB #$D0
    cpu.compare_b(0xD0);

    // C4F6: BCC $002E
    if (!cpu.carry_flag()) cpu.state_.pc += 0x002E;

    // C4F8: CMPB #$30
    cpu.compare_b(0x30);

    // C4FA: BLS $002E
    // TODO: Convert BLS $002E

    // C4FD: BMI $0021
    if (cpu.negative_flag()) cpu.state_.pc += 0x0021;

    // C4FF: LDB $4AF6
    cpu.state_.b = cpu.read_memory(0x4AF6);

    // C503: BPL $001C
    if (!cpu.negative_flag()) cpu.state_.pc += 0x001C;

    // C505: LDB #$0B
    cpu.state_.b = 0x0B;

    // C507: STB $4AF6
    cpu.write_memory(0x4AF6, cpu.state_.b);

    // C50A: BRA $002E
    cpu.state_.pc += 0x002E;

    // C50C: LDB $4AF6
    cpu.state_.b = cpu.read_memory(0x4AF6);

    // C510: CMPB #$0B
    cpu.compare_b(0x0B);

    // C512: BLS $002B
    // TODO: Convert BLS $002B

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

    // C535: BEQ $00B8
    if (cpu.zero_flag()) cpu.state_.pc += 0x00B8;

    // C537: LDB $4AF5
    cpu.state_.b = cpu.read_memory(0x4AF5);

    // C53B: CMPB $4AFA
    cpu.compare_b(cpu.read_memory(0x4AFA));

    // C53E: BLS $0057
    // TODO: Convert BLS $0057

    // C540: LDB #$00
    cpu.state_.b = 0x00;

    // C542: STA $4AF5
    cpu.write_memory(0x4AF5, cpu.state_.a);

    // C545: LDA $4AFC
    cpu.state_.a = cpu.read_memory(0x4AFC);

    // C54C: ANDA #$07
    cpu.state_.a &= 0x07;

    // C54F: BMI $006C
    if (cpu.negative_flag()) cpu.state_.pc += 0x006C;

    // C552: ASL $4AFA
    // TODO: Convert ASL $4AFA

    // C555: BRA $0063
    cpu.state_.pc += 0x0063;

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

    // C598: BCS $00A6
    if (cpu.carry_flag()) cpu.state_.pc += 0x00A6;

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

    // C5DE: BMI $00F8
    if (cpu.negative_flag()) cpu.state_.pc += 0x00F8;

    // C5E1: BRA $00F0
    cpu.state_.pc += 0x00F0;

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

    // C5FF: BCS $010D
    if (cpu.carry_flag()) cpu.state_.pc += 0x010D;

    // C601: LDX #$4500
    cpu.state_.x = 0x4500;

    // C604: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // C607: STA ,X+
    // TODO: Handle indexed addressing: STA ,X+

    // C609: CMPX #$4600
    cpu.compare_x(0x4600);

    // C60C: BCS $0119
    if (cpu.carry_flag()) cpu.state_.pc += 0x0119;

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

    // C625: BCS $0132
    if (cpu.carry_flag()) cpu.state_.pc += 0x0132;

    // C627: STA $46A0
    cpu.write_memory(0x46A0, cpu.state_.a);

    // C62A: JSR $C688
    cpu.call_function(0xC688);

    // C62D: JSR $C641
    cpu.call_function(0xC641);

    // C630: BNE $0170
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0170;

    // C632: JSR $C67A
    cpu.call_function(0xC67A);

    // C635: JSR $C6B8
    cpu.call_function(0xC6B8);

    // C638: JSR $C641
    cpu.call_function(0xC641);

    // C63B: BEQ $0155
    if (cpu.zero_flag()) cpu.state_.pc += 0x0155;

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

    // C64D: BNE $016F
    if (!cpu.zero_flag()) cpu.state_.pc += 0x016F;

    // C64F: CMPX #$4600
    cpu.compare_x(0x4600);

    // C652: BCS $015C
    if (cpu.carry_flag()) cpu.state_.pc += 0x015C;

    // C654: LDA #$01
    cpu.state_.a = 0x01;

    // C656: STA $4AF7
    cpu.write_memory(0x4AF7, cpu.state_.a);

    // C65B: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // C65D: TFR X,D
    cpu.state_.d = cpu.state_.x;

    // C65F: STD $4AF8
    cpu.write_memory(0x4AF8, cpu.state_.d);

    // C662: LDA #$FF
    cpu.state_.a = 0xFF;

    // C664: STA $4AF7
    cpu.write_memory(0x4AF7, cpu.state_.a);

    // C667: LDX #$4500
    cpu.state_.x = 0x4500;

    // C66A: LDU #$4C00
    cpu.state_.u = 0x4C00;

    // C66D: LDD ,U++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.u++);

    // C66F: STD ,X++
    cpu.write_memory(cpu.state_.x++, cpu.state_.d);

    // C671: CMPX #$4600
    cpu.compare_x(0x4600);

    // C674: BCS $0182
    if (cpu.carry_flag()) cpu.state_.pc += 0x0182;

    // C676: TST $4AF7
    // TODO: Convert TST $4AF7

    // C67A: LDX #$4500
    cpu.state_.x = 0x4500;

    // C67D: LDD #$0000
    cpu.state_.d = 0x0000;

    // C680: STD ,X++
    cpu.write_memory(cpu.state_.x++, cpu.state_.d);

    // C682: CMPX #$4600
    cpu.compare_x(0x4600);

    // C685: BCS $0195
    if (cpu.carry_flag()) cpu.state_.pc += 0x0195;

    // C688: LDX #$07D0
    cpu.state_.x = 0x07D0;

    // C68B: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // C68D: BNE $01A0
    if (!cpu.zero_flag()) cpu.state_.pc += 0x01A0;

    // C690: LDA $4AF7
    cpu.state_.a = cpu.read_memory(0x4AF7);

    // C693: BEQ $01CC
    if (cpu.zero_flag()) cpu.state_.pc += 0x01CC;

    // C695: CMPA #$01
    cpu.compare_a(0x01);

    // C697: BNE $01B2
    if (!cpu.zero_flag()) cpu.state_.pc += 0x01B2;

    // C699: LDB #$9C
    cpu.state_.b = 0x9C;

    // C69B: BRA $01C9
    cpu.state_.pc += 0x01C9;

    // C69D: LDD #$1F6A
    cpu.state_.d = 0x1F6A;

    // C6A0: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C6A2: LDD #$01A4
    cpu.state_.d = 0x01A4;

    // C6A5: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C6A7: LDA $4AF9
    cpu.state_.a = cpu.read_memory(0x4AF9);

    // C6AA: JSR $E790
    cpu.call_function(0xE790);

    // C6AD: LDD #$8040
    cpu.state_.d = 0x8040;

    // C6B0: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C6B2: LDB #$9D
    cpu.state_.b = 0x9D;

    // C6B4: JSR $E7C7
    cpu.call_function(0xE7C7);

    // C6B8: LDA #$FF
    cpu.state_.a = 0xFF;

    // C6BA: STA $4687
    cpu.write_memory(0x4687, cpu.state_.a);

    // C6BD: JSR $6005
    cpu.call_function(0x6005);

    // C6C0: LDA #$00
    cpu.state_.a = 0x00;

    // C6C2: STA $4687
    cpu.write_memory(0x4687, cpu.state_.a);

    // C6C5: LDU #$0000
    cpu.state_.u = 0x0000;

    // C6C8: JSR $6005
    cpu.call_function(0x6005);

    // C6CB: LEAU $1,U
    // TODO: Fix comma operator: LEAU $1,U

    // C6CD: CMPU #$0020
    // TODO: Convert CMPU #$0020

    // C6D1: BCS $01DD
    if (cpu.carry_flag()) cpu.state_.pc += 0x01DD;

    // C6D4: LDU #$4AFA
    cpu.state_.u = 0x4AFA;

    // C6D7: LDA #$03
    cpu.state_.a = 0x03;

    // C6D9: STA $4B02
    cpu.write_memory(0x4B02, cpu.state_.a);

    // C6DC: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C6E2: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // C6E4: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C6E6: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // C6E8: ADDA ,U
    // TODO: Complex indexed addressing: ,U

    // C6EA: STA $0,X
    // TODO: Handle indexed addressing: STA $0,X

}

} // namespace StarWars