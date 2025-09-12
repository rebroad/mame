#include "cpu_6809.h"

namespace StarWars {

void routine_960f_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_960f.md
    // Address: 0x960F

    // 960F: LDB <$60
    cpu.state_.b = cpu.read_memory(0x60);

    // 9612: LDX #$96B6
    cpu.state_.x = 0x96B6;

    // 9615: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // 9617: TST <$61
    // TODO: Convert TST <$61

    // 9619: BEQ $000E
    if (cpu.zero_flag()) cpu.state_.pc = 0x9629;

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

    // 962C: BNE $003C
    if (!cpu.zero_flag()) cpu.state_.pc = 0x966A;

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

    // 9641: BNE $003A
    if (!cpu.zero_flag()) cpu.state_.pc = 0x967D;

    // 9643: INC <$8D
    // TODO: Convert INC <$8D

    // 9645: BLT $003A
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x9681;

    // 9647: INC <$91
    // TODO: Convert INC <$91

    // 9649: BRA $0091
    cpu.state_.pc = 0x96DC;

    // 964B: JSR $96A1
    cpu.call_function(0x96A1);

    // 964E: LDU #$A018
    cpu.state_.u = 0xA018;

    // 9651: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // 9653: LDA <$90
    cpu.state_.a = cpu.read_memory(0x90);

    // 9655: BNE $0065
    if (!cpu.zero_flag()) cpu.state_.pc = 0x96BC;

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

    // 9665: BNE $0063
    if (!cpu.zero_flag()) cpu.state_.pc = 0x96CA;

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

    // 9672: BRA $0091
    cpu.state_.pc = 0x9705;

    // 9674: LDA <$8F
    cpu.state_.a = cpu.read_memory(0x8F);

    // 9676: BNE $0081
    if (!cpu.zero_flag()) cpu.state_.pc = 0x96F9;

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

    // 9686: BNE $007F
    if (!cpu.zero_flag()) cpu.state_.pc = 0x9707;

    // 9688: DEC <$8D
    // TODO: Convert DEC <$8D

    // 968A: BGT $007F
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x970B;

    // 968C: INC <$8F
    // TODO: Convert INC <$8F

    // 968E: BRA $0091
    cpu.state_.pc = 0x9721;

    // 9690: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 9692: ANDA #$00
    cpu.state_.a &= 0x00;

    // 9694: BNE $0091
    if (!cpu.zero_flag()) cpu.state_.pc = 0x9727;

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

    // 9725: BNE $012A
    if (!cpu.zero_flag()) cpu.state_.pc = 0x9851;

    // 9727: LDB $4B15
    cpu.state_.b = cpu.read_memory(0x4B15);

    // 972A: BEQ $012A
    if (cpu.zero_flag()) cpu.state_.pc = 0x9856;

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

    // 9761: BEQ $0165
    if (cpu.zero_flag()) cpu.state_.pc = 0x98C8;

    // 9763: ADDA #$99
    cpu.state_.a += 0x99;

    // 9766: STA $4B1A
    cpu.write_memory(0x4B1A, cpu.state_.a);

    // 9769: BNE $0165
    if (!cpu.zero_flag()) cpu.state_.pc = 0x98D0;

    // 976B: LDU #$9862
    cpu.state_.u = 0x9862;

    // 976E: JSR $9810
    cpu.call_function(0x9810);

    // 9771: INC $4B35
    // TODO: Convert INC $4B35

    // 9775: LDB <$60
    cpu.state_.b = cpu.read_memory(0x60);

    // 9777: BEQ $019C
    if (cpu.zero_flag()) cpu.state_.pc = 0x9915;

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

    // 97A3: BNE $0178
    if (!cpu.zero_flag()) cpu.state_.pc = 0x991D;

    // 97A5: LDU #$4B29
    cpu.state_.u = 0x4B29;

    // 97A8: JSR $9810
    cpu.call_function(0x9810);

    // 97AC: LDB $4B15
    cpu.state_.b = cpu.read_memory(0x4B15);

    // 97AF: CMPB #$05
    cpu.compare_b(0x05);

    // 97B1: BCS $01A9
    if (cpu.carry_flag()) cpu.state_.pc = 0x995C;

    // 97B3: LDU #$9847
    cpu.state_.u = 0x9847;

    // 97B6: BRA $01B2
    cpu.state_.pc = 0x996A;

    // 97B9: ADDB $4B15
    cpu.state_.b += 0x4B15;

    // 97BC: LDU #$983B
    cpu.state_.u = 0x983B;

    // 97BF: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // 97C2: LDD #$A01A
    cpu.state_.d = 0xA01A;

    // 97C5: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 97C7: LDD #$0180
    cpu.state_.d = 0x0180;

    // 97CA: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 97CC: LDD #$1EC0
    cpu.state_.d = 0x1EC0;

    // 97CF: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 97D1: LDA #$04
    cpu.state_.a = 0x04;

    // 97D3: STA <$AD
    cpu.write_memory(0xAD, cpu.state_.a);

    // 97D5: JSR $97AC
    cpu.call_function(0x97AC);

    // 97D8: LEAX -$1,U
    // TODO: Fix comma operator: LEAX -$1,U

    // 97DA: JSR $E772
    cpu.call_function(0xE772);

    // 97DD: LDB #$50
    cpu.state_.b = 0x50;

    // 97DF: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 97E3: JSR $97AC
    cpu.call_function(0x97AC);

    // 97E6: BRA $0201
    cpu.state_.pc = 0x99E9;

    // 97E8: LDU #$984A
    cpu.state_.u = 0x984A;

    // 97EB: BRA $0201
    cpu.state_.pc = 0x99EE;

    // 97ED: LDU #$984D
    cpu.state_.u = 0x984D;

    // 97F0: BRA $0201
    cpu.state_.pc = 0x99F3;

    // 97F2: LDU #$9850
    cpu.state_.u = 0x9850;

    // 97F5: BRA $0201
    cpu.state_.pc = 0x99F8;

    // 97F7: LDU #$9859
    cpu.state_.u = 0x9859;

    // 97FA: BRA $0201
    cpu.state_.pc = 0x99FD;

    // 97FC: LDU #$9853
    cpu.state_.u = 0x9853;

    // 97FF: BRA $0201
    cpu.state_.pc = 0x9A02;

    // 9801: LDU #$985C
    cpu.state_.u = 0x985C;

    // 9804: BRA $0201
    cpu.state_.pc = 0x9A07;

    // 9806: LDU #$985F
    cpu.state_.u = 0x985F;

    // 9809: BRA $0201
    cpu.state_.pc = 0x9A0C;

    // 980B: LDU #$9862
    cpu.state_.u = 0x9862;

    // 980E: BRA $0201
    cpu.state_.pc = 0x9A11;

}

} // namespace StarWars