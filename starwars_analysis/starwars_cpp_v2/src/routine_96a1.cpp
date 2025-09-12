#include "cpu_6809.h"

namespace StarWars {

void routine_96a1_impl(CPU6809& cpu) {
    // Converted from rom_disasm_96a1.md
    // Address: 0x96A1

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

    // 9725: BNE $9739
    if (!cpu.zero_flag()) cpu.m_pc = 0x9739;

    // 9727: LDB $4B15
    cpu.m_b = cpu.read_memory(0x4B15);

    // 972A: BEQ $9739
    if (cpu.zero_flag()) cpu.m_pc = 0x9739;

    // 972D: ADDB $4B15
    cpu.m_b += 0x4B15;

    // 9730: LDX #$9865
    cpu.m_x = 0x9865;

    // 9734: TFR X,U
    cpu.m_u = cpu.m_x;

    // 9736: JSR $9810
    cpu.call_function(0x9810);

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

    // 9749: STA $4B30
    cpu.write_memory(0x4B30, cpu.m_a);

    // 974C: LDA $4B2F
    cpu.m_a = cpu.read_memory(0x4B2F);

    // 974F: ADCA $1,X
    // TODO: Convert ADCA $1,X

    // 9752: STA $4B2F
    cpu.write_memory(0x4B2F, cpu.m_a);

    // 9755: LDA $4B2E
    cpu.m_a = cpu.read_memory(0x4B2E);

    // 9758: ADCA ,X
    // TODO: Convert ADCA ,X

    // 975B: STA $4B2E
    cpu.write_memory(0x4B2E, cpu.m_a);

    // 975E: LDA $4B1A
    cpu.m_a = cpu.read_memory(0x4B1A);

    // 9761: BEQ $9774
    if (cpu.zero_flag()) cpu.m_pc = 0x9774;

    // 9763: ADDA #$99
    cpu.m_a += 0x99;

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

    // 978D: STA $4B2B
    cpu.write_memory(0x4B2B, cpu.m_a);

    // 9790: LDA $1,U
    // TODO: Fix comma operator: LDA $1,U

    // 9792: ADCA $4B2A
    // TODO: Convert ADCA $4B2A

    // 9796: STA $4B2A
    cpu.write_memory(0x4B2A, cpu.m_a);

    // 9799: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 979B: ADCA $4B29
    // TODO: Convert ADCA $4B29

    // 979F: STA $4B29
    cpu.write_memory(0x4B29, cpu.m_a);

    // 97A3: BNE $9787
    if (!cpu.zero_flag()) cpu.m_pc = 0x9787;

    // 97A5: LDU #$4B29
    cpu.m_u = 0x4B29;

    // 97A8: JSR $9810
    cpu.call_function(0x9810);

    // 97AC: LDB $4B15
    cpu.m_b = cpu.read_memory(0x4B15);

    // 97AF: CMPB #$05
    cpu.compare_b(0x05);

    // 97B1: BCS $97B8
    if (cpu.carry_flag()) cpu.m_pc = 0x97B8;

    // 97B3: LDU #$9847
    cpu.m_u = 0x9847;

    // 97B6: BRA $97C1
    cpu.m_pc = 0x97C1;

    // 97B9: ADDB $4B15
    cpu.m_b += 0x4B15;

    // 97BC: LDU #$983B
    cpu.m_u = 0x983B;

    // 97BF: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

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

    // 97E3: JSR $97AC
    cpu.call_function(0x97AC);

    // 97E6: BRA $9810
    cpu.m_pc = 0x9810;

    // 97E8: LDU #$984A
    cpu.m_u = 0x984A;

    // 97EB: BRA $9810
    cpu.m_pc = 0x9810;

    // 97ED: LDU #$984D
    cpu.m_u = 0x984D;

    // 97F0: BRA $9810
    cpu.m_pc = 0x9810;

    // 97F2: LDU #$9850
    cpu.m_u = 0x9850;

    // 97F5: BRA $9810
    cpu.m_pc = 0x9810;

    // 97F7: LDU #$9859
    cpu.m_u = 0x9859;

    // 97FA: BRA $9810
    cpu.m_pc = 0x9810;

    // 97FC: LDU #$9853
    cpu.m_u = 0x9853;

    // 97FF: BRA $9810
    cpu.m_pc = 0x9810;

    // 9801: LDU #$985C
    cpu.m_u = 0x985C;

    // 9804: BRA $9810
    cpu.m_pc = 0x9810;

    // 9806: LDU #$985F
    cpu.m_u = 0x985F;

    // 9809: BRA $9810
    cpu.m_pc = 0x9810;

    // 980B: LDU #$9862
    cpu.m_u = 0x9862;

    // 980E: BRA $9810
    cpu.m_pc = 0x9810;

    // 9810: LDA $2,U
    // TODO: Fix comma operator: LDA $2,U

    // 9812: STA $4B2B
    cpu.write_memory(0x4B2B, cpu.m_a);

    // 9815: ADDA <$5F
    cpu.m_a += 0x5F;

    // 9818: STA <$5F
    cpu.write_memory(0x5F, cpu.m_a);

    // 981A: LDA $1,U
    // TODO: Fix comma operator: LDA $1,U

    // 981C: STA $4B2A
    cpu.write_memory(0x4B2A, cpu.m_a);

    // 981F: ADCA <$5E
    // TODO: Convert ADCA <$5E

    // 9822: STA <$5E
    cpu.write_memory(0x5E, cpu.m_a);

    // 9824: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 9826: STA $4B29
    cpu.write_memory(0x4B29, cpu.m_a);

    // 9829: ADCA <$5D
    // TODO: Convert ADCA <$5D

    // 982C: STA <$5D
    cpu.write_memory(0x5D, cpu.m_a);

    // 982E: LDA <$5C
    cpu.m_a = cpu.read_memory(0x5C);

    // 9830: ADCA #$00
    // TODO: Convert ADCA #$00

    // 9833: STA <$5C
    cpu.write_memory(0x5C, cpu.m_a);

    // 9835: LDA #$FF
    cpu.m_a = 0xFF;

    // 9837: STA $4B2C
    cpu.write_memory(0x4B2C, cpu.m_a);

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
    cpu.m_pc = 0x9850;

    // 9850: NEG <$00
    // TODO: Convert NEG <$00

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

    // 987F: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 9881: ANDA #$03
    cpu.m_a &= 0x03;

    // 9883: STA <$62
    cpu.write_memory(0x62, cpu.m_a);

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

    // 9890: LDB <$62
    cpu.m_b = cpu.read_memory(0x62);

    // 9892: BEQ $9897
    if (cpu.zero_flag()) cpu.m_pc = 0x9897;

    // 9895: STB <$62
    cpu.write_memory(0x62, cpu.m_b);

    // 9898: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 989A: ANDA #$00
    cpu.m_a &= 0x00;

    // 989C: BNE $98AF
    if (!cpu.zero_flag()) cpu.m_pc = 0x98AF;

    // 989E: LDX #$4900
    cpu.m_x = 0x4900;

}

} // namespace StarWars