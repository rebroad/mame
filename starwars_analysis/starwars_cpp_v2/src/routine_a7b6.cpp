#include "cpu_6809.h"

namespace StarWars {

void routine_a7b6_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_a7b6.md
    // Address: 0xA7B6

    // A7B6: JSR $A705
    cpu.call_function(0xA705);

    // A7B9: LDA #$03
    cpu.state_.a = 0x03;

    // A7BB: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A7BD: BRA $001B
    cpu.state_.pc = 0xA7DA;

    // A7BF: JSR $A705
    cpu.call_function(0xA705);

    // A7C2: LDA #$04
    cpu.state_.a = 0x04;

    // A7C4: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A7C6: BRA $001B
    cpu.state_.pc = 0xA7E3;

    // A7C8: JSR $A705
    cpu.call_function(0xA705);

    // A7CB: LDA #$05
    cpu.state_.a = 0x05;

    // A7CD: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A7CF: BRA $001B
    cpu.state_.pc = 0xA7EC;

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

    // A7F9: BEQ $004A
    if (cpu.zero_flag()) cpu.state_.pc = 0xA845;

    // A7FB: JSR $A705
    cpu.call_function(0xA705);

    // A7FE: BRA $004D
    cpu.state_.pc = 0xA84D;

    // A800: JSR $A6F4
    cpu.call_function(0xA6F4);

    // A803: LDA #$09
    cpu.state_.a = 0x09;

    // A805: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A807: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A809: BRA $0069
    cpu.state_.pc = 0xA874;

    // A80B: LDA <$95
    cpu.state_.a = cpu.read_memory(0x95);

    // A80D: BEQ $005E
    if (cpu.zero_flag()) cpu.state_.pc = 0xA86D;

    // A80F: JSR $A705
    cpu.call_function(0xA705);

    // A812: BRA $0061
    cpu.state_.pc = 0xA875;

    // A814: JSR $A6F4
    cpu.call_function(0xA6F4);

    // A817: LDA #$0A
    cpu.state_.a = 0x0A;

    // A819: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A81B: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A81D: BRA $0069
    cpu.state_.pc = 0xA888;

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

    // A83F: BLT $008D
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xA7CE;

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

    // A850: BEQ $00AB
    if (cpu.zero_flag()) cpu.state_.pc = 0xA7FD;

    // A852: LDB $4,X
    // TODO: Fix comma operator: LDB $4,X

    // A855: CMPB #$16
    cpu.compare_b(0x16);

    // A857: BCC $00AA
    if (!cpu.carry_flag()) cpu.state_.pc = 0xA803;

    // A859: LDU #$A675
    cpu.state_.u = 0xA675;

    // A85C: JSR [B,U]
    // TODO: Complex indexed addressing: [B,U]

    // A85E: BRA $00AB
    cpu.state_.pc = 0xA80B;

    // A861: LDX <$A8
    cpu.state_.x = cpu.read_memory_word(0xA8);

    // A863: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // A865: CMPX #$496F
    cpu.compare_x(0x496F);

    // A868: BCS $0096
    if (cpu.carry_flag()) cpu.state_.pc = 0xA800;

    // A86B: DEC $5,X
    // TODO: Convert DEC $5,X

    // A86D: BGT $00BE
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xA82D;

    // A870: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A872: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X

    // A875: DEC $5,X
    // TODO: Convert DEC $5,X

    // A877: BGT $00CA
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xA843;

    // A87A: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A87C: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X

    // A87E: BRA $00F0
    cpu.state_.pc = 0xA870;

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

    // A8A9: BGT $00FC
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xA8A7;

    // A8AC: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A8AE: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X

    // A8B0: BRA $011F
    cpu.state_.pc = 0xA8D1;

    // A8B2: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A8B4: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // A8B6: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A8B9: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // A8BB: BVS $0120
    // TODO: Convert BVS $0120

    // A8BD: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A8BF: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // A8C1: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A8C4: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A8C6: BVS $0120
    // TODO: Convert BVS $0120

    // A8C8: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A8CA: LDD $4,U
    // TODO: Fix comma operator: LDD $4,U

    // A8CC: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A8CF: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // A8D1: BVS $0120
    // TODO: Convert BVS $0120

    // A8D3: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // A8D7: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A8DA: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A8DC: LDD #$FF00
    cpu.state_.d = 0xFF00;

    // A8DF: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // A8E1: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A8E3: JMP $AA7D
    cpu.state_.pc = 0xAA7D;

    // A8E6: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A8E8: LDD #$FF00
    cpu.state_.d = 0xFF00;

    // A8EB: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // A8ED: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A8EF: LDD #$FF00
    cpu.state_.d = 0xFF00;

    // A8F2: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A8F4: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A8F6: JMP $AA7D
    cpu.state_.pc = 0xAA7D;

    // A8F9: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A8FB: LDD #$FF00
    cpu.state_.d = 0xFF00;

    // A8FE: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // A900: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A902: LDD #$0100
    cpu.state_.d = 0x0100;

    // A905: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A907: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A909: JMP $AA7D
    cpu.state_.pc = 0xAA7D;

    // A90C: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // A90E: SUBB $5098
    cpu.state_.b -= 0x5098;

    // A911: BMI $0169
    if (cpu.negative_flag()) cpu.state_.pc = 0xA97C;

    // A914: JSR $CDB5
    cpu.call_function(0xCDB5);

    // A919: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A91B: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // A91D: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A920: LDD #$0000
    cpu.state_.d = 0x0000;

    // A923: SUBD $508E
    cpu.state_.d -= 0x508E;

    // A926: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A929: ADDD $508E
    cpu.state_.d += 0x508E;

    // A92C: BPL $017C
    if (!cpu.negative_flag()) cpu.state_.pc = 0xA9AA;

    // A92E: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A930: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A933: LDD #$0000
    cpu.state_.d = 0x0000;

    // A936: SUBD $508E
    cpu.state_.d -= 0x508E;

    // A939: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A93C: ADDD $508E
    cpu.state_.d += 0x508E;

    // A93F: BMI $018F
    if (cpu.negative_flag()) cpu.state_.pc = 0xA8D0;

    // A941: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A943: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A946: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A948: JSR $A933
    cpu.call_function(0xA933);

    // A94B: JSR $A90C
    cpu.call_function(0xA90C);

    // A94E: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // A950: SUBD $5098
    cpu.state_.d -= 0x5098;

    // A953: LDB $7,U
    // TODO: Fix comma operator: LDB $7,U

    // A956: TST $6,U
    // TODO: Convert TST $6,U

    // A958: BNE $01A8
    if (!cpu.zero_flag()) cpu.state_.pc = 0xA902;

    // A95C: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A95E: ADDD $509A
    cpu.state_.d += 0x509A;

    // A961: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // A963: ADDD #$0100
    cpu.state_.d += 0x0100;

    // A966: BMI $01C2
    if (cpu.negative_flag()) cpu.state_.pc = 0xA92A;

    // A968: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A96B: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // A96F: BLE $01BE
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xA92F;

    // A971: LDD #$0180
    cpu.state_.d = 0x0180;

    // A974: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A976: BRA $01D0
    cpu.state_.pc = 0xA948;

    // A978: JSR $CD9E
    cpu.call_function(0xCD9E);

    // A97B: CMPD #$FE80
    // TODO: Convert CMPD #$FE80

    // A97F: BGE $01CE
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xA94F;

    // A981: LDD #$FE80
    cpu.state_.d = 0xFE80;

    // A984: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A986: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A988: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // A98B: ADDD #$0100
    cpu.state_.d += 0x0100;

    // A98E: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // A990: BMI $01EC
    if (cpu.negative_flag()) cpu.state_.pc = 0xA97E;

    // A992: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A995: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // A999: BLE $01E8
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xA983;

    // A99B: LDD #$0200
    cpu.state_.d = 0x0200;

    // A99E: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // A9A0: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // A9A3: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A9A5: JSR $A920
    cpu.call_function(0xA920);

    // A9A8: JSR $A90C
    cpu.call_function(0xA90C);

    // A9AB: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // A9AD: SUBD $5098
    cpu.state_.d -= 0x5098;

    // A9B0: LDB $7,U
    // TODO: Fix comma operator: LDB $7,U

    // A9B3: TST $6,U
    // TODO: Convert TST $6,U

    // A9B5: BEQ $0201
    if (cpu.zero_flag()) cpu.state_.pc = 0xA9B8;

}

} // namespace StarWars