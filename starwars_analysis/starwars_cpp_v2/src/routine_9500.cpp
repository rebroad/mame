#include "cpu_6809.h"

namespace StarWars {

void routine_9500_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_9500.md
    // Address: 0x9500

    // 9500: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 9503: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 9506: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 9509: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 950C: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 950F: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 9512: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 9515: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 9518: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 951B: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 951E: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 9521: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 9524: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 9530: BRA $0063
    cpu.state_.pc = 0x9595;

    // 9533: XANDCC #$33
    // TODO: Convert XANDCC #$33

    // 9535: BRA $0078
    cpu.state_.pc = 0x95AF;

    // 953B: LDA $4592
    cpu.state_.a = cpu.read_memory(0x4592);

    // 953E: ANDA #$03
    cpu.state_.a &= 0x03;

    // 9540: BEQ $0057
    if (cpu.zero_flag()) cpu.state_.pc = 0x9599;

    // 9542: ADDA <$60
    cpu.state_.a += 0x60;

    // 9544: STA <$60
    cpu.write_memory(0x60, cpu.state_.a);

    // 9546: LDA $4593
    cpu.state_.a = cpu.read_memory(0x4593);

    // 9549: ANDA #$03
    cpu.state_.a &= 0x03;

    // 954B: ADDA #$06
    cpu.state_.a += 0x06;

    // 954D: CMPA <$60
    cpu.compare_a(cpu.read_memory(0x60));

    // 954F: BCC $0053
    if (!cpu.carry_flag()) cpu.state_.pc = 0x95A4;

    // 9551: STA <$60
    cpu.write_memory(0x60, cpu.state_.a);

    // 9553: LDA #$14
    cpu.state_.a = 0x14;

    // 9555: STA <$61
    cpu.write_memory(0x61, cpu.state_.a);

    // 9558: LDA <$8B
    cpu.state_.a = cpu.read_memory(0x8B);

    // 955A: BLE $00A0
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x94FC;

    // 955C: LDA <$8C
    cpu.state_.a = cpu.read_memory(0x8C);

    // 955E: BGT $00A0
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x9500;

    // 9560: LDA #$01
    cpu.state_.a = 0x01;

    // 9562: STA <$8C
    cpu.write_memory(0x8C, cpu.state_.a);

    // 9564: LDA <$60
    cpu.state_.a = cpu.read_memory(0x60);

    // 9566: STA <$8E
    cpu.write_memory(0x8E, cpu.state_.a);

    // 9568: LDA #$F6
    cpu.state_.a = 0xF6;

    // 956A: ADDA <$60
    cpu.state_.a += 0x60;

    // 956C: STA <$8D
    cpu.write_memory(0x8D, cpu.state_.a);

    // 956E: DEC <$60
    // TODO: Convert DEC <$60

    // 9570: BGE $0078
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x95EA;

    // 9572: LDA #$FF
    cpu.state_.a = 0xFF;

    // 9574: STA <$60
    cpu.write_memory(0x60, cpu.state_.a);

    // 9576: CLR <$8C
    cpu.write_memory(0x8C, 0);

    // 9578: LDA <$60
    cpu.state_.a = cpu.read_memory(0x60);

    // 957A: CMPA #$00
    cpu.compare_a(0x00);

    // 957C: BNE $0086
    if (!cpu.zero_flag()) cpu.state_.pc = 0x9504;

    // 957E: JSR $BD35
    cpu.call_function(0xBD35);

    // 9581: JSR $BDBC
    cpu.call_function(0xBDBC);

    // 9584: BRA $0099
    cpu.state_.pc = 0x951F;

    // 9586: CMPA #$01
    cpu.compare_a(0x01);

    // 9588: BNE $008F
    if (!cpu.zero_flag()) cpu.state_.pc = 0x9519;

    // 958A: JSR $BDDF
    cpu.call_function(0xBDDF);

    // 958D: BRA $0099
    cpu.state_.pc = 0x9528;

    // 958F: CMPA #$02
    cpu.compare_a(0x02);

    // 9591: BNE $0099
    if (!cpu.zero_flag()) cpu.state_.pc = 0x952C;

    // 9593: JSR $BD3F
    cpu.call_function(0xBD3F);

    // 9596: JSR $BDE4
    cpu.call_function(0xBDE4);

    // 959A: STB <$91
    cpu.write_memory(0x91, cpu.state_.b);

    // 959C: STB <$90
    cpu.write_memory(0x90, cpu.state_.b);

    // 959E: STB <$8F
    cpu.write_memory(0x8F, cpu.state_.b);

    // 95A0: LDA <$61
    cpu.state_.a = cpu.read_memory(0x61);

    // 95A2: BEQ $00A6
    if (cpu.zero_flag()) cpu.state_.pc = 0x954A;

    // 95A4: DEC <$61
    // TODO: Convert DEC <$61

    // 95A7: LDA <$8C
    cpu.state_.a = cpu.read_memory(0x8C);

    // 95A9: BNE $00B2
    if (!cpu.zero_flag()) cpu.state_.pc = 0x955D;

    // 95AB: LDA <$60
    cpu.state_.a = cpu.read_memory(0x60);

    // 95AD: BGT $00B2
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x9561;

    // 95AF: JMP $9604
    cpu.state_.pc = 0x9604;

    // 95B2: LDB <$60
    cpu.state_.b = cpu.read_memory(0x60);

    // 95B5: LDX #$96B6
    cpu.state_.x = 0x96B6;

    // 95B8: LDU B,X
    // TODO: Fix comma operator: LDU B,X

    // 95BA: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // 95BC: LDD #$BA03
    cpu.state_.d = 0xBA03;

    // 95BF: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 95C1: LDD #$0228
    cpu.state_.d = 0x0228;

    // 95C4: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 95C6: LDD #$0000
    cpu.state_.d = 0x0000;

    // 95C9: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 95CB: LDA <$8C
    cpu.state_.a = cpu.read_memory(0x8C);

    // 95CD: BEQ $00D4
    if (cpu.zero_flag()) cpu.state_.pc = 0x95A3;

    // 95CF: JSR $962A
    cpu.call_function(0x962A);

    // 95D2: BRA $00D7
    cpu.state_.pc = 0x95AB;

    // 95D4: JSR $960F
    cpu.call_function(0x960F);

    // 95D7: LDD #$1FD0
    cpu.state_.d = 0x1FD0;

    // 95DA: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 95DC: LDD #$1FF4
    cpu.state_.d = 0x1FF4;

    // 95DF: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 95E1: LDA <$8C
    cpu.state_.a = cpu.read_memory(0x8C);

    // 95E3: BLE $00EA
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x95CF;

    // 95E5: LDU #$A018
    cpu.state_.u = 0xA018;

    // 95E8: BRA $00F2
    cpu.state_.pc = 0x95DC;

    // 95EA: LDB <$60
    cpu.state_.b = cpu.read_memory(0x60);

    // 95ED: LDX #$96B6
    cpu.state_.x = 0x96B6;

    // 95F0: LDU B,X
    // TODO: Fix comma operator: LDU B,X

    // 95F2: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // 95F4: CLR <$AD
    cpu.write_memory(0xAD, 0);

    // 95F6: LDA <$60
    cpu.state_.a = cpu.read_memory(0x60);

    // 95F8: BGE $00FB
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x95F5;

    // 95FB: JSR $E7AD
    cpu.call_function(0xE7AD);

    // 95FE: LDD #$8040
    cpu.state_.d = 0x8040;

    // 9601: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 9604: LDD #$7100
    cpu.state_.d = 0x7100;

    // 9607: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 9609: LDB #$0E
    cpu.state_.b = 0x0E;

    // 960B: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 960F: LDB <$60
    cpu.state_.b = cpu.read_memory(0x60);

    // 9612: LDX #$96B6
    cpu.state_.x = 0x96B6;

    // 9615: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // 9617: TST <$61
    // TODO: Convert TST <$61

    // 9619: BEQ $011D
    if (cpu.zero_flag()) cpu.state_.pc = 0x9638;

    // 961B: ORB #$FF
    cpu.state_.b |= 0xFF;

    // 961D: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 961F: LDB <$60
    cpu.state_.b = cpu.read_memory(0x60);

    // 9622: LDX #$96CA
    cpu.state_.x = 0x96CA;

    // 9625: LDU B,X
    // TODO: Fix comma operator: LDU B,X

    // 9627: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // 962A: LDA <$91
    cpu.state_.a = cpu.read_memory(0x91);

    // 962C: BNE $014B
    if (!cpu.zero_flag()) cpu.state_.pc = 0x9679;

    // 962E: LDU #$A018
    cpu.state_.u = 0xA018;

    // 9631: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // 9633: LDB <$8E
    cpu.state_.b = cpu.read_memory(0x8E);

    // 9636: LDX #$96CA
    cpu.state_.x = 0x96CA;

    // 9639: LDU B,X
    // TODO: Fix comma operator: LDU B,X

    // 963B: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // 963D: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 963F: ANDA #$00
    cpu.state_.a &= 0x00;

    // 9641: BNE $0149
    if (!cpu.zero_flag()) cpu.state_.pc = 0x968C;

    // 9643: INC <$8D
    // TODO: Convert INC <$8D

    // 9645: BLT $0149
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x9690;

    // 9647: INC <$91
    // TODO: Convert INC <$91

    // 9649: BRA $01A0
    cpu.state_.pc = 0x95EB;

    // 964B: JSR $96A1
    cpu.call_function(0x96A1);

    // 964E: LDU #$A018
    cpu.state_.u = 0xA018;

    // 9651: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // 9653: LDA <$90
    cpu.state_.a = cpu.read_memory(0x90);

    // 9655: BNE $0174
    if (!cpu.zero_flag()) cpu.state_.pc = 0x96CB;

    // 9657: LDB <$8E
    cpu.state_.b = cpu.read_memory(0x8E);

    // 965A: LDX #$96DE
    cpu.state_.x = 0x96DE;

    // 965D: LDU B,X
    // TODO: Fix comma operator: LDU B,X

    // 965F: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // 9661: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 9663: ANDA #$00
    cpu.state_.a &= 0x00;

    // 9665: BNE $0172
    if (!cpu.zero_flag()) cpu.state_.pc = 0x96D9;

    // 9667: INC <$90
    // TODO: Convert INC <$90

    // 9669: LDB <$60
    cpu.state_.b = cpu.read_memory(0x60);

    // 966B: LDX #$9718
    cpu.state_.x = 0x9718;

    // 966E: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // 9670: STA <$8D
    cpu.write_memory(0x8D, cpu.state_.a);

    // 9672: BRA $01A0
    cpu.state_.pc = 0x9614;

    // 9674: LDA <$8F
    cpu.state_.a = cpu.read_memory(0x8F);

    // 9676: BNE $0190
    if (!cpu.zero_flag()) cpu.state_.pc = 0x9608;

    // 9678: LDB <$8D
    cpu.state_.b = cpu.read_memory(0x8D);

    // 967B: LDX #$96F2
    cpu.state_.x = 0x96F2;

    // 967E: LDU B,X
    // TODO: Fix comma operator: LDU B,X

    // 9680: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // 9682: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 9684: ANDA #$00
    cpu.state_.a &= 0x00;

    // 9686: BNE $018E
    if (!cpu.zero_flag()) cpu.state_.pc = 0x9616;

    // 9688: DEC <$8D
    // TODO: Convert DEC <$8D

    // 968A: BGT $018E
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x961A;

    // 968C: INC <$8F
    // TODO: Convert INC <$8F

    // 968E: BRA $01A0
    cpu.state_.pc = 0x9630;

    // 9690: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 9692: ANDA #$00
    cpu.state_.a &= 0x00;

    // 9694: BNE $01A0
    if (!cpu.zero_flag()) cpu.state_.pc = 0x9636;

    // 9696: LDA #$00
    cpu.state_.a = 0x00;

    // 9698: STA <$8C
    cpu.write_memory(0x8C, cpu.state_.a);

    // 969A: STA <$8B
    cpu.write_memory(0x8B, cpu.state_.a);

    // 969C: LDA <$60
    cpu.state_.a = cpu.read_memory(0x60);

    // 969E: STA <$8E
    cpu.write_memory(0x8E, cpu.state_.a);

    // 96A1: LDB <$60
    cpu.state_.b = cpu.read_memory(0x60);

    // 96A4: LDX #$96B6
    cpu.state_.x = 0x96B6;

    // 96A7: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // 96A9: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 96AB: LDB <$60
    cpu.state_.b = cpu.read_memory(0x60);

    // 96AE: LDX #$96CA
    cpu.state_.x = 0x96CA;

    // 96B1: LDU B,X
    // TODO: Fix comma operator: LDU B,X

    // 96B3: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // 96B6: NEG ,X+
    // TODO: Convert NEG ,X+

    // 96B8: LSR ,X+
    // TODO: Convert LSR ,X+

    // 96BA: LSR ,X+
    // TODO: Convert LSR ,X+

    // 96BC: ROR ,X+
    // TODO: Convert ROR ,X+

    // 96BE: ROR ,X+
    // TODO: Convert ROR ,X+

    // 96C0: XNC ,X+
    // TODO: Convert XNC ,X+

    // 96C2: XNC ,X+
    // TODO: Convert XNC ,X+

    // 96C4: XNC ,X+
    // TODO: Convert XNC ,X+

    // 96C6: XNC ,X+
    // TODO: Convert XNC ,X+

    // 96C8: XNC ,X+
    // TODO: Convert XNC ,X+

    // 96CA: ADDA $E4BB
    cpu.state_.a += 0xE4BB;

    // 96CD: EORB [D,Y]
    // TODO: Complex indexed addressing: [D,Y]

    // 96CF: LDD [D,Y]
    // TODO: Complex indexed addressing: [D,Y]

    // 96D1: SUBB $BBF4
    cpu.state_.b -= 0xBBF4;

    // 96D4: ADDA $F8BB
    cpu.state_.a += 0xF8BB;

    // 96D7: LDD $BC00
    cpu.state_.d = cpu.read_memory_word(0xBC00);

    // 96DA: CMPX $04BC
    cpu.compare_x(cpu.read_memory_word(0x04BC));

    // 96DD: ASL <$BB
    // TODO: Convert ASL <$BB

    // 96DF: LDB [D,Y]
    // TODO: Complex indexed addressing: [D,Y]

    // 96E1: ORB [D,Y]
    // TODO: Complex indexed addressing: [D,Y]

    // 96E3: LDU [D,Y]
    // TODO: Complex indexed addressing: [D,Y]

    // 96E5: SBCB $BBF6
    // TODO: Convert SBCB $BBF6

    // 96E8: ADDA $FABB
    cpu.state_.a += 0xFABB;

    // 96EB: LDU $BC02
    cpu.state_.u = cpu.read_memory_word(0xBC02);

    // 96EE: CMPX $06BC
    cpu.compare_x(cpu.read_memory_word(0x06BC));

    // 96F1: DEC <$BB
    // TODO: Convert DEC <$BB

    // 96F3: LDX $BBC0
    cpu.state_.x = cpu.read_memory_word(0xBBC0);

    // 96F6: ADDA $C2BB
    cpu.state_.a += 0xC2BB;

    // 96F9: ANDB #$BB
    cpu.state_.b &= 0xBB;

    // 96FB: LDB #$BB
    cpu.state_.b = 0xBB;

    // 96FD: EORB #$BB
    cpu.state_.b ^= 0xBB;

    // 96FF: ORB #$00
    cpu.state_.b |= 0x00;

}

} // namespace StarWars