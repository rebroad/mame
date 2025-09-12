#include "cpu_6809.h"

namespace StarWars {

void routine_973a_impl(CPU6809& cpu) {
    // Converted from rom_disasm_973a.md
    // Address: 0x973A

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

    // 98A1: DEC $6,X
    // TODO: Convert DEC $6,X

    // 98A3: BPL $98A7
    if (!cpu.negative_flag()) cpu.m_pc = 0x98A7;

    // 98A5: CLR $6,X
    // TODO: Fix comma operator: CLR $6,X

    // 98A7: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 98AA: CMPX #$494B
    cpu.compare_x(0x494B);

    // 98AD: BCS $98A1
    if (cpu.carry_flag()) cpu.m_pc = 0x98A1;

    // 98B0: LDB <$62
    cpu.m_b = cpu.read_memory(0x62);

    // 98B2: ANDB #$03
    cpu.m_b &= 0x03;

    // 98B4: BEQ $98CA
    if (cpu.zero_flag()) cpu.m_pc = 0x98CA;

    // 98B6: LDD #$7100
    cpu.m_d = 0x7100;

    // 98B9: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 98BB: LDD #$67FF
    cpu.m_d = 0x67FF;

    // 98BE: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 98C0: LDD #$B9B3
    cpu.m_d = 0xB9B3;

    // 98C3: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 98C5: LDD #$7200
    cpu.m_d = 0x7200;

    // 98C8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 98CB: NEG <$16
    // TODO: Convert NEG <$16

    // 98CD: LBRA $B8F0
    // TODO: Convert LBRA $B8F0

    // 98D0: BRA $98F3
    cpu.m_pc = 0x98F3;

    // 98D2: BRN $98FB
    // TODO: Convert BRN $98FB

    // 98D4: BVC $98F6
    // TODO: Convert BVC $98F6

    // 98D6: BRA $98FC
    cpu.m_pc = 0x98FC;

    // 98D8: BCC $98FE
    if (!cpu.carry_flag()) cpu.m_pc = 0x98FE;

    // 98DA: BCS $9901
    if (cpu.carry_flag()) cpu.m_pc = 0x9901;

    // 98DC: LEAY -$E,Y
    // TODO: Fix comma operator: LEAY -$E,Y

    // 98DE: NEG <$B0
    // TODO: Convert NEG <$B0

    // 98E1: NEG <$03
    // TODO: Convert NEG <$03

    // 98E3: NEG <$00
    // TODO: Convert NEG <$00

    // 98E5: NEG <$E0
    // TODO: Convert NEG <$E0

    // 98E8: NEG <$03
    // TODO: Convert NEG <$03

    // 98EA: NEG <$01
    // TODO: Convert NEG <$01

    // 98EC: NEG <$20
    // TODO: Convert NEG <$20

    // 98EF: NEG <$03
    // TODO: Convert NEG <$03

    // 98F1: NEG <$02
    // TODO: Convert NEG <$02

    // 98F3: NEG <$50
    // TODO: Convert NEG <$50

    // 98F6: NEG <$03
    // TODO: Convert NEG <$03

    // 98F8: NEG <$03
    // TODO: Convert NEG <$03

    // 98FB: NEG <$A0
    // TODO: Convert NEG <$A0

    // 98FD: NEG <$01
    // TODO: Convert NEG <$01

    // 98FF: COM <$04
    // TODO: Convert COM <$04

    // 9902: NEG <$60
    // TODO: Convert NEG <$60

    // 9904: NEG <$01
    // TODO: Convert NEG <$01

    // 9906: XNC <$05
    // TODO: Convert XNC <$05

    // 9908: BRA $990A
    cpu.m_pc = 0x990A;

    // 990A: EORA >$0001
    cpu.m_a ^= 0x0001;

    // 990D: XNC <$06
    // TODO: Convert XNC <$06

    // 990F: BRA $9911
    cpu.m_pc = 0x9911;

    // 9912: NEG <$01
    // TODO: Convert NEG <$01

    // 9914: XNC <$07
    // TODO: Convert XNC <$07

    // 9916: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X

    // 9918: SUBB #$00
    cpu.m_b -= 0x00;

    // 991A: COM <$02
    // TODO: Convert COM <$02

    // 991C: ASL <$30
    // TODO: Convert ASL <$30

    // 991E: NEG <$00
    // TODO: Convert NEG <$00

    // 9920: NEG <$01
    // TODO: Convert NEG <$01

    // 9922: NEG <$09
    // TODO: Convert NEG <$09

    // 9924: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X

    // 9927: NEG <$03
    // TODO: Convert NEG <$03

    // 9929: XNC <$0A
    // TODO: Convert XNC <$0A

    // 992B: XANDCC #$00
    // TODO: Convert XANDCC #$00

    // 992D: EORA <$00
    cpu.m_a ^= 0x00;

    // 992F: NEG <$03
    // TODO: Convert NEG <$03

    // 9931: XDEC <$38
    // TODO: Convert XDEC <$38

    // 9933: NEG <$F0
    // TODO: Convert NEG <$F0

    // 9935: NEG <$01
    // TODO: Convert NEG <$01

    // 9937: NEG <$0C
    // TODO: Convert NEG <$0C

    // 9939: XANDCC #$00
    // TODO: Convert XANDCC #$00

}

} // namespace StarWars