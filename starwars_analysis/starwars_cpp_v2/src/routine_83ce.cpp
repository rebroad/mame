#include "cpu_6809.h"

namespace StarWars {

void routine_83ce_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_83ce.md
    // Address: 0x83CE

    // 83CE: LDA <$92
    cpu.state_.a = cpu.read_memory(0x92);

    // 83D0: BNE $0039
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0039;

    // 83D2: LDU $49B3
    cpu.state_.u = cpu.read_memory_word(0x49B3);

    // 83D5: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 83D7: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 83D9: CMPA #$05
    cpu.compare_a(0x05);

    // 83DB: BNE $0014
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0014;

    // 83DD: LDU $49AB
    cpu.state_.u = cpu.read_memory_word(0x49AB);

    // 83E0: LDU $2,U
    // TODO: Fix comma operator: LDU $2,U

    // 83E2: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 83E4: CMPB #$01
    cpu.compare_b(0x01);

    // 83E6: BNE $001F
    if (!cpu.zero_flag()) cpu.state_.pc += 0x001F;

    // 83E8: LDD #$0800
    cpu.state_.d = 0x0800;

    // 83EB: BRA $002B
    cpu.state_.pc += 0x002B;

    // 83ED: CMPB #$03
    cpu.compare_b(0x03);

    // 83EF: BNE $0028
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0028;

    // 83F1: LDD #$0000
    cpu.state_.d = 0x0000;

    // 83F4: BRA $002B
    cpu.state_.pc += 0x002B;

    // 83F6: LDD #$1000
    cpu.state_.d = 0x1000;

    // 83F9: ADDD $49B7
    cpu.state_.d += 0x49B7;

    // 83FC: SUBD $49B1
    cpu.state_.d -= 0x49B1;

    // 83FF: SUBD #$6000
    cpu.state_.d -= 0x6000;

    // 8402: BHI $0039
    // TODO: Convert BHI $0039

    // 8404: JSR $8408
    cpu.call_function(0x8408);

    // 8408: LDU $49B3
    cpu.state_.u = cpu.read_memory_word(0x49B3);

    // 840B: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 840D: CMPB #$01
    cpu.compare_b(0x01);

    // 840F: BNE $0048
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0048;

    // 8411: LDD #$0800
    cpu.state_.d = 0x0800;

    // 8414: BRA $004B
    cpu.state_.pc += 0x004B;

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

    // 8425: BNE $0063
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0063;

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

    // 843B: BNE $0079
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0079;

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

    // 844B: BNE $009C
    if (!cpu.zero_flag()) cpu.state_.pc += 0x009C;

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

    // 845F: BNE $009C
    if (!cpu.zero_flag()) cpu.state_.pc += 0x009C;

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

    // 846E: BNE $00A7
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00A7;

    // 8470: LDD #$0800
    cpu.state_.d = 0x0800;

    // 8473: BRA $00AA
    cpu.state_.pc += 0x00AA;

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

    // 8497: BNE $00E7
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00E7;

    // 8499: LDB $4B19
    cpu.state_.b = cpu.read_memory(0x4B19);

    // 849C: CMPB #$07
    cpu.compare_b(0x07);

    // 849E: BLS $00D4
    // TODO: Convert BLS $00D4

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

    // 84AC: BNE $00E7
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00E7;

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

    // 84F4: BNE $0154
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0154;

    // 84F6: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // 84F9: SUBD $507C
    cpu.state_.d -= 0x507C;

    // 84FC: BLT $0154
    // TODO: Convert BLT $0154

    // 84FE: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // 8501: BGE $0141
    // TODO: Convert BGE $0141

    // 8503: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 8506: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 8508: BCS $013F
    if (cpu.carry_flag()) cpu.state_.pc += 0x013F;

    // 850A: JSR $A7F7
    cpu.call_function(0xA7F7);

    // 850D: BRA $0154
    cpu.state_.pc += 0x0154;

    // 850F: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // 8512: BGE $0154
    // TODO: Convert BGE $0154

    // 8514: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 8517: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // 851B: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 851D: BCS $0154
    if (cpu.carry_flag()) cpu.state_.pc += 0x0154;

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

    // 852F: BNE $0120
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0120;

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

    // 8540: LDB <$99
    cpu.state_.b = cpu.read_memory(0x99);

    // 8542: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // 8544: STA <$9A
    cpu.write_memory(0x9A, cpu.state_.a);

    // 8546: ANDA #$C0
    cpu.state_.a &= 0xC0;

    // 8548: CMPA #$C0
    cpu.compare_a(0xC0);

    // 854A: BNE $01AA
    if (!cpu.zero_flag()) cpu.state_.pc += 0x01AA;

    // 854C: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // 854F: SUBD $507C
    cpu.state_.d -= 0x507C;

    // 8552: BLT $01AA
    // TODO: Convert BLT $01AA

    // 8554: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // 8557: BGE $0197
    // TODO: Convert BGE $0197

    // 8559: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 855C: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 855E: BCS $0195
    if (cpu.carry_flag()) cpu.state_.pc += 0x0195;

    // 8560: JSR $A80B
    cpu.call_function(0xA80B);

    // 8563: BRA $01AA
    cpu.state_.pc += 0x01AA;

    // 8565: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // 8568: BGE $01AA
    // TODO: Convert BGE $01AA

    // 856A: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 856D: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // 8571: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 8573: BCS $01AA
    if (cpu.carry_flag()) cpu.state_.pc += 0x01AA;

    // 8575: JSR $A80B
    cpu.call_function(0xA80B);

    // 8578: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // 857B: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // 857E: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // 8581: LDA <$9A
    cpu.state_.a = cpu.read_memory(0x9A);

    // 8585: BNE $0176
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0176;

    // 8587: LDD $5078
    cpu.state_.d = cpu.read_memory_word(0x5078);

    // 858A: ADDD #$0800
    cpu.state_.d += 0x0800;

    // 858D: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 8590: SUBD $5098
    cpu.state_.d -= 0x5098;

    // 8593: SUBD #$6000
    cpu.state_.d -= 0x6000;

    // 8596: LBCS $0103
    // TODO: Convert LBCS $0103

    // 859B: LDA $5040
    cpu.state_.a = cpu.read_memory(0x5040);

    // 85A1: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // 85A3: CMPA $49BF
    cpu.compare_a(cpu.read_memory(0x49BF));

    // 85A6: BEQ $0210
    if (cpu.zero_flag()) cpu.state_.pc += 0x0210;

    // 85A8: LDB $49BF
    cpu.state_.b = cpu.read_memory(0x49BF);

    // 85AB: STA $49BF
    cpu.write_memory(0x49BF, cpu.state_.a);

    // 85AE: LDX #$4989
    cpu.state_.x = 0x4989;

    // 85B1: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // 85B4: BCC $01EF
    if (!cpu.carry_flag()) cpu.state_.pc += 0x01EF;

    // 85B6: BMI $01EF
    if (cpu.negative_flag()) cpu.state_.pc += 0x01EF;

    // 85B8: INC $49C0
    // TODO: Convert INC $49C0

    // 85BB: BRA $0204
    cpu.state_.pc += 0x0204;

    // 85BE: BNE $01E5
    if (!cpu.zero_flag()) cpu.state_.pc += 0x01E5;

    // 85C0: LDX #$4999
    cpu.state_.x = 0x4999;

    // 85C3: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // 85C6: BCC $0201
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0201;

    // 85C8: BMI $0201
    if (cpu.negative_flag()) cpu.state_.pc += 0x0201;

    // 85CA: INC $49C0
    // TODO: Convert INC $49C0

    // 85CD: BRA $0201
    cpu.state_.pc += 0x0201;

}

} // namespace StarWars