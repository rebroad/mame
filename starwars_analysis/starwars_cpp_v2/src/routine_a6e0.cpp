#include "cpu_6809.h"

namespace StarWars {

void routine_a6e0_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_a6e0.md
    // Address: 0xA6E0

    // A6E0: LDB $4B19
    cpu.state_.b = cpu.read_memory(0x4B19);

    // A6E3: CMPB #$0C
    cpu.compare_b(0x0C);

    // A6E5: BCS $000C
    if (cpu.carry_flag()) cpu.state_.pc += 0x000C;

    // A6E7: LDX #$A6DE
    cpu.state_.x = 0xA6DE;

    // A6EA: BRA $0012
    cpu.state_.pc += 0x0012;

    // A6ED: LDX #$A6C8
    cpu.state_.x = 0xA6C8;

    // A6F0: LDX B,X
    // TODO: Fix comma operator: LDX B,X

    // A6F2: BRA $0028
    cpu.state_.pc += 0x0028;

    // A6F4: LDB $4B19
    cpu.state_.b = cpu.read_memory(0x4B19);

    // A6F7: CMPB #$07
    cpu.compare_b(0x07);

    // A6F9: BLS $001D
    // TODO: Convert BLS $001D

    // A6FB: LDB #$07
    cpu.state_.b = 0x07;

    // A6FE: LDX #$A718
    cpu.state_.x = 0xA718;

    // A701: LDX B,X
    // TODO: Fix comma operator: LDX B,X

    // A703: BRA $0028
    cpu.state_.pc += 0x0028;

    // A705: LDX #$494B
    cpu.state_.x = 0x494B;

    // A708: STX <$A8
    cpu.write_memory(0xA8, cpu.state_.x);

    // A70A: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // A70C: BEQ $0037
    if (cpu.zero_flag()) cpu.state_.pc += 0x0037;

    // A70E: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // A710: CMPX #$496F
    cpu.compare_x(0x496F);

    // A713: BCS $0028
    if (cpu.carry_flag()) cpu.state_.pc += 0x0028;

    // A715: LEAS $2,S
    // TODO: Fix comma operator: LEAS $2,S

    // A719: ROL $9,U
    // TODO: Convert ROL $9,U

    // A71B: ROL $9,U
    // TODO: Convert ROL $9,U

    // A71D: COM $9,U
    // TODO: Convert COM $9,U

    // A71F: COM $9,U
    // TODO: Convert COM $9,U

    // A728: JSR $A6E0
    cpu.call_function(0xA6E0);

    // A72B: LDA #$70
    cpu.state_.a = 0x70;

    // A72D: STA $5,X
    // TODO: Handle indexed addressing: STA $5,X

    // A72F: LDA #$05
    cpu.state_.a = 0x05;

    // A731: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // A733: LDU <$64
    cpu.state_.u = cpu.read_memory_word(0x64);

    // A735: STX <$01
    cpu.write_memory(0x01, cpu.state_.x);

    // A737: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // A739: SUBD $509A
    cpu.state_.d -= 0x509A;

    // A73C: BMI $0062
    if (cpu.negative_flag()) cpu.state_.pc += 0x0062;

    // A73E: LDA #$08
    cpu.state_.a = 0x08;

    // A740: BRA $0064
    cpu.state_.pc += 0x0064;

    // A742: LDA #$07
    cpu.state_.a = 0x07;

    // A744: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A746: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // A748: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A74A: SUBA $5098
    cpu.state_.a -= 0x5098;

    // A74D: ANDA #$80
    cpu.state_.a &= 0x80;

    // A74F: EORA ,U
    // TODO: Complex indexed addressing: ,U

    // A751: LDB $1,U
    // TODO: Fix comma operator: LDB $1,U

    // A753: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // A755: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // A757: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // A759: LDD #$0200
    cpu.state_.d = 0x0200;

    // A75C: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // A75E: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // A760: SUBD $509A
    cpu.state_.d -= 0x509A;

    // A763: STA $6,X
    // TODO: Handle indexed addressing: STA $6,X

    // A765: BPL $008B
    if (!cpu.negative_flag()) cpu.state_.pc += 0x008B;

    // A769: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A76B: STD $4706
    cpu.write_memory(0x4706, cpu.state_.d);

    // A76E: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // A770: SUBD $5098
    cpu.state_.d -= 0x5098;

    // A773: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // A776: LDD #$0200
    cpu.state_.d = 0x0200;

    // A779: STD $4706
    cpu.write_memory(0x4706, cpu.state_.d);

    // A77C: LDA $4700
    cpu.state_.a = cpu.read_memory(0x4700);

    // A781: BCC $00A4
    if (!cpu.carry_flag()) cpu.state_.pc += 0x00A4;

    // A784: STA $7,X
    // TODO: Handle indexed addressing: STA $7,X

    // A786: LDA <$7D
    cpu.state_.a = cpu.read_memory(0x7D);

    // A788: EORA $6,X
    // TODO: Fix comma operator: EORA $6,X

    // A78A: BPL $00B0
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00B0;

    // A78C: CLR $6,X
    // TODO: Fix comma operator: CLR $6,X

    // A78E: BRA $00D2
    cpu.state_.pc += 0x00D2;

    // A790: LDA <$7D
    cpu.state_.a = cpu.read_memory(0x7D);

    // A792: BPL $00B5
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00B5;

    // A796: CMPA $7,X
    // TODO: Fix comma operator: CMPA $7,X

    // A798: BHI $00BE
    // TODO: Convert BHI $00BE

    // A79A: CLR $6,X
    // TODO: Fix comma operator: CLR $6,X

    // A79C: BRA $00D2
    cpu.state_.pc += 0x00D2;

    // A79E: LDA #$FF
    cpu.state_.a = 0xFF;

    // A7A0: STA $6,X
    // TODO: Handle indexed addressing: STA $6,X

    // A7A2: LDX <$01
    cpu.state_.x = cpu.read_memory_word(0x01);

    // A7A4: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A7A6: CMPA #$08
    cpu.compare_a(0x08);

    // A7A8: BNE $00CE
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00CE;

    // A7AA: LDA #$07
    cpu.state_.a = 0x07;

    // A7AC: BRA $00D0
    cpu.state_.pc += 0x00D0;

    // A7AE: LDA #$08
    cpu.state_.a = 0x08;

    // A7B0: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A7B2: JSR $BE11
    cpu.call_function(0xBE11);

    // A7B6: JSR $A705
    cpu.call_function(0xA705);

    // A7B9: LDA #$03
    cpu.state_.a = 0x03;

    // A7BB: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A7BD: BRA $00F1
    cpu.state_.pc += 0x00F1;

    // A7BF: JSR $A705
    cpu.call_function(0xA705);

    // A7C2: LDA #$04
    cpu.state_.a = 0x04;

    // A7C4: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A7C6: BRA $00F1
    cpu.state_.pc += 0x00F1;

    // A7C8: JSR $A705
    cpu.call_function(0xA705);

    // A7CB: LDA #$05
    cpu.state_.a = 0x05;

    // A7CD: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A7CF: BRA $00F1
    cpu.state_.pc += 0x00F1;

    // A7D1: LDA #$70
    cpu.state_.a = 0x70;

    // A7D3: STA $5,X
    // TODO: Handle indexed addressing: STA $5,X

    // A7D5: LDA #$05
    cpu.state_.a = 0x05;

    // A7D7: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // A7D9: LDU <$64
    cpu.state_.u = cpu.read_memory_word(0x64);

    // A7DB: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // A7DD: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A7DF: SUBA $5098
    cpu.state_.a -= 0x5098;

    // A7E2: ANDA #$80
    cpu.state_.a &= 0x80;

    // A7E4: EORA ,U
    // TODO: Complex indexed addressing: ,U

    // A7E6: LDB $1,U
    // TODO: Fix comma operator: LDB $1,U

    // A7E8: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // A7EA: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // A7EC: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // A7EE: LDD $5044
    cpu.state_.d = cpu.read_memory_word(0x5044);

    // A7F1: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // A7F3: JSR $BE11
    cpu.call_function(0xBE11);

    // A7F7: LDA <$95
    cpu.state_.a = cpu.read_memory(0x95);

    // A7F9: BEQ $0120
    if (cpu.zero_flag()) cpu.state_.pc += 0x0120;

    // A7FB: JSR $A705
    cpu.call_function(0xA705);

    // A7FE: BRA $0123
    cpu.state_.pc += 0x0123;

    // A800: JSR $A6F4
    cpu.call_function(0xA6F4);

    // A803: LDA #$09
    cpu.state_.a = 0x09;

    // A805: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A807: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A809: BRA $013F
    cpu.state_.pc += 0x013F;

    // A80B: LDA <$95
    cpu.state_.a = cpu.read_memory(0x95);

    // A80D: BEQ $0134
    if (cpu.zero_flag()) cpu.state_.pc += 0x0134;

    // A80F: JSR $A705
    cpu.call_function(0xA705);

    // A812: BRA $0137
    cpu.state_.pc += 0x0137;

    // A814: JSR $A6F4
    cpu.call_function(0xA6F4);

    // A817: LDA #$0A
    cpu.state_.a = 0x0A;

    // A819: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A81B: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A81D: BRA $013F
    cpu.state_.pc += 0x013F;

    // A81F: LDD $5078
    cpu.state_.d = cpu.read_memory_word(0x5078);

    // A822: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A824: LDD $507A
    cpu.state_.d = cpu.read_memory_word(0x507A);

    // A827: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A829: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // A82C: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // A82E: LDA #$40
    cpu.state_.a = 0x40;

    // A830: STA $5,X
    // TODO: Handle indexed addressing: STA $5,X

    // A832: LDA #$05
    cpu.state_.a = 0x05;

    // A834: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // A836: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // A83A: LDB $507C
    cpu.state_.b = cpu.read_memory(0x507C);

    // A83D: CMPB #$FC
    cpu.compare_b(0xFC);

    // A83F: BLT $0163
    // TODO: Convert BLT $0163

    // A841: LDA #$00
    cpu.state_.a = 0x00;

    // A843: STA $6,U
    // TODO: Handle indexed addressing: STA $6,U

    // A845: JSR $BE11
    cpu.call_function(0xBE11);

    // A849: LDX #$494B
    cpu.state_.x = 0x494B;

    // A84C: STX <$A8
    cpu.write_memory(0xA8, cpu.state_.x);

    // A84E: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // A850: BEQ $0181
    if (cpu.zero_flag()) cpu.state_.pc += 0x0181;

    // A852: LDB $4,X
    // TODO: Fix comma operator: LDB $4,X

    // A855: CMPB #$16
    cpu.compare_b(0x16);

    // A857: BCC $0180
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0180;

    // A859: LDU #$A675
    cpu.state_.u = 0xA675;

    // A85C: JSR [B,U]
    // TODO: Complex indexed addressing: [B,U]

    // A85E: BRA $0181
    cpu.state_.pc += 0x0181;

    // A861: LDX <$A8
    cpu.state_.x = cpu.read_memory_word(0xA8);

    // A863: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // A865: CMPX #$496F
    cpu.compare_x(0x496F);

    // A868: BCS $016C
    if (cpu.carry_flag()) cpu.state_.pc += 0x016C;

    // A86B: DEC $5,X
    // TODO: Convert DEC $5,X

    // A86D: BGT $0194
    // TODO: Convert BGT $0194

    // A870: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A872: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X

    // A875: DEC $5,X
    // TODO: Convert DEC $5,X

    // A877: BGT $01A0
    // TODO: Convert BGT $01A0

    // A87A: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A87C: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X

    // A87E: BRA $01C6
    cpu.state_.pc += 0x01C6;

    // A880: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A882: LDD #$0000
    cpu.state_.d = 0x0000;

    // A885: SUBD ,U
    // TODO: Complex indexed addressing: ,U

    // A887: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A88A: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // A88C: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A88E: LDD #$0000
    cpu.state_.d = 0x0000;

    // A891: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // A893: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A896: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A898: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A89A: LDD #$0000
    cpu.state_.d = 0x0000;

    // A89D: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // A89F: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A8A2: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // A8A4: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // A8A7: DEC $5,X
    // TODO: Convert DEC $5,X

    // A8A9: BGT $01D2
    // TODO: Convert BGT $01D2

    // A8AC: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A8AE: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X

    // A8B0: BRA $01F5
    cpu.state_.pc += 0x01F5;

    // A8B2: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A8B4: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // A8B6: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A8B9: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // A8BB: BVS $01F6
    // TODO: Convert BVS $01F6

    // A8BD: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A8BF: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // A8C1: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A8C4: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A8C6: BVS $01F6
    // TODO: Convert BVS $01F6

    // A8C8: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A8CA: LDD $4,U
    // TODO: Fix comma operator: LDD $4,U

    // A8CC: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A8CF: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // A8D1: BVS $01F6
    // TODO: Convert BVS $01F6

    // A8D3: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // A8D7: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A8DA: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A8DC: LDD #$FF00
    cpu.state_.d = 0xFF00;

    // A8DF: ADDD $0,X
    // TODO: Fix comma operator: ADDD $0,X

}

} // namespace StarWars