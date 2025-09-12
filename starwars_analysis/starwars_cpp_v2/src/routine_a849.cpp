#include "cpu_6809.h"

namespace StarWars {

void routine_a849_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_a849.md
    // Address: 0xA849

    // A849: LDX #$494B
    cpu.state_.x = 0x494B;

    // A84C: STX <$A8
    cpu.write_memory(0xA8, cpu.state_.x);

    // A84E: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // A850: BEQ $0018
    if (cpu.zero_flag()) cpu.state_.pc = 0xA86A;

    // A852: LDB $4,X
    // TODO: Fix comma operator: LDB $4,X

    // A855: CMPB #$16
    cpu.compare_b(0x16);

    // A857: BCC $0017
    if (!cpu.carry_flag()) cpu.state_.pc = 0xA870;

    // A859: LDU #$A675
    cpu.state_.u = 0xA675;

    // A85C: JSR [B,U]
    // TODO: Complex indexed addressing: [B,U]

    // A85E: BRA $0018
    cpu.state_.pc = 0xA878;

    // A861: LDX <$A8
    cpu.state_.x = cpu.read_memory_word(0xA8);

    // A863: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // A865: CMPX #$496F
    cpu.compare_x(0x496F);

    // A868: BCS $0003
    if (cpu.carry_flag()) cpu.state_.pc = 0xA86D;

    // A86B: DEC $5,X
    // TODO: Convert DEC $5,X

    // A86D: BGT $002B
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xA89A;

    // A870: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A872: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X

    // A875: DEC $5,X
    // TODO: Convert DEC $5,X

    // A877: BGT $0037
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xA8B0;

    // A87A: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A87C: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X

    // A87E: BRA $005D
    cpu.state_.pc = 0xA8DD;

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

    // A8A9: BGT $0069
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xA914;

    // A8AC: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X

    // A8AE: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X

    // A8B0: BRA $008C
    cpu.state_.pc = 0xA93E;

    // A8B2: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // A8B4: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // A8B6: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A8B9: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // A8BB: BVS $008D
    // TODO: Convert BVS $008D

    // A8BD: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A8BF: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // A8C1: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A8C4: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A8C6: BVS $008D
    // TODO: Convert BVS $008D

    // A8C8: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A8CA: LDD $4,U
    // TODO: Fix comma operator: LDD $4,U

    // A8CC: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A8CF: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // A8D1: BVS $008D
    // TODO: Convert BVS $008D

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

    // A911: BMI $00D6
    if (cpu.negative_flag()) cpu.state_.pc = 0xA9E9;

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

    // A92C: BPL $00E9
    if (!cpu.negative_flag()) cpu.state_.pc = 0xAA17;

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

    // A93F: BMI $00FC
    if (cpu.negative_flag()) cpu.state_.pc = 0xAA3D;

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

    // A958: BNE $0115
    if (!cpu.zero_flag()) cpu.state_.pc = 0xAA6F;

    // A95C: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A95E: ADDD $509A
    cpu.state_.d += 0x509A;

    // A961: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // A963: ADDD #$0100
    cpu.state_.d += 0x0100;

    // A966: BMI $012F
    if (cpu.negative_flag()) cpu.state_.pc = 0xAA97;

    // A968: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A96B: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // A96F: BLE $012B
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xAA9C;

    // A971: LDD #$0180
    cpu.state_.d = 0x0180;

    // A974: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A976: BRA $013D
    cpu.state_.pc = 0xAAB5;

    // A978: JSR $CD9E
    cpu.call_function(0xCD9E);

    // A97B: CMPD #$FE80
    // TODO: Convert CMPD #$FE80

    // A97F: BGE $013B
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xAABC;

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

    // A990: BMI $0159
    if (cpu.negative_flag()) cpu.state_.pc = 0xAAEB;

    // A992: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A995: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // A999: BLE $0155
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xAAF0;

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

    // A9B5: BEQ $0172
    if (cpu.zero_flag()) cpu.state_.pc = 0xAB29;

    // A9B9: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A9BB: ADDD $509A
    cpu.state_.d += 0x509A;

    // A9BE: ADDD #$FF00
    cpu.state_.d += 0xFF00;

    // A9C1: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // A9C3: BMI $018C
    if (cpu.negative_flag()) cpu.state_.pc = 0xAB51;

    // A9C5: JSR $CD9E
    cpu.call_function(0xCD9E);

    // A9C8: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // A9CC: BLE $0188
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xAB56;

    // A9CE: LDD #$0180
    cpu.state_.d = 0x0180;

    // A9D1: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A9D3: BRA $019A
    cpu.state_.pc = 0xAB6F;

    // A9D5: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A9D8: CMPD #$FE80
    // TODO: Convert CMPD #$FE80

    // A9DC: BGE $0198
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xAB76;

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

    // A9ED: BMI $01B6
    if (cpu.negative_flag()) cpu.state_.pc = 0xABA5;

    // A9EF: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A9F2: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // A9F6: BLE $01B2
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xABAA;

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

    // AA09: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // AA0C: ADDD #$0080
    cpu.state_.d += 0x0080;

    // AA0F: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // AA11: BMI $01DA
    if (cpu.negative_flag()) cpu.state_.pc = 0xABED;

    // AA13: JSR $CDA2
    cpu.call_function(0xCDA2);

    // AA16: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // AA1A: BLE $01D6
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xABF2;

    // AA1C: LDD #$0180
    cpu.state_.d = 0x0180;

    // AA1F: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AA21: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA23: BRA $0234
    cpu.state_.pc = 0xAC59;

    // AA25: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // AA27: LDD #$FF00
    cpu.state_.d = 0xFF00;

    // AA2A: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // AA2C: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // AA2E: LDD #$FF00
    cpu.state_.d = 0xFF00;

    // AA31: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // AA33: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // AA35: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // AA38: ADDD #$0080
    cpu.state_.d += 0x0080;

    // AA3B: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // AA3D: BMI $0206
    if (cpu.negative_flag()) cpu.state_.pc = 0xAC45;

    // AA3F: JSR $CDA2
    cpu.call_function(0xCDA2);

    // AA42: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // AA46: BLE $0202
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xAC4A;

    // AA48: LDD #$0000
    cpu.state_.d = 0x0000;

}

} // namespace StarWars