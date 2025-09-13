#include "cpu_6809.h"

namespace StarWars {

void routine_65bd_666f_impl(CPU6809& cpu) {
    // Converted from rom_disasm_65bd_666f.md
    // Address: 0x65BD_666F

    label_65BD:
    // 65BD: JSR $6112
    cpu.call_function(0x6112);

    // 65C0: LDX #$6593
    cpu.m_x = 0x6593;

    // 65C3: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);

    // 65C5: ANDA #$1F
    cpu.m_a &= 0x1F;

    // 65C7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 65C9: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);

    // 65CB: ANDA #$1F
    cpu.m_a &= 0x1F;

    // 65CD: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 65CF: LDD #$7200
    cpu.m_d = 0x7200;

    // 65D2: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 65D4: LDD #$BE50
    cpu.m_d = 0xBE50;

    // 65D7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 65D9: CMPX #$659F
    cpu.compare_x(0x659F);

    // 65DC: BCS $65C3
    if (cpu.carry_flag()) cpu.m_pc = 0x65C3;

    // 65DE: LDA <$DD
    cpu.m_a = cpu.read_memory(0xDD);

    // 65E0: BPL $65E7
    if (!cpu.negative_flag()) cpu.m_pc = 0x65E7;

    // 65E2: LDD #$6380
    cpu.m_d = 0x6380;

    // 65E5: BRA $65EA
    goto label_65EA;

    // 65E7: LDD #$6680
    cpu.m_d = 0x6680;

    label_65EA:
    // 65EA: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 65EC: JSR $B6C0
    cpu.call_function(0xB6C0);

    // 65EF: JSR $D923
    cpu.call_function(0xD923);

    // 65F2: LDD #$00C8
    cpu.m_d = 0x00C8;

    // 65F5: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 65F7: LDD #$1FF0
    cpu.m_d = 0x1FF0;

    // 65FA: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 65FC: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 6605: CMPA #$0A
    cpu.compare_a(0x0A);

    // 6607: BCS $660B
    if (cpu.carry_flag()) cpu.m_pc = 0x660B;

    // 6609: ADDA #$06
    cpu.m_a += 0x06;

    // 660B: JSR $E790
    cpu.call_function(0xE790);

    // 660E: JSR $612F
    cpu.call_function(0x612F);

    // 6611: LDA #$FF
    cpu.m_a = 0xFF;

    // 6613: STA <$DD
    cpu.write_memory(0xDD, cpu.m_a);

    // 6615: LDX #$6593
    cpu.m_x = 0x6593;

    // 6618: LDD <$7B
    cpu.m_d = cpu.read_memory16(0x7B);

    // 661A: ADDD #$FF98
    cpu.m_d += 0xFF98;

    // 661D: SUBD ,X
    // TODO: Complex indexed addressing: ,X

    // 6620: BPL $6626
    if (!cpu.negative_flag()) cpu.m_pc = 0x6626;

    // 6624: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6626: STD $4AFA
    cpu.write_memory16(0x4AFA, cpu.m_d);

    // 6629: CMPD #$0048
    // TODO: Convert CMPD #$0048

    // 662D: BCC $6668
    if (!cpu.carry_flag()) cpu.m_pc = 0x6668;

    // 662F: LDD <$79
    cpu.m_d = cpu.read_memory16(0x79);

    // 6631: SUBD $2,X
    // TODO: Fix comma operator: SUBD $2,X

    // 6634: BPL $663A
    if (!cpu.negative_flag()) cpu.m_pc = 0x663A;

    // 6638: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 663A: CMPD #$0034
    // TODO: Convert CMPD #$0034

    // 663E: BCC $6668
    if (!cpu.carry_flag()) cpu.m_pc = 0x6668;

    // 6640: ADDD $4AFA
    cpu.m_d += 0x4AFA;

    // 6643: CMPD #$0050
    // TODO: Convert CMPD #$0050

    // 6647: BCC $6668
    if (!cpu.carry_flag()) cpu.m_pc = 0x6668;

    // 6649: TFR X,D
    cpu.m_d = cpu.m_x;

    // 664B: SUBD #$6593
    cpu.m_d -= 0x6593;

    // 664F: STB <$DD
    cpu.write_memory(0xDD, cpu.m_b);

    // 6651: STB $4B15
    cpu.write_memory(0x4B15, cpu.m_b);

    // 6654: LDA <$AC
    cpu.m_a = cpu.read_memory(0xAC);

    // 6656: ANDA #$F0
    cpu.m_a &= 0xF0;

    // 6658: BEQ $6667
    if (cpu.zero_flag()) cpu.m_pc = 0x6667;

    // 665A: LDA #$1B
    cpu.m_a = 0x1B;

    // 665C: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 665E: CLR $481B
    cpu.write_memory(0x481B, 0);

    // 6661: CLR $481A
    cpu.write_memory(0x481A, 0);

    // 6664: CLR $4819
    cpu.write_memory(0x4819, 0);

    // 6668: LEAX $4,X
    // TODO: Fix comma operator: LEAX $4,X

    // 666A: CMPX #$659F
    cpu.compare_x(0x659F);

    // 666D: BCS $6618
    if (cpu.carry_flag()) cpu.m_pc = 0x6618;

}

} // namespace StarWars