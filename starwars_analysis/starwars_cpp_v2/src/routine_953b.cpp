#include "cpu_6809.h"

namespace StarWars {

void routine_953b_impl(CPU6809& cpu) {
    // Converted from rom_disasm_953b.md
    // Address: 0x953B

    // 953B: LDA $4592
    cpu.m_a = cpu.read_memory(0x4592);

    // 953E: ANDA #$03
    cpu.m_a &= 0x03;

    // 9540: BEQ $001C
    if (cpu.zero_flag()) cpu.m_pc = 0x955E;

    // 9542: ADDA <$60
    cpu.m_a += 0x60;

    // 9544: STA <$60
    cpu.write_memory(0x60, cpu.m_a);

    // 9546: LDA $4593
    cpu.m_a = cpu.read_memory(0x4593);

    // 9549: ANDA #$03
    cpu.m_a &= 0x03;

    // 954B: ADDA #$06
    cpu.m_a += 0x06;

    // 954D: CMPA <$60
    cpu.compare_a(cpu.read_memory(0x60));

    // 954F: BCC $0018
    if (!cpu.carry_flag()) cpu.m_pc = 0x9569;

    // 9551: STA <$60
    cpu.write_memory(0x60, cpu.m_a);

    // 9553: LDA #$14
    cpu.m_a = 0x14;

    // 9555: STA <$61
    cpu.write_memory(0x61, cpu.m_a);

    // 9558: LDA <$8B
    cpu.m_a = cpu.read_memory(0x8B);

    // 955A: BLE $0065
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x95C1;

    // 955C: LDA <$8C
    cpu.m_a = cpu.read_memory(0x8C);

    // 955E: BGT $0065
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x95C5;

    // 9560: LDA #$01
    cpu.m_a = 0x01;

    // 9562: STA <$8C
    cpu.write_memory(0x8C, cpu.m_a);

    // 9564: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // 9566: STA <$8E
    cpu.write_memory(0x8E, cpu.m_a);

    // 9568: LDA #$F6
    cpu.m_a = 0xF6;

    // 956A: ADDA <$60
    cpu.m_a += 0x60;

    // 956C: STA <$8D
    cpu.write_memory(0x8D, cpu.m_a);

    // 956E: DEC <$60
    // TODO: Convert DEC <$60

    // 9570: BGE $003D
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x95AF;

    // 9572: LDA #$FF
    cpu.m_a = 0xFF;

    // 9574: STA <$60
    cpu.write_memory(0x60, cpu.m_a);

    // 9576: CLR <$8C
    cpu.write_memory(0x8C, 0);

    // 9578: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // 957A: CMPA #$00
    cpu.compare_a(0x00);

    // 957C: BNE $004B
    if (!cpu.zero_flag()) cpu.m_pc = 0x95C9;

    // 957E: JSR $BD35
    cpu.call_function(0xBD35);

    // 9581: JSR $BDBC
    cpu.call_function(0xBDBC);

    // 9584: BRA $005E
    cpu.m_pc = 0x95E4;

    // 9586: CMPA #$01
    cpu.compare_a(0x01);

    // 9588: BNE $0054
    if (!cpu.zero_flag()) cpu.m_pc = 0x95DE;

    // 958A: JSR $BDDF
    cpu.call_function(0xBDDF);

    // 958D: BRA $005E
    cpu.m_pc = 0x95ED;

    // 958F: CMPA #$02
    cpu.compare_a(0x02);

    // 9591: BNE $005E
    if (!cpu.zero_flag()) cpu.m_pc = 0x95F1;

    // 9593: JSR $BD3F
    cpu.call_function(0xBD3F);

    // 9596: JSR $BDE4
    cpu.call_function(0xBDE4);

    // 959A: STB <$91
    cpu.write_memory(0x91, cpu.m_b);

    // 959C: STB <$90
    cpu.write_memory(0x90, cpu.m_b);

    // 959E: STB <$8F
    cpu.write_memory(0x8F, cpu.m_b);

    // 95A0: LDA <$61
    cpu.m_a = cpu.read_memory(0x61);

    // 95A2: BEQ $006B
    if (cpu.zero_flag()) cpu.m_pc = 0x960F;

    // 95A4: DEC <$61
    // TODO: Convert DEC <$61

    // 95A7: LDA <$8C
    cpu.m_a = cpu.read_memory(0x8C);

    // 95A9: BNE $0077
    if (!cpu.zero_flag()) cpu.m_pc = 0x9622;

    // 95AB: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // 95AD: BGT $0077
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x9626;

    // 95AF: JMP $9604
    cpu.m_pc = 0x9604;

    // 95B2: LDB <$60
    cpu.m_b = cpu.read_memory(0x60);

    // 95B5: LDX #$96B6
    cpu.m_x = 0x96B6;

    // 95B8: LDU B,X
    // TODO: Fix comma operator: LDU B,X

    // 95BA: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // 95BC: LDD #$BA03
    cpu.m_d = 0xBA03;

    // 95BF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 95C1: LDD #$0228
    cpu.m_d = 0x0228;

    // 95C4: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 95C6: LDD #$0000
    cpu.m_d = 0x0000;

    // 95C9: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 95CB: LDA <$8C
    cpu.m_a = cpu.read_memory(0x8C);

    // 95CD: BEQ $0099
    if (cpu.zero_flag()) cpu.m_pc = 0x9568;

    // 95CF: JSR $962A
    cpu.call_function(0x962A);

    // 95D2: BRA $009C
    cpu.m_pc = 0x9570;

    // 95D4: JSR $960F
    cpu.call_function(0x960F);

    // 95D7: LDD #$1FD0
    cpu.m_d = 0x1FD0;

    // 95DA: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 95DC: LDD #$1FF4
    cpu.m_d = 0x1FF4;

    // 95DF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 95E1: LDA <$8C
    cpu.m_a = cpu.read_memory(0x8C);

    // 95E3: BLE $00AF
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x9594;

    // 95E5: LDU #$A018
    cpu.m_u = 0xA018;

    // 95E8: BRA $00B7
    cpu.m_pc = 0x95A1;

    // 95EA: LDB <$60
    cpu.m_b = cpu.read_memory(0x60);

    // 95ED: LDX #$96B6
    cpu.m_x = 0x96B6;

    // 95F0: LDU B,X
    // TODO: Fix comma operator: LDU B,X

    // 95F2: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // 95F4: CLR <$AD
    cpu.write_memory(0xAD, 0);

    // 95F6: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // 95F8: BGE $00C0
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x95BA;

    // 95FB: JSR $E7AD
    cpu.call_function(0xE7AD);

    // 95FE: LDD #$8040
    cpu.m_d = 0x8040;

    // 9601: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 9604: LDD #$7100
    cpu.m_d = 0x7100;

    // 9607: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 9609: LDB #$0E
    cpu.m_b = 0x0E;

    // 960B: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 960F: LDB <$60
    cpu.m_b = cpu.read_memory(0x60);

    // 9612: LDX #$96B6
    cpu.m_x = 0x96B6;

    // 9615: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // 9617: TST <$61
    // TODO: Convert TST <$61

    // 9619: BEQ $00E2
    if (cpu.zero_flag()) cpu.m_pc = 0x95FD;

    // 961B: ORB #$FF
    cpu.m_b |= 0xFF;

    // 961D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 961F: LDB <$60
    cpu.m_b = cpu.read_memory(0x60);

    // 9622: LDX #$96CA
    cpu.m_x = 0x96CA;

    // 9625: LDU B,X
    // TODO: Fix comma operator: LDU B,X

    // 9627: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // 962A: LDA <$91
    cpu.m_a = cpu.read_memory(0x91);

    // 962C: BNE $0110
    if (!cpu.zero_flag()) cpu.m_pc = 0x963E;

    // 962E: LDU #$A018
    cpu.m_u = 0xA018;

    // 9631: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // 9633: LDB <$8E
    cpu.m_b = cpu.read_memory(0x8E);

    // 9636: LDX #$96CA
    cpu.m_x = 0x96CA;

    // 9639: LDU B,X
    // TODO: Fix comma operator: LDU B,X

    // 963B: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // 963D: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 963F: ANDA #$00
    cpu.m_a &= 0x00;

    // 9641: BNE $010E
    if (!cpu.zero_flag()) cpu.m_pc = 0x9651;

    // 9643: INC <$8D
    // TODO: Convert INC <$8D

    // 9645: BLT $010E
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x9655;

    // 9647: INC <$91
    // TODO: Convert INC <$91

    // 9649: BRA $0165
    cpu.m_pc = 0x96B0;

    // 964B: JSR $96A1
    cpu.call_function(0x96A1);

    // 964E: LDU #$A018
    cpu.m_u = 0xA018;

    // 9651: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // 9653: LDA <$90
    cpu.m_a = cpu.read_memory(0x90);

    // 9655: BNE $0139
    if (!cpu.zero_flag()) cpu.m_pc = 0x9690;

    // 9657: LDB <$8E
    cpu.m_b = cpu.read_memory(0x8E);

    // 965A: LDX #$96DE
    cpu.m_x = 0x96DE;

    // 965D: LDU B,X
    // TODO: Fix comma operator: LDU B,X

    // 965F: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // 9661: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 9663: ANDA #$00
    cpu.m_a &= 0x00;

    // 9665: BNE $0137
    if (!cpu.zero_flag()) cpu.m_pc = 0x969E;

    // 9667: INC <$90
    // TODO: Convert INC <$90

    // 9669: LDB <$60
    cpu.m_b = cpu.read_memory(0x60);

    // 966B: LDX #$9718
    cpu.m_x = 0x9718;

    // 966E: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // 9670: STA <$8D
    cpu.write_memory(0x8D, cpu.m_a);

    // 9672: BRA $0165
    cpu.m_pc = 0x96D9;

    // 9674: LDA <$8F
    cpu.m_a = cpu.read_memory(0x8F);

    // 9676: BNE $0155
    if (!cpu.zero_flag()) cpu.m_pc = 0x96CD;

    // 9678: LDB <$8D
    cpu.m_b = cpu.read_memory(0x8D);

    // 967B: LDX #$96F2
    cpu.m_x = 0x96F2;

    // 967E: LDU B,X
    // TODO: Fix comma operator: LDU B,X

    // 9680: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // 9682: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 9684: ANDA #$00
    cpu.m_a &= 0x00;

    // 9686: BNE $0153
    if (!cpu.zero_flag()) cpu.m_pc = 0x96DB;

    // 9688: DEC <$8D
    // TODO: Convert DEC <$8D

    // 968A: BGT $0153
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x96DF;

    // 968C: INC <$8F
    // TODO: Convert INC <$8F

    // 968E: BRA $0165
    cpu.m_pc = 0x96F5;

    // 9690: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 9692: ANDA #$00
    cpu.m_a &= 0x00;

    // 9694: BNE $0165
    if (!cpu.zero_flag()) cpu.m_pc = 0x96FB;

    // 9696: LDA #$00
    cpu.m_a = 0x00;

    // 9698: STA <$8C
    cpu.write_memory(0x8C, cpu.m_a);

    // 969A: STA <$8B
    cpu.write_memory(0x8B, cpu.m_a);

    // 969C: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // 969E: STA <$8E
    cpu.write_memory(0x8E, cpu.m_a);

    // 96A1: LDB <$60
    cpu.m_b = cpu.read_memory(0x60);

    // 96A4: LDX #$96B6
    cpu.m_x = 0x96B6;

    // 96A7: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // 96A9: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 96AB: LDB <$60
    cpu.m_b = cpu.read_memory(0x60);

    // 96AE: LDX #$96CA
    cpu.m_x = 0x96CA;

    // 96B1: LDU B,X
    // TODO: Fix comma operator: LDU B,X

    // 96B3: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

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
    cpu.m_a += 0xE4BB;

    // 96CD: EORB [D,Y]
    // TODO: Complex indexed addressing: [D,Y]

    // 96CF: LDD [D,Y]
    // TODO: Complex indexed addressing: [D,Y]

    // 96D1: SUBB $BBF4
    cpu.m_b -= 0xBBF4;

    // 96D4: ADDA $F8BB
    cpu.m_a += 0xF8BB;

    // 96D7: LDD $BC00
    cpu.m_d = cpu.read_memory16(0xBC00);

    // 96DA: CMPX $04BC
    cpu.compare_x(cpu.read_memory16(0x04BC));

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
    cpu.m_a += 0xFABB;

    // 96EB: LDU $BC02
    cpu.m_u = cpu.read_memory16(0xBC02);

    // 96EE: CMPX $06BC
    cpu.compare_x(cpu.read_memory16(0x06BC));

    // 96F1: DEC <$BB
    // TODO: Convert DEC <$BB

    // 96F3: LDX $BBC0
    cpu.m_x = cpu.read_memory16(0xBBC0);

    // 96F6: ADDA $C2BB
    cpu.m_a += 0xC2BB;

    // 96F9: ANDB #$BB
    cpu.m_b &= 0xBB;

    // 96FB: LDB #$BB
    cpu.m_b = 0xBB;

    // 96FD: EORB #$BB
    cpu.m_b ^= 0xBB;

    // 96FF: ORB #$BB
    cpu.m_b |= 0xBB;

    // 9701: LDD #$BBCE
    cpu.m_d = 0xBBCE;

    // 9704: ADDA $D0BB
    cpu.m_a += 0xD0BB;

    // 9707: SBCB <$BB
    // TODO: Convert SBCB <$BB

    // 9709: ANDB <$BB
    cpu.m_b &= 0xBB;

    // 970B: LDB <$BB
    cpu.m_b = cpu.read_memory(0xBB);

    // 970D: EORB <$BB
    cpu.m_b ^= 0xBB;

    // 970F: ORB <$BB
    cpu.m_b |= 0xBB;

    // 9711: LDD <$BB
    cpu.m_d = cpu.read_memory16(0xBB);

    // 9713: LDU <$BB
    cpu.m_u = cpu.read_memory16(0xBB);

    // 9715: SUBB [D,Y]
    // TODO: Complex indexed addressing: [D,Y]

    // 9717: SBCB $0,X
    // TODO: Convert SBCB $0,X

    // 9719: XNC <$04
    // TODO: Convert XNC <$04

    // 971B: ROR <$08
    // TODO: Convert ROR <$08

    // 971D: DEC <$0C
    // TODO: Convert DEC <$0C

    // 971F: JMP <$10
    cpu.m_pc = 0x10;

    // 9722: LDA $4B2D
    cpu.m_a = cpu.read_memory(0x4B2D);

    // 9725: BNE $01FE
    if (!cpu.zero_flag()) cpu.m_pc = 0x9725;

    // 9727: LDB $4B15
    cpu.m_b = cpu.read_memory(0x4B15);

    // 972A: BEQ $01FE
    if (cpu.zero_flag()) cpu.m_pc = 0x972A;

    // 972D: ADDB $4B15
    cpu.m_b += 0x4B15;

    // 9730: LDX #$9865
    cpu.m_x = 0x9865;

    // 9734: TFR X,U
    cpu.m_u = cpu.m_x;

    // 9736: JSR $9810
    cpu.call_function(0x9810);

    // 973A: LDU #$0000
    cpu.m_u = 0x0000;

}

} // namespace StarWars