#include "cpu_6809.h"

namespace StarWars {

void routine_a80b_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_a80b.md
    // Address: 0xA80B

    // A80B: LDA <$95
    cpu.state_.a = cpu.read_memory(0x95);

    // A80D: BEQ $0009
    if (cpu.zero_flag()) cpu.state_.pc += 0x0009;

    // A80F: JSR $A705
    cpu.call_function(0xA705);

    // A812: BRA $000C
    cpu.state_.pc += 0x000C;

    // A814: JSR $A6F4
    cpu.call_function(0xA6F4);

    // A817: LDA #$0A
    cpu.state_.a = 0x0A;

    // A819: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A81B: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A81D: BRA $0014
    cpu.state_.pc += 0x0014;

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

    // A83F: BLT $0038
    // TODO: Convert BLT $0038

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

    // A850: BEQ $0056
    if (cpu.zero_flag()) cpu.state_.pc += 0x0056;

    // A852: LDB $4,X
    // TODO: Fix comma operator: LDB $4,X

    // A855: CMPB #$16
    cpu.compare_b(0x16);

    // A857: BCC $0055
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0055;

    // A859: LDU #$A675
    cpu.state_.u = 0xA675;

    // A85C: JSR [B,U]
    // TODO: Complex indexed addressing: [B,U]

    // A85E: BRA $0056
    cpu.state_.pc += 0x0056;

    // A861: LDX <$A8
    cpu.state_.x = cpu.read_memory_word(0xA8);

    // A863: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // A865: CMPX #$496F
    cpu.compare_x(0x496F);

    // A868: BCS $0041
    if (cpu.carry_flag()) cpu.state_.pc += 0x0041;

    // A86B: DEC $5,X
    // TODO: Convert DEC $5,X

    // A86D: BGT $0069
    // TODO: Convert BGT $0069

    // A870: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A872: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X

    // A875: DEC $5,X
    // TODO: Convert DEC $5,X

    // A877: BGT $0075
    // TODO: Convert BGT $0075

    // A87A: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A87C: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X

    // A87E: BRA $009B
    cpu.state_.pc += 0x009B;

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

    // A8A9: BGT $00A7
    // TODO: Convert BGT $00A7

    // A8AC: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A8AE: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X

    // A8B0: BRA $00CA
    cpu.state_.pc += 0x00CA;

    // A8B2: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A8B4: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // A8B6: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A8B9: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // A8BB: BVS $00CB
    // TODO: Convert BVS $00CB

    // A8BD: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A8BF: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // A8C1: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A8C4: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A8C6: BVS $00CB
    // TODO: Convert BVS $00CB

    // A8C8: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A8CA: LDD $4,U
    // TODO: Fix comma operator: LDD $4,U

    // A8CC: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A8CF: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // A8D1: BVS $00CB
    // TODO: Convert BVS $00CB

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

    // A911: BMI $0114
    if (cpu.negative_flag()) cpu.state_.pc += 0x0114;

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

    // A92C: BPL $0127
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0127;

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

    // A93F: BMI $013A
    if (cpu.negative_flag()) cpu.state_.pc += 0x013A;

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

    // A958: BNE $0153
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0153;

    // A95C: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A95E: ADDD $509A
    cpu.state_.d += 0x509A;

    // A961: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // A963: ADDD #$0100
    cpu.state_.d += 0x0100;

    // A966: BMI $016D
    if (cpu.negative_flag()) cpu.state_.pc += 0x016D;

    // A968: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A96B: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // A96F: BLE $0169
    // TODO: Convert BLE $0169

    // A971: LDD #$0180
    cpu.state_.d = 0x0180;

    // A974: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A976: BRA $017B
    cpu.state_.pc += 0x017B;

    // A978: JSR $CD9E
    cpu.call_function(0xCD9E);

    // A97B: CMPD #$FE80
    // TODO: Convert CMPD #$FE80

    // A97F: BGE $0179
    // TODO: Convert BGE $0179

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

    // A990: BMI $0197
    if (cpu.negative_flag()) cpu.state_.pc += 0x0197;

    // A992: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A995: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // A999: BLE $0193
    // TODO: Convert BLE $0193

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

    // A9B5: BEQ $01B0
    if (cpu.zero_flag()) cpu.state_.pc += 0x01B0;

    // A9B9: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A9BB: ADDD $509A
    cpu.state_.d += 0x509A;

    // A9BE: ADDD #$FF00
    cpu.state_.d += 0xFF00;

    // A9C1: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // A9C3: BMI $01CA
    if (cpu.negative_flag()) cpu.state_.pc += 0x01CA;

    // A9C5: JSR $CD9E
    cpu.call_function(0xCD9E);

    // A9C8: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // A9CC: BLE $01C6
    // TODO: Convert BLE $01C6

    // A9CE: LDD #$0180
    cpu.state_.d = 0x0180;

    // A9D1: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A9D3: BRA $01D8
    cpu.state_.pc += 0x01D8;

    // A9D5: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A9D8: CMPD #$FE80
    // TODO: Convert CMPD #$FE80

    // A9DC: BGE $01D6
    // TODO: Convert BGE $01D6

    // A9DE: LDD #$FE80
    cpu.state_.d = 0xFE80;

    // A9E1: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A9E3: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A9E5: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // A9E8: ADDD #$0100
    cpu.state_.d += 0x0100;

    // A9EB: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // A9ED: BMI $01F4
    if (cpu.negative_flag()) cpu.state_.pc += 0x01F4;

    // A9EF: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A9F2: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // A9F6: BLE $01F0
    // TODO: Convert BLE $01F0

    // A9F8: LDD #$0200
    cpu.state_.d = 0x0200;

    // A9FB: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // A9FD: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA00: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // AA02: LDD #$FF00
    cpu.state_.d = 0xFF00;

    // AA05: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // AA07: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // AA09: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

}

} // namespace StarWars