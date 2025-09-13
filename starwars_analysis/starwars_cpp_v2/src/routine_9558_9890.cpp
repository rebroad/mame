#include "cpu_6809.h"

namespace StarWars {

void routine_9558_9890_impl(CPU6809& cpu) {
    // Converted from rom_disasm_9558_9890.md
    // Address: 0x9558_9890

    label_9558:
    // 9558: LDA <$8B
    cpu.m_a = cpu.read_memory(0x8B);
    // 955A: BLE $95A0
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x95A0;
    // 955C: LDA <$8C
    cpu.m_a = cpu.read_memory(0x8C);
    // 955E: BGT $95A0
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x95A0;
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
    // 9570: BGE $9578
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x9578;
    // 9572: LDA #$FF
    cpu.m_a = 0xFF;
    // 9574: STA <$60
    cpu.write_memory(0x60, cpu.m_a);
    // 9576: CLR <$8C
    cpu.write_memory(0x8C, 0);
    label_9578:
    // 9578: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);
    // 957A: CMPA #$00
    cpu.compare_a(0x00);
    // 957C: BNE $9586
    if (!cpu.zero_flag()) cpu.m_pc = 0x9586;
    // 957E: JSR $BD35
    cpu.call_function(0xBD35);
    // 9581: JSR $BDBC
    cpu.call_function(0xBDBC);
    // 9584: BRA $9599
    goto label_9599;
    // 9586: CMPA #$01
    cpu.compare_a(0x01);
    // 9588: BNE $958F
    if (!cpu.zero_flag()) cpu.m_pc = 0x958F;
    // 958A: JSR $BDDF
    cpu.call_function(0xBDDF);
    // 958D: BRA $9599
    goto label_9599;
    // 958F: CMPA #$02
    cpu.compare_a(0x02);
    // 9591: BNE $9599
    if (!cpu.zero_flag()) cpu.m_pc = 0x9599;
    // 9593: JSR $BD3F
    cpu.call_function(0xBD3F);
    // 9596: JSR $BDE4
    cpu.call_function(0xBDE4);
    label_9599:
    // 9599: CLRB 
    cpu.m_b = 0;
    // 959A: STB <$91
    cpu.write_memory(0x91, cpu.m_b);
    // 959C: STB <$90
    cpu.write_memory(0x90, cpu.m_b);
    // 959E: STB <$8F
    cpu.write_memory(0x8F, cpu.m_b);
    // 95A0: LDA <$61
    cpu.m_a = cpu.read_memory(0x61);
    // 95A2: BEQ $95A6
    if (cpu.zero_flag()) cpu.m_pc = 0x95A6;
    // 95A4: DEC <$61
    // TODO: Convert DEC <$61
    // 95A6: RTS 
    return;
    // 95A7: LDA <$8C
    cpu.m_a = cpu.read_memory(0x8C);
    // 95A9: BNE $95B2
    if (!cpu.zero_flag()) cpu.m_pc = 0x95B2;
    // 95AB: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);
    // 95AD: BGT $95B2
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x95B2;
    // 95AF: JMP $9604
    goto label_9604;
    // 95B2: LDB <$60
    cpu.m_b = cpu.read_memory(0x60);
    // 95B4: ASLB 
    cpu.m_b <<= 1;
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
    // 95CD: BEQ $95D4
    if (cpu.zero_flag()) cpu.m_pc = 0x95D4;
    // 95CF: JSR $962A
    cpu.call_function(0x962A);
    // 95D2: BRA $95D7
    goto label_95D7;
    // 95D4: JSR $960F
    cpu.call_function(0x960F);
    label_95D7:
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
    // 95E3: BLE $95EA
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x95EA;
    // 95E5: LDU #$A018
    cpu.m_u = 0xA018;
    // 95E8: BRA $95F2
    goto label_95F2;
    // 95EA: LDB <$60
    cpu.m_b = cpu.read_memory(0x60);
    // 95EC: ASLB 
    cpu.m_b <<= 1;
    // 95ED: LDX #$96B6
    cpu.m_x = 0x96B6;
    // 95F0: LDU B,X
    // TODO: Fix comma operator: LDU B,X
    label_95F2:
    // 95F2: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);
    // 95F4: CLR <$AD
    cpu.write_memory(0xAD, 0);
    // 95F6: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);
    // 95F8: BGE $95FB
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x95FB;
    // 95FA: CLRA 
    cpu.m_a = 0;
    // 95FB: JSR $E7AD
    cpu.call_function(0xE7AD);
    // 95FE: LDD #$8040
    cpu.m_d = 0x8040;
    // 9601: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 9603: RTS 
    return;
    label_9604:
    // 9604: LDD #$7100
    cpu.m_d = 0x7100;
    // 9607: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 9609: LDB #$0E
    cpu.m_b = 0x0E;
    // 960B: JSR $E7C7
    cpu.call_function(0xE7C7);
    // 960E: RTS 
    return;
    // 960F: LDB <$60
    cpu.m_b = cpu.read_memory(0x60);
    // 9611: ASLB 
    cpu.m_b <<= 1;
    // 9612: LDX #$96B6
    cpu.m_x = 0x96B6;
    // 9615: LDD B,X
    // TODO: Fix comma operator: LDD B,X
    // 9617: TST <$61
    // TODO: Convert TST <$61
    // 9619: BEQ $961D
    if (cpu.zero_flag()) cpu.m_pc = 0x961D;
    // 961B: ORB #$FF
    cpu.m_b |= 0xFF;
    // 961D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 961F: LDB <$60
    cpu.m_b = cpu.read_memory(0x60);
    // 9621: ASLB 
    cpu.m_b <<= 1;
    // 9622: LDX #$96CA
    cpu.m_x = 0x96CA;
    // 9625: LDU B,X
    // TODO: Fix comma operator: LDU B,X
    // 9627: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);
    // 9629: RTS 
    return;
    // 962A: LDA <$91
    cpu.m_a = cpu.read_memory(0x91);
    // 962C: BNE $964B
    if (!cpu.zero_flag()) cpu.m_pc = 0x964B;
    // 962E: LDU #$A018
    cpu.m_u = 0xA018;
    // 9631: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);
    // 9633: LDB <$8E
    cpu.m_b = cpu.read_memory(0x8E);
    // 9635: ASLB 
    cpu.m_b <<= 1;
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
    // 9641: BNE $9649
    if (!cpu.zero_flag()) cpu.m_pc = 0x9649;
    // 9643: INC <$8D
    // TODO: Convert INC <$8D
    // 9645: BLT $9649
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x9649;
    // 9647: INC <$91
    // TODO: Convert INC <$91
    // 9649: BRA $96A0
    goto label_96A0;
    // 964B: JSR $96A1
    cpu.call_function(0x96A1);
    // 964E: LDU #$A018
    cpu.m_u = 0xA018;
    // 9651: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);
    // 9653: LDA <$90
    cpu.m_a = cpu.read_memory(0x90);
    // 9655: BNE $9674
    if (!cpu.zero_flag()) cpu.m_pc = 0x9674;
    // 9657: LDB <$8E
    cpu.m_b = cpu.read_memory(0x8E);
    // 9659: ASLB 
    cpu.m_b <<= 1;
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
    // 9665: BNE $9672
    if (!cpu.zero_flag()) cpu.m_pc = 0x9672;
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
    // 9672: BRA $96A0
    goto label_96A0;
    // 9674: LDA <$8F
    cpu.m_a = cpu.read_memory(0x8F);
    // 9676: BNE $9690
    if (!cpu.zero_flag()) cpu.m_pc = 0x9690;
    // 9678: LDB <$8D
    cpu.m_b = cpu.read_memory(0x8D);
    // 967A: ASLB 
    cpu.m_b <<= 1;
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
    // 9686: BNE $968E
    if (!cpu.zero_flag()) cpu.m_pc = 0x968E;
    // 9688: DEC <$8D
    // TODO: Convert DEC <$8D
    // 968A: BGT $968E
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x968E;
    // 968C: INC <$8F
    // TODO: Convert INC <$8F
    // 968E: BRA $96A0
    goto label_96A0;
    // 9690: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);
    // 9692: ANDA #$00
    cpu.m_a &= 0x00;
    // 9694: BNE $96A0
    if (!cpu.zero_flag()) cpu.m_pc = 0x96A0;
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
    label_96A0:
    // 96A0: RTS 
    return;
    // 96A1: LDB <$60
    cpu.m_b = cpu.read_memory(0x60);
    // 96A3: ASLB 
    cpu.m_b <<= 1;
    // 96A4: LDX #$96B6
    cpu.m_x = 0x96B6;
    // 96A7: LDD B,X
    // TODO: Fix comma operator: LDD B,X
    // 96A9: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 96AB: LDB <$60
    cpu.m_b = cpu.read_memory(0x60);
    // 96AD: ASLB 
    cpu.m_b <<= 1;
    // 96AE: LDX #$96CA
    cpu.m_x = 0x96CA;
    // 96B1: LDU B,X
    // TODO: Fix comma operator: LDU B,X
    // 96B3: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);
    // 96B5: RTS 
    return;
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
    // TODO: Invalid branch offset: <$10
    // 9721: NOP 
    // NOP;
    // 9722: LDA $4B2D
    cpu.m_a = cpu.read_memory(0x4B2D);
    // 9725: BNE $9739
    if (!cpu.zero_flag()) cpu.m_pc = 0x9739;
    // 9727: LDB $4B15
    cpu.m_b = cpu.read_memory(0x4B15);
    // 972A: BEQ $9739
    if (cpu.zero_flag()) cpu.m_pc = 0x9739;
    // 972C: ASLB 
    cpu.m_b <<= 1;
    // 972D: ADDB $4B15
    cpu.m_b += 0x4B15;
    // 9730: LDX #$9865
    cpu.m_x = 0x9865;
    // 9733: ABX 
    // TODO: Convert ABX 
    // 9734: TFR X,U
    cpu.m_u = cpu.m_x;
    // 9736: JSR $9810
    cpu.call_function(0x9810);
    // 9739: RTS 
    return;
    // 973A: LDU #$4B2E
    cpu.m_u = 0x4B2E;
    // 973D: JSR $9810
    cpu.call_function(0x9810);
    // 9740: LDX #$9856
    cpu.m_x = 0x9856;
    // 9743: LDA $4B30
    cpu.m_a = cpu.read_memory(0x4B30);
    // 9746: ADDA $2,X
    // TODO: Fix comma operator: ADDA $2,X
    // 9748: DAA 
    // TODO: Convert DAA 
    // 9749: STA $4B30
    cpu.write_memory(0x4B30, cpu.m_a);
    // 974C: LDA $4B2F
    cpu.m_a = cpu.read_memory(0x4B2F);
    // 974F: ADCA $1,X
    // TODO: Convert ADCA $1,X
    // 9751: DAA 
    // TODO: Convert DAA 
    // 9752: STA $4B2F
    cpu.write_memory(0x4B2F, cpu.m_a);
    // 9755: LDA $4B2E
    cpu.m_a = cpu.read_memory(0x4B2E);
    // 9758: ADCA ,X
    // TODO: Convert ADCA ,X
    // 975A: DAA 
    // TODO: Convert DAA 
    // 975B: STA $4B2E
    cpu.write_memory(0x4B2E, cpu.m_a);
    // 975E: LDA $4B1A
    cpu.m_a = cpu.read_memory(0x4B1A);
    // 9761: BEQ $9774
    if (cpu.zero_flag()) cpu.m_pc = 0x9774;
    // 9763: ADDA #$99
    cpu.m_a += 0x99;
    // 9765: DAA 
    // TODO: Convert DAA 
    // 9766: STA $4B1A
    cpu.write_memory(0x4B1A, cpu.m_a);
    // 9769: BNE $9774
    if (!cpu.zero_flag()) cpu.m_pc = 0x9774;
    // 976B: LDU #$9862
    cpu.m_u = 0x9862;
    // 976E: JSR $9810
    cpu.call_function(0x9810);
    // 9771: INC $4B35
    // TODO: Convert INC $4B35
    // 9774: RTS 
    return;
    // 9775: LDB <$60
    cpu.m_b = cpu.read_memory(0x60);
    // 9777: BEQ $97AB
    if (cpu.zero_flag()) cpu.m_pc = 0x97AB;
    // 9779: LDU #$9865
    cpu.m_u = 0x9865;
    // 977C: LDA #$00
    cpu.m_a = 0x00;
    // 977E: STA $4B29
    cpu.write_memory(0x4B29, cpu.m_a);
    // 9781: STA $4B2A
    cpu.write_memory(0x4B2A, cpu.m_a);
    // 9784: STA $4B2B
    cpu.write_memory(0x4B2B, cpu.m_a);
    // 9787: LDA $2,U
    // TODO: Fix comma operator: LDA $2,U
    // 9789: ADDA $4B2B
    cpu.m_a += 0x4B2B;
    // 978C: DAA 
    // TODO: Convert DAA 
    // 978D: STA $4B2B
    cpu.write_memory(0x4B2B, cpu.m_a);
    // 9790: LDA $1,U
    // TODO: Fix comma operator: LDA $1,U
    // 9792: ADCA $4B2A
    // TODO: Convert ADCA $4B2A
    // 9795: DAA 
    // TODO: Convert DAA 
    // 9796: STA $4B2A
    cpu.write_memory(0x4B2A, cpu.m_a);
    // 9799: LDA ,U
    // TODO: Complex indexed addressing: ,U
    // 979B: ADCA $4B29
    // TODO: Convert ADCA $4B29
    // 979E: DAA 
    // TODO: Convert DAA 
    // 979F: STA $4B29
    cpu.write_memory(0x4B29, cpu.m_a);
    // 97A2: DECB 
    cpu.m_b--;
    // 97A3: BNE $9787
    if (!cpu.zero_flag()) cpu.m_pc = 0x9787;
    // 97A5: LDU #$4B29
    cpu.m_u = 0x4B29;
    // 97A8: JSR $9810
    cpu.call_function(0x9810);
    // 97AB: RTS 
    return;
    // 97AC: LDB $4B15
    cpu.m_b = cpu.read_memory(0x4B15);
    // 97AF: CMPB #$05
    cpu.compare_b(0x05);
    // 97B1: BCS $97B8
    if (cpu.carry_flag()) cpu.m_pc = 0x97B8;
    // 97B3: LDU #$9847
    cpu.m_u = 0x9847;
    // 97B6: BRA $97C1
    goto label_97C1;
    // 97B8: ASLB 
    cpu.m_b <<= 1;
    // 97B9: ADDB $4B15
    cpu.m_b += 0x4B15;
    // 97BC: LDU #$983B
    cpu.m_u = 0x983B;
    // 97BF: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U
    label_97C1:
    // 97C1: RTS 
    return;
    // 97C2: LDD #$A01A
    cpu.m_d = 0xA01A;
    // 97C5: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 97C7: LDD #$0180
    cpu.m_d = 0x0180;
    // 97CA: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 97CC: LDD #$1EC0
    cpu.m_d = 0x1EC0;
    // 97CF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 97D1: LDA #$04
    cpu.m_a = 0x04;
    // 97D3: STA <$AD
    cpu.write_memory(0xAD, cpu.m_a);
    // 97D5: JSR $97AC
    cpu.call_function(0x97AC);
    // 97D8: LEAX -$1,U
    // TODO: Fix comma operator: LEAX -$1,U
    // 97DA: JSR $E772
    cpu.call_function(0xE772);
    // 97DD: LDB #$50
    cpu.m_b = 0x50;
    // 97DF: JSR $E7C7
    cpu.call_function(0xE7C7);
    // 97E2: RTS 
    return;
    // 97E3: JSR $97AC
    cpu.call_function(0x97AC);
    // 97E6: BRA $9810
    goto label_9810;
    // 97E8: LDU #$984A
    cpu.m_u = 0x984A;
    // 97EB: BRA $9810
    goto label_9810;
    // 97ED: LDU #$984D
    cpu.m_u = 0x984D;
    // 97F0: BRA $9810
    goto label_9810;
    // 97F2: LDU #$9850
    cpu.m_u = 0x9850;
    // 97F5: BRA $9810
    goto label_9810;
    // 97F7: LDU #$9859
    cpu.m_u = 0x9859;
    // 97FA: BRA $9810
    goto label_9810;
    // 97FC: LDU #$9853
    cpu.m_u = 0x9853;
    // 97FF: BRA $9810
    goto label_9810;
    // 9801: LDU #$985C
    cpu.m_u = 0x985C;
    // 9804: BRA $9810
    goto label_9810;
    // 9806: LDU #$985F
    cpu.m_u = 0x985F;
    // 9809: BRA $9810
    goto label_9810;
    // 980B: LDU #$9862
    cpu.m_u = 0x9862;
    // 980E: BRA $9810
    goto label_9810;
    label_9810:
    // 9810: LDA $2,U
    // TODO: Fix comma operator: LDA $2,U
    // 9812: STA $4B2B
    cpu.write_memory(0x4B2B, cpu.m_a);
    // 9815: ADDA <$5F
    cpu.m_a += 0x5F;
    // 9817: DAA 
    // TODO: Convert DAA 
    // 9818: STA <$5F
    cpu.write_memory(0x5F, cpu.m_a);
    // 981A: LDA $1,U
    // TODO: Fix comma operator: LDA $1,U
    // 981C: STA $4B2A
    cpu.write_memory(0x4B2A, cpu.m_a);
    // 981F: ADCA <$5E
    // TODO: Convert ADCA <$5E
    // 9821: DAA 
    // TODO: Convert DAA 
    // 9822: STA <$5E
    cpu.write_memory(0x5E, cpu.m_a);
    // 9824: LDA ,U
    // TODO: Complex indexed addressing: ,U
    // 9826: STA $4B29
    cpu.write_memory(0x4B29, cpu.m_a);
    // 9829: ADCA <$5D
    // TODO: Convert ADCA <$5D
    // 982B: DAA 
    // TODO: Convert DAA 
    // 982C: STA <$5D
    cpu.write_memory(0x5D, cpu.m_a);
    // 982E: LDA <$5C
    cpu.m_a = cpu.read_memory(0x5C);
    // 9830: ADCA #$00
    // TODO: Convert ADCA #$00
    // 9832: DAA 
    // TODO: Convert DAA 
    // 9833: STA <$5C
    cpu.write_memory(0x5C, cpu.m_a);
    // 9835: LDA #$FF
    cpu.m_a = 0xFF;
    // 9837: STA $4B2C
    cpu.write_memory(0x4B2C, cpu.m_a);
    // 983A: RTS 
    return;
    // 983B: NEG <$50
    // TODO: Convert NEG <$50
    // 983D: NEG <$01
    // TODO: Convert NEG <$01
    // 983F: NEG <$00
    // TODO: Convert NEG <$00
    // 9841: XNC <$50
    // TODO: Convert XNC <$50
    // 9843: NEG <$05
    // TODO: Convert NEG <$05
    // 9845: NEG <$00
    // TODO: Convert NEG <$00
    // 9847: NEG <$00
    // TODO: Convert NEG <$00
    // 984A: NEG <$10
    // TODO: Convert NEG <$10
    // 984C: NEG <$00
    // TODO: Convert NEG <$00
    // 984E: BRA $9850
    goto label_9850;
    label_9850:
    // 9850: NEG <$00
    // TODO: Convert NEG <$00
    // 9852: NEGB 
    cpu.m_b = -cpu.m_b;
    // 9853: NEG <$01
    // TODO: Convert NEG <$01
    // 9855: NEG <$00
    // TODO: Convert NEG <$00
    // 9857: XNC <$00
    // TODO: Convert XNC <$00
    // 9859: NEG <$02
    // TODO: Convert NEG <$02
    // 985B: NEG <$00
    // TODO: Convert NEG <$00
    // 985D: NEG <$33
    // TODO: Convert NEG <$33
    // 985F: XNC <$50
    // TODO: Convert XNC <$50
    // 9861: NEG <$05
    // TODO: Convert NEG <$05
    // 9863: NEG <$00
    // TODO: Convert NEG <$00
    // 9865: NEG <$50
    // TODO: Convert NEG <$50
    // 9867: NEG <$20
    // TODO: Convert NEG <$20
    // 9869: NEG <$00
    // TODO: Convert NEG <$00
    // 986B: NEGA 
    cpu.m_a = -cpu.m_a;
    // 986C: NEG <$00
    // TODO: Convert NEG <$00
    // 986E: NEG $0,X
    // TODO: Convert NEG $0,X
    // 9870: NEG <$80
    // TODO: Convert NEG <$80
    // 9872: NEG <$00
    // TODO: Convert NEG <$00
    // 9874: LDA <$8B
    cpu.m_a = cpu.read_memory(0x8B);
    // 9876: BNE $987E
    if (!cpu.zero_flag()) cpu.m_pc = 0x987E;
    // 9878: LDA #$10
    cpu.m_a = 0x10;
    // 987A: STA <$62
    cpu.write_memory(0x62, cpu.m_a);
    // 987C: INC <$8B
    // TODO: Convert INC <$8B
    // 987E: RTS 
    return;
    // 987F: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);
    // 9881: ANDA #$03
    cpu.m_a &= 0x03;
    // 9883: STA <$62
    cpu.write_memory(0x62, cpu.m_a);
    // 9885: RTS 
    return;
    // 9886: LDB <$62
    cpu.m_b = cpu.read_memory(0x62);
    // 9888: CMPB #$08
    cpu.compare_b(0x08);
    // 988A: BLS $9890
    // TODO: Convert BLS $9890
    // 988C: LDB #$08
    cpu.m_b = 0x08;
    // 988E: STB <$62
    cpu.write_memory(0x62, cpu.m_b);
    label_9890:
    // 9890: JMP $9890
    goto label_9890;
}

} // namespace StarWars