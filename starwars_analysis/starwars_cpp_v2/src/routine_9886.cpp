#include "cpu_6809.h"

namespace StarWars {

void routine_9886_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_9886.md
    // Address: 0x9886

    // 9886: LDB <$62
    cpu.state_.b = cpu.read_memory(0x62);

    // 9888: CMPB #$08
    cpu.compare_b(0x08);

    // 988A: BLS $000A
    // TODO: Convert BLS $000A

    // 988C: LDB #$08
    cpu.state_.b = 0x08;

    // 988E: STB <$62
    cpu.write_memory(0x62, cpu.state_.b);

    // 9890: LDB <$62
    cpu.state_.b = cpu.read_memory(0x62);

    // 9892: BEQ $0011
    if (cpu.zero_flag()) cpu.state_.pc = 0x98A5;

    // 9895: STB <$62
    cpu.write_memory(0x62, cpu.state_.b);

    // 9898: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 989A: ANDA #$00
    cpu.state_.a &= 0x00;

    // 989C: BNE $0029
    if (!cpu.zero_flag()) cpu.state_.pc = 0x98C7;

    // 989E: LDX #$4900
    cpu.state_.x = 0x4900;

    // 98A1: DEC $6,X
    // TODO: Convert DEC $6,X

    // 98A3: BPL $0021
    if (!cpu.negative_flag()) cpu.state_.pc = 0x98C6;

    // 98A5: CLR $6,X
    // TODO: Fix comma operator: CLR $6,X

    // 98A7: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 98AA: CMPX #$494B
    cpu.compare_x(0x494B);

    // 98AD: BCS $001B
    if (cpu.carry_flag()) cpu.state_.pc = 0x98CA;

    // 98B0: LDB <$62
    cpu.state_.b = cpu.read_memory(0x62);

    // 98B2: ANDB #$03
    cpu.state_.b &= 0x03;

    // 98B4: BEQ $0044
    if (cpu.zero_flag()) cpu.state_.pc = 0x98FA;

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

    // 98CD: LBRA $206A
    // TODO: Convert LBRA $206A

    // 98D0: BRA $006D
    cpu.state_.pc = 0x993F;

    // 98D2: BRN $0075
    // TODO: Convert BRN $0075

    // 98D4: BVC $0070
    // TODO: Convert BVC $0070

    // 98D6: BRA $0076
    cpu.state_.pc = 0x994E;

    // 98D8: BCC $0078
    if (!cpu.carry_flag()) cpu.state_.pc = 0x9952;

    // 98DA: BCS $007B
    if (cpu.carry_flag()) cpu.state_.pc = 0x9957;

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

    // 9908: BRA $0084
    cpu.state_.pc = 0x988E;

    // 990A: EORA >$0001
    cpu.state_.a ^= 0x0001;

    // 990D: XNC <$06
    // TODO: Convert XNC <$06

    // 990F: BRA $008B
    cpu.state_.pc = 0x989C;

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

    // 998F: BVC $010B
    // TODO: Convert BVC $010B

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

    // 99AC: NEG <$01
    // TODO: Convert NEG <$01

    // 99AE: NEG <$1D
    // TODO: Convert NEG <$1D

    // 99B0: SUBA #$00
    cpu.state_.a -= 0x00;

    // 99B2: BVC $012E
    // TODO: Convert BVC $012E

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
    cpu.state_.a ^= 0x00;

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

    // 99F9: NEG <$01
    // TODO: Convert NEG <$01

    // 99FB: COM <$08
    // TODO: Convert COM <$08

    // 99FD: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X

    // 9A00: NEG <$03
    // TODO: Convert NEG <$03

    // 9A02: COM <$09
    // TODO: Convert COM <$09

    // 9A04: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X

    // 9A06: ASL $0,X
    // TODO: Convert ASL $0,X

    // 9A08: COM <$03
    // TODO: Convert COM <$03

    // 9A0A: DEC <$30
    // TODO: Convert DEC <$30

    // 9A0C: NEG <$78
    // TODO: Convert NEG <$78

    // 9A0E: NEG <$01
    // TODO: Convert NEG <$01

    // 9A10: COM <$0B
    // TODO: Convert COM <$0B

    // 9A13: NEG <$90
    // TODO: Convert NEG <$90

    // 9A15: NEG <$01
    // TODO: Convert NEG <$01

    // 9A17: XNC <$0C
    // TODO: Convert XNC <$0C

    // 9A1A: NEG <$A0
    // TODO: Convert NEG <$A0

    // 9A1C: NEG <$03
    // TODO: Convert NEG <$03

    // 9A1E: XNC <$0D
    // TODO: Convert XNC <$0D

    // 9A21: NEG <$B0
    // TODO: Convert NEG <$B0

    // 9A23: NEG <$01
    // TODO: Convert NEG <$01

    // 9A25: XNC <$0E
    // TODO: Convert XNC <$0E

    // 9A28: NEG <$F0
    // TODO: Convert NEG <$F0

    // 9A2A: NEG <$01
    // TODO: Convert NEG <$01

    // 9A2C: NEG <$0F
    // TODO: Convert NEG <$0F

    // 9A2F: NEG <$10
    // TODO: Convert NEG <$10

    // 9A31: NEG <$01
    // TODO: Convert NEG <$01

    // 9A33: NEG <$10
    // TODO: Convert NEG <$10

    // 9A36: NEG <$50
    // TODO: Convert NEG <$50

    // 9A38: NEG <$01
    // TODO: Convert NEG <$01

    // 9A3A: COM <$11
    // TODO: Convert COM <$11

    // 9A3D: NEG <$60
    // TODO: Convert NEG <$60

    // 9A3F: NEG <$03
    // TODO: Convert NEG <$03

    // 9A41: COM <$12
    // TODO: Convert COM <$12

    // 9A44: NEG <$70
    // TODO: Convert NEG <$70

    // 9A46: NEG <$01
    // TODO: Convert NEG <$01

    // 9A48: COM <$13
    // TODO: Convert COM <$13

    // 9A4B: NEG <$CC
    // TODO: Convert NEG <$CC

    // 9A4D: NEG <$03
    // TODO: Convert NEG <$03

    // 9A4F: NEG <$14
    // TODO: Convert NEG <$14

    // 9A52: NEG <$34
    // TODO: Convert NEG <$34

    // 9A54: NEG <$03
    // TODO: Convert NEG <$03

    // 9A56: NEG <$15
    // TODO: Convert NEG <$15

    // 9A58: NEG $0,X
    // TODO: Convert NEG $0,X

    // 9A5A: SUBA $0,X
    // TODO: Fix comma operator: SUBA $0,X

    // 9A5C: NEG <$01
    // TODO: Convert NEG <$01

    // 9A5E: LBRA $61DB
    // TODO: Convert LBRA $61DB

    // 9A61: SUBB $0,X
    // TODO: Fix comma operator: SUBB $0,X

    // 9A63: COM <$00
    // TODO: Convert COM <$00

    // 9A65: LBSR $61E2
    // TODO: Convert LBSR $61E2

    // 9A68: BRA $01E4
    cpu.state_.pc = 0x9A4E;

    // 9A6A: COM <$00
    // TODO: Convert COM <$00

    // 9A6D: NEG $0,X
    // TODO: Convert NEG $0,X

    // 9A6F: NEG $0,X
    // TODO: Convert NEG $0,X

    // 9A71: NEG <$01
    // TODO: Convert NEG <$01

    // 9A74: LSR >$00E0
    // TODO: Convert LSR >$00E0

    // 9A77: NEG <$01
    // TODO: Convert NEG <$01

    // 9A79: NEG <$1A
    // TODO: Convert NEG <$1A

    // 9A7B: LSR >$0020
    // TODO: Convert LSR >$0020

    // 9A7E: NEG <$01
    // TODO: Convert NEG <$01

    // 9A80: NEG <$1B
    // TODO: Convert NEG <$1B

    // 9A82: SUBA #$00
    cpu.state_.a -= 0x00;

    // 9A84: EORA <$00
    cpu.state_.a ^= 0x00;

}

} // namespace StarWars