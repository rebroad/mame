#include "cpu_6809.h"

namespace StarWars {

void routine_c413_impl(CPU6809& cpu) {
    // Converted from rom_disasm_c413.md
    // Address: 0xC413

    // C413: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C416: BEQ $C44F
    if (cpu.zero_flag()) cpu.m_pc = 0xC44F;

    // C418: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.m_a);

    // C41B: LDX #$4500
    cpu.m_x = 0x4500;

    // C41E: LDU #$4C00
    cpu.m_u = 0x4C00;

    // C421: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);

    // C423: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);

    // C425: CMPX #$4600
    cpu.compare_x(0x4600);

    // C428: BCS $C421
    if (cpu.carry_flag()) cpu.m_pc = 0xC421;

    // C42A: JSR $C6B8
    cpu.call_function(0xC6B8);

    // C42D: LDX #$4500
    cpu.m_x = 0x4500;

    // C430: LDY #$4C00
    cpu.m_y = 0x4C00;

    // C434: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // C436: LDD ,Y
    // TODO: Complex indexed addressing: ,Y

    // C438: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // C43A: STD ,X++
    cpu.write_memory16(cpu.m_x++, cpu.m_d);

    // C43C: CMPX #$4600
    cpu.compare_x(0x4600);

    // C43F: BCS $C434
    if (cpu.carry_flag()) cpu.m_pc = 0xC434;

    // C441: LDA $4AFA
    cpu.m_a = cpu.read_memory(0x4AFA);

    // C444: JSR $C3EE
    cpu.call_function(0xC3EE);

    // C447: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C44A: BEQ $C44F
    if (cpu.zero_flag()) cpu.m_pc = 0xC44F;

    // C44C: JSR $C24E
    cpu.call_function(0xC24E);

    // C450: LDA #$65
    cpu.m_a = 0x65;

    // C452: JSR $D8DF
    cpu.call_function(0xD8DF);

    // C456: CMPA #$74
    cpu.compare_a(0x74);

    // C458: BCS $C452
    if (cpu.carry_flag()) cpu.m_pc = 0xC452;

    // C45A: LDA #$D4
    cpu.m_a = 0xD4;

    // C45C: JSR $D8DF
    cpu.call_function(0xD8DF);

    // C45F: LDD #$6280
    cpu.m_d = 0x6280;

    // C462: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C464: LDA #$0B
    cpu.m_a = 0x0B;

    // C466: STA $4AFE
    cpu.write_memory(0x4AFE, cpu.m_a);

    // C469: LDA $4AFE
    cpu.m_a = cpu.read_memory(0x4AFE);

    // C46C: JSR $C5A4
    cpu.call_function(0xC5A4);

    // C46F: DEC $4AFE
    // TODO: Convert DEC $4AFE

    // C472: BPL $C469
    if (!cpu.negative_flag()) cpu.m_pc = 0xC469;

    // C474: JSR $C690
    cpu.call_function(0xC690);

    // C477: LDA $4598
    cpu.m_a = cpu.read_memory(0x4598);

    // C47A: ANDA #$0F
    cpu.m_a &= 0x0F;

    // C47C: BEQ $C4EA
    if (cpu.zero_flag()) cpu.m_pc = 0xC4EA;

    // C47E: LDB #$D5
    cpu.m_b = 0xD5;

    // C480: JSR $E7C7
    cpu.call_function(0xE7C7);

    // C483: LDA <$AC
    cpu.m_a = cpu.read_memory(0xAC);

    // C485: ANDA #$40
    cpu.m_a &= 0x40;

    // C487: BEQ $C4EA
    if (cpu.zero_flag()) cpu.m_pc = 0xC4EA;

    // C489: LDA $4598
    cpu.m_a = cpu.read_memory(0x4598);

    // C48C: ANDA #$08
    cpu.m_a &= 0x08;

    // C48E: BEQ $C498
    if (cpu.zero_flag()) cpu.m_pc = 0xC498;

    // C490: LDA #$01
    cpu.m_a = 0x01;

    // C492: JSR $C24E
    cpu.call_function(0xC24E);

    // C495: JSR $CC18
    cpu.call_function(0xCC18);

    // C498: LDA $4598
    cpu.m_a = cpu.read_memory(0x4598);

    // C49B: ANDA #$04
    cpu.m_a &= 0x04;

    // C49D: BEQ $C4B1
    if (cpu.zero_flag()) cpu.m_pc = 0xC4B1;

    // C49F: LDX #$454E
    cpu.m_x = 0x454E;

    // C4A2: LDD #$0000
    cpu.m_d = 0x0000;

    // C4A5: STD ,X++
    cpu.write_memory16(cpu.m_x++, cpu.m_d);

    // C4A7: CMPX #$458E
    cpu.compare_x(0x458E);

    // C4AA: BCS $C4A5
    if (cpu.carry_flag()) cpu.m_pc = 0xC4A5;

    // C4AC: LDA #$02
    cpu.m_a = 0x02;

    // C4AE: JSR $C2B3
    cpu.call_function(0xC2B3);

    // C4B1: LDA $4598
    cpu.m_a = cpu.read_memory(0x4598);

    // C4B4: ANDA #$02
    cpu.m_a &= 0x02;

    // C4B6: BEQ $C4DA
    if (cpu.zero_flag()) cpu.m_pc = 0xC4DA;

    // C4B8: LDA #$00
    cpu.m_a = 0x00;

    // C4BA: JSR $C24E
    cpu.call_function(0xC24E);

    // C4BD: LDX #$C7B6
    cpu.m_x = 0xC7B6;

    // C4C0: LDB $0003,X
    // TODO: Fix comma operator: LDB $0003,X

    // C4C4: LDX #$4500
    cpu.m_x = 0x4500;

    // C4C8: LDU #$4500
    cpu.m_u = 0x4500;

    // C4CB: LDB $C7B7
    cpu.m_b = cpu.read_memory(0xC7B7);

    // C4CE: STB $4B02
    cpu.write_memory(0x4B02, cpu.m_b);

    // C4D1: LDB ,U+
    // TODO: Complex indexed addressing: ,U+

    // C4D3: STB ,X+
    // TODO: Handle indexed addressing: STB ,X+

    // C4D5: DEC $4B02
    // TODO: Convert DEC $4B02

    // C4D8: BNE $C4D1
    if (!cpu.zero_flag()) cpu.m_pc = 0xC4D1;

    // C4DA: LDA $4598
    cpu.m_a = cpu.read_memory(0x4598);

    // C4DD: ANDA #$01
    cpu.m_a &= 0x01;

    // C4DF: BEQ $C4E4
    if (cpu.zero_flag()) cpu.m_pc = 0xC4E4;

    // C4E1: JSR $C5F2
    cpu.call_function(0xC5F2);

    // C4E4: LDD #$0000
    cpu.m_d = 0x0000;

    // C4E7: STD $4598
    cpu.write_memory16(0x4598, cpu.m_d);

    // C4EB: LDB <$43
    cpu.m_b = cpu.read_memory(0x43);

    // C4ED: ANDB #$0F
    cpu.m_b &= 0x0F;

    // C4EF: BNE $C519
    if (!cpu.zero_flag()) cpu.m_pc = 0xC519;

    // C4F1: LDB $487F
    cpu.m_b = cpu.read_memory(0x487F);

    // C4F4: CMPB #$D0
    cpu.compare_b(0xD0);

    // C4F6: BCC $C519
    if (!cpu.carry_flag()) cpu.m_pc = 0xC519;

    // C4F8: CMPB #$30
    cpu.compare_b(0x30);

    // C4FA: BLS $C519
    // TODO: Convert BLS $C519

    // C4FD: BMI $C50C
    if (cpu.negative_flag()) cpu.m_pc = 0xC50C;

    // C4FF: LDB $4AF6
    cpu.m_b = cpu.read_memory(0x4AF6);

    // C503: BPL $C507
    if (!cpu.negative_flag()) cpu.m_pc = 0xC507;

    // C505: LDB #$0B
    cpu.m_b = 0x0B;

    // C507: STB $4AF6
    cpu.write_memory(0x4AF6, cpu.m_b);

    // C50A: BRA $C519
    cpu.m_pc = 0xC519;

    // C50C: LDB $4AF6
    cpu.m_b = cpu.read_memory(0x4AF6);

    // C510: CMPB #$0B
    cpu.compare_b(0x0B);

    // C512: BLS $C516
    // TODO: Convert BLS $C516

    // C514: LDB #$00
    cpu.m_b = 0x00;

    // C516: STB $4AF6
    cpu.write_memory(0x4AF6, cpu.m_b);

    // C519: LDX #$C797
    cpu.m_x = 0xC797;

    // C51C: LDA $4AF6
    cpu.m_a = cpu.read_memory(0x4AF6);

    // C51F: LDB A,X
    // TODO: Fix comma operator: LDB A,X

    // C521: STB $4AFC
    cpu.write_memory(0x4AFC, cpu.m_b);

    // C527: ANDB #$03
    cpu.m_b &= 0x03;

    // C529: LDX #$C737
    cpu.m_x = 0xC737;

    // C52C: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // C52E: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.m_a);

    // C531: LDB <$AC
    cpu.m_b = cpu.read_memory(0xAC);

    // C533: ANDB #$80
    cpu.m_b &= 0x80;

    // C535: BEQ $C5A3
    if (cpu.zero_flag()) cpu.m_pc = 0xC5A3;

    // C537: LDB $4AF5
    cpu.m_b = cpu.read_memory(0x4AF5);

    // C53B: CMPB $4AFA
    cpu.compare_b(cpu.read_memory(0x4AFA));

    // C53E: BLS $C542
    // TODO: Convert BLS $C542

    // C540: LDB #$00
    cpu.m_b = 0x00;

    // C542: STA $4AF5
    cpu.write_memory(0x4AF5, cpu.m_a);

    // C545: LDA $4AFC
    cpu.m_a = cpu.read_memory(0x4AFC);

    // C54C: ANDA #$07
    cpu.m_a &= 0x07;

    // C54F: BMI $C557
    if (cpu.negative_flag()) cpu.m_pc = 0xC557;

    // C552: ASL $4AFA
    // TODO: Convert ASL $4AFA

    // C555: BRA $C54E
    cpu.m_pc = 0xC54E;

    // C557: LDA $4AFC
    cpu.m_a = cpu.read_memory(0x4AFC);

    // C55A: ANDA #$07
    cpu.m_a &= 0x07;

    // C55D: LDX #$4590
    cpu.m_x = 0x4590;

    // C560: LEAX A,X
    // TODO: Fix comma operator: LEAX A,X

    // C562: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // C568: STA $4AFB
    cpu.write_memory(0x4AFB, cpu.m_a);

    // C56B: LDA $1,X
    // TODO: Fix comma operator: LDA $1,X

    // C56D: ANDA #$0F
    cpu.m_a &= 0x0F;

    // C56F: ADDA $4AFB
    cpu.m_a += 0x4AFB;

    // C572: STA $4AFB
    cpu.write_memory(0x4AFB, cpu.m_a);

    // C575: EORB $4AFB
    cpu.m_b ^= 0x4AFB;

    // C578: ANDB $4AFA
    cpu.m_b &= 0x4AFA;

    // C57B: EORB $4AFB
    cpu.m_b ^= 0x4AFB;

    // C57E: STB $1,X
    // TODO: Handle indexed addressing: STB $1,X

    // C584: STB ,X
    // TODO: Handle indexed addressing: STB ,X

    // C586: LDA #$03
    cpu.m_a = 0x03;

    // C588: JSR $C2B3
    cpu.call_function(0xC2B3);

    // C58B: LDX #$4500
    cpu.m_x = 0x4500;

    // C58E: LDU #$4C00
    cpu.m_u = 0x4C00;

    // C591: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);

    // C593: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);

    // C595: CMPX #$45FF
    cpu.compare_x(0x45FF);

    // C598: BCS $C591
    if (cpu.carry_flag()) cpu.m_pc = 0xC591;

    // C59A: JSR $C3A7
    cpu.call_function(0xC3A7);

    // C59D: LDA $4AF6
    cpu.m_a = cpu.read_memory(0x4AF6);

    // C5A0: JSR $C5A4
    cpu.call_function(0xC5A4);

    // C5A4: LDX #$C797
    cpu.m_x = 0xC797;

    // C5A7: LDB A,X
    // TODO: Fix comma operator: LDB A,X

    // C5A9: STB $4AFA
    cpu.write_memory(0x4AFA, cpu.m_b);

    // C5AC: ANDB #$07
    cpu.m_b &= 0x07;

    // C5AE: LDX #$4590
    cpu.m_x = 0x4590;

    // C5B3: LDB $4AFA
    cpu.m_b = cpu.read_memory(0x4AFA);

    // C5B9: STB $4AFA
    cpu.write_memory(0x4AFA, cpu.m_b);

    // C5BC: ANDB #$03
    cpu.m_b &= 0x03;

    // C5BE: LDU #$C737
    cpu.m_u = 0xC737;

    // C5C1: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // C5C3: LDB $4AFA
    cpu.m_b = cpu.read_memory(0x4AFA);

    // C5C8: STB $4AFA
    cpu.write_memory(0x4AFA, cpu.m_b);

    // C5CB: LDB ,X
    // TODO: Complex indexed addressing: ,X

    // C5D1: STB $4AFB
    cpu.write_memory(0x4AFB, cpu.m_b);

    // C5D4: LDB $1,X
    // TODO: Fix comma operator: LDB $1,X

    // C5D6: ANDB #$0F
    cpu.m_b &= 0x0F;

    // C5D8: ADDB $4AFB
    cpu.m_b += 0x4AFB;

    // C5DB: DEC $4AFA
    // TODO: Convert DEC $4AFA

    // C5DE: BMI $C5E3
    if (cpu.negative_flag()) cpu.m_pc = 0xC5E3;

    // C5E1: BRA $C5DB
    cpu.m_pc = 0xC5DB;

    // C5E3: ANDB ,U
    // TODO: Complex indexed addressing: ,U

    // C5E5: STB $4AF5
    cpu.write_memory(0x4AF5, cpu.m_b);

    // C5E8: LDX #$C7F1
    cpu.m_x = 0xC7F1;

    // C5EB: LEAX A,X
    // TODO: Fix comma operator: LEAX A,X

    // C5ED: ADDB ,X
    // TODO: Complex indexed addressing: ,X

    // C5EF: JMP $E7D3
    cpu.m_pc = 0xE7D3;

    // C5F2: LDX #$4500
    cpu.m_x = 0x4500;

    // C5F5: LDU #$4C00
    cpu.m_u = 0x4C00;

    // C5F8: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);

    // C5FA: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);

    // C5FC: CMPX #$4600
    cpu.compare_x(0x4600);

    // C5FF: BCS $C5F8
    if (cpu.carry_flag()) cpu.m_pc = 0xC5F8;

    // C601: LDX #$4500
    cpu.m_x = 0x4500;

    // C604: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // C607: STA ,X+
    // TODO: Handle indexed addressing: STA ,X+

    // C609: CMPX #$4600
    cpu.compare_x(0x4600);

    // C60C: BCS $C604
    if (cpu.carry_flag()) cpu.m_pc = 0xC604;

    // C60E: STA $46A0
    cpu.write_memory(0x46A0, cpu.m_a);

    // C611: JSR $C600
    cpu.call_function(0xC600);

}

} // namespace StarWars