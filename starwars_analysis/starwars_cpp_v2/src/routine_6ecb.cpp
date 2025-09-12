#include "cpu_6809.h"

namespace StarWars {

void routine_6ecb_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_6ecb.md
    // Address: 0x6ECB

    // 6ECB: LDD #$0000
    cpu.state_.d = 0x0000;

    // 6ECE: STD $4B32
    cpu.write_memory(0x4B32, cpu.state_.d);

    // 6ED1: LDA $5080
    cpu.state_.a = cpu.read_memory(0x5080);

    // 6ED4: BMI $0010
    if (cpu.negative_flag()) cpu.state_.pc = 0x6EE6;

    // 6ED6: LDB $5084
    cpu.state_.b = cpu.read_memory(0x5084);

    // 6ED9: BRA $0015
    cpu.state_.pc = 0x6EF0;

    // 6EDB: LDB #$7F
    cpu.state_.b = 0x7F;

    // 6EDD: SUBB $5084
    cpu.state_.b -= 0x5084;

    // 6EE0: STB $486D
    cpu.write_memory(0x486D, cpu.state_.b);

    // 6EE3: LDA $5080
    cpu.state_.a = cpu.read_memory(0x5080);

    // 6EE6: BMI $0022
    if (cpu.negative_flag()) cpu.state_.pc = 0x6F0A;

    // 6EE8: LDB $5082
    cpu.state_.b = cpu.read_memory(0x5082);

    // 6EEB: BRA $0027
    cpu.state_.pc = 0x6F14;

    // 6EED: LDB #$7F
    cpu.state_.b = 0x7F;

    // 6EEF: SUBB $5082
    cpu.state_.b -= 0x5082;

    // 6EF3: STB $4876
    cpu.write_memory(0x4876, cpu.state_.b);

    // 6EF7: LDA #$10
    cpu.state_.a = 0x10;

    // 6EF9: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 6EFC: JSR $7160
    cpu.call_function(0x7160);

    // 6EFF: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // 6F01: STX $4B32
    cpu.write_memory(0x4B32, cpu.state_.x);

    // 6F05: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

    // 6F07: ADDB #$03
    cpu.state_.b += 0x03;

    // 6F09: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 6F0C: LDA #$67
    cpu.state_.a = 0x67;

    // 6F0E: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 6F11: LDA $5000
    cpu.state_.a = cpu.read_memory(0x5000);

    // 6F14: BLE $006E
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x6F84;

    // 6F16: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // 6F19: ASL $5001
    // TODO: Convert ASL $5001

    // 6F1C: ROL $5000
    // TODO: Convert ROL $5000

    // 6F1F: BVS $0089
    // TODO: Convert BVS $0089

    // 6F23: BVC $005E
    // TODO: Convert BVC $005E

    // 6F27: BRA $0089
    cpu.state_.pc = 0x6EB2;

    // 6F29: ASL $5005
    // TODO: Convert ASL $5005

    // 6F2C: ROL $5004
    // TODO: Convert ROL $5004

    // 6F2F: BVC $004E
    // TODO: Convert BVC $004E

    // 6F31: ROR $5004
    // TODO: Convert ROR $5004

    // 6F34: ROR $5005
    // TODO: Convert ROR $5005

    // 6F37: BRA $0089
    cpu.state_.pc = 0x6EC2;

    // 6F39: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // 6F3C: ORB #$01
    cpu.state_.b |= 0x01;

    // 6F40: BVC $007B
    // TODO: Convert BVC $007B

    // 6F44: BRA $0089
    cpu.state_.pc = 0x6ECF;

    // 6F46: ASL $5005
    // TODO: Convert ASL $5005

    // 6F49: ROL $5004
    // TODO: Convert ROL $5004

    // 6F4C: BVC $0073
    // TODO: Convert BVC $0073

    // 6F4E: ROR $5004
    // TODO: Convert ROR $5004

    // 6F51: ROR $5005
    // TODO: Convert ROR $5005

    // 6F55: STA $4876
    cpu.write_memory(0x4876, cpu.state_.a);

    // 6F58: LDB $5004
    cpu.state_.b = cpu.read_memory(0x5004);

    // 6F5B: STB $486D
    cpu.write_memory(0x486D, cpu.state_.b);

    // 6F5F: LDD <$42
    cpu.state_.d = cpu.read_memory_word(0x42);

    // 6F61: JSR $CDAB
    cpu.call_function(0xCDAB);

    // 6F64: STD <$89
    cpu.write_memory(0x89, cpu.state_.d);

    // 6F67: LDD <$42
    cpu.state_.d = cpu.read_memory_word(0x42);

    // 6F69: JSR $CDA9
    cpu.call_function(0xCDA9);

    // 6F6C: STD <$89
    cpu.write_memory(0x89, cpu.state_.d);

    // 6F6F: LDD $5086
    cpu.state_.d = cpu.read_memory_word(0x5086);

    // 6F72: ADDD $5098
    cpu.state_.d += 0x5098;

    // 6F75: BVC $00B2
    // TODO: Convert BVC $00B2

    // 6F77: INC <$A7
    // TODO: Convert INC <$A7

    // 6F79: BVC $00B2
    // TODO: Convert BVC $00B2

    // 6F7B: DEC <$A7
    // TODO: Convert DEC <$A7

    // 6F7D: STD $5098
    cpu.write_memory(0x5098, cpu.state_.d);

    // 6F80: STD $5040
    cpu.write_memory(0x5040, cpu.state_.d);

    // 6F83: LDD $5086
    cpu.state_.d = cpu.read_memory_word(0x5086);

    // 6F86: JSR $CDB1
    cpu.call_function(0xCDB1);

    // 6F89: LDB <$7D
    cpu.state_.b = cpu.read_memory(0x7D);

    // 6F8B: BPL $00C3
    if (!cpu.negative_flag()) cpu.state_.pc = 0x6F50;

    // 6F90: TST <$7D
    // TODO: Convert TST <$7D

    // 6F92: BGE $00CD
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x6F61;

    // 6F96: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6F98: JSR $CDA0
    cpu.call_function(0xCDA0);

    // 6F9B: STD $508E
    cpu.write_memory(0x508E, cpu.state_.d);

    // 6F9E: ADDD $509A
    cpu.state_.d += 0x509A;

    // 6FA1: STD $509A
    cpu.write_memory(0x509A, cpu.state_.d);

    // 6FA4: STD $5042
    cpu.write_memory(0x5042, cpu.state_.d);

    // 6FA7: LDD $5086
    cpu.state_.d = cpu.read_memory_word(0x5086);

    // 6FAA: JSR $CDB1
    cpu.call_function(0xCDB1);

    // 6FAD: LDB <$7F
    cpu.state_.b = cpu.read_memory(0x7F);

    // 6FAF: BPL $00E7
    if (!cpu.negative_flag()) cpu.state_.pc = 0x6F98;

    // 6FB4: TST <$7F
    // TODO: Convert TST <$7F

    // 6FB6: BPL $00F1
    if (!cpu.negative_flag()) cpu.state_.pc = 0x6FA9;

    // 6FBA: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6FBC: JSR $CDA0
    cpu.call_function(0xCDA0);

    // 6FBF: STD $5096
    cpu.write_memory(0x5096, cpu.state_.d);

    // 6FC2: ADDD $509C
    cpu.state_.d += 0x509C;

    // 6FC5: CMPD #$1C00
    // TODO: Convert CMPD #$1C00

    // 6FC9: BLE $0105
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x6FD0;

    // 6FCB: LDD #$1C00
    cpu.state_.d = 0x1C00;

    // 6FCE: BRA $010E
    cpu.state_.pc = 0x6FDE;

    // 6FD0: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // 6FD4: BGE $010E
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x6FE4;

    // 6FD6: LDD #$0200
    cpu.state_.d = 0x0200;

    // 6FD9: STD $509C
    cpu.write_memory(0x509C, cpu.state_.d);

    // 6FDC: STD $5044
    cpu.write_memory(0x5044, cpu.state_.d);

    // 6FE0: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // 6FE3: CMPD #$0380
    // TODO: Convert CMPD #$0380

    // 6FE7: BLE $0124
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x700D;

    // 6FE9: SUBD #$0180
    cpu.state_.d -= 0x0180;

    // 6FEC: STD $509C
    cpu.write_memory(0x509C, cpu.state_.d);

    // 6FEF: BRA $0135
    cpu.state_.pc = 0x7026;

    // 6FF1: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // 6FF4: CMPD #$F300
    // TODO: Convert CMPD #$F300

    // 6FF8: BLE $0135
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x702F;

    // 6FFA: SUBD #$0100
    cpu.state_.d -= 0x0100;

    // 6FFD: STD $509C
    cpu.write_memory(0x509C, cpu.state_.d);

    // 7000: LDD $5086
    cpu.state_.d = cpu.read_memory_word(0x5086);

    // 7003: ADDD $5098
    cpu.state_.d += 0x5098;

    // 7006: STD $5098
    cpu.write_memory(0x5098, cpu.state_.d);

    // 7009: LDD #$0300
    cpu.state_.d = 0x0300;

    // 700C: SUBD $5086
    cpu.state_.d -= 0x5086;

    // 700F: JSR $CDA2
    cpu.call_function(0xCDA2);

    // 7012: ADDD $5086
    cpu.state_.d += 0x5086;

    // 7015: STD $5086
    cpu.write_memory(0x5086, cpu.state_.d);

    // 7018: LDA $4B15
    cpu.state_.a = cpu.read_memory(0x4B15);

    // 701C: BCC $0158
    if (!cpu.carry_flag()) cpu.state_.pc = 0x7076;

    // 701E: LDD #$0BB8
    cpu.state_.d = 0x0BB8;

    // 7021: BRA $015B
    cpu.state_.pc = 0x707E;

    // 7023: LDD #$F448
    cpu.state_.d = 0xF448;

    // 7026: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // 7029: LDD #$3EEB
    cpu.state_.d = 0x3EEB;

    // 702C: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // 702F: JSR $CE24
    cpu.call_function(0xCE24);

    // 7032: LDD #$0000
    cpu.state_.d = 0x0000;

    // 7035: SUBD <$A3
    cpu.state_.d -= 0xA3;

    // 7037: JSR $6E70
    cpu.call_function(0x6E70);

    // 703B: LDD $5086
    cpu.state_.d = cpu.read_memory_word(0x5086);

    // 703E: ADDD $5098
    cpu.state_.d += 0x5098;

    // 7041: STD $5098
    cpu.write_memory(0x5098, cpu.state_.d);

    // 7044: STD $5040
    cpu.write_memory(0x5040, cpu.state_.d);

    // 7047: LDD $5086
    cpu.state_.d = cpu.read_memory_word(0x5086);

    // 704A: JSR $CDB1
    cpu.call_function(0xCDB1);

    // 704D: LDB <$7D
    cpu.state_.b = cpu.read_memory(0x7D);

    // 704F: BPL $0187
    if (!cpu.negative_flag()) cpu.state_.pc = 0x6FD8;

    // 7053: TST <$7D
    // TODO: Convert TST <$7D

    // 7055: BGE $0190
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x6FE7;

    // 7059: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 705B: JSR $CDA0
    cpu.call_function(0xCDA0);

    // 705E: STD $508E
    cpu.write_memory(0x508E, cpu.state_.d);

    // 7061: ADDD $509A
    cpu.state_.d += 0x509A;

    // 7064: CMPD #$01FF
    // TODO: Convert CMPD #$01FF

    // 7068: BLE $01A2
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x700C;

    // 706A: LDD #$01FF
    cpu.state_.d = 0x01FF;

    // 706D: CMPD #$FE01
    // TODO: Convert CMPD #$FE01

    // 7071: BGE $01AB
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x701E;

    // 7073: LDD #$FE01
    cpu.state_.d = 0xFE01;

    // 7076: STD $509A
    cpu.write_memory(0x509A, cpu.state_.d);

    // 7079: STD $5042
    cpu.write_memory(0x5042, cpu.state_.d);

    // 707C: LDD $5086
    cpu.state_.d = cpu.read_memory_word(0x5086);

    // 7087: LDB <$7F
    cpu.state_.b = cpu.read_memory(0x7F);

    // 7089: BPL $01C1
    if (!cpu.negative_flag()) cpu.state_.pc = 0x704C;

    // 708E: TST <$7F
    // TODO: Convert TST <$7F

    // 7090: BPL $01CB
    if (!cpu.negative_flag()) cpu.state_.pc = 0x705D;

    // 7094: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 709E: STD $5096
    cpu.write_memory(0x5096, cpu.state_.d);

    // 70A1: ADDD $509C
    cpu.state_.d += 0x509C;

    // 70A4: CMPD #$FEFF
    // TODO: Convert CMPD #$FEFF

    // 70A8: BLE $01E2
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x708C;

    // 70AA: LDD #$FEFF
    cpu.state_.d = 0xFEFF;

    // 70AD: CMPD #$F201
    // TODO: Convert CMPD #$F201

    // 70B1: BGE $01EB
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x709E;

    // 70B3: LDD #$F201
    cpu.state_.d = 0xF201;

    // 70B6: STD $509C
    cpu.write_memory(0x509C, cpu.state_.d);

    // 70B9: STD $5044
    cpu.write_memory(0x5044, cpu.state_.d);

    // 70BD: LDX #$4866
    cpu.state_.x = 0x4866;

    // 70C0: JSR $70F0
    cpu.call_function(0x70F0);

    // 70C3: JSR $7111
    cpu.call_function(0x7111);

    // 70C6: BEQ $0200
    if (cpu.zero_flag()) cpu.state_.pc = 0x70C8;

    // 70C8: JSR $CE2F
    cpu.call_function(0xCE2F);

}

} // namespace StarWars