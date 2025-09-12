#include "cpu_6809.h"

namespace StarWars {

void routine_6ef7_impl(CPU6809& cpu) {
    // Converted from rom_disasm_6ef7.md
    // Address: 0x6EF7

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

    // 6F14: BLE $0042
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6F58;

    // 6F16: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // 6F19: ASL $5001
    // TODO: Convert ASL $5001

    // 6F1C: ROL $5000
    // TODO: Convert ROL $5000

    // 6F1F: BVS $005D
    // TODO: Convert BVS $005D

    // 6F23: BVC $0032
    // TODO: Convert BVC $0032

    // 6F27: BRA $005D
    cpu.m_pc = 0x6F86;

    // 6F29: ASL $5005
    // TODO: Convert ASL $5005

    // 6F2C: ROL $5004
    // TODO: Convert ROL $5004

    // 6F2F: BVC $0022
    // TODO: Convert BVC $0022

    // 6F31: ROR $5004
    // TODO: Convert ROR $5004

    // 6F34: ROR $5005
    // TODO: Convert ROR $5005

    // 6F37: BRA $005D
    cpu.m_pc = 0x6F96;

    // 6F39: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // 6F3C: ORB #$01
    cpu.m_b |= 0x01;

    // 6F40: BVC $004F
    // TODO: Convert BVC $004F

    // 6F44: BRA $005D
    cpu.m_pc = 0x6FA3;

    // 6F46: ASL $5005
    // TODO: Convert ASL $5005

    // 6F49: ROL $5004
    // TODO: Convert ROL $5004

    // 6F4C: BVC $0047
    // TODO: Convert BVC $0047

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

    // 6F75: BVC $0086
    // TODO: Convert BVC $0086

    // 6F77: INC <$A7
    // TODO: Convert INC <$A7

    // 6F79: BVC $0086
    // TODO: Convert BVC $0086

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

    // 6F8B: BPL $0097
    if (!cpu.negative_flag()) cpu.m_pc = 0x6F24;

    // 6F90: TST <$7D
    // TODO: Convert TST <$7D

    // 6F92: BGE $00A1
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x6F35;

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

    // 6FAF: BPL $00BB
    if (!cpu.negative_flag()) cpu.m_pc = 0x6F6C;

    // 6FB4: TST <$7F
    // TODO: Convert TST <$7F

    // 6FB6: BPL $00C5
    if (!cpu.negative_flag()) cpu.m_pc = 0x6F7D;

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

    // 6FC9: BLE $00D9
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6FA4;

    // 6FCB: LDD #$1C00
    cpu.m_d = 0x1C00;

    // 6FCE: BRA $00E2
    cpu.m_pc = 0x6FB2;

    // 6FD0: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // 6FD4: BGE $00E2
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x6FB8;

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

    // 6FE7: BLE $00F8
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6FE1;

    // 6FE9: SUBD #$0180
    cpu.m_d -= 0x0180;

    // 6FEC: STD $509C
    cpu.write_memory16(0x509C, cpu.m_d);

    // 6FEF: BRA $0109
    cpu.m_pc = 0x6FFA;

    // 6FF1: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // 6FF4: CMPD #$F300
    // TODO: Convert CMPD #$F300

    // 6FF8: BLE $0109
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x7003;

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

    // 701C: BCC $012C
    if (!cpu.carry_flag()) cpu.m_pc = 0x704A;

    // 701E: LDD #$0BB8
    cpu.m_d = 0x0BB8;

    // 7021: BRA $012F
    cpu.m_pc = 0x7052;

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

    // 704F: BPL $015B
    if (!cpu.negative_flag()) cpu.m_pc = 0x70AC;

    // 7053: TST <$7D
    // TODO: Convert TST <$7D

    // 7055: BGE $0164
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x70BB;

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

    // 7068: BLE $0176
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x70E0;

    // 706A: LDD #$01FF
    cpu.m_d = 0x01FF;

    // 706D: CMPD #$FE01
    // TODO: Convert CMPD #$FE01

    // 7071: BGE $017F
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x70F2;

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

    // 7089: BPL $0195
    if (!cpu.negative_flag()) cpu.m_pc = 0x7020;

    // 708E: TST <$7F
    // TODO: Convert TST <$7F

    // 7090: BPL $019F
    if (!cpu.negative_flag()) cpu.m_pc = 0x7031;

    // 7094: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 709E: STD $5096
    cpu.write_memory16(0x5096, cpu.m_d);

    // 70A1: ADDD $509C
    cpu.m_d += 0x509C;

    // 70A4: CMPD #$FEFF
    // TODO: Convert CMPD #$FEFF

    // 70A8: BLE $01B6
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x7060;

    // 70AA: LDD #$FEFF
    cpu.m_d = 0xFEFF;

    // 70AD: CMPD #$F201
    // TODO: Convert CMPD #$F201

    // 70B1: BGE $01BF
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x7072;

    // 70B3: LDD #$F201
    cpu.m_d = 0xF201;

    // 70B6: STD $509C
    cpu.write_memory16(0x509C, cpu.m_d);

    // 70B9: STD $5044
    cpu.write_memory16(0x5044, cpu.m_d);

    // 70BD: LDX #$4866
    cpu.m_x = 0x4866;

    // 70C0: JSR $70F0
    cpu.call_function(0x70F0);

    // 70C3: JSR $7111
    cpu.call_function(0x7111);

    // 70C6: BEQ $01D4
    if (cpu.zero_flag()) cpu.m_pc = 0x709C;

    // 70C8: JSR $CE2F
    cpu.call_function(0xCE2F);

    // 70CC: LDX #$486F
    cpu.m_x = 0x486F;

    // 70CF: JSR $70F0
    cpu.call_function(0x70F0);

    // 70D2: JSR $7111
    cpu.call_function(0x7111);

    // 70D5: BEQ $01E3
    if (cpu.zero_flag()) cpu.m_pc = 0x70BA;

    // 70D7: JSR $CE3A
    cpu.call_function(0xCE3A);

    // 70DB: ORCC #$10
    cpu.m_cc |= 0x10;

    // 70DD: LDD <$6B
    cpu.m_d = cpu.read_memory16(0x6B);

    // 70DF: STD <$7F
    cpu.write_memory16(0x7F, cpu.m_d);

    // 70E1: LDD <$74
    cpu.m_d = cpu.read_memory16(0x74);

    // 70E3: STD <$7D
    cpu.write_memory16(0x7D, cpu.m_d);

    // 70E5: LDD <$2F
    cpu.m_d = cpu.read_memory16(0x2F);

    // 70E7: STD <$7B
    cpu.write_memory16(0x7B, cpu.m_d);

    // 70E9: LDD <$2D
    cpu.m_d = cpu.read_memory16(0x2D);

    // 70EB: STD <$79
    cpu.write_memory16(0x79, cpu.m_d);

    // 70ED: ANDCC #$EF
    // TODO: Convert ANDCC #$EF

    // 70F0: LDA $7,X
    // TODO: Fix comma operator: LDA $7,X

    // 70F2: BPL $01FE
    if (!cpu.negative_flag()) cpu.m_pc = 0x70F2;

    // 70F5: LDB #$80
    cpu.m_b = 0x80;

}

} // namespace StarWars