#include "cpu_6809.h"

namespace StarWars {

void routine_6e22_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_6e22.md
    // Address: 0x6E22

    // 6E22: LDA <$63
    cpu.state_.a = cpu.read_memory(0x63);

    // 6E24: BEQ $000C
    if (cpu.zero_flag()) cpu.state_.pc += 0x000C;

    // 6E26: BLE $0009
    // TODO: Convert BLE $0009

    // 6E29: BRA $000A
    cpu.state_.pc += 0x000A;

    // 6E2C: STA <$63
    cpu.write_memory(0x63, cpu.state_.a);

    // 6E2E: LDA <$63
    cpu.state_.a = cpu.read_memory(0x63);

    // 6E30: BPL $0011
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0011;

    // 6E33: LDB #$20
    cpu.state_.b = 0x20;

    // 6E36: TST <$63
    // TODO: Convert TST <$63

    // 6E38: BPL $001C
    if (!cpu.negative_flag()) cpu.state_.pc += 0x001C;

    // 6E3C: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6E3E: STD <$A5
    cpu.write_memory(0xA5, cpu.state_.d);

    // 6E40: LDA <$7D
    cpu.state_.a = cpu.read_memory(0x7D);

    // 6E42: BPL $0023
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0023;

    // 6E45: LDB #$02
    cpu.state_.b = 0x02;

    // 6E48: TST <$7D
    // TODO: Convert TST <$7D

    // 6E4A: BPL $002E
    if (!cpu.negative_flag()) cpu.state_.pc += 0x002E;

    // 6E4E: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6E50: ADDD <$A5
    cpu.state_.d += 0xA5;

    // 6E52: TST <$63
    // TODO: Convert TST <$63

    // 6E54: BNE $004E
    if (!cpu.zero_flag()) cpu.state_.pc += 0x004E;

    // 6E56: SUBD <$A3
    cpu.state_.d -= 0xA3;

    // 6E58: BLE $0043
    // TODO: Convert BLE $0043

    // 6E5A: CMPD #$0010
    // TODO: Convert CMPD #$0010

    // 6E5E: BLE $0041
    // TODO: Convert BLE $0041

    // 6E60: LDD #$0010
    cpu.state_.d = 0x0010;

    // 6E63: BRA $004C
    cpu.state_.pc += 0x004C;

    // 6E65: CMPD #$FFF0
    // TODO: Convert CMPD #$FFF0

    // 6E69: BGE $004C
    // TODO: Convert BGE $004C

    // 6E6B: LDD #$FFF0
    cpu.state_.d = 0xFFF0;

    // 6E6E: BRA $0066
    cpu.state_.pc += 0x0066;

    // 6E70: SUBD <$A3
    cpu.state_.d -= 0xA3;

    // 6E72: BLE $005D
    // TODO: Convert BLE $005D

    // 6E74: CMPD #$0032
    // TODO: Convert CMPD #$0032

    // 6E78: BLE $005B
    // TODO: Convert BLE $005B

    // 6E7A: LDD #$0032
    cpu.state_.d = 0x0032;

    // 6E7D: BRA $0066
    cpu.state_.pc += 0x0066;

    // 6E7F: CMPD #$FFCE
    // TODO: Convert CMPD #$FFCE

    // 6E83: BGE $0066
    // TODO: Convert BGE $0066

    // 6E85: LDD #$FFCE
    cpu.state_.d = 0xFFCE;

    // 6E88: TFR B,A
    cpu.state_.a = cpu.state_.b;

    // 6E8A: ADDA $4878
    cpu.state_.a += 0x4878;

    // 6E8D: STA $4878
    cpu.write_memory(0x4878, cpu.state_.a);

    // 6E91: ADDD <$A3
    cpu.state_.d += 0xA3;

    // 6E93: STD <$A3
    cpu.write_memory(0xA3, cpu.state_.d);

    // 6E95: LDX #$4870
    cpu.state_.x = 0x4870;

    // 6E98: JSR $7111
    cpu.call_function(0x7111);

    // 6E9B: BEQ $007E
    if (cpu.zero_flag()) cpu.state_.pc += 0x007E;

    // 6E9D: JSR $CE24
    cpu.call_function(0xCE24);

    // 6EA2: LDX $4B32
    cpu.state_.x = cpu.read_memory_word(0x4B32);

    // 6EA5: BNE $0088
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0088;

    // 6EA7: LDX #$4900
    cpu.state_.x = 0x4900;

    // 6EAA: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 6EAC: CMPA #$01
    cpu.compare_a(0x01);

    // 6EAE: BNE $0097
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0097;

    // 6EB0: LDA $6,X
    // TODO: Fix comma operator: LDA $6,X

    // 6EB2: BNE $0097
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0097;

    // 6EB4: STX <$64
    cpu.write_memory(0x64, cpu.state_.x);

    // 6EB6: JMP $6EF7
    cpu.state_.pc = 0x6EF7;

    // 6EB9: LDA $4B3C
    cpu.state_.a = cpu.read_memory(0x4B3C);

    // 6EBC: BLE $00A1
    // TODO: Convert BLE $00A1

    // 6EBE: LDA #$09
    cpu.state_.a = 0x09;

    // 6EC0: STA $4B3C
    cpu.write_memory(0x4B3C, cpu.state_.a);

    // 6EC3: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 6EC6: CMPX #$494B
    cpu.compare_x(0x494B);

    // 6EC9: BCS $0088
    if (cpu.carry_flag()) cpu.state_.pc += 0x0088;

    // 6ECB: LDD #$0000
    cpu.state_.d = 0x0000;

    // 6ECE: STD $4B32
    cpu.write_memory(0x4B32, cpu.state_.d);

    // 6ED1: LDA $5080
    cpu.state_.a = cpu.read_memory(0x5080);

    // 6ED4: BMI $00B9
    if (cpu.negative_flag()) cpu.state_.pc += 0x00B9;

    // 6ED6: LDB $5084
    cpu.state_.b = cpu.read_memory(0x5084);

    // 6ED9: BRA $00BE
    cpu.state_.pc += 0x00BE;

    // 6EDB: LDB #$7F
    cpu.state_.b = 0x7F;

    // 6EDD: SUBB $5084
    cpu.state_.b -= 0x5084;

    // 6EE0: STB $486D
    cpu.write_memory(0x486D, cpu.state_.b);

    // 6EE3: LDA $5080
    cpu.state_.a = cpu.read_memory(0x5080);

    // 6EE6: BMI $00CB
    if (cpu.negative_flag()) cpu.state_.pc += 0x00CB;

    // 6EE8: LDB $5082
    cpu.state_.b = cpu.read_memory(0x5082);

    // 6EEB: BRA $00D0
    cpu.state_.pc += 0x00D0;

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

    // 6F14: BLE $0117
    // TODO: Convert BLE $0117

    // 6F16: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // 6F19: ASL $5001
    // TODO: Convert ASL $5001

    // 6F1C: ROL $5000
    // TODO: Convert ROL $5000

    // 6F1F: BVS $0132
    // TODO: Convert BVS $0132

    // 6F23: BVC $0107
    // TODO: Convert BVC $0107

    // 6F27: BRA $0132
    cpu.state_.pc += 0x0132;

    // 6F29: ASL $5005
    // TODO: Convert ASL $5005

    // 6F2C: ROL $5004
    // TODO: Convert ROL $5004

    // 6F2F: BVC $00F7
    // TODO: Convert BVC $00F7

    // 6F31: ROR $5004
    // TODO: Convert ROR $5004

    // 6F34: ROR $5005
    // TODO: Convert ROR $5005

    // 6F37: BRA $0132
    cpu.state_.pc += 0x0132;

    // 6F39: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // 6F3C: ORB #$01
    cpu.state_.b |= 0x01;

    // 6F40: BVC $0124
    // TODO: Convert BVC $0124

    // 6F44: BRA $0132
    cpu.state_.pc += 0x0132;

    // 6F46: ASL $5005
    // TODO: Convert ASL $5005

    // 6F49: ROL $5004
    // TODO: Convert ROL $5004

    // 6F4C: BVC $011C
    // TODO: Convert BVC $011C

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

    // 6F75: BVC $015B
    // TODO: Convert BVC $015B

    // 6F77: INC <$A7
    // TODO: Convert INC <$A7

    // 6F79: BVC $015B
    // TODO: Convert BVC $015B

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

    // 6F8B: BPL $016C
    if (!cpu.negative_flag()) cpu.state_.pc += 0x016C;

    // 6F90: TST <$7D
    // TODO: Convert TST <$7D

    // 6F92: BGE $0176
    // TODO: Convert BGE $0176

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

    // 6FAF: BPL $0190
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0190;

    // 6FB4: TST <$7F
    // TODO: Convert TST <$7F

    // 6FB6: BPL $019A
    if (!cpu.negative_flag()) cpu.state_.pc += 0x019A;

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

    // 6FC9: BLE $01AE
    // TODO: Convert BLE $01AE

    // 6FCB: LDD #$1C00
    cpu.state_.d = 0x1C00;

    // 6FCE: BRA $01B7
    cpu.state_.pc += 0x01B7;

    // 6FD0: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // 6FD4: BGE $01B7
    // TODO: Convert BGE $01B7

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

    // 6FE7: BLE $01CD
    // TODO: Convert BLE $01CD

    // 6FE9: SUBD #$0180
    cpu.state_.d -= 0x0180;

    // 6FEC: STD $509C
    cpu.write_memory(0x509C, cpu.state_.d);

    // 6FEF: BRA $01DE
    cpu.state_.pc += 0x01DE;

    // 6FF1: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // 6FF4: CMPD #$F300
    // TODO: Convert CMPD #$F300

    // 6FF8: BLE $01DE
    // TODO: Convert BLE $01DE

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

    // 701C: BCC $0201
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0201;

    // 701E: LDD #$0BB8
    cpu.state_.d = 0x0BB8;

    // 7021: BRA $0201
    cpu.state_.pc += 0x0201;

}

} // namespace StarWars