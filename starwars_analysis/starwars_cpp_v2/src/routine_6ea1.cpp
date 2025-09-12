#include "cpu_6809.h"

namespace StarWars {

void routine_6ea1_impl(CPU6809& cpu) {
    // Converted from rom_disasm_6ea1.md
    // Address: 0x6EA1

    // 6EA2: LDX $4B32
    cpu.m_x = cpu.read_memory16(0x4B32);

    // 6EA5: BNE $0009
    if (!cpu.zero_flag()) cpu.m_pc = 0x6EB0;

    // 6EA7: LDX #$4900
    cpu.m_x = 0x4900;

    // 6EAA: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 6EAC: CMPA #$01
    cpu.compare_a(0x01);

    // 6EAE: BNE $0018
    if (!cpu.zero_flag()) cpu.m_pc = 0x6EC8;

    // 6EB0: LDA $6,X
    // TODO: Fix comma operator: LDA $6,X

    // 6EB2: BNE $0018
    if (!cpu.zero_flag()) cpu.m_pc = 0x6ECC;

    // 6EB4: STX <$64
    cpu.write_memory16(0x64, cpu.m_x);

    // 6EB6: JMP $6EF7
    cpu.m_pc = 0x6EF7;

    // 6EB9: LDA $4B3C
    cpu.m_a = cpu.read_memory(0x4B3C);

    // 6EBC: BLE $0022
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6EE0;

    // 6EBE: LDA #$09
    cpu.m_a = 0x09;

    // 6EC0: STA $4B3C
    cpu.write_memory(0x4B3C, cpu.m_a);

    // 6EC3: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 6EC6: CMPX #$494B
    cpu.compare_x(0x494B);

    // 6EC9: BCS $0009
    if (cpu.carry_flag()) cpu.m_pc = 0x6ED4;

    // 6ECB: LDD #$0000
    cpu.m_d = 0x0000;

    // 6ECE: STD $4B32
    cpu.write_memory16(0x4B32, cpu.m_d);

    // 6ED1: LDA $5080
    cpu.m_a = cpu.read_memory(0x5080);

    // 6ED4: BMI $003A
    if (cpu.negative_flag()) cpu.m_pc = 0x6F10;

    // 6ED6: LDB $5084
    cpu.m_b = cpu.read_memory(0x5084);

    // 6ED9: BRA $003F
    cpu.m_pc = 0x6F1A;

    // 6EDB: LDB #$7F
    cpu.m_b = 0x7F;

    // 6EDD: SUBB $5084
    cpu.m_b -= 0x5084;

    // 6EE0: STB $486D
    cpu.write_memory(0x486D, cpu.m_b);

    // 6EE3: LDA $5080
    cpu.m_a = cpu.read_memory(0x5080);

    // 6EE6: BMI $004C
    if (cpu.negative_flag()) cpu.m_pc = 0x6F34;

    // 6EE8: LDB $5082
    cpu.m_b = cpu.read_memory(0x5082);

    // 6EEB: BRA $0051
    cpu.m_pc = 0x6F3E;

    // 6EED: LDB #$7F
    cpu.m_b = 0x7F;

    // 6EEF: SUBB $5082
    cpu.m_b -= 0x5082;

    // 6EF3: STB $4876
    cpu.write_memory(0x4876, cpu.m_b);

    // 6EF7: LDA #$10
    cpu.m_a = 0x10;

    // 6EF9: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 6EFC: JSR $7160
    cpu.call_function(0x7160);

    // 6EFF: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);

    // 6F01: STX $4B32
    cpu.write_memory16(0x4B32, cpu.m_x);

    // 6F05: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

    // 6F07: ADDB #$03
    cpu.m_b += 0x03;

    // 6F09: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 6F0C: LDA #$67
    cpu.m_a = 0x67;

    // 6F0E: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 6F11: LDA $5000
    cpu.m_a = cpu.read_memory(0x5000);

    // 6F14: BLE $0098
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6EAE;

    // 6F16: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // 6F19: ASL $5001
    // TODO: Convert ASL $5001

    // 6F1C: ROL $5000
    // TODO: Convert ROL $5000

    // 6F1F: BVS $00B3
    // TODO: Convert BVS $00B3

    // 6F23: BVC $0088
    // TODO: Convert BVC $0088

    // 6F27: BRA $00B3
    cpu.m_pc = 0x6EDC;

    // 6F29: ASL $5005
    // TODO: Convert ASL $5005

    // 6F2C: ROL $5004
    // TODO: Convert ROL $5004

    // 6F2F: BVC $0078
    // TODO: Convert BVC $0078

    // 6F31: ROR $5004
    // TODO: Convert ROR $5004

    // 6F34: ROR $5005
    // TODO: Convert ROR $5005

    // 6F37: BRA $00B3
    cpu.m_pc = 0x6EEC;

    // 6F39: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // 6F3C: ORB #$01
    cpu.m_b |= 0x01;

    // 6F40: BVC $00A5
    // TODO: Convert BVC $00A5

    // 6F44: BRA $00B3
    cpu.m_pc = 0x6EF9;

    // 6F46: ASL $5005
    // TODO: Convert ASL $5005

    // 6F49: ROL $5004
    // TODO: Convert ROL $5004

    // 6F4C: BVC $009D
    // TODO: Convert BVC $009D

    // 6F4E: ROR $5004
    // TODO: Convert ROR $5004

    // 6F51: ROR $5005
    // TODO: Convert ROR $5005

    // 6F55: STA $4876
    cpu.write_memory(0x4876, cpu.m_a);

    // 6F58: LDB $5004
    cpu.m_b = cpu.read_memory(0x5004);

    // 6F5B: STB $486D
    cpu.write_memory(0x486D, cpu.m_b);

    // 6F5F: LDD <$42
    cpu.m_d = cpu.read_memory16(0x42);

    // 6F61: JSR $CDAB
    cpu.call_function(0xCDAB);

    // 6F64: STD <$89
    cpu.write_memory16(0x89, cpu.m_d);

    // 6F67: LDD <$42
    cpu.m_d = cpu.read_memory16(0x42);

    // 6F69: JSR $CDA9
    cpu.call_function(0xCDA9);

    // 6F6C: STD <$89
    cpu.write_memory16(0x89, cpu.m_d);

    // 6F6F: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 6F72: ADDD $5098
    cpu.m_d += 0x5098;

    // 6F75: BVC $00DC
    // TODO: Convert BVC $00DC

    // 6F77: INC <$A7
    // TODO: Convert INC <$A7

    // 6F79: BVC $00DC
    // TODO: Convert BVC $00DC

    // 6F7B: DEC <$A7
    // TODO: Convert DEC <$A7

    // 6F7D: STD $5098
    cpu.write_memory16(0x5098, cpu.m_d);

    // 6F80: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // 6F83: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 6F86: JSR $CDB1
    cpu.call_function(0xCDB1);

    // 6F89: LDB <$7D
    cpu.m_b = cpu.read_memory(0x7D);

    // 6F8B: BPL $00ED
    if (!cpu.negative_flag()) cpu.m_pc = 0x6F7A;

    // 6F90: TST <$7D
    // TODO: Convert TST <$7D

    // 6F92: BGE $00F7
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x6F8B;

    // 6F96: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6F98: JSR $CDA0
    cpu.call_function(0xCDA0);

    // 6F9B: STD $508E
    cpu.write_memory16(0x508E, cpu.m_d);

    // 6F9E: ADDD $509A
    cpu.m_d += 0x509A;

    // 6FA1: STD $509A
    cpu.write_memory16(0x509A, cpu.m_d);

    // 6FA4: STD $5042
    cpu.write_memory16(0x5042, cpu.m_d);

    // 6FA7: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 6FAA: JSR $CDB1
    cpu.call_function(0xCDB1);

    // 6FAD: LDB <$7F
    cpu.m_b = cpu.read_memory(0x7F);

    // 6FAF: BPL $0111
    if (!cpu.negative_flag()) cpu.m_pc = 0x6FC2;

    // 6FB4: TST <$7F
    // TODO: Convert TST <$7F

    // 6FB6: BPL $011B
    if (!cpu.negative_flag()) cpu.m_pc = 0x6FD3;

    // 6FBA: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6FBC: JSR $CDA0
    cpu.call_function(0xCDA0);

    // 6FBF: STD $5096
    cpu.write_memory16(0x5096, cpu.m_d);

    // 6FC2: ADDD $509C
    cpu.m_d += 0x509C;

    // 6FC5: CMPD #$1C00
    // TODO: Convert CMPD #$1C00

    // 6FC9: BLE $012F
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6FFA;

    // 6FCB: LDD #$1C00
    cpu.m_d = 0x1C00;

    // 6FCE: BRA $0138
    cpu.m_pc = 0x7008;

    // 6FD0: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // 6FD4: BGE $0138
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x700E;

    // 6FD6: LDD #$0200
    cpu.m_d = 0x0200;

    // 6FD9: STD $509C
    cpu.write_memory16(0x509C, cpu.m_d);

    // 6FDC: STD $5044
    cpu.write_memory16(0x5044, cpu.m_d);

    // 6FE0: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // 6FE3: CMPD #$0380
    // TODO: Convert CMPD #$0380

    // 6FE7: BLE $014E
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x7037;

    // 6FE9: SUBD #$0180
    cpu.m_d -= 0x0180;

    // 6FEC: STD $509C
    cpu.write_memory16(0x509C, cpu.m_d);

    // 6FEF: BRA $015F
    cpu.m_pc = 0x7050;

    // 6FF1: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // 6FF4: CMPD #$F300
    // TODO: Convert CMPD #$F300

    // 6FF8: BLE $015F
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x7059;

    // 6FFA: SUBD #$0100
    cpu.m_d -= 0x0100;

    // 6FFD: STD $509C
    cpu.write_memory16(0x509C, cpu.m_d);

    // 7000: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 7003: ADDD $5098
    cpu.m_d += 0x5098;

    // 7006: STD $5098
    cpu.write_memory16(0x5098, cpu.m_d);

    // 7009: LDD #$0300
    cpu.m_d = 0x0300;

    // 700C: SUBD $5086
    cpu.m_d -= 0x5086;

    // 700F: JSR $CDA2
    cpu.call_function(0xCDA2);

    // 7012: ADDD $5086
    cpu.m_d += 0x5086;

    // 7015: STD $5086
    cpu.write_memory16(0x5086, cpu.m_d);

    // 7018: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);

    // 701C: BCC $0182
    if (!cpu.carry_flag()) cpu.m_pc = 0x6FA0;

    // 701E: LDD #$0BB8
    cpu.m_d = 0x0BB8;

    // 7021: BRA $0185
    cpu.m_pc = 0x6FA8;

    // 7023: LDD #$F448
    cpu.m_d = 0xF448;

    // 7026: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 7029: LDD #$3EEB
    cpu.m_d = 0x3EEB;

    // 702C: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // 702F: JSR $CE24
    cpu.call_function(0xCE24);

    // 7032: LDD #$0000
    cpu.m_d = 0x0000;

    // 7035: SUBD <$A3
    cpu.m_d -= 0xA3;

    // 7037: JSR $6E70
    cpu.call_function(0x6E70);

    // 703B: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 703E: ADDD $5098
    cpu.m_d += 0x5098;

    // 7041: STD $5098
    cpu.write_memory16(0x5098, cpu.m_d);

    // 7044: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // 7047: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 704A: JSR $CDB1
    cpu.call_function(0xCDB1);

    // 704D: LDB <$7D
    cpu.m_b = cpu.read_memory(0x7D);

    // 704F: BPL $01B1
    if (!cpu.negative_flag()) cpu.m_pc = 0x7002;

    // 7053: TST <$7D
    // TODO: Convert TST <$7D

    // 7055: BGE $01BA
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x7011;

    // 7059: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 705B: JSR $CDA0
    cpu.call_function(0xCDA0);

    // 705E: STD $508E
    cpu.write_memory16(0x508E, cpu.m_d);

    // 7061: ADDD $509A
    cpu.m_d += 0x509A;

    // 7064: CMPD #$01FF
    // TODO: Convert CMPD #$01FF

    // 7068: BLE $01CC
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x7036;

    // 706A: LDD #$01FF
    cpu.m_d = 0x01FF;

    // 706D: CMPD #$FE01
    // TODO: Convert CMPD #$FE01

    // 7071: BGE $01D5
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x7048;

    // 7073: LDD #$FE01
    cpu.m_d = 0xFE01;

    // 7076: STD $509A
    cpu.write_memory16(0x509A, cpu.m_d);

    // 7079: STD $5042
    cpu.write_memory16(0x5042, cpu.m_d);

    // 707C: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 7087: LDB <$7F
    cpu.m_b = cpu.read_memory(0x7F);

    // 7089: BPL $01EB
    if (!cpu.negative_flag()) cpu.m_pc = 0x7076;

    // 708E: TST <$7F
    // TODO: Convert TST <$7F

    // 7090: BPL $01F5
    if (!cpu.negative_flag()) cpu.m_pc = 0x7087;

    // 7094: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 709E: STD $5096
    cpu.write_memory16(0x5096, cpu.m_d);

}

} // namespace StarWars