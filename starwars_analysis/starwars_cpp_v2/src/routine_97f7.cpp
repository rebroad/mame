#include "cpu_6809.h"

namespace StarWars {

void routine_97f7_impl(CPU6809& cpu) {
    // Converted from rom_disasm_97f7.md
    // Address: 0x97F7

    // 97F7: LDU #$9859
    cpu.m_u = 0x9859;

    // 97FA: BRA $0019
    cpu.m_pc = 0x9815;

    // 97FC: LDU #$9853
    cpu.m_u = 0x9853;

    // 97FF: BRA $0019
    cpu.m_pc = 0x981A;

    // 9801: LDU #$985C
    cpu.m_u = 0x985C;

    // 9804: BRA $0019
    cpu.m_pc = 0x981F;

    // 9806: LDU #$985F
    cpu.m_u = 0x985F;

    // 9809: BRA $0019
    cpu.m_pc = 0x9824;

    // 980B: LDU #$9862
    cpu.m_u = 0x9862;

    // 980E: BRA $0019
    cpu.m_pc = 0x9829;

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

    // 984E: BRA $0059
    cpu.m_pc = 0x98A9;

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

    // 9876: BNE $0087
    if (!cpu.zero_flag()) cpu.m_pc = 0x97FF;

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

    // 988A: BLS $0099
    // TODO: Convert BLS $0099

    // 988C: LDB #$08
    cpu.m_b = 0x08;

    // 988E: STB <$62
    cpu.write_memory(0x62, cpu.m_b);

    // 9890: LDB <$62
    cpu.m_b = cpu.read_memory(0x62);

    // 9892: BEQ $00A0
    if (cpu.zero_flag()) cpu.m_pc = 0x9834;

    // 9895: STB <$62
    cpu.write_memory(0x62, cpu.m_b);

    // 9898: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 989A: ANDA #$00
    cpu.m_a &= 0x00;

    // 989C: BNE $00B8
    if (!cpu.zero_flag()) cpu.m_pc = 0x9856;

    // 989E: LDX #$4900
    cpu.m_x = 0x4900;

    // 98A1: DEC $6,X
    // TODO: Convert DEC $6,X

    // 98A3: BPL $00B0
    if (!cpu.negative_flag()) cpu.m_pc = 0x9855;

    // 98A5: CLR $6,X
    // TODO: Fix comma operator: CLR $6,X

    // 98A7: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 98AA: CMPX #$494B
    cpu.compare_x(0x494B);

    // 98AD: BCS $00AA
    if (cpu.carry_flag()) cpu.m_pc = 0x9859;

    // 98B0: LDB <$62
    cpu.m_b = cpu.read_memory(0x62);

    // 98B2: ANDB #$03
    cpu.m_b &= 0x03;

    // 98B4: BEQ $00D3
    if (cpu.zero_flag()) cpu.m_pc = 0x9889;

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

    // 98CD: LBRA $20F9
    // TODO: Convert LBRA $20F9

    // 98D0: BRA $00FC
    cpu.m_pc = 0x98CE;

    // 98D2: BRN $0104
    // TODO: Convert BRN $0104

    // 98D4: BVC $00FF
    // TODO: Convert BVC $00FF

    // 98D6: BRA $0105
    cpu.m_pc = 0x98DD;

    // 98D8: BCC $0107
    if (!cpu.carry_flag()) cpu.m_pc = 0x98E1;

    // 98DA: BCS $010A
    if (cpu.carry_flag()) cpu.m_pc = 0x98E6;

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

    // 9908: BRA $0113
    cpu.m_pc = 0x991D;

    // 990A: EORA >$0001
    cpu.m_a ^= 0x0001;

    // 990D: XNC <$06
    // TODO: Convert XNC <$06

    // 990F: BRA $011A
    cpu.m_pc = 0x992B;

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

    // 993B: NEG <$01
    // TODO: Convert NEG <$01

    // 993E: NEG <$0D
    // TODO: Convert NEG <$0D

    // 9940: XANDCC #$00
    // TODO: Convert XANDCC #$00

    // 9942: ASL $0,X
    // TODO: Convert ASL $0,X

    // 9944: NEG <$03
    // TODO: Convert NEG <$03

    // 9946: JMP <$40
    cpu.m_pc = 0x40;

    // 9948: NEG <$90
    // TODO: Convert NEG <$90

    // 994A: NEG <$03
    // TODO: Convert NEG <$03

    // 994C: COM <$0F
    // TODO: Convert COM <$0F

    // 994F: NEG <$70
    // TODO: Convert NEG <$70

    // 9951: NEG <$03
    // TODO: Convert NEG <$03

    // 9953: COM <$10
    // TODO: Convert COM <$10

    // 9956: NEG <$90
    // TODO: Convert NEG <$90

    // 9958: NEG <$01
    // TODO: Convert NEG <$01

    // 995A: NEG <$11
    // TODO: Convert NEG <$11

    // 995D: NEG <$00
    // TODO: Convert NEG <$00

    // 995F: NEG <$02
    // TODO: Convert NEG <$02

    // 9961: NEG <$12
    // TODO: Convert NEG <$12

    // 9964: NEG <$70
    // TODO: Convert NEG <$70

    // 9966: NEG <$01
    // TODO: Convert NEG <$01

    // 9968: NEG <$13
    // TODO: Convert NEG <$13

    // 996B: NEG <$E4
    // TODO: Convert NEG <$E4

    // 996D: NEG <$01
    // TODO: Convert NEG <$01

    // 996F: NEG <$14
    // TODO: Convert NEG <$14

    // 9972: NEG <$1C
    // TODO: Convert NEG <$1C

    // 9974: NEG <$01
    // TODO: Convert NEG <$01

    // 9976: NEG <$15
    // TODO: Convert NEG <$15

    // 9979: NEG <$C0
    // TODO: Convert NEG <$C0

    // 997B: NEG <$01
    // TODO: Convert NEG <$01

    // 997D: NEG <$16
    // TODO: Convert NEG <$16

    // 9980: NEG <$40
    // TODO: Convert NEG <$40

    // 9982: NEG <$01
    // TODO: Convert NEG <$01

    // 9984: NEG <$17
    // TODO: Convert NEG <$17

    // 9986: ASL $0,X
    // TODO: Convert ASL $0,X

    // 9988: EORB <$00
    cpu.m_b ^= 0x00;

    // 998A: NEG <$00
    // TODO: Convert NEG <$00

    // 998D: ASL $0,X
    // TODO: Convert ASL $0,X

    // 998F: BVC $019A
    // TODO: Convert BVC $019A

    // 9991: NEG <$00
    // TODO: Convert NEG <$00

    // 9994: NEG >$00F0
    // TODO: Convert NEG >$00F0

    // 9997: NEG <$02
    // TODO: Convert NEG <$02

    // 9999: XNC <$1A
    // TODO: Convert XNC <$1A

    // 999B: NEG >$0010
    // TODO: Convert NEG >$0010

    // 999E: NEG <$02
    // TODO: Convert NEG <$02

    // 99A0: XNC <$1B
    // TODO: Convert XNC <$1B

    // 99A2: SUBA #$00
    cpu.m_a -= 0x00;

    // 99A4: SUBA <$00
    cpu.m_a -= 0x00;

    // 99A6: NEG <$03
    // TODO: Convert NEG <$03

    // 99A8: ANDCC #$80
    // TODO: Convert ANDCC #$80

    // 99AA: NEG <$D8
    // TODO: Convert NEG <$D8

    // 99AC: NEG <$01
    // TODO: Convert NEG <$01

    // 99AE: NEG <$1D
    // TODO: Convert NEG <$1D

    // 99B0: SUBA #$00
    cpu.m_a -= 0x00;

    // 99B2: BVC $01BD
    // TODO: Convert BVC $01BD

    // 99B4: NEG <$00
    // TODO: Convert NEG <$00

    // 99B6: EXG A,D
    // TODO: Convert EXG A,D

    // 99B8: NEG <$70
    // TODO: Convert NEG <$70

    // 99BA: NEG <$01
    // TODO: Convert NEG <$01

    // 99BC: XNC <$1F
    // TODO: Convert XNC <$1F

    // 99BE: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X

    // 99C0: EORA #$00
    cpu.m_a ^= 0x00;

    // 99C2: NEG <$02
    // TODO: Convert NEG <$02

    // 99C4: NEG <$30
    // TODO: Convert NEG <$30

    // 99C6: NEG <$98
    // TODO: Convert NEG <$98

    // 99C8: NEG <$03
    // TODO: Convert NEG <$03

    // 99CA: XNC <$01
    // TODO: Convert XNC <$01

    // 99CC: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X

    // 99CE: EORA $0,X
    // TODO: Fix comma operator: EORA $0,X

    // 99D0: COM <$02
    // TODO: Convert COM <$02

    // 99D2: XNC <$30
    // TODO: Convert XNC <$30

    // 99D4: NEG <$B8
    // TODO: Convert NEG <$B8

    // 99D6: NEG <$01
    // TODO: Convert NEG <$01

    // 99D8: XNC <$03
    // TODO: Convert XNC <$03

    // 99DA: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X

    // 99DC: EORB $0,X
    // TODO: Fix comma operator: EORB $0,X

    // 99DE: NEG <$00
    // TODO: Convert NEG <$00

    // 99E0: LSR <$30
    // TODO: Convert LSR <$30

    // 99E2: NEG <$F8
    // TODO: Convert NEG <$F8

    // 99E4: NEG <$03
    // TODO: Convert NEG <$03

    // 99E6: NEG <$05
    // TODO: Convert NEG <$05

    // 99E8: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X

    // 99EA: ASL <$00
    // TODO: Convert ASL <$00

    // 99EC: COM <$00
    // TODO: Convert COM <$00

    // 99EE: ROR <$30
    // TODO: Convert ROR <$30

    // 99F0: NEG <$18
    // TODO: Convert NEG <$18

    // 99F2: NEG <$01
    // TODO: Convert NEG <$01

    // 99F4: NEG <$07
    // TODO: Convert NEG <$07

    // 99F6: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X

}

} // namespace StarWars