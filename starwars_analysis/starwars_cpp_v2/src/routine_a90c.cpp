#include "cpu_6809.h"

namespace StarWars {

void routine_a90c_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_a90c.md
    // Address: 0xA90C

    // A90C: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // A90E: SUBB $5098
    cpu.state_.b -= 0x5098;

    // A911: BMI $0013
    if (cpu.negative_flag()) cpu.state_.pc += 0x0013;

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

    // A92C: BPL $0026
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0026;

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

    // A93F: BMI $0039
    if (cpu.negative_flag()) cpu.state_.pc += 0x0039;

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

    // A958: BNE $0052
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0052;

    // A95C: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A95E: ADDD $509A
    cpu.state_.d += 0x509A;

    // A961: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // A963: ADDD #$0100
    cpu.state_.d += 0x0100;

    // A966: BMI $006C
    if (cpu.negative_flag()) cpu.state_.pc += 0x006C;

    // A968: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A96B: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // A96F: BLE $0068
    // TODO: Convert BLE $0068

    // A971: LDD #$0180
    cpu.state_.d = 0x0180;

    // A974: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A976: BRA $007A
    cpu.state_.pc += 0x007A;

    // A978: JSR $CD9E
    cpu.call_function(0xCD9E);

    // A97B: CMPD #$FE80
    // TODO: Convert CMPD #$FE80

    // A97F: BGE $0078
    // TODO: Convert BGE $0078

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

    // A990: BMI $0096
    if (cpu.negative_flag()) cpu.state_.pc += 0x0096;

    // A992: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A995: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // A999: BLE $0092
    // TODO: Convert BLE $0092

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

    // A9B5: BEQ $00AF
    if (cpu.zero_flag()) cpu.state_.pc += 0x00AF;

    // A9B9: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A9BB: ADDD $509A
    cpu.state_.d += 0x509A;

    // A9BE: ADDD #$FF00
    cpu.state_.d += 0xFF00;

    // A9C1: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // A9C3: BMI $00C9
    if (cpu.negative_flag()) cpu.state_.pc += 0x00C9;

    // A9C5: JSR $CD9E
    cpu.call_function(0xCD9E);

    // A9C8: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // A9CC: BLE $00C5
    // TODO: Convert BLE $00C5

    // A9CE: LDD #$0180
    cpu.state_.d = 0x0180;

    // A9D1: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A9D3: BRA $00D7
    cpu.state_.pc += 0x00D7;

    // A9D5: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A9D8: CMPD #$FE80
    // TODO: Convert CMPD #$FE80

    // A9DC: BGE $00D5
    // TODO: Convert BGE $00D5

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

    // A9ED: BMI $00F3
    if (cpu.negative_flag()) cpu.state_.pc += 0x00F3;

    // A9EF: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A9F2: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // A9F6: BLE $00EF
    // TODO: Convert BLE $00EF

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

    // AA11: BMI $0117
    if (cpu.negative_flag()) cpu.state_.pc += 0x0117;

    // AA13: JSR $CDA2
    cpu.call_function(0xCDA2);

    // AA16: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // AA1A: BLE $0113
    // TODO: Convert BLE $0113

    // AA1C: LDD #$0180
    cpu.state_.d = 0x0180;

    // AA1F: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AA21: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA23: BRA $0171
    cpu.state_.pc += 0x0171;

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

    // AA3D: BMI $0143
    if (cpu.negative_flag()) cpu.state_.pc += 0x0143;

    // AA3F: JSR $CDA2
    cpu.call_function(0xCDA2);

    // AA42: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // AA46: BLE $013F
    // TODO: Convert BLE $013F

    // AA48: LDD #$0180
    cpu.state_.d = 0x0180;

    // AA4B: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AA4D: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA4F: BRA $0171
    cpu.state_.pc += 0x0171;

    // AA51: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // AA53: LDD #$FF00
    cpu.state_.d = 0xFF00;

    // AA56: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // AA58: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // AA5A: LDD #$0100
    cpu.state_.d = 0x0100;

    // AA5D: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // AA5F: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // AA61: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // AA64: ADDD #$0080
    cpu.state_.d += 0x0080;

    // AA67: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // AA69: BMI $016F
    if (cpu.negative_flag()) cpu.state_.pc += 0x016F;

    // AA6B: JSR $CDA2
    cpu.call_function(0xCDA2);

    // AA6E: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // AA72: BLE $016B
    // TODO: Convert BLE $016B

    // AA74: LDD #$0180
    cpu.state_.d = 0x0180;

    // AA77: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AA79: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA7B: BRA $0171
    cpu.state_.pc += 0x0171;

    // AA7D: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AA7F: BITA #$02
    // TODO: Convert BITA #$02

    // AA81: BEQ $0179
    if (cpu.zero_flag()) cpu.state_.pc += 0x0179;

    // AA83: CLR $3,X
    // TODO: Fix comma operator: CLR $3,X

    // AA86: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // AA88: JSR $A90C
    cpu.call_function(0xA90C);

    // AA8B: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // AA8E: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // AA90: BMI $018D
    if (cpu.negative_flag()) cpu.state_.pc += 0x018D;

    // AA92: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AA95: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AA97: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA99: LDA $4B19
    cpu.state_.a = cpu.read_memory(0x4B19);

    // AA9C: CMPA #$01
    cpu.compare_a(0x01);

    // AA9E: BCS $0199
    if (cpu.carry_flag()) cpu.state_.pc += 0x0199;

    // AAA0: LDD $509A
    cpu.state_.d = cpu.read_memory_word(0x509A);

    // AAA3: BRA $019C
    cpu.state_.pc += 0x019C;

    // AAA5: LDD #$FE80
    cpu.state_.d = 0xFE80;

    // AAA8: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // AAAA: BMI $01A7
    if (cpu.negative_flag()) cpu.state_.pc += 0x01A7;

    // AAAC: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AAAF: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // AAB1: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // AAB3: BRA $0171
    cpu.state_.pc += 0x0171;

    // AAB5: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // AAB7: JSR $A90C
    cpu.call_function(0xA90C);

    // AABA: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // AABD: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // AABF: BMI $01BC
    if (cpu.negative_flag()) cpu.state_.pc += 0x01BC;

    // AAC1: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AAC4: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AAC6: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AAC8: LDA $4B19
    cpu.state_.a = cpu.read_memory(0x4B19);

    // AACB: CMPA #$01
    cpu.compare_a(0x01);

    // AACD: BCS $01C8
    if (cpu.carry_flag()) cpu.state_.pc += 0x01C8;

    // AACF: LDD $509A
    cpu.state_.d = cpu.read_memory_word(0x509A);

    // AAD2: BRA $01CB
    cpu.state_.pc += 0x01CB;

    // AAD4: LDD #$0180
    cpu.state_.d = 0x0180;

    // AAD7: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // AAD9: BPL $01D6
    if (!cpu.negative_flag()) cpu.state_.pc += 0x01D6;

    // AADB: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AADE: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // AAE0: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // AAE2: BRA $0171
    cpu.state_.pc += 0x0171;

    // AAE4: LDX #$494B
    cpu.state_.x = 0x494B;

    // AAE7: STX <$A8
    cpu.write_memory(0xA8, cpu.state_.x);

    // AAE9: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AAEB: LBEQ $0328
    // TODO: Convert LBEQ $0328

    // AAEF: BITA #$10
    // TODO: Convert BITA #$10

    // AAF1: BEQ $01ED
    if (cpu.zero_flag()) cpu.state_.pc += 0x01ED;

    // AAF3: JSR $ACB1
    cpu.call_function(0xACB1);

    // AAF6: JMP $AC34
    cpu.state_.pc = 0xAC34;

    // AAF9: BITA #$04
    // TODO: Convert BITA #$04

    // AAFB: BEQ $0205
    if (cpu.zero_flag()) cpu.state_.pc += 0x0205;

    // AAFD: LDD $5098
    cpu.state_.d = cpu.read_memory_word(0x5098);

    // AB00: STD $5040
    cpu.write_memory(0x5040, cpu.state_.d);

    // AB03: LDD $509A
    cpu.state_.d = cpu.read_memory_word(0x509A);

    // AB06: STD $5042
    cpu.write_memory(0x5042, cpu.state_.d);

    // AB09: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

}

} // namespace StarWars