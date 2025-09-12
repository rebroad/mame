#include "cpu_6809.h"

namespace StarWars {

void routine_a920_impl(CPU6809& cpu) {
    // Converted from rom_disasm_a920.md
    // Address: 0xA920

    // A920: LDD #$0000
    cpu.m_d = 0x0000;

    // A923: SUBD $508E
    cpu.m_d -= 0x508E;

    // A926: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A929: ADDD $508E
    cpu.m_d += 0x508E;

    // A92C: BPL $0012
    if (!cpu.negative_flag()) cpu.m_pc = 0xA940;

    // A92E: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A930: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A933: LDD #$0000
    cpu.m_d = 0x0000;

    // A936: SUBD $508E
    cpu.m_d -= 0x508E;

    // A939: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A93C: ADDD $508E
    cpu.m_d += 0x508E;

    // A93F: BMI $0025
    if (cpu.negative_flag()) cpu.m_pc = 0xA966;

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
    cpu.m_d -= 0x5098;

    // A953: LDB $7,U
    // TODO: Fix comma operator: LDB $7,U

    // A956: TST $6,U
    // TODO: Convert TST $6,U

    // A958: BNE $003E
    if (!cpu.zero_flag()) cpu.m_pc = 0xA998;

    // A95C: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A95E: ADDD $509A
    cpu.m_d += 0x509A;

    // A961: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // A963: ADDD #$0100
    cpu.m_d += 0x0100;

    // A966: BMI $0058
    if (cpu.negative_flag()) cpu.m_pc = 0xA9C0;

    // A968: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A96B: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // A96F: BLE $0054
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA9C5;

    // A971: LDD #$0180
    cpu.m_d = 0x0180;

    // A974: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A976: BRA $0066
    cpu.m_pc = 0xA9DE;

    // A978: JSR $CD9E
    cpu.call_function(0xCD9E);

    // A97B: CMPD #$FE80
    // TODO: Convert CMPD #$FE80

    // A97F: BGE $0064
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA9E5;

    // A981: LDD #$FE80
    cpu.m_d = 0xFE80;

    // A984: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A986: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A988: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // A98B: ADDD #$0100
    cpu.m_d += 0x0100;

    // A98E: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // A990: BMI $0082
    if (cpu.negative_flag()) cpu.m_pc = 0xA914;

    // A992: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A995: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // A999: BLE $007E
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAA19;

    // A99B: LDD #$0200
    cpu.m_d = 0x0200;

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
    cpu.m_d -= 0x5098;

    // A9B0: LDB $7,U
    // TODO: Fix comma operator: LDB $7,U

    // A9B3: TST $6,U
    // TODO: Convert TST $6,U

    // A9B5: BEQ $009B
    if (cpu.zero_flag()) cpu.m_pc = 0xA952;

    // A9B9: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A9BB: ADDD $509A
    cpu.m_d += 0x509A;

    // A9BE: ADDD #$FF00
    cpu.m_d += 0xFF00;

    // A9C1: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // A9C3: BMI $00B5
    if (cpu.negative_flag()) cpu.m_pc = 0xA97A;

    // A9C5: JSR $CD9E
    cpu.call_function(0xCD9E);

    // A9C8: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // A9CC: BLE $00B1
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA97F;

    // A9CE: LDD #$0180
    cpu.m_d = 0x0180;

    // A9D1: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A9D3: BRA $00C3
    cpu.m_pc = 0xA998;

    // A9D5: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A9D8: CMPD #$FE80
    // TODO: Convert CMPD #$FE80

    // A9DC: BGE $00C1
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA99F;

    // A9DE: LDD #$FE80
    cpu.m_d = 0xFE80;

    // A9E1: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A9E3: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A9E5: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // A9E8: ADDD #$0100
    cpu.m_d += 0x0100;

    // A9EB: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // A9ED: BMI $00DF
    if (cpu.negative_flag()) cpu.m_pc = 0xA9CE;

    // A9EF: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A9F2: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // A9F6: BLE $00DB
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA9D3;

    // A9F8: LDD #$0200
    cpu.m_d = 0x0200;

    // A9FB: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // A9FD: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA00: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // AA02: LDD #$FF00
    cpu.m_d = 0xFF00;

    // AA05: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // AA07: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // AA09: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // AA0C: ADDD #$0080
    cpu.m_d += 0x0080;

    // AA0F: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // AA11: BMI $0103
    if (cpu.negative_flag()) cpu.m_pc = 0xAA16;

    // AA13: JSR $CDA2
    cpu.call_function(0xCDA2);

    // AA16: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // AA1A: BLE $00FF
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAA1B;

    // AA1C: LDD #$0180
    cpu.m_d = 0x0180;

    // AA1F: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AA21: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA23: BRA $015D
    cpu.m_pc = 0xAA82;

    // AA25: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // AA27: LDD #$FF00
    cpu.m_d = 0xFF00;

    // AA2A: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // AA2C: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // AA2E: LDD #$FF00
    cpu.m_d = 0xFF00;

    // AA31: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // AA33: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // AA35: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // AA38: ADDD #$0080
    cpu.m_d += 0x0080;

    // AA3B: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // AA3D: BMI $012F
    if (cpu.negative_flag()) cpu.m_pc = 0xAA6E;

    // AA3F: JSR $CDA2
    cpu.call_function(0xCDA2);

    // AA42: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // AA46: BLE $012B
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAA73;

    // AA48: LDD #$0180
    cpu.m_d = 0x0180;

    // AA4B: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AA4D: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA4F: BRA $015D
    cpu.m_pc = 0xAAAE;

    // AA51: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // AA53: LDD #$FF00
    cpu.m_d = 0xFF00;

    // AA56: ADDD ,U
    // TODO: Complex indexed addressing: ,U

    // AA58: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // AA5A: LDD #$0100
    cpu.m_d = 0x0100;

    // AA5D: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // AA5F: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // AA61: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // AA64: ADDD #$0080
    cpu.m_d += 0x0080;

    // AA67: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // AA69: BMI $015B
    if (cpu.negative_flag()) cpu.m_pc = 0xAAC6;

    // AA6B: JSR $CDA2
    cpu.call_function(0xCDA2);

    // AA6E: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // AA72: BLE $0157
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAACB;

    // AA74: LDD #$0180
    cpu.m_d = 0x0180;

    // AA77: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AA79: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA7B: BRA $015D
    cpu.m_pc = 0xAADA;

    // AA7D: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AA7F: BITA #$02
    // TODO: Convert BITA #$02

    // AA81: BEQ $0165
    if (cpu.zero_flag()) cpu.m_pc = 0xAAE8;

    // AA83: CLR $3,X
    // TODO: Fix comma operator: CLR $3,X

    // AA86: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // AA88: JSR $A90C
    cpu.call_function(0xA90C);

    // AA8B: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // AA8E: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // AA90: BMI $0179
    if (cpu.negative_flag()) cpu.m_pc = 0xAB0B;

    // AA92: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AA95: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AA97: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA99: LDA $4B19
    cpu.m_a = cpu.read_memory(0x4B19);

    // AA9C: CMPA #$01
    cpu.compare_a(0x01);

    // AA9E: BCS $0185
    if (cpu.carry_flag()) cpu.m_pc = 0xAA25;

    // AAA0: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);

    // AAA3: BRA $0188
    cpu.m_pc = 0xAA2D;

    // AAA5: LDD #$FE80
    cpu.m_d = 0xFE80;

    // AAA8: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // AAAA: BMI $0193
    if (cpu.negative_flag()) cpu.m_pc = 0xAA3F;

    // AAAC: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AAAF: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // AAB1: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // AAB3: BRA $015D
    cpu.m_pc = 0xAB12;

    // AAB5: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // AAB7: JSR $A90C
    cpu.call_function(0xA90C);

    // AABA: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // AABD: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // AABF: BMI $01A8
    if (cpu.negative_flag()) cpu.m_pc = 0xAA69;

    // AAC1: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AAC4: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AAC6: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AAC8: LDA $4B19
    cpu.m_a = cpu.read_memory(0x4B19);

    // AACB: CMPA #$01
    cpu.compare_a(0x01);

    // AACD: BCS $01B4
    if (cpu.carry_flag()) cpu.m_pc = 0xAA83;

    // AACF: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);

    // AAD2: BRA $01B7
    cpu.m_pc = 0xAA8B;

    // AAD4: LDD #$0180
    cpu.m_d = 0x0180;

    // AAD7: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // AAD9: BPL $01C2
    if (!cpu.negative_flag()) cpu.m_pc = 0xAA9D;

    // AADB: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AADE: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // AAE0: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // AAE2: BRA $015D
    cpu.m_pc = 0xAB41;

    // AAE4: LDX #$494B
    cpu.m_x = 0x494B;

    // AAE7: STX <$A8
    cpu.write_memory16(0xA8, cpu.m_x);

    // AAE9: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AAEB: LBEQ $0314
    // TODO: Convert LBEQ $0314

    // AAEF: BITA #$10
    // TODO: Convert BITA #$10

    // AAF1: BEQ $01D9
    if (cpu.zero_flag()) cpu.m_pc = 0xAACC;

    // AAF3: JSR $ACB1
    cpu.call_function(0xACB1);

    // AAF6: JMP $AC34
    cpu.m_pc = 0xAC34;

    // AAF9: BITA #$04
    // TODO: Convert BITA #$04

    // AAFB: BEQ $01F1
    if (cpu.zero_flag()) cpu.m_pc = 0xAAEE;

    // AAFD: LDD $5098
    cpu.m_d = cpu.read_memory16(0x5098);

    // AB00: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // AB03: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);

    // AB06: STD $5042
    cpu.write_memory16(0x5042, cpu.m_d);

    // AB09: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // AB0C: STD $5044
    cpu.write_memory16(0x5044, cpu.m_d);

    // AB0F: BRA $01FD
    cpu.m_pc = 0xAB0E;

    // AB11: LDD #$0000
    cpu.m_d = 0x0000;

    // AB14: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // AB17: STD $5042
    cpu.write_memory16(0x5042, cpu.m_d);

    // AB1A: STD $5044
    cpu.write_memory16(0x5044, cpu.m_d);

    // AB1E: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

}

} // namespace StarWars