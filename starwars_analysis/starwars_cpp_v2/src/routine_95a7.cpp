#include "cpu_6809.h"

namespace StarWars {

void routine_95a7_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_95a7.md
    // Address: 0x95A7

    // 95A7: LDA <$8C
    cpu.state_.a = cpu.read_memory(0x8C);

    // 95A9: BNE $000B
    if (!cpu.zero_flag()) cpu.state_.pc += 0x000B;

    // 95AB: LDA <$60
    cpu.state_.a = cpu.read_memory(0x60);

    // 95AD: BGT $000B
    // TODO: Convert BGT $000B

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

    // 95CD: BEQ $002D
    if (cpu.zero_flag()) cpu.state_.pc += 0x002D;

    // 95CF: JSR $962A
    cpu.call_function(0x962A);

    // 95D2: BRA $0030
    cpu.state_.pc += 0x0030;

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

    // 95E3: BLE $0043
    // TODO: Convert BLE $0043

    // 95E5: LDU #$A018
    cpu.state_.u = 0xA018;

    // 95E8: BRA $004B
    cpu.state_.pc += 0x004B;

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

    // 95F8: BGE $0054
    // TODO: Convert BGE $0054

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

    // 9619: BEQ $0076
    if (cpu.zero_flag()) cpu.state_.pc += 0x0076;

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

    // 962C: BNE $00A4
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00A4;

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

    // 9641: BNE $00A2
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00A2;

    // 9643: INC <$8D
    // TODO: Convert INC <$8D

    // 9645: BLT $00A2
    // TODO: Convert BLT $00A2

    // 9647: INC <$91
    // TODO: Convert INC <$91

    // 9649: BRA $00F9
    cpu.state_.pc += 0x00F9;

    // 964B: JSR $96A1
    cpu.call_function(0x96A1);

    // 964E: LDU #$A018
    cpu.state_.u = 0xA018;

    // 9651: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // 9653: LDA <$90
    cpu.state_.a = cpu.read_memory(0x90);

    // 9655: BNE $00CD
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00CD;

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

    // 9665: BNE $00CB
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00CB;

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

    // 9672: BRA $00F9
    cpu.state_.pc += 0x00F9;

    // 9674: LDA <$8F
    cpu.state_.a = cpu.read_memory(0x8F);

    // 9676: BNE $00E9
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00E9;

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

    // 9686: BNE $00E7
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00E7;

    // 9688: DEC <$8D
    // TODO: Convert DEC <$8D

    // 968A: BGT $00E7
    // TODO: Convert BGT $00E7

    // 968C: INC <$8F
    // TODO: Convert INC <$8F

    // 968E: BRA $00F9
    cpu.state_.pc += 0x00F9;

    // 9690: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 9692: ANDA #$00
    cpu.state_.a &= 0x00;

    // 9694: BNE $00F9
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00F9;

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

    // 96FF: ORB #$BB
    cpu.state_.b |= 0xBB;

    // 9701: LDD #$BBCE
    cpu.state_.d = 0xBBCE;

    // 9704: ADDA $D0BB
    cpu.state_.a += 0xD0BB;

    // 9707: SBCB <$BB
    // TODO: Convert SBCB <$BB

    // 9709: ANDB <$BB
    cpu.state_.b &= 0xBB;

    // 970B: LDB <$BB
    cpu.state_.b = cpu.read_memory(0xBB);

    // 970D: EORB <$BB
    cpu.state_.b ^= 0xBB;

    // 970F: ORB <$BB
    cpu.state_.b |= 0xBB;

    // 9711: LDD <$BB
    cpu.state_.d = cpu.read_memory_word(0xBB);

    // 9713: LDU <$BB
    cpu.state_.u = cpu.read_memory_word(0xBB);

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
    cpu.state_.pc = 0x10;

    // 9722: LDA $4B2D
    cpu.state_.a = cpu.read_memory(0x4B2D);

    // 9725: BNE $0192
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0192;

    // 9727: LDB $4B15
    cpu.state_.b = cpu.read_memory(0x4B15);

    // 972A: BEQ $0192
    if (cpu.zero_flag()) cpu.state_.pc += 0x0192;

    // 972D: ADDB $4B15
    cpu.state_.b += 0x4B15;

    // 9730: LDX #$9865
    cpu.state_.x = 0x9865;

    // 9734: TFR X,U
    cpu.state_.u = cpu.state_.x;

    // 9736: JSR $9810
    cpu.call_function(0x9810);

    // 973A: LDU #$4B2E
    cpu.state_.u = 0x4B2E;

    // 973D: JSR $9810
    cpu.call_function(0x9810);

    // 9740: LDX #$9856
    cpu.state_.x = 0x9856;

    // 9743: LDA $4B30
    cpu.state_.a = cpu.read_memory(0x4B30);

    // 9746: ADDA $2,X
    // TODO: Fix comma operator: ADDA $2,X

    // 9749: STA $4B30
    cpu.write_memory(0x4B30, cpu.state_.a);

    // 974C: LDA $4B2F
    cpu.state_.a = cpu.read_memory(0x4B2F);

    // 974F: ADCA $1,X
    // TODO: Convert ADCA $1,X

    // 9752: STA $4B2F
    cpu.write_memory(0x4B2F, cpu.state_.a);

    // 9755: LDA $4B2E
    cpu.state_.a = cpu.read_memory(0x4B2E);

    // 9758: ADCA ,X
    // TODO: Convert ADCA ,X

    // 975B: STA $4B2E
    cpu.write_memory(0x4B2E, cpu.state_.a);

    // 975E: LDA $4B1A
    cpu.state_.a = cpu.read_memory(0x4B1A);

    // 9761: BEQ $01CD
    if (cpu.zero_flag()) cpu.state_.pc += 0x01CD;

    // 9763: ADDA #$99
    cpu.state_.a += 0x99;

    // 9766: STA $4B1A
    cpu.write_memory(0x4B1A, cpu.state_.a);

    // 9769: BNE $01CD
    if (!cpu.zero_flag()) cpu.state_.pc += 0x01CD;

    // 976B: LDU #$9862
    cpu.state_.u = 0x9862;

    // 976E: JSR $9810
    cpu.call_function(0x9810);

    // 9771: INC $4B35
    // TODO: Convert INC $4B35

    // 9775: LDB <$60
    cpu.state_.b = cpu.read_memory(0x60);

    // 9777: BEQ $0204
    if (cpu.zero_flag()) cpu.state_.pc += 0x0204;

    // 9779: LDU #$9865
    cpu.state_.u = 0x9865;

    // 977C: LDA #$00
    cpu.state_.a = 0x00;

    // 977E: STA $4B29
    cpu.write_memory(0x4B29, cpu.state_.a);

    // 9781: STA $4B2A
    cpu.write_memory(0x4B2A, cpu.state_.a);

    // 9784: STA $4B2B
    cpu.write_memory(0x4B2B, cpu.state_.a);

    // 9787: LDA $2,U
    // TODO: Fix comma operator: LDA $2,U

    // 9789: ADDA $4B2B
    cpu.state_.a += 0x4B2B;

    // 978D: STA $4B2B
    cpu.write_memory(0x4B2B, cpu.state_.a);

    // 9790: LDA $1,U
    // TODO: Fix comma operator: LDA $1,U

    // 9792: ADCA $4B2A
    // TODO: Convert ADCA $4B2A

    // 9796: STA $4B2A
    cpu.write_memory(0x4B2A, cpu.state_.a);

    // 9799: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 979B: ADCA $4B29
    // TODO: Convert ADCA $4B29

    // 979F: STA $4B29
    cpu.write_memory(0x4B29, cpu.state_.a);

    // 97A3: BNE $01E0
    if (!cpu.zero_flag()) cpu.state_.pc += 0x01E0;

    // 97A5: LDU #$4B00
    cpu.state_.u = 0x4B00;

}

} // namespace StarWars