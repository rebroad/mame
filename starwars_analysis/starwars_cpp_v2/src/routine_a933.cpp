#include "cpu_6809.h"

namespace StarWars {

void routine_a933_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_a933.md
    // Address: 0xA933

    // A933: LDD #$0000
    cpu.state_.d = 0x0000;

    // A936: SUBD $508E
    cpu.state_.d -= 0x508E;

    // A939: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A93C: ADDD $508E
    cpu.state_.d += 0x508E;

    // A93F: BMI $0012
    if (cpu.negative_flag()) cpu.state_.pc += 0x0012;

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

    // A958: BNE $002B
    if (!cpu.zero_flag()) cpu.state_.pc += 0x002B;

    // A95C: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A95E: ADDD $509A
    cpu.state_.d += 0x509A;

    // A961: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // A963: ADDD #$0100
    cpu.state_.d += 0x0100;

    // A966: BMI $0045
    if (cpu.negative_flag()) cpu.state_.pc += 0x0045;

    // A968: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A96B: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // A96F: BLE $0041
    // TODO: Convert BLE $0041

    // A971: LDD #$0180
    cpu.state_.d = 0x0180;

    // A974: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A976: BRA $0053
    cpu.state_.pc += 0x0053;

    // A978: JSR $CD9E
    cpu.call_function(0xCD9E);

    // A97B: CMPD #$FE80
    // TODO: Convert CMPD #$FE80

    // A97F: BGE $0051
    // TODO: Convert BGE $0051

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

    // A990: BMI $006F
    if (cpu.negative_flag()) cpu.state_.pc += 0x006F;

    // A992: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A995: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // A999: BLE $006B
    // TODO: Convert BLE $006B

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

    // A9B5: BEQ $0088
    if (cpu.zero_flag()) cpu.state_.pc += 0x0088;

    // A9B9: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A9BB: ADDD $509A
    cpu.state_.d += 0x509A;

    // A9BE: ADDD #$FF00
    cpu.state_.d += 0xFF00;

    // A9C1: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // A9C3: BMI $00A2
    if (cpu.negative_flag()) cpu.state_.pc += 0x00A2;

    // A9C5: JSR $CD9E
    cpu.call_function(0xCD9E);

    // A9C8: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // A9CC: BLE $009E
    // TODO: Convert BLE $009E

    // A9CE: LDD #$0180
    cpu.state_.d = 0x0180;

    // A9D1: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A9D3: BRA $00B0
    cpu.state_.pc += 0x00B0;

    // A9D5: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A9D8: CMPD #$FE80
    // TODO: Convert CMPD #$FE80

    // A9DC: BGE $00AE
    // TODO: Convert BGE $00AE

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

    // A9ED: BMI $00CC
    if (cpu.negative_flag()) cpu.state_.pc += 0x00CC;

    // A9EF: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A9F2: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // A9F6: BLE $00C8
    // TODO: Convert BLE $00C8

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

    // AA11: BMI $00F0
    if (cpu.negative_flag()) cpu.state_.pc += 0x00F0;

    // AA13: JSR $CDA2
    cpu.call_function(0xCDA2);

    // AA16: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // AA1A: BLE $00EC
    // TODO: Convert BLE $00EC

    // AA1C: LDD #$0180
    cpu.state_.d = 0x0180;

    // AA1F: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AA21: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA23: BRA $014A
    cpu.state_.pc += 0x014A;

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

    // AA3D: BMI $011C
    if (cpu.negative_flag()) cpu.state_.pc += 0x011C;

    // AA3F: JSR $CDA2
    cpu.call_function(0xCDA2);

    // AA42: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // AA46: BLE $0118
    // TODO: Convert BLE $0118

    // AA48: LDD #$0180
    cpu.state_.d = 0x0180;

    // AA4B: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AA4D: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA4F: BRA $014A
    cpu.state_.pc += 0x014A;

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

    // AA69: BMI $0148
    if (cpu.negative_flag()) cpu.state_.pc += 0x0148;

    // AA6B: JSR $CDA2
    cpu.call_function(0xCDA2);

    // AA6E: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // AA72: BLE $0144
    // TODO: Convert BLE $0144

    // AA74: LDD #$0180
    cpu.state_.d = 0x0180;

    // AA77: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AA79: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA7B: BRA $014A
    cpu.state_.pc += 0x014A;

    // AA7D: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AA7F: BITA #$02
    // TODO: Convert BITA #$02

    // AA81: BEQ $0152
    if (cpu.zero_flag()) cpu.state_.pc += 0x0152;

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

    // AA90: BMI $0166
    if (cpu.negative_flag()) cpu.state_.pc += 0x0166;

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

    // AA9E: BCS $0172
    if (cpu.carry_flag()) cpu.state_.pc += 0x0172;

    // AAA0: LDD $509A
    cpu.state_.d = cpu.read_memory_word(0x509A);

    // AAA3: BRA $0175
    cpu.state_.pc += 0x0175;

    // AAA5: LDD #$FE80
    cpu.state_.d = 0xFE80;

    // AAA8: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // AAAA: BMI $0180
    if (cpu.negative_flag()) cpu.state_.pc += 0x0180;

    // AAAC: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AAAF: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // AAB1: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // AAB3: BRA $014A
    cpu.state_.pc += 0x014A;

    // AAB5: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // AAB7: JSR $A90C
    cpu.call_function(0xA90C);

    // AABA: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // AABD: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // AABF: BMI $0195
    if (cpu.negative_flag()) cpu.state_.pc += 0x0195;

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

    // AACD: BCS $01A1
    if (cpu.carry_flag()) cpu.state_.pc += 0x01A1;

    // AACF: LDD $509A
    cpu.state_.d = cpu.read_memory_word(0x509A);

    // AAD2: BRA $01A4
    cpu.state_.pc += 0x01A4;

    // AAD4: LDD #$0180
    cpu.state_.d = 0x0180;

    // AAD7: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // AAD9: BPL $01AF
    if (!cpu.negative_flag()) cpu.state_.pc += 0x01AF;

    // AADB: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AADE: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // AAE0: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // AAE2: BRA $014A
    cpu.state_.pc += 0x014A;

    // AAE4: LDX #$494B
    cpu.state_.x = 0x494B;

    // AAE7: STX <$A8
    cpu.write_memory(0xA8, cpu.state_.x);

    // AAE9: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AAEB: LBEQ $0301
    // TODO: Convert LBEQ $0301

    // AAEF: BITA #$10
    // TODO: Convert BITA #$10

    // AAF1: BEQ $01C6
    if (cpu.zero_flag()) cpu.state_.pc += 0x01C6;

    // AAF3: JSR $ACB1
    cpu.call_function(0xACB1);

    // AAF6: JMP $AC34
    cpu.state_.pc = 0xAC34;

    // AAF9: BITA #$04
    // TODO: Convert BITA #$04

    // AAFB: BEQ $01DE
    if (cpu.zero_flag()) cpu.state_.pc += 0x01DE;

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

    // AB0C: STD $5044
    cpu.write_memory(0x5044, cpu.state_.d);

    // AB0F: BRA $01EA
    cpu.state_.pc += 0x01EA;

    // AB11: LDD #$0000
    cpu.state_.d = 0x0000;

    // AB14: STD $5040
    cpu.write_memory(0x5040, cpu.state_.d);

    // AB17: STD $5042
    cpu.write_memory(0x5042, cpu.state_.d);

    // AB1A: STD $5044
    cpu.write_memory(0x5044, cpu.state_.d);

    // AB1E: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

    // AB20: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // AB23: LDA #$67
    cpu.state_.a = 0x67;

    // AB25: JSR $CDBA
    cpu.call_function(0xCDBA);

    // AB28: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // AB2B: CMPD #$0001
    // TODO: Convert CMPD #$0001

    // AB2F: LBLE $02F4
    // TODO: Convert LBLE $02F4

}

} // namespace StarWars