#include "cpu_6809.h"

namespace StarWars {

void routine_c542_c65b_impl(CPU6809& cpu) {
    // Converted from rom_disasm_c542_c65b.md
    // Address: 0xC542_C65B

    label_C542:
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
    goto label_C54E;

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

    label_C5DB:
    // C5DB: DEC $4AFA
    // TODO: Convert DEC $4AFA

    // C5DE: BMI $C5E3
    if (cpu.negative_flag()) cpu.m_pc = 0xC5E3;

    // C5E1: BRA $C5DB
    goto label_C5DB;

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
    goto label_E7D3;

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

    // C611: JSR $C688
    cpu.call_function(0xC688);

    // C614: JSR $C67A
    cpu.call_function(0xC67A);

    // C617: JSR $C6B8
    cpu.call_function(0xC6B8);

    // C61A: LDX #$4500
    cpu.m_x = 0x4500;

    // C61D: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // C620: STA ,X+
    // TODO: Handle indexed addressing: STA ,X+

    // C622: CMPX #$4600
    cpu.compare_x(0x4600);

    // C625: BCS $C61D
    if (cpu.carry_flag()) cpu.m_pc = 0xC61D;

    // C627: STA $46A0
    cpu.write_memory(0x46A0, cpu.m_a);

    // C62A: JSR $C688
    cpu.call_function(0xC688);

    // C62D: JSR $C641
    cpu.call_function(0xC641);

    // C630: BNE $C65B
    if (!cpu.zero_flag()) cpu.m_pc = 0xC65B;

    // C632: JSR $C67A
    cpu.call_function(0xC67A);

    // C635: JSR $C6B8
    cpu.call_function(0xC6B8);

    // C638: JSR $C641
    cpu.call_function(0xC641);

    // C63B: BEQ $C640
    if (cpu.zero_flag()) cpu.m_pc = 0xC640;

    // C63D: JMP $C65B
    goto label_C65B;

    // C641: LDX #$4500
    cpu.m_x = 0x4500;

    // C644: LDU #$4C00
    cpu.m_u = 0x4C00;

    // C647: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C649: EORA ,U+
    // TODO: Complex indexed addressing: ,U+

    // C64B: ANDA #$0F
    cpu.m_a &= 0x0F;

    // C64D: BNE $C65A
    if (!cpu.zero_flag()) cpu.m_pc = 0xC65A;

    // C64F: CMPX #$4600
    cpu.compare_x(0x4600);

    // C652: BCS $C647
    if (cpu.carry_flag()) cpu.m_pc = 0xC647;

    // C654: LDA #$01
    cpu.m_a = 0x01;

    // C656: STA $4AF7
    cpu.write_memory(0x4AF7, cpu.m_a);

    label_C65B:
    // C65B: JMP $c65b
    goto label_C65B;

}

} // namespace StarWars