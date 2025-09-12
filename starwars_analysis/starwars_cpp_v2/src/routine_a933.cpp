#include "cpu_6809.h"

namespace StarWars {

void routine_a933_impl(CPU6809& cpu) {
    // Converted from rom_disasm_a933.md
    // Address: 0xA933

    // A933: LDD #$0000
    cpu.m_d = 0x0000;

    // A936: SUBD $508E
    cpu.m_d -= 0x508E;

    // A939: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A93C: ADDD $508E
    cpu.m_d += 0x508E;

    // A93F: BMI $A945
    if (cpu.negative_flag()) cpu.m_pc = 0xA945;

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

    // A958: BNE $A95E
    if (!cpu.zero_flag()) cpu.m_pc = 0xA95E;

    // A95C: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A95E: ADDD $509A
    cpu.m_d += 0x509A;

    // A961: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // A963: ADDD #$0100
    cpu.m_d += 0x0100;

    // A966: BMI $A978
    if (cpu.negative_flag()) cpu.m_pc = 0xA978;

    // A968: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A96B: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // A96F: BLE $A974
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA974;

    // A971: LDD #$0180
    cpu.m_d = 0x0180;

    // A974: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A976: BRA $A986
    cpu.m_pc = 0xA986;

    // A978: JSR $CD9E
    cpu.call_function(0xCD9E);

    // A97B: CMPD #$FE80
    // TODO: Convert CMPD #$FE80

    // A97F: BGE $A984
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA984;

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

    // A990: BMI $A9A2
    if (cpu.negative_flag()) cpu.m_pc = 0xA9A2;

    // A992: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A995: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // A999: BLE $A99E
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA99E;

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

    // A9B5: BEQ $A9BB
    if (cpu.zero_flag()) cpu.m_pc = 0xA9BB;

    // A9B9: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A9BB: ADDD $509A
    cpu.m_d += 0x509A;

    // A9BE: ADDD #$FF00
    cpu.m_d += 0xFF00;

    // A9C1: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // A9C3: BMI $A9D5
    if (cpu.negative_flag()) cpu.m_pc = 0xA9D5;

    // A9C5: JSR $CD9E
    cpu.call_function(0xCD9E);

    // A9C8: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // A9CC: BLE $A9D1
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA9D1;

    // A9CE: LDD #$0180
    cpu.m_d = 0x0180;

    // A9D1: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // A9D3: BRA $A9E3
    cpu.m_pc = 0xA9E3;

    // A9D5: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A9D8: CMPD #$FE80
    // TODO: Convert CMPD #$FE80

    // A9DC: BGE $A9E1
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA9E1;

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

    // A9ED: BMI $A9FF
    if (cpu.negative_flag()) cpu.m_pc = 0xA9FF;

    // A9EF: JSR $CDA2
    cpu.call_function(0xCDA2);

    // A9F2: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // A9F6: BLE $A9FB
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA9FB;

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

    // AA11: BMI $AA23
    if (cpu.negative_flag()) cpu.m_pc = 0xAA23;

    // AA13: JSR $CDA2
    cpu.call_function(0xCDA2);

    // AA16: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // AA1A: BLE $AA1F
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAA1F;

    // AA1C: LDD #$0180
    cpu.m_d = 0x0180;

    // AA1F: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AA21: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA23: BRA $AA7D
    cpu.m_pc = 0xAA7D;

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

    // AA3D: BMI $AA4F
    if (cpu.negative_flag()) cpu.m_pc = 0xAA4F;

    // AA3F: JSR $CDA2
    cpu.call_function(0xCDA2);

    // AA42: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // AA46: BLE $AA4B
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAA4B;

    // AA48: LDD #$0180
    cpu.m_d = 0x0180;

    // AA4B: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AA4D: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA4F: BRA $AA7D
    cpu.m_pc = 0xAA7D;

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

    // AA69: BMI $AA7B
    if (cpu.negative_flag()) cpu.m_pc = 0xAA7B;

    // AA6B: JSR $CDA2
    cpu.call_function(0xCDA2);

    // AA6E: CMPD #$0180
    // TODO: Convert CMPD #$0180

    // AA72: BLE $AA77
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAA77;

    // AA74: LDD #$0180
    cpu.m_d = 0x0180;

    // AA77: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U

    // AA79: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // AA7B: BRA $AA7D
    cpu.m_pc = 0xAA7D;

    // AA7D: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AA7F: BITA #$02
    // TODO: Convert BITA #$02

    // AA81: BEQ $AA85
    if (cpu.zero_flag()) cpu.m_pc = 0xAA85;

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

    // AA90: BMI $AA99
    if (cpu.negative_flag()) cpu.m_pc = 0xAA99;

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

    // AA9E: BCS $AAA5
    if (cpu.carry_flag()) cpu.m_pc = 0xAAA5;

    // AAA0: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);

    // AAA3: BRA $AAA8
    cpu.m_pc = 0xAAA8;

    // AAA5: LDD #$FE80
    cpu.m_d = 0xFE80;

    // AAA8: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // AAAA: BMI $AAB3
    if (cpu.negative_flag()) cpu.m_pc = 0xAAB3;

    // AAAC: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AAAF: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // AAB1: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // AAB3: BRA $AA7D
    cpu.m_pc = 0xAA7D;

    // AAB5: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // AAB7: JSR $A90C
    cpu.call_function(0xA90C);

    // AABA: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // AABD: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U

    // AABF: BMI $AAC8
    if (cpu.negative_flag()) cpu.m_pc = 0xAAC8;

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

    // AACD: BCS $AAD4
    if (cpu.carry_flag()) cpu.m_pc = 0xAAD4;

    // AACF: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);

    // AAD2: BRA $AAD7
    cpu.m_pc = 0xAAD7;

    // AAD4: LDD #$0180
    cpu.m_d = 0x0180;

    // AAD7: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // AAD9: BPL $AAE2
    if (!cpu.negative_flag()) cpu.m_pc = 0xAAE2;

    // AADB: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AADE: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U

    // AAE0: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // AAE2: BRA $AA7D
    cpu.m_pc = 0xAA7D;

    // AAE4: LDX #$494B
    cpu.m_x = 0x494B;

    // AAE7: STX <$A8
    cpu.write_memory16(0xA8, cpu.m_x);

    // AAE9: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AAEB: LBEQ $AC34
    // TODO: Convert LBEQ $AC34

    // AAEF: BITA #$10
    // TODO: Convert BITA #$10

    // AAF1: BEQ $AAF9
    if (cpu.zero_flag()) cpu.m_pc = 0xAAF9;

    // AAF3: JSR $ACB1
    cpu.call_function(0xACB1);

    // AAF6: JMP $AC34
    cpu.m_pc = 0xAC34;

    // AAF9: BITA #$04
    // TODO: Convert BITA #$04

    // AAFB: BEQ $AB11
    if (cpu.zero_flag()) cpu.m_pc = 0xAB11;

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

    // AB0F: BRA $AB1D
    cpu.m_pc = 0xAB1D;

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

    // AB20: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // AB23: LDA #$67
    cpu.m_a = 0x67;

    // AB25: JSR $CDBA
    cpu.call_function(0xCDBA);

    // AB28: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // AB2B: CMPD #$0001
    // TODO: Convert CMPD #$0001

    // AB2F: LBLE $AC27
    // TODO: Convert LBLE $AC27

}

} // namespace StarWars