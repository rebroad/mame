#include "cpu_6809.h"

namespace StarWars {

void routine_a68b_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_a68b.md
    // Address: 0xA68B

    // A68B: STU <$A8
    cpu.write_memory(0xA8, cpu.state_.u);

    // A68D: LDB #$40
    cpu.state_.b = 0x40;

    // A68F: STB $5,U
    // TODO: Handle indexed addressing: STB $5,U

    // A691: LDB #$01
    cpu.state_.b = 0x01;

    // A693: STB $3,U
    // TODO: Handle indexed addressing: STB $3,U

    // A695: LDB #$01
    cpu.state_.b = 0x01;

    // A697: STB $4,U
    // TODO: Handle indexed addressing: STB $4,U

    // A699: LDA $4B3C
    cpu.state_.a = cpu.read_memory(0x4B3C);

    // A69C: BLE $0020
    // TODO: Convert BLE $0020

    // A69E: CMPX $4B32
    cpu.compare_x(cpu.read_memory_word(0x4B32));

    // A6A1: BNE $0020
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0020;

    // A6A3: DEC $4B3C
    // TODO: Convert DEC $4B3C

    // A6A6: BNE $0020
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0020;

    // A6A8: JSR $BD4E
    cpu.call_function(0xBD4E);

    // A6AB: LDU ,U
    // TODO: Complex indexed addressing: ,U

    // A6AD: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // A6AF: LDD $8,X
    // TODO: Fix comma operator: LDD $8,X

    // A6B1: SUBD $5098
    cpu.state_.d -= 0x5098;

    // A6B4: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A6B6: LDD $A,X
    // TODO: Fix comma operator: LDD $A,X

    // A6B8: SUBD $509A
    cpu.state_.d -= 0x509A;

    // A6BB: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A6BD: LDD $C,X
    // TODO: Fix comma operator: LDD $C,X

    // A6BF: SUBD $509C
    cpu.state_.d -= 0x509C;

    // A6C2: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // A6C4: JSR $BE02
    cpu.call_function(0xBE02);

    // A6C9: ROL $9,U
    // TODO: Convert ROL $9,U

    // A6CB: ROL $9,U
    // TODO: Convert ROL $9,U

    // A6CD: COM $9,U
    // TODO: Convert COM $9,U

    // A6CF: COM $9,U
    // TODO: Convert COM $9,U

    // A6E0: LDB $4B19
    cpu.state_.b = cpu.read_memory(0x4B19);

    // A6E3: CMPB #$0C
    cpu.compare_b(0x0C);

    // A6E5: BCS $0061
    if (cpu.carry_flag()) cpu.state_.pc += 0x0061;

    // A6E7: LDX #$A6DE
    cpu.state_.x = 0xA6DE;

    // A6EA: BRA $0067
    cpu.state_.pc += 0x0067;

    // A6ED: LDX #$A6C8
    cpu.state_.x = 0xA6C8;

    // A6F0: LDX B,X
    // TODO: Fix comma operator: LDX B,X

    // A6F2: BRA $007D
    cpu.state_.pc += 0x007D;

    // A6F4: LDB $4B19
    cpu.state_.b = cpu.read_memory(0x4B19);

    // A6F7: CMPB #$07
    cpu.compare_b(0x07);

    // A6F9: BLS $0072
    // TODO: Convert BLS $0072

    // A6FB: LDB #$07
    cpu.state_.b = 0x07;

    // A6FE: LDX #$A718
    cpu.state_.x = 0xA718;

    // A701: LDX B,X
    // TODO: Fix comma operator: LDX B,X

    // A703: BRA $007D
    cpu.state_.pc += 0x007D;

    // A705: LDX #$494B
    cpu.state_.x = 0x494B;

    // A708: STX <$A8
    cpu.write_memory(0xA8, cpu.state_.x);

    // A70A: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // A70C: BEQ $008C
    if (cpu.zero_flag()) cpu.state_.pc += 0x008C;

    // A70E: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // A710: CMPX #$496F
    cpu.compare_x(0x496F);

    // A713: BCS $007D
    if (cpu.carry_flag()) cpu.state_.pc += 0x007D;

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

    // A73C: BMI $00B7
    if (cpu.negative_flag()) cpu.state_.pc += 0x00B7;

    // A73E: LDA #$08
    cpu.state_.a = 0x08;

    // A740: BRA $00B9
    cpu.state_.pc += 0x00B9;

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

    // A765: BPL $00E0
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00E0;

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

    // A781: BCC $00F9
    if (!cpu.carry_flag()) cpu.state_.pc += 0x00F9;

    // A784: STA $7,X
    // TODO: Handle indexed addressing: STA $7,X

    // A786: LDA <$7D
    cpu.state_.a = cpu.read_memory(0x7D);

    // A788: EORA $6,X
    // TODO: Fix comma operator: EORA $6,X

    // A78A: BPL $0105
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0105;

    // A78C: CLR $6,X
    // TODO: Fix comma operator: CLR $6,X

    // A78E: BRA $0127
    cpu.state_.pc += 0x0127;

    // A790: LDA <$7D
    cpu.state_.a = cpu.read_memory(0x7D);

    // A792: BPL $010A
    if (!cpu.negative_flag()) cpu.state_.pc += 0x010A;

    // A796: CMPA $7,X
    // TODO: Fix comma operator: CMPA $7,X

    // A798: BHI $0113
    // TODO: Convert BHI $0113

    // A79A: CLR $6,X
    // TODO: Fix comma operator: CLR $6,X

    // A79C: BRA $0127
    cpu.state_.pc += 0x0127;

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

    // A7A8: BNE $0123
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0123;

    // A7AA: LDA #$07
    cpu.state_.a = 0x07;

    // A7AC: BRA $0125
    cpu.state_.pc += 0x0125;

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

    // A7BD: BRA $0146
    cpu.state_.pc += 0x0146;

    // A7BF: JSR $A705
    cpu.call_function(0xA705);

    // A7C2: LDA #$04
    cpu.state_.a = 0x04;

    // A7C4: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A7C6: BRA $0146
    cpu.state_.pc += 0x0146;

    // A7C8: JSR $A705
    cpu.call_function(0xA705);

    // A7CB: LDA #$05
    cpu.state_.a = 0x05;

    // A7CD: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A7CF: BRA $0146
    cpu.state_.pc += 0x0146;

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

    // A7F9: BEQ $0175
    if (cpu.zero_flag()) cpu.state_.pc += 0x0175;

    // A7FB: JSR $A705
    cpu.call_function(0xA705);

    // A7FE: BRA $0178
    cpu.state_.pc += 0x0178;

    // A800: JSR $A6F4
    cpu.call_function(0xA6F4);

    // A803: LDA #$09
    cpu.state_.a = 0x09;

    // A805: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A807: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A809: BRA $0194
    cpu.state_.pc += 0x0194;

    // A80B: LDA <$95
    cpu.state_.a = cpu.read_memory(0x95);

    // A80D: BEQ $0189
    if (cpu.zero_flag()) cpu.state_.pc += 0x0189;

    // A80F: JSR $A705
    cpu.call_function(0xA705);

    // A812: BRA $018C
    cpu.state_.pc += 0x018C;

    // A814: JSR $A6F4
    cpu.call_function(0xA6F4);

    // A817: LDA #$0A
    cpu.state_.a = 0x0A;

    // A819: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A81B: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A81D: BRA $0194
    cpu.state_.pc += 0x0194;

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

    // A83F: BLT $01B8
    // TODO: Convert BLT $01B8

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

    // A850: BEQ $01D6
    if (cpu.zero_flag()) cpu.state_.pc += 0x01D6;

    // A852: LDB $4,X
    // TODO: Fix comma operator: LDB $4,X

    // A855: CMPB #$16
    cpu.compare_b(0x16);

    // A857: BCC $01D5
    if (!cpu.carry_flag()) cpu.state_.pc += 0x01D5;

    // A859: LDU #$A675
    cpu.state_.u = 0xA675;

    // A85C: JSR [B,U]
    // TODO: Complex indexed addressing: [B,U]

    // A85E: BRA $01D6
    cpu.state_.pc += 0x01D6;

    // A861: LDX <$A8
    cpu.state_.x = cpu.read_memory_word(0xA8);

    // A863: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // A865: CMPX #$496F
    cpu.compare_x(0x496F);

    // A868: BCS $01C1
    if (cpu.carry_flag()) cpu.state_.pc += 0x01C1;

    // A86B: DEC $5,X
    // TODO: Convert DEC $5,X

    // A86D: BGT $01E9
    // TODO: Convert BGT $01E9

    // A870: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A872: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X

    // A875: DEC $5,X
    // TODO: Convert DEC $5,X

    // A877: BGT $01F5
    // TODO: Convert BGT $01F5

    // A87A: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A87C: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X

    // A87E: BRA $021B
    cpu.state_.pc += 0x021B;

    // A880: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A882: LDD #$0000
    cpu.state_.d = 0x0000;

    // A885: SUBD ,U
    // TODO: Complex indexed addressing: ,U

    // A887: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A88A: ADDD $0,X
    // TODO: Fix comma operator: ADDD $0,X

}

} // namespace StarWars