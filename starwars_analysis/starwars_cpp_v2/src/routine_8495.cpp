#include "cpu_6809.h"

namespace StarWars {

void routine_8495_impl(CPU6809& cpu) {
    // Converted from rom_disasm_8495.md
    // Address: 0x8495

    // 8495: LDA <$45
    cpu.m_a = cpu.read_memory(0x45);

    // 8497: BNE $0020
    if (!cpu.zero_flag()) cpu.m_pc = 0x84B9;

    // 8499: LDB $4B19
    cpu.m_b = cpu.read_memory(0x4B19);

    // 849C: CMPB #$07
    cpu.compare_b(0x07);

    // 849E: BLS $000D
    // TODO: Convert BLS $000D

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

    // 84AC: BNE $0020
    if (!cpu.zero_flag()) cpu.m_pc = 0x84CE;

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

    // 84F4: BNE $008D
    if (!cpu.zero_flag()) cpu.m_pc = 0x8483;

    // 84F6: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // 84F9: SUBD $507C
    cpu.m_d -= 0x507C;

    // 84FC: BLT $008D
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x848B;

    // 84FE: SUBD #$0400
    cpu.m_d -= 0x0400;

    // 8501: BGE $007A
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x857D;

    // 8503: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 8506: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 8508: BCS $0078
    if (cpu.carry_flag()) cpu.m_pc = 0x8582;

    // 850A: JSR $A7F7
    cpu.call_function(0xA7F7);

    // 850D: BRA $008D
    cpu.m_pc = 0x849C;

    // 850F: SUBD #$0400
    cpu.m_d -= 0x0400;

    // 8512: BGE $008D
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x84A1;

    // 8514: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 8517: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // 851B: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 851D: BCS $008D
    if (cpu.carry_flag()) cpu.m_pc = 0x84AC;

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

    // 852F: BNE $0059
    if (!cpu.zero_flag()) cpu.m_pc = 0x858A;

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

    // 854A: BNE $00E3
    if (!cpu.zero_flag()) cpu.m_pc = 0x852F;

    // 854C: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // 854F: SUBD $507C
    cpu.m_d -= 0x507C;

    // 8552: BLT $00E3
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x8537;

    // 8554: SUBD #$0400
    cpu.m_d -= 0x0400;

    // 8557: BGE $00D0
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8529;

    // 8559: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 855C: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 855E: BCS $00CE
    if (cpu.carry_flag()) cpu.m_pc = 0x852E;

    // 8560: JSR $A80B
    cpu.call_function(0xA80B);

    // 8563: BRA $00E3
    cpu.m_pc = 0x8548;

    // 8565: SUBD #$0400
    cpu.m_d -= 0x0400;

    // 8568: BGE $00E3
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x854D;

    // 856A: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 856D: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // 8571: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 8573: BCS $00E3
    if (cpu.carry_flag()) cpu.m_pc = 0x8558;

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

    // 8585: BNE $00AF
    if (!cpu.zero_flag()) cpu.m_pc = 0x8536;

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

    // 8596: LBCS $003C
    // TODO: Convert LBCS $003C

    // 859B: LDA $5040
    cpu.m_a = cpu.read_memory(0x5040);

    // 85A1: ANDA #$0F
    cpu.m_a &= 0x0F;

    // 85A3: CMPA $49BF
    cpu.compare_a(cpu.read_memory(0x49BF));

    // 85A6: BEQ $0149
    if (cpu.zero_flag()) cpu.m_pc = 0x85F1;

    // 85A8: LDB $49BF
    cpu.m_b = cpu.read_memory(0x49BF);

    // 85AB: STA $49BF
    cpu.write_memory(0x49BF, cpu.m_a);

    // 85AE: LDX #$4989
    cpu.m_x = 0x4989;

    // 85B1: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // 85B4: BCC $0128
    if (!cpu.carry_flag()) cpu.m_pc = 0x85DE;

    // 85B6: BMI $0128
    if (cpu.negative_flag()) cpu.m_pc = 0x85E0;

    // 85B8: INC $49C0
    // TODO: Convert INC $49C0

    // 85BB: BRA $013D
    cpu.m_pc = 0x85FA;

    // 85BE: BNE $011E
    if (!cpu.zero_flag()) cpu.m_pc = 0x85DE;

    // 85C0: LDX #$4999
    cpu.m_x = 0x4999;

    // 85C3: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // 85C6: BCC $013A
    if (!cpu.carry_flag()) cpu.m_pc = 0x8602;

    // 85C8: BMI $013A
    if (cpu.negative_flag()) cpu.m_pc = 0x8604;

    // 85CA: INC $49C0
    // TODO: Convert INC $49C0

    // 85CD: BRA $013D
    cpu.m_pc = 0x860C;

    // 85D0: BNE $0130
    if (!cpu.zero_flag()) cpu.m_pc = 0x8602;

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

    // 85EC: BEQ $015C
    if (cpu.zero_flag()) cpu.m_pc = 0x864A;

    // 85EE: JSR $889F
    cpu.call_function(0x889F);

    // 85F1: LDA <$92
    cpu.m_a = cpu.read_memory(0x92);

    // 85F3: BEQ $0163
    if (cpu.zero_flag()) cpu.m_pc = 0x8658;

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

    // 8607: LDA <$92
    cpu.m_a = cpu.read_memory(0x92);

    // 8609: BEQ $0183
    if (cpu.zero_flag()) cpu.m_pc = 0x858E;

    // 860B: LDD <$93
    cpu.m_d = cpu.read_memory16(0x93);

    // 860D: SUBD $5098
    cpu.m_d -= 0x5098;

    // 8610: CMPD #$7000
    // TODO: Convert CMPD #$7000

    // 8614: BHI $0183
    // TODO: Convert BHI $0183

    // 8616: BRA $0186
    cpu.m_pc = 0x859E;

    // 8618: LDD #$7000
    cpu.m_d = 0x7000;

    // 861B: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 861E: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // 8620: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // 8623: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // 8625: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // 8628: LDD #$000F
    cpu.m_d = 0x000F;

    // 862B: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 862E: LDA #$67
    cpu.m_a = 0x67;

    // 8630: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8633: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // 8636: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // 8639: JSR $CCE4
    cpu.call_function(0xCCE4);

    // 863C: LDD #$0200
    cpu.m_d = 0x0200;

    // 863F: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 8642: LDD $507A
    cpu.m_d = cpu.read_memory16(0x507A);

    // 8645: SUBD $509A
    cpu.m_d -= 0x509A;

    // 8648: BPL $01B9
    if (!cpu.negative_flag()) cpu.m_pc = 0x8603;

    // 864C: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 864E: CMPD $5078
    // TODO: Convert CMPD $5078

    // 8652: BLE $01C2
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x8616;

    // 8654: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 8657: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // 865A: SUBD $509C
    cpu.m_d -= 0x509C;

    // 865D: BPL $01CE
    if (!cpu.negative_flag()) cpu.m_pc = 0x862D;

    // 8661: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 8663: CMPD $5078
    // TODO: Convert CMPD $5078

    // 8667: BLE $01D7
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x8640;

    // 8669: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 866C: LDD #$000F
    cpu.m_d = 0x000F;

    // 866F: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 8672: LDA #$67
    cpu.m_a = 0x67;

    // 8674: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8677: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // 867A: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // 867D: JSR $CCFC
    cpu.call_function(0xCCFC);

    // 8680: LDD #$8040
    cpu.m_d = 0x8040;

    // 8683: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 8685: LEAU $4,U
    // TODO: Fix comma operator: LEAU $4,U

    // 8687: CMPU #$86AE
    // TODO: Convert CMPU #$86AE

    // 868B: LBCS $0172
    // TODO: Convert LBCS $0172

    // 868F: LDD $5098
    cpu.m_d = cpu.read_memory16(0x5098);

    // 8692: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

}

} // namespace StarWars