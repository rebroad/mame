#include "cpu_6809.h"

namespace StarWars {

void routine_8408_impl(CPU6809& cpu) {
    // Converted from rom_disasm_8408.md
    // Address: 0x8408

    // 8408: LDU $49B3
    cpu.m_u = cpu.read_memory16(0x49B3);

    // 840B: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 840D: CMPB #$01
    cpu.compare_b(0x01);

    // 840F: BNE $8416
    if (!cpu.zero_flag()) cpu.m_pc = 0x8416;

    // 8411: LDD #$0800
    cpu.m_d = 0x0800;

    // 8414: BRA $8419
    cpu.m_pc = 0x8419;

    // 8416: LDD #$1000
    cpu.m_d = 0x1000;

    // 8419: ADDD $49B5
    cpu.m_d += 0x49B5;

    // 841C: STD $49B5
    cpu.write_memory16(0x49B5, cpu.m_d);

    // 841F: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8421: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8423: CMPB #$05
    cpu.compare_b(0x05);

    // 8425: BNE $8431
    if (!cpu.zero_flag()) cpu.m_pc = 0x8431;

    // 8427: LDU $49AB
    cpu.m_u = cpu.read_memory16(0x49AB);

    // 842A: LEAU $2,U
    // TODO: Fix comma operator: LEAU $2,U

    // 842C: STU $49AB
    cpu.write_memory16(0x49AB, cpu.m_u);

    // 842F: LDU ,U
    // TODO: Complex indexed addressing: ,U

    // 8431: STU $49B3
    cpu.write_memory16(0x49B3, cpu.m_u);

    // 8434: LDU $49B3
    cpu.m_u = cpu.read_memory16(0x49B3);

    // 8437: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8439: CMPB #$03
    cpu.compare_b(0x03);

    // 843B: BNE $8447
    if (!cpu.zero_flag()) cpu.m_pc = 0x8447;

    // 843D: LDD $49B5
    cpu.m_d = cpu.read_memory16(0x49B5);

    // 8440: STD <$93
    cpu.write_memory16(0x93, cpu.m_d);

    // 8442: LDA #$FF
    cpu.m_a = 0xFF;

    // 8444: STA <$92
    cpu.write_memory(0x92, cpu.m_a);

    // 8447: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8449: CMPB #$04
    cpu.compare_b(0x04);

    // 844B: BNE $846A
    if (!cpu.zero_flag()) cpu.m_pc = 0x846A;

    // 844D: LDD $49B5
    cpu.m_d = cpu.read_memory16(0x49B5);

    // 8450: STD <$96
    cpu.write_memory16(0x96, cpu.m_d);

    // 8452: LDA #$FF
    cpu.m_a = 0xFF;

    // 8454: STA <$95
    cpu.write_memory(0x95, cpu.m_a);

    // 8456: LDA #$00
    cpu.m_a = 0x00;

    // 8458: STA <$44
    cpu.write_memory(0x44, cpu.m_a);

    // 845A: STA <$45
    cpu.write_memory(0x45, cpu.m_a);

    // 845C: LDA $4B36
    cpu.m_a = cpu.read_memory(0x4B36);

    // 845F: BNE $846A
    if (!cpu.zero_flag()) cpu.m_pc = 0x846A;

    // 8461: INC $4B36
    // TODO: Convert INC $4B36

    // 8464: JSR $97E3
    cpu.call_function(0x97E3);

    // 8467: LDU $49B3
    cpu.m_u = cpu.read_memory16(0x49B3);

    // 846A: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 846C: CMPB #$01
    cpu.compare_b(0x01);

    // 846E: BNE $8475
    if (!cpu.zero_flag()) cpu.m_pc = 0x8475;

    // 8470: LDD #$0800
    cpu.m_d = 0x0800;

    // 8473: BRA $8478
    cpu.m_pc = 0x8478;

    // 8475: LDD #$1000
    cpu.m_d = 0x1000;

    // 8478: ADDD $49B5
    cpu.m_d += 0x49B5;

    // 847B: STD $49B7
    cpu.write_memory16(0x49B7, cpu.m_d);

    // 847E: LDB $49B5
    cpu.m_b = cpu.read_memory(0x49B5);

    // 8484: ANDB #$0F
    cpu.m_b &= 0x0F;

    // 8486: LDX #$4989
    cpu.m_x = 0x4989;

    // 8489: LDA $1,U
    // TODO: Fix comma operator: LDA $1,U

    // 848B: STA B,X
    // TODO: Handle indexed addressing: STA B,X

    // 848D: LDX #$4999
    cpu.m_x = 0x4999;

    // 8490: LDA $2,U
    // TODO: Fix comma operator: LDA $2,U

    // 8492: STA B,X
    // TODO: Handle indexed addressing: STA B,X

    // 8495: LDA <$45
    cpu.m_a = cpu.read_memory(0x45);

    // 8497: BNE $84B5
    if (!cpu.zero_flag()) cpu.m_pc = 0x84B5;

    // 8499: LDB $4B19
    cpu.m_b = cpu.read_memory(0x4B19);

    // 849C: CMPB #$07
    cpu.compare_b(0x07);

    // 849E: BLS $84A2
    // TODO: Convert BLS $84A2

    // 84A0: LDB #$07
    cpu.m_b = 0x07;

    // 84A3: LDU #$84B6
    cpu.m_u = 0x84B6;

    // 84A6: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // 84A8: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 84AA: ANDA ,U
    // TODO: Complex indexed addressing: ,U

    // 84AC: BNE $84B5
    if (!cpu.zero_flag()) cpu.m_pc = 0x84B5;

    // 84AE: LDA $1,U
    // TODO: Fix comma operator: LDA $1,U

    // 84B0: STA <$9B
    cpu.write_memory(0x9B, cpu.m_a);

    // 84B2: JSR $84C6
    cpu.call_function(0x84C6);

    // 84B6: CLR <$80
    cpu.write_memory(0x80, 0);

    // 84B8: CLR <$60
    cpu.write_memory(0x60, 0);

    // 84BA: CLR <$40
    cpu.write_memory(0x40, 0);

    // 84BC: CLR <$20
    cpu.write_memory(0x20, 0);

    // 84BE: ASR <$60
    // TODO: Convert ASR <$60

    // 84C0: ASR <$20
    // TODO: Convert ASR <$20

    // 84C2: COM <$60
    // TODO: Convert COM <$60

    // 84C4: COM <$20
    // TODO: Convert COM <$20

    // 84C6: LDD #$F800
    cpu.m_d = 0xF800;

    // 84C9: ANDA $5098
    cpu.m_a &= 0x5098;

    // 84CC: ADDA #$24
    cpu.m_a += 0x24;

    // 84CE: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 84D1: LDA $5078
    cpu.m_a = cpu.read_memory(0x5078);

    // 84D7: ANDA #$0F
    cpu.m_a &= 0x0F;

    // 84D9: STA <$99
    cpu.write_memory(0x99, cpu.m_a);

    // 84DB: LDD #$FE00
    cpu.m_d = 0xFE00;

    // 84DE: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // 84E1: LDD #$FC80
    cpu.m_d = 0xFC80;

    // 84E4: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // 84E7: LDX #$4989
    cpu.m_x = 0x4989;

    // 84EA: LDB <$99
    cpu.m_b = cpu.read_memory(0x99);

    // 84EC: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // 84EE: STA <$9A
    cpu.write_memory(0x9A, cpu.m_a);

    // 84F0: ANDA #$C0
    cpu.m_a &= 0xC0;

    // 84F2: CMPA #$C0
    cpu.compare_a(0xC0);

    // 84F4: BNE $8522
    if (!cpu.zero_flag()) cpu.m_pc = 0x8522;

    // 84F6: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // 84F9: SUBD $507C
    cpu.m_d -= 0x507C;

    // 84FC: BLT $8522
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x8522;

    // 84FE: SUBD #$0400
    cpu.m_d -= 0x0400;

    // 8501: BGE $850F
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x850F;

    // 8503: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 8506: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 8508: BCS $850D
    if (cpu.carry_flag()) cpu.m_pc = 0x850D;

    // 850A: JSR $A7F7
    cpu.call_function(0xA7F7);

    // 850D: BRA $8522
    cpu.m_pc = 0x8522;

    // 850F: SUBD #$0400
    cpu.m_d -= 0x0400;

    // 8512: BGE $8522
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8522;

    // 8514: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 8517: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // 851B: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 851D: BCS $8522
    if (cpu.carry_flag()) cpu.m_pc = 0x8522;

    // 851F: JSR $A7F7
    cpu.call_function(0xA7F7);

    // 8522: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // 8525: SUBD #$0400
    cpu.m_d -= 0x0400;

    // 8528: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // 852B: LDA <$9A
    cpu.m_a = cpu.read_memory(0x9A);

    // 852F: BNE $84EE
    if (!cpu.zero_flag()) cpu.m_pc = 0x84EE;

    // 8531: LDD #$FE00
    cpu.m_d = 0xFE00;

    // 8534: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // 8537: LDD #$0380
    cpu.m_d = 0x0380;

    // 853A: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // 853D: LDX #$4999
    cpu.m_x = 0x4999;

    // 8540: LDB <$99
    cpu.m_b = cpu.read_memory(0x99);

    // 8542: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // 8544: STA <$9A
    cpu.write_memory(0x9A, cpu.m_a);

    // 8546: ANDA #$C0
    cpu.m_a &= 0xC0;

    // 8548: CMPA #$C0
    cpu.compare_a(0xC0);

    // 854A: BNE $8578
    if (!cpu.zero_flag()) cpu.m_pc = 0x8578;

    // 854C: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // 854F: SUBD $507C
    cpu.m_d -= 0x507C;

    // 8552: BLT $8578
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x8578;

    // 8554: SUBD #$0400
    cpu.m_d -= 0x0400;

    // 8557: BGE $8565
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8565;

    // 8559: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 855C: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 855E: BCS $8563
    if (cpu.carry_flag()) cpu.m_pc = 0x8563;

    // 8560: JSR $A80B
    cpu.call_function(0xA80B);

    // 8563: BRA $8578
    cpu.m_pc = 0x8578;

    // 8565: SUBD #$0400
    cpu.m_d -= 0x0400;

    // 8568: BGE $8578
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8578;

    // 856A: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 856D: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // 8571: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 8573: BCS $8578
    if (cpu.carry_flag()) cpu.m_pc = 0x8578;

    // 8575: JSR $A80B
    cpu.call_function(0xA80B);

    // 8578: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // 857B: SUBD #$0400
    cpu.m_d -= 0x0400;

    // 857E: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // 8581: LDA <$9A
    cpu.m_a = cpu.read_memory(0x9A);

    // 8585: BNE $8544
    if (!cpu.zero_flag()) cpu.m_pc = 0x8544;

    // 8587: LDD $5078
    cpu.m_d = cpu.read_memory16(0x5078);

    // 858A: ADDD #$0800
    cpu.m_d += 0x0800;

    // 858D: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 8590: SUBD $5098
    cpu.m_d -= 0x5098;

    // 8593: SUBD #$6000
    cpu.m_d -= 0x6000;

    // 8596: LBCS $84D1
    // TODO: Convert LBCS $84D1

    // 859B: LDA $5040
    cpu.m_a = cpu.read_memory(0x5040);

    // 85A1: ANDA #$0F
    cpu.m_a &= 0x0F;

    // 85A3: CMPA $49BF
    cpu.compare_a(cpu.read_memory(0x49BF));

    // 85A6: BEQ $85DE
    if (cpu.zero_flag()) cpu.m_pc = 0x85DE;

    // 85A8: LDB $49BF
    cpu.m_b = cpu.read_memory(0x49BF);

    // 85AB: STA $49BF
    cpu.write_memory(0x49BF, cpu.m_a);

    // 85AE: LDX #$4989
    cpu.m_x = 0x4989;

    // 85B1: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // 85B4: BCC $85BD
    if (!cpu.carry_flag()) cpu.m_pc = 0x85BD;

    // 85B6: BMI $85BD
    if (cpu.negative_flag()) cpu.m_pc = 0x85BD;

    // 85B8: INC $49C0
    // TODO: Convert INC $49C0

    // 85BB: BRA $85D2
    cpu.m_pc = 0x85D2;

    // 85BE: BNE $85B3
    if (!cpu.zero_flag()) cpu.m_pc = 0x85B3;

    // 85C0: LDX #$4999
    cpu.m_x = 0x4999;

    // 85C3: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // 85C6: BCC $85CF
    if (!cpu.carry_flag()) cpu.m_pc = 0x85CF;

    // 85C8: BMI $85CF
    if (cpu.negative_flag()) cpu.m_pc = 0x85CF;

    // 85CA: INC $49C0
    // TODO: Convert INC $49C0

    // 85CD: BRA $85D2
    cpu.m_pc = 0x85D2;

    // 85D0: BNE $85C5
    if (!cpu.zero_flag()) cpu.m_pc = 0x85C5;

    // 85D2: LDA #$00
    cpu.m_a = 0x00;

    // 85D4: LDX #$4989
    cpu.m_x = 0x4989;

    // 85D7: STA B,X
    // TODO: Handle indexed addressing: STA B,X

    // 85D9: LDX #$4999
    cpu.m_x = 0x4999;

    // 85DC: STA B,X
    // TODO: Handle indexed addressing: STA B,X

    // 85DE: JSR $B3E4
    cpu.call_function(0xB3E4);

    // 85E1: JSR $85F9
    cpu.call_function(0x85F9);

    // 85E4: JSR $8735
    cpu.call_function(0x8735);

    // 85E7: JSR $86AE
    cpu.call_function(0x86AE);

    // 85EA: LDA <$95
    cpu.m_a = cpu.read_memory(0x95);

    // 85EC: BEQ $85F1
    if (cpu.zero_flag()) cpu.m_pc = 0x85F1;

    // 85EE: JSR $889F
    cpu.call_function(0x889F);

    // 85F1: LDA <$92
    cpu.m_a = cpu.read_memory(0x92);

    // 85F3: BEQ $85F8
    if (cpu.zero_flag()) cpu.m_pc = 0x85F8;

    // 85F5: JSR $88F5
    cpu.call_function(0x88F5);

    // 85F9: LDD #$0000
    cpu.m_d = 0x0000;

    // 85FC: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // 85FF: LDD #$6270
    cpu.m_d = 0x6270;

    // 8602: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 8604: LDU #$8696
    cpu.m_u = 0x8696;

    // 8607: LDA <$00
    cpu.m_a = cpu.read_memory(0x00);

}

} // namespace StarWars