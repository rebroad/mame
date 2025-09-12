#include "cpu_6809.h"

namespace StarWars {

void routine_97ac_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_97ac.md
    // Address: 0x97AC

    // 97AC: LDB $4B15
    cpu.state_.b = cpu.read_memory(0x4B15);

    // 97AF: CMPB #$05
    cpu.compare_b(0x05);

    // 97B1: BCS $000C
    if (cpu.carry_flag()) cpu.state_.pc += 0x000C;

    // 97B3: LDU #$9847
    cpu.state_.u = 0x9847;

    // 97B6: BRA $0015
    cpu.state_.pc += 0x0015;

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

    // 97E6: BRA $0064
    cpu.state_.pc += 0x0064;

    // 97E8: LDU #$984A
    cpu.state_.u = 0x984A;

    // 97EB: BRA $0064
    cpu.state_.pc += 0x0064;

    // 97ED: LDU #$984D
    cpu.state_.u = 0x984D;

    // 97F0: BRA $0064
    cpu.state_.pc += 0x0064;

    // 97F2: LDU #$9850
    cpu.state_.u = 0x9850;

    // 97F5: BRA $0064
    cpu.state_.pc += 0x0064;

    // 97F7: LDU #$9859
    cpu.state_.u = 0x9859;

    // 97FA: BRA $0064
    cpu.state_.pc += 0x0064;

    // 97FC: LDU #$9853
    cpu.state_.u = 0x9853;

    // 97FF: BRA $0064
    cpu.state_.pc += 0x0064;

    // 9801: LDU #$985C
    cpu.state_.u = 0x985C;

    // 9804: BRA $0064
    cpu.state_.pc += 0x0064;

    // 9806: LDU #$985F
    cpu.state_.u = 0x985F;

    // 9809: BRA $0064
    cpu.state_.pc += 0x0064;

    // 980B: LDU #$9862
    cpu.state_.u = 0x9862;

    // 980E: BRA $0064
    cpu.state_.pc += 0x0064;

    // 9810: LDA $2,U
    // TODO: Fix comma operator: LDA $2,U

    // 9812: STA $4B2B
    cpu.write_memory(0x4B2B, cpu.state_.a);

    // 9815: ADDA <$5F
    cpu.state_.a += 0x5F;

    // 9818: STA <$5F
    cpu.write_memory(0x5F, cpu.state_.a);

    // 981A: LDA $1,U
    // TODO: Fix comma operator: LDA $1,U

    // 981C: STA $4B2A
    cpu.write_memory(0x4B2A, cpu.state_.a);

    // 981F: ADCA <$5E
    // TODO: Convert ADCA <$5E

    // 9822: STA <$5E
    cpu.write_memory(0x5E, cpu.state_.a);

    // 9824: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 9826: STA $4B29
    cpu.write_memory(0x4B29, cpu.state_.a);

    // 9829: ADCA <$5D
    // TODO: Convert ADCA <$5D

    // 982C: STA <$5D
    cpu.write_memory(0x5D, cpu.state_.a);

    // 982E: LDA <$5C
    cpu.state_.a = cpu.read_memory(0x5C);

    // 9830: ADCA #$00
    // TODO: Convert ADCA #$00

    // 9833: STA <$5C
    cpu.write_memory(0x5C, cpu.state_.a);

    // 9835: LDA #$FF
    cpu.state_.a = 0xFF;

    // 9837: STA $4B2C
    cpu.write_memory(0x4B2C, cpu.state_.a);

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

    // 984E: BRA $00A4
    cpu.state_.pc += 0x00A4;

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
    cpu.state_.a = cpu.read_memory(0x8B);

    // 9876: BNE $00D2
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00D2;

    // 9878: LDA #$10
    cpu.state_.a = 0x10;

    // 987A: STA <$62
    cpu.write_memory(0x62, cpu.state_.a);

    // 987C: INC <$8B
    // TODO: Convert INC <$8B

    // 987F: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 9881: ANDA #$03
    cpu.state_.a &= 0x03;

    // 9883: STA <$62
    cpu.write_memory(0x62, cpu.state_.a);

    // 9886: LDB <$62
    cpu.state_.b = cpu.read_memory(0x62);

    // 9888: CMPB #$08
    cpu.compare_b(0x08);

    // 988A: BLS $00E4
    // TODO: Convert BLS $00E4

    // 988C: LDB #$08
    cpu.state_.b = 0x08;

    // 988E: STB <$62
    cpu.write_memory(0x62, cpu.state_.b);

    // 9890: LDB <$62
    cpu.state_.b = cpu.read_memory(0x62);

    // 9892: BEQ $00EB
    if (cpu.zero_flag()) cpu.state_.pc += 0x00EB;

    // 9895: STB <$62
    cpu.write_memory(0x62, cpu.state_.b);

    // 9898: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 989A: ANDA #$00
    cpu.state_.a &= 0x00;

    // 989C: BNE $0103
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0103;

    // 989E: LDX #$4900
    cpu.state_.x = 0x4900;

    // 98A1: DEC $6,X
    // TODO: Convert DEC $6,X

    // 98A3: BPL $00FB
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00FB;

    // 98A5: CLR $6,X
    // TODO: Fix comma operator: CLR $6,X

    // 98A7: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 98AA: CMPX #$494B
    cpu.compare_x(0x494B);

    // 98AD: BCS $00F5
    if (cpu.carry_flag()) cpu.state_.pc += 0x00F5;

    // 98B0: LDB <$62
    cpu.state_.b = cpu.read_memory(0x62);

    // 98B2: ANDB #$03
    cpu.state_.b &= 0x03;

    // 98B4: BEQ $011E
    if (cpu.zero_flag()) cpu.state_.pc += 0x011E;

    // 98B6: LDD #$7100
    cpu.state_.d = 0x7100;

    // 98B9: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 98BB: LDD #$67FF
    cpu.state_.d = 0x67FF;

    // 98BE: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 98C0: LDD #$B9B3
    cpu.state_.d = 0xB9B3;

    // 98C3: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 98C5: LDD #$7200
    cpu.state_.d = 0x7200;

    // 98C8: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 98CB: NEG <$16
    // TODO: Convert NEG <$16

    // 98CD: LBRA $2144
    // TODO: Convert LBRA $2144

    // 98D0: BRA $0147
    cpu.state_.pc += 0x0147;

    // 98D2: BRN $014F
    // TODO: Convert BRN $014F

    // 98D4: BVC $014A
    // TODO: Convert BVC $014A

    // 98D6: BRA $0150
    cpu.state_.pc += 0x0150;

    // 98D8: BCC $0152
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0152;

    // 98DA: BCS $0155
    if (cpu.carry_flag()) cpu.state_.pc += 0x0155;

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

    // 9908: BRA $015E
    cpu.state_.pc += 0x015E;

    // 990A: EORA >$0001
    cpu.state_.a ^= 0x0001;

    // 990D: XNC <$06
    // TODO: Convert XNC <$06

    // 990F: BRA $0165
    cpu.state_.pc += 0x0165;

    // 9912: NEG <$01
    // TODO: Convert NEG <$01

    // 9914: XNC <$07
    // TODO: Convert XNC <$07

    // 9916: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X

    // 9918: SUBB #$00
    cpu.state_.b -= 0x00;

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
    cpu.state_.a ^= 0x00;

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
    cpu.state_.pc = 0x40;

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
    cpu.state_.b ^= 0x00;

    // 998A: NEG <$00
    // TODO: Convert NEG <$00

    // 998D: ASL $0,X
    // TODO: Convert ASL $0,X

    // 998F: BVC $01E5
    // TODO: Convert BVC $01E5

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
    cpu.state_.a -= 0x00;

    // 99A4: SUBA <$00
    cpu.state_.a -= 0x00;

    // 99A6: NEG <$03
    // TODO: Convert NEG <$03

    // 99A8: ANDCC #$80
    // TODO: Convert ANDCC #$80

    // 99AA: NEG <$D8
    // TODO: Convert NEG <$D8

}

} // namespace StarWars