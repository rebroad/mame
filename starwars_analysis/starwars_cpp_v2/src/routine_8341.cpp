#include "cpu_6809.h"

namespace StarWars {

void routine_8341_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_8341.md
    // Address: 0x8341

    // 8341: LDA #$00
    cpu.state_.a = 0x00;

    // 8343: STA <$44
    cpu.write_memory(0x44, cpu.state_.a);

    // 8345: STA <$45
    cpu.write_memory(0x45, cpu.state_.a);

    // 8347: LDX #$4989
    cpu.state_.x = 0x4989;

    // 834A: LDA #$00
    cpu.state_.a = 0x00;

    // 834C: STA ,X+
    // TODO: Handle indexed addressing: STA ,X+

    // 834E: CMPX #$49A9
    cpu.compare_x(0x49A9);

    // 8351: BCS $000B
    if (cpu.carry_flag()) cpu.state_.pc = 0x835E;

    // 8353: LDB $4B12
    cpu.state_.b = cpu.read_memory(0x4B12);

    // 8357: LDX #$7CC0
    cpu.state_.x = 0x7CC0;

    // 835B: CMPX #$7CD6
    cpu.compare_x(0x7CD6);

    // 835E: BCS $0024
    if (cpu.carry_flag()) cpu.state_.pc = 0x8384;

    // 8360: LDU #$4B3F
    cpu.state_.u = 0x4B3F;

    // 8363: BRA $0026
    cpu.state_.pc = 0x838B;

    // 8365: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8367: STU $49A9
    cpu.write_memory(0x49A9, cpu.state_.u);

    // 836A: STU $49AB
    cpu.write_memory(0x49AB, cpu.state_.u);

    // 836D: LDU ,U
    // TODO: Complex indexed addressing: ,U

    // 836F: LDD #$0000
    cpu.state_.d = 0x0000;

    // 8372: STA $49C0
    cpu.write_memory(0x49C0, cpu.state_.a);

    // 8375: STD $49B1
    cpu.write_memory(0x49B1, cpu.state_.d);

    // 8378: STD $49B5
    cpu.write_memory(0x49B5, cpu.state_.d);

    // 837B: STA <$92
    cpu.write_memory(0x92, cpu.state_.a);

    // 837D: STA <$95
    cpu.write_memory(0x95, cpu.state_.a);

    // 837F: STU $49AF
    cpu.write_memory(0x49AF, cpu.state_.u);

    // 8382: STU $49B3
    cpu.write_memory(0x49B3, cpu.state_.u);

    // 8385: JSR $8434
    cpu.call_function(0x8434);

    // 8388: JSR $8408
    cpu.call_function(0x8408);

    // 838B: JSR $83CE
    cpu.call_function(0x83CE);

    // 838E: JSR $83CE
    cpu.call_function(0x83CE);

    // 8391: JSR $83CE
    cpu.call_function(0x83CE);

    // 8394: JSR $83CE
    cpu.call_function(0x83CE);

    // 8397: JSR $83CE
    cpu.call_function(0x83CE);

    // 839A: JSR $83CE
    cpu.call_function(0x83CE);

    // 839D: JSR $83CE
    cpu.call_function(0x83CE);

    // 83A0: JSR $83CE
    cpu.call_function(0x83CE);

    // 83A4: LDU #$4B3F
    cpu.state_.u = 0x4B3F;

    // 83A7: LDX #$7C7E
    cpu.state_.x = 0x7C7E;

    // 83AA: LDD ,X++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.x++);

    // 83AC: STD ,U++
    cpu.write_memory(cpu.state_.u++, cpu.state_.d);

    // 83AE: CMPU #$4B5F
    // TODO: Convert CMPU #$4B5F

    // 83B2: BCS $0069
    if (cpu.carry_flag()) cpu.state_.pc = 0x841D;

    // 83B4: LDU #$4B43
    cpu.state_.u = 0x4B43;

    // 83B7: LDX #$7C9E
    cpu.state_.x = 0x7C9E;

    // 83BA: LDA #$11
    cpu.state_.a = 0x11;

    // 83BC: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // 83C1: LDD A,X
    // TODO: Fix comma operator: LDD A,X

    // 83C3: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // 83C5: LEAU $4,U
    // TODO: Fix comma operator: LEAU $4,U

    // 83C7: CMPU #$4B5F
    // TODO: Convert CMPU #$4B5F

    // 83CB: BCS $0079
    if (cpu.carry_flag()) cpu.state_.pc = 0x8446;

    // 83CE: LDA <$92
    cpu.state_.a = cpu.read_memory(0x92);

    // 83D0: BNE $00C6
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8398;

    // 83D2: LDU $49B3
    cpu.state_.u = cpu.read_memory_word(0x49B3);

    // 83D5: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 83D7: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 83D9: CMPA #$05
    cpu.compare_a(0x05);

    // 83DB: BNE $00A1
    if (!cpu.zero_flag()) cpu.state_.pc = 0x837E;

    // 83DD: LDU $49AB
    cpu.state_.u = cpu.read_memory_word(0x49AB);

    // 83E0: LDU $2,U
    // TODO: Fix comma operator: LDU $2,U

    // 83E2: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 83E4: CMPB #$01
    cpu.compare_b(0x01);

    // 83E6: BNE $00AC
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8394;

    // 83E8: LDD #$0800
    cpu.state_.d = 0x0800;

    // 83EB: BRA $00B8
    cpu.state_.pc = 0x83A5;

    // 83ED: CMPB #$03
    cpu.compare_b(0x03);

    // 83EF: BNE $00B5
    if (!cpu.zero_flag()) cpu.state_.pc = 0x83A6;

    // 83F1: LDD #$0000
    cpu.state_.d = 0x0000;

    // 83F4: BRA $00B8
    cpu.state_.pc = 0x83AE;

    // 83F6: LDD #$1000
    cpu.state_.d = 0x1000;

    // 83F9: ADDD $49B7
    cpu.state_.d += 0x49B7;

    // 83FC: SUBD $49B1
    cpu.state_.d -= 0x49B1;

    // 83FF: SUBD #$6000
    cpu.state_.d -= 0x6000;

    // 8402: BHI $00C6
    // TODO: Convert BHI $00C6

    // 8404: JSR $8408
    cpu.call_function(0x8408);

    // 8408: LDU $49B3
    cpu.state_.u = cpu.read_memory_word(0x49B3);

    // 840B: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 840D: CMPB #$01
    cpu.compare_b(0x01);

    // 840F: BNE $00D5
    if (!cpu.zero_flag()) cpu.state_.pc = 0x83E6;

    // 8411: LDD #$0800
    cpu.state_.d = 0x0800;

    // 8414: BRA $00D8
    cpu.state_.pc = 0x83EE;

    // 8416: LDD #$1000
    cpu.state_.d = 0x1000;

    // 8419: ADDD $49B5
    cpu.state_.d += 0x49B5;

    // 841C: STD $49B5
    cpu.write_memory(0x49B5, cpu.state_.d);

    // 841F: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8421: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8423: CMPB #$05
    cpu.compare_b(0x05);

    // 8425: BNE $00F0
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8417;

    // 8427: LDU $49AB
    cpu.state_.u = cpu.read_memory_word(0x49AB);

    // 842A: LEAU $2,U
    // TODO: Fix comma operator: LEAU $2,U

    // 842C: STU $49AB
    cpu.write_memory(0x49AB, cpu.state_.u);

    // 842F: LDU ,U
    // TODO: Complex indexed addressing: ,U

    // 8431: STU $49B3
    cpu.write_memory(0x49B3, cpu.state_.u);

    // 8434: LDU $49B3
    cpu.state_.u = cpu.read_memory_word(0x49B3);

    // 8437: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8439: CMPB #$03
    cpu.compare_b(0x03);

    // 843B: BNE $0106
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8443;

    // 843D: LDD $49B5
    cpu.state_.d = cpu.read_memory_word(0x49B5);

    // 8440: STD <$93
    cpu.write_memory(0x93, cpu.state_.d);

    // 8442: LDA #$FF
    cpu.state_.a = 0xFF;

    // 8444: STA <$92
    cpu.write_memory(0x92, cpu.state_.a);

    // 8447: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8449: CMPB #$04
    cpu.compare_b(0x04);

    // 844B: BNE $0129
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8476;

    // 844D: LDD $49B5
    cpu.state_.d = cpu.read_memory_word(0x49B5);

    // 8450: STD <$96
    cpu.write_memory(0x96, cpu.state_.d);

    // 8452: LDA #$FF
    cpu.state_.a = 0xFF;

    // 8454: STA <$95
    cpu.write_memory(0x95, cpu.state_.a);

    // 8456: LDA #$00
    cpu.state_.a = 0x00;

    // 8458: STA <$44
    cpu.write_memory(0x44, cpu.state_.a);

    // 845A: STA <$45
    cpu.write_memory(0x45, cpu.state_.a);

    // 845C: LDA $4B36
    cpu.state_.a = cpu.read_memory(0x4B36);

    // 845F: BNE $0129
    if (!cpu.zero_flag()) cpu.state_.pc = 0x848A;

    // 8461: INC $4B36
    // TODO: Convert INC $4B36

    // 8464: JSR $97E3
    cpu.call_function(0x97E3);

    // 8467: LDU $49B3
    cpu.state_.u = cpu.read_memory_word(0x49B3);

    // 846A: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 846C: CMPB #$01
    cpu.compare_b(0x01);

    // 846E: BNE $0134
    if (!cpu.zero_flag()) cpu.state_.pc = 0x84A4;

    // 8470: LDD #$0800
    cpu.state_.d = 0x0800;

    // 8473: BRA $0137
    cpu.state_.pc = 0x84AC;

    // 8475: LDD #$1000
    cpu.state_.d = 0x1000;

    // 8478: ADDD $49B5
    cpu.state_.d += 0x49B5;

    // 847B: STD $49B7
    cpu.write_memory(0x49B7, cpu.state_.d);

    // 847E: LDB $49B5
    cpu.state_.b = cpu.read_memory(0x49B5);

    // 8484: ANDB #$0F
    cpu.state_.b &= 0x0F;

    // 8486: LDX #$4989
    cpu.state_.x = 0x4989;

    // 8489: LDA $1,U
    // TODO: Fix comma operator: LDA $1,U

    // 848B: STA B,X
    // TODO: Handle indexed addressing: STA B,X

    // 848D: LDX #$4999
    cpu.state_.x = 0x4999;

    // 8490: LDA $2,U
    // TODO: Fix comma operator: LDA $2,U

    // 8492: STA B,X
    // TODO: Handle indexed addressing: STA B,X

    // 8495: LDA <$45
    cpu.state_.a = cpu.read_memory(0x45);

    // 8497: BNE $0174
    if (!cpu.zero_flag()) cpu.state_.pc = 0x850D;

    // 8499: LDB $4B19
    cpu.state_.b = cpu.read_memory(0x4B19);

    // 849C: CMPB #$07
    cpu.compare_b(0x07);

    // 849E: BLS $0161
    // TODO: Convert BLS $0161

    // 84A0: LDB #$07
    cpu.state_.b = 0x07;

    // 84A3: LDU #$84B6
    cpu.state_.u = 0x84B6;

    // 84A6: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // 84A8: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 84AA: ANDA ,U
    // TODO: Complex indexed addressing: ,U

    // 84AC: BNE $0174
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8522;

    // 84AE: LDA $1,U
    // TODO: Fix comma operator: LDA $1,U

    // 84B0: STA <$9B
    cpu.write_memory(0x9B, cpu.state_.a);

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
    cpu.state_.d = 0xF800;

    // 84C9: ANDA $5098
    cpu.state_.a &= 0x5098;

    // 84CC: ADDA #$24
    cpu.state_.a += 0x24;

    // 84CE: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 84D1: LDA $5078
    cpu.state_.a = cpu.read_memory(0x5078);

    // 84D7: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // 84D9: STA <$99
    cpu.write_memory(0x99, cpu.state_.a);

    // 84DB: LDD #$FE00
    cpu.state_.d = 0xFE00;

    // 84DE: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // 84E1: LDD #$FC80
    cpu.state_.d = 0xFC80;

    // 84E4: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // 84E7: LDX #$4989
    cpu.state_.x = 0x4989;

    // 84EA: LDB <$99
    cpu.state_.b = cpu.read_memory(0x99);

    // 84EC: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // 84EE: STA <$9A
    cpu.write_memory(0x9A, cpu.state_.a);

    // 84F0: ANDA #$C0
    cpu.state_.a &= 0xC0;

    // 84F2: CMPA #$C0
    cpu.compare_a(0xC0);

    // 84F4: BNE $01E1
    if (!cpu.zero_flag()) cpu.state_.pc = 0x84D7;

    // 84F6: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // 84F9: SUBD $507C
    cpu.state_.d -= 0x507C;

    // 84FC: BLT $01E1
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x84DF;

    // 84FE: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // 8501: BGE $01CE
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x84D1;

    // 8503: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 8506: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 8508: BCS $01CC
    if (cpu.carry_flag()) cpu.state_.pc = 0x84D6;

    // 850A: JSR $A7F7
    cpu.call_function(0xA7F7);

    // 850D: BRA $01E1
    cpu.state_.pc = 0x84F0;

    // 850F: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // 8512: BGE $01E1
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x84F5;

    // 8514: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 8517: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // 851B: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 851D: BCS $01E1
    if (cpu.carry_flag()) cpu.state_.pc = 0x8500;

    // 851F: JSR $A7F7
    cpu.call_function(0xA7F7);

    // 8522: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // 8525: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // 8528: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // 852B: LDA <$9A
    cpu.state_.a = cpu.read_memory(0x9A);

    // 852F: BNE $01AD
    if (!cpu.zero_flag()) cpu.state_.pc = 0x84DE;

    // 8531: LDD #$FE00
    cpu.state_.d = 0xFE00;

    // 8534: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // 8537: LDD #$0380
    cpu.state_.d = 0x0380;

    // 853A: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // 853D: LDX #$4999
    cpu.state_.x = 0x4999;

    // 8540: LDB <$00
    cpu.state_.b = cpu.read_memory(0x00);

}

} // namespace StarWars