#include "cpu_6809.h"

namespace StarWars {

void routine_84c6_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_84c6.md
    // Address: 0x84C6

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

    // 84F4: BNE $005C
    if (!cpu.zero_flag()) cpu.state_.pc += 0x005C;

    // 84F6: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // 84F9: SUBD $507C
    cpu.state_.d -= 0x507C;

    // 84FC: BLT $005C
    // TODO: Convert BLT $005C

    // 84FE: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // 8501: BGE $0049
    // TODO: Convert BGE $0049

    // 8503: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 8506: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 8508: BCS $0047
    if (cpu.carry_flag()) cpu.state_.pc += 0x0047;

    // 850A: JSR $A7F7
    cpu.call_function(0xA7F7);

    // 850D: BRA $005C
    cpu.state_.pc += 0x005C;

    // 850F: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // 8512: BGE $005C
    // TODO: Convert BGE $005C

    // 8514: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 8517: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // 851B: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 851D: BCS $005C
    if (cpu.carry_flag()) cpu.state_.pc += 0x005C;

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

    // 852F: BNE $0028
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0028;

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

    // 854A: BNE $00B2
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00B2;

    // 854C: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // 854F: SUBD $507C
    cpu.state_.d -= 0x507C;

    // 8552: BLT $00B2
    // TODO: Convert BLT $00B2

    // 8554: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // 8557: BGE $009F
    // TODO: Convert BGE $009F

    // 8559: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 855C: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 855E: BCS $009D
    if (cpu.carry_flag()) cpu.state_.pc += 0x009D;

    // 8560: JSR $A80B
    cpu.call_function(0xA80B);

    // 8563: BRA $00B2
    cpu.state_.pc += 0x00B2;

    // 8565: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // 8568: BGE $00B2
    // TODO: Convert BGE $00B2

    // 856A: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 856D: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // 8571: CMPA <$9B
    cpu.compare_a(cpu.read_memory(0x9B));

    // 8573: BCS $00B2
    if (cpu.carry_flag()) cpu.state_.pc += 0x00B2;

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

    // 8585: BNE $007E
    if (!cpu.zero_flag()) cpu.state_.pc += 0x007E;

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

    // 8596: LBCS $000B
    // TODO: Convert LBCS $000B

    // 859B: LDA $5040
    cpu.state_.a = cpu.read_memory(0x5040);

    // 85A1: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // 85A3: CMPA $49BF
    cpu.compare_a(cpu.read_memory(0x49BF));

    // 85A6: BEQ $0118
    if (cpu.zero_flag()) cpu.state_.pc += 0x0118;

    // 85A8: LDB $49BF
    cpu.state_.b = cpu.read_memory(0x49BF);

    // 85AB: STA $49BF
    cpu.write_memory(0x49BF, cpu.state_.a);

    // 85AE: LDX #$4989
    cpu.state_.x = 0x4989;

    // 85B1: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // 85B4: BCC $00F7
    if (!cpu.carry_flag()) cpu.state_.pc += 0x00F7;

    // 85B6: BMI $00F7
    if (cpu.negative_flag()) cpu.state_.pc += 0x00F7;

    // 85B8: INC $49C0
    // TODO: Convert INC $49C0

    // 85BB: BRA $010C
    cpu.state_.pc += 0x010C;

    // 85BE: BNE $00ED
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00ED;

    // 85C0: LDX #$4999
    cpu.state_.x = 0x4999;

    // 85C3: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // 85C6: BCC $0109
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0109;

    // 85C8: BMI $0109
    if (cpu.negative_flag()) cpu.state_.pc += 0x0109;

    // 85CA: INC $49C0
    // TODO: Convert INC $49C0

    // 85CD: BRA $010C
    cpu.state_.pc += 0x010C;

    // 85D0: BNE $00FF
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00FF;

    // 85D2: LDA #$00
    cpu.state_.a = 0x00;

    // 85D4: LDX #$4989
    cpu.state_.x = 0x4989;

    // 85D7: STA B,X
    // TODO: Handle indexed addressing: STA B,X

    // 85D9: LDX #$4999
    cpu.state_.x = 0x4999;

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
    cpu.state_.a = cpu.read_memory(0x95);

    // 85EC: BEQ $012B
    if (cpu.zero_flag()) cpu.state_.pc += 0x012B;

    // 85EE: JSR $889F
    cpu.call_function(0x889F);

    // 85F1: LDA <$92
    cpu.state_.a = cpu.read_memory(0x92);

    // 85F3: BEQ $0132
    if (cpu.zero_flag()) cpu.state_.pc += 0x0132;

    // 85F5: JSR $88F5
    cpu.call_function(0x88F5);

    // 85F9: LDD #$0000
    cpu.state_.d = 0x0000;

    // 85FC: STD $5040
    cpu.write_memory(0x5040, cpu.state_.d);

    // 85FF: LDD #$6270
    cpu.state_.d = 0x6270;

    // 8602: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 8604: LDU #$8696
    cpu.state_.u = 0x8696;

    // 8607: LDA <$92
    cpu.state_.a = cpu.read_memory(0x92);

    // 8609: BEQ $0152
    if (cpu.zero_flag()) cpu.state_.pc += 0x0152;

    // 860B: LDD <$93
    cpu.state_.d = cpu.read_memory_word(0x93);

    // 860D: SUBD $5098
    cpu.state_.d -= 0x5098;

    // 8610: CMPD #$7000
    // TODO: Convert CMPD #$7000

    // 8614: BHI $0152
    // TODO: Convert BHI $0152

    // 8616: BRA $0155
    cpu.state_.pc += 0x0155;

    // 8618: LDD #$7000
    cpu.state_.d = 0x7000;

    // 861B: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 861E: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // 8620: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // 8623: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // 8625: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // 8628: LDD #$000F
    cpu.state_.d = 0x000F;

    // 862B: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 862E: LDA #$67
    cpu.state_.a = 0x67;

    // 8630: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8633: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 8636: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 8639: JSR $CCE4
    cpu.call_function(0xCCE4);

    // 863C: LDD #$0200
    cpu.state_.d = 0x0200;

    // 863F: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 8642: LDD $507A
    cpu.state_.d = cpu.read_memory_word(0x507A);

    // 8645: SUBD $509A
    cpu.state_.d -= 0x509A;

    // 8648: BPL $0188
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0188;

    // 864C: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 864E: CMPD $5078
    // TODO: Convert CMPD $5078

    // 8652: BLE $0191
    // TODO: Convert BLE $0191

    // 8654: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 8657: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // 865A: SUBD $509C
    cpu.state_.d -= 0x509C;

    // 865D: BPL $019D
    if (!cpu.negative_flag()) cpu.state_.pc += 0x019D;

    // 8661: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 8663: CMPD $5078
    // TODO: Convert CMPD $5078

    // 8667: BLE $01A6
    // TODO: Convert BLE $01A6

    // 8669: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 866C: LDD #$000F
    cpu.state_.d = 0x000F;

    // 866F: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 8672: LDA #$67
    cpu.state_.a = 0x67;

    // 8674: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8677: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 867A: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 867D: JSR $CCFC
    cpu.call_function(0xCCFC);

    // 8680: LDD #$8040
    cpu.state_.d = 0x8040;

    // 8683: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 8685: LEAU $4,U
    // TODO: Fix comma operator: LEAU $4,U

    // 8687: CMPU #$86AE
    // TODO: Convert CMPU #$86AE

    // 868B: LBCS $0141
    // TODO: Convert LBCS $0141

    // 868F: LDD $5098
    cpu.state_.d = cpu.read_memory_word(0x5098);

    // 8692: STD $5040
    cpu.write_memory(0x5040, cpu.state_.d);

    // 8696: LDD >$0000
    cpu.state_.d = cpu.read_memory_word(0x0000);

    // 8699: NEG <$04
    // TODO: Convert NEG <$04

    // 869B: NEG <$00
    // TODO: Convert NEG <$00

    // 869D: NEG <$FC
    // TODO: Convert NEG <$FC

    // 869F: NEG <$F0
    // TODO: Convert NEG <$F0

    // 86A1: NEG <$FE
    // TODO: Convert NEG <$FE

    // 86A3: NEG <$F0
    // TODO: Convert NEG <$F0

    // 86A5: NEG <$02
    // TODO: Convert NEG <$02

    // 86A7: NEG <$F0
    // TODO: Convert NEG <$F0

    // 86A9: NEG <$04
    // TODO: Convert NEG <$04

    // 86AB: NEG <$F0
    // TODO: Convert NEG <$F0

    // 86AD: NEG <$CC
    // TODO: Convert NEG <$CC

    // 86AF: NEG <$00
    // TODO: Convert NEG <$00

    // 86B1: STD $5040
    cpu.write_memory(0x5040, cpu.state_.d);

    // 86B4: LDD #$6250
    cpu.state_.d = 0x6250;

    // 86B7: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 86B9: LDU #$8725
    cpu.state_.u = 0x8725;

    // 86BC: LDA <$92
    cpu.state_.a = cpu.read_memory(0x92);

    // 86BE: BEQ $0207
    if (cpu.zero_flag()) cpu.state_.pc += 0x0207;

    // 86C0: LDD <$93
    cpu.state_.d = cpu.read_memory_word(0x93);

    // 86C2: SUBD $5098
    cpu.state_.d -= 0x5098;

    // 86C5: NEG <$00
    // TODO: Convert NEG <$00

}

} // namespace StarWars