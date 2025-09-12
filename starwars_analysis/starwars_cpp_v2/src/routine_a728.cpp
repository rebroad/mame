#include "cpu_6809.h"

namespace StarWars {

void routine_a728_impl(CPU6809& cpu) {
    // Converted from rom_disasm_a728.md
    // Address: 0xA728

    // A728: JSR $A6E0
    cpu.call_function(0xA6E0);

    // A72B: LDA #$70
    cpu.m_a = 0x70;

    // A72D: STA $5,X
    // TODO: Handle indexed addressing: STA $5,X

    // A72F: LDA #$05
    cpu.m_a = 0x05;

    // A731: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // A733: LDU <$64
    cpu.m_u = cpu.read_memory16(0x64);

    // A735: STX <$01
    cpu.write_memory16(0x01, cpu.m_x);

    // A737: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // A739: SUBD $509A
    cpu.m_d -= 0x509A;

    // A73C: BMI $A742
    if (cpu.negative_flag()) cpu.m_pc = 0xA742;

    // A73E: LDA #$08
    cpu.m_a = 0x08;

    // A740: BRA $A744
    cpu.m_pc = 0xA744;

    // A742: LDA #$07
    cpu.m_a = 0x07;

    // A744: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A746: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // A748: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A74A: SUBA $5098
    cpu.m_a -= 0x5098;

    // A74D: ANDA #$80
    cpu.m_a &= 0x80;

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
    cpu.m_d = 0x0200;

    // A75C: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // A75E: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // A760: SUBD $509A
    cpu.m_d -= 0x509A;

    // A763: STA $6,X
    // TODO: Handle indexed addressing: STA $6,X

    // A765: BPL $A76B
    if (!cpu.negative_flag()) cpu.m_pc = 0xA76B;

    // A769: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A76B: STD $4706
    cpu.write_memory16(0x4706, cpu.m_d);

    // A76E: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // A770: SUBD $5098
    cpu.m_d -= 0x5098;

    // A773: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // A776: LDD #$0200
    cpu.m_d = 0x0200;

    // A779: STD $4706
    cpu.write_memory16(0x4706, cpu.m_d);

    // A77C: LDA $4700
    cpu.m_a = cpu.read_memory(0x4700);

    // A781: BCC $A784
    if (!cpu.carry_flag()) cpu.m_pc = 0xA784;

    // A784: STA $7,X
    // TODO: Handle indexed addressing: STA $7,X

    // A786: LDA <$7D
    cpu.m_a = cpu.read_memory(0x7D);

    // A788: EORA $6,X
    // TODO: Fix comma operator: EORA $6,X

    // A78A: BPL $A790
    if (!cpu.negative_flag()) cpu.m_pc = 0xA790;

    // A78C: CLR $6,X
    // TODO: Fix comma operator: CLR $6,X

    // A78E: BRA $A7B2
    cpu.m_pc = 0xA7B2;

    // A790: LDA <$7D
    cpu.m_a = cpu.read_memory(0x7D);

    // A792: BPL $A795
    if (!cpu.negative_flag()) cpu.m_pc = 0xA795;

    // A796: CMPA $7,X
    // TODO: Fix comma operator: CMPA $7,X

    // A798: BHI $A79E
    // TODO: Convert BHI $A79E

    // A79A: CLR $6,X
    // TODO: Fix comma operator: CLR $6,X

    // A79C: BRA $A7B2
    cpu.m_pc = 0xA7B2;

    // A79E: LDA #$FF
    cpu.m_a = 0xFF;

    // A7A0: STA $6,X
    // TODO: Handle indexed addressing: STA $6,X

    // A7A2: LDX <$01
    cpu.m_x = cpu.read_memory16(0x01);

    // A7A4: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A7A6: CMPA #$08
    cpu.compare_a(0x08);

    // A7A8: BNE $A7AE
    if (!cpu.zero_flag()) cpu.m_pc = 0xA7AE;

    // A7AA: LDA #$07
    cpu.m_a = 0x07;

    // A7AC: BRA $A7B0
    cpu.m_pc = 0xA7B0;

    // A7AE: LDA #$08
    cpu.m_a = 0x08;

    // A7B0: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A7B2: JSR $BE11
    cpu.call_function(0xBE11);

    // A7B6: JSR $A705
    cpu.call_function(0xA705);

    // A7B9: LDA #$03
    cpu.m_a = 0x03;

    // A7BB: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A7BD: BRA $A7D1
    cpu.m_pc = 0xA7D1;

    // A7BF: JSR $A705
    cpu.call_function(0xA705);

    // A7C2: LDA #$04
    cpu.m_a = 0x04;

    // A7C4: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A7C6: BRA $A7D1
    cpu.m_pc = 0xA7D1;

    // A7C8: JSR $A705
    cpu.call_function(0xA705);

    // A7CB: LDA #$05
    cpu.m_a = 0x05;

    // A7CD: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A7CF: BRA $A7D1
    cpu.m_pc = 0xA7D1;

    // A7D1: LDA #$70
    cpu.m_a = 0x70;

    // A7D3: STA $5,X
    // TODO: Handle indexed addressing: STA $5,X

    // A7D5: LDA #$05
    cpu.m_a = 0x05;

    // A7D7: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // A7D9: LDU <$64
    cpu.m_u = cpu.read_memory16(0x64);

    // A7DB: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // A7DD: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A7DF: SUBA $5098
    cpu.m_a -= 0x5098;

    // A7E2: ANDA #$80
    cpu.m_a &= 0x80;

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
    cpu.m_d = cpu.read_memory16(0x5044);

    // A7F1: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // A7F3: JSR $BE11
    cpu.call_function(0xBE11);

    // A7F7: LDA <$95
    cpu.m_a = cpu.read_memory(0x95);

    // A7F9: BEQ $A800
    if (cpu.zero_flag()) cpu.m_pc = 0xA800;

    // A7FB: JSR $A705
    cpu.call_function(0xA705);

    // A7FE: BRA $A803
    cpu.m_pc = 0xA803;

    // A800: JSR $A6F4
    cpu.call_function(0xA6F4);

    // A803: LDA #$09
    cpu.m_a = 0x09;

    // A805: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A807: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A809: BRA $A81F
    cpu.m_pc = 0xA81F;

    // A80B: LDA <$95
    cpu.m_a = cpu.read_memory(0x95);

    // A80D: BEQ $A814
    if (cpu.zero_flag()) cpu.m_pc = 0xA814;

    // A80F: JSR $A705
    cpu.call_function(0xA705);

    // A812: BRA $A817
    cpu.m_pc = 0xA817;

    // A814: JSR $A6F4
    cpu.call_function(0xA6F4);

    // A817: LDA #$0A
    cpu.m_a = 0x0A;

    // A819: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A81B: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A81D: BRA $A81F
    cpu.m_pc = 0xA81F;

    // A81F: LDD $5078
    cpu.m_d = cpu.read_memory16(0x5078);

    // A822: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A824: LDD $507A
    cpu.m_d = cpu.read_memory16(0x507A);

    // A827: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A829: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // A82C: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // A82E: LDA #$40
    cpu.m_a = 0x40;

    // A830: STA $5,X
    // TODO: Handle indexed addressing: STA $5,X

    // A832: LDA #$05
    cpu.m_a = 0x05;

    // A834: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // A836: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A83A: LDB $507C
    cpu.m_b = cpu.read_memory(0x507C);

    // A83D: CMPB #$FC
    cpu.compare_b(0xFC);

    // A83F: BLT $A843
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA843;

    // A841: LDA #$00
    cpu.m_a = 0x00;

    // A843: STA $6,U
    // TODO: Handle indexed addressing: STA $6,U

    // A845: JSR $BE11
    cpu.call_function(0xBE11);

    // A849: LDX #$494B
    cpu.m_x = 0x494B;

    // A84C: STX <$A8
    cpu.write_memory16(0xA8, cpu.m_x);

    // A84E: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // A850: BEQ $A861
    if (cpu.zero_flag()) cpu.m_pc = 0xA861;

    // A852: LDB $4,X
    // TODO: Fix comma operator: LDB $4,X

    // A855: CMPB #$16
    cpu.compare_b(0x16);

    // A857: BCC $A860
    if (!cpu.carry_flag()) cpu.m_pc = 0xA860;

    // A859: LDU #$A675
    cpu.m_u = 0xA675;

    // A85C: JSR [B,U]
    // TODO: Complex indexed addressing: [B,U]

    // A85E: BRA $A861
    cpu.m_pc = 0xA861;

    // A861: LDX <$A8
    cpu.m_x = cpu.read_memory16(0xA8);

    // A863: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // A865: CMPX #$496F
    cpu.compare_x(0x496F);

    // A868: BCS $A84C
    if (cpu.carry_flag()) cpu.m_pc = 0xA84C;

    // A86B: DEC $5,X
    // TODO: Convert DEC $5,X

    // A86D: BGT $A874
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA874;

    // A870: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A872: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X

    // A875: DEC $5,X
    // TODO: Convert DEC $5,X

    // A877: BGT $A880
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA880;

    // A87A: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A87C: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X

    // A87E: BRA $A8A6
    cpu.m_pc = 0xA8A6;

    // A880: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A882: LDD #$0000
    cpu.m_d = 0x0000;

    // A885: SUBD ,U
    // TODO: Complex indexed addressing: ,U

    // A887: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A88A: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // A88C: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A88E: LDD #$0000
    cpu.m_d = 0x0000;

    // A891: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // A893: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A896: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A898: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A89A: LDD #$0000
    cpu.m_d = 0x0000;

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

    // A8A9: BGT $A8B2
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA8B2;

    // A8AC: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A8AE: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X

    // A8B0: BRA $A8D5
    cpu.m_pc = 0xA8D5;

    // A8B2: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A8B4: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // A8B6: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A8B9: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // A8BB: BVS $A8D6
    // TODO: Convert BVS $A8D6

    // A8BD: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A8BF: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // A8C1: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A8C4: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A8C6: BVS $A8D6
    // TODO: Convert BVS $A8D6

    // A8C8: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A8CA: LDD $4,U
    // TODO: Fix comma operator: LDD $4,U

    // A8CC: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A8CF: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // A8D1: BVS $A8D6
    // TODO: Convert BVS $A8D6

    // A8D3: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // A8D7: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A8DA: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A8DC: LDD #$FF00
    cpu.m_d = 0xFF00;

    // A8DF: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // A8E1: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A8E3: JMP $AA7D
    cpu.m_pc = 0xAA7D;

    // A8E6: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A8E8: LDD #$FF00
    cpu.m_d = 0xFF00;

    // A8EB: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // A8ED: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A8EF: LDD #$FF00
    cpu.m_d = 0xFF00;

    // A8F2: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A8F4: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A8F6: JMP $AA7D
    cpu.m_pc = 0xAA7D;

    // A8F9: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A8FB: LDD #$FF00
    cpu.m_d = 0xFF00;

    // A8FE: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // A900: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A902: LDD #$0100
    cpu.m_d = 0x0100;

    // A905: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A907: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A909: JMP $AA7D
    cpu.m_pc = 0xAA7D;

    // A90C: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // A90E: SUBB $5098
    cpu.m_b -= 0x5098;

    // A911: BMI $A91F
    if (cpu.negative_flag()) cpu.m_pc = 0xA91F;

    // A914: JSR $CDB5
    cpu.call_function(0xCDB5);

    // A919: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A91B: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // A91D: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A920: LDD #$0000
    cpu.m_d = 0x0000;

    // A923: SUBD $508E
    cpu.m_d -= 0x508E;

    // A926: JSR $CD00
    cpu.call_function(0xCD00);

}

} // namespace StarWars