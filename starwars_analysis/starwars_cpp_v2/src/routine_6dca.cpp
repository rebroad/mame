#include "cpu_6809.h"

namespace StarWars {

void routine_6dca_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_6dca.md
    // Address: 0x6DCA

    // 6DCA: LDD <$89
    cpu.state_.d = cpu.read_memory_word(0x89);

    // 6DCC: ADDD #$0080
    cpu.state_.d += 0x0080;

    // 6DCF: STD <$89
    cpu.write_memory(0x89, cpu.state_.d);

    // 6DD2: LDA <$63
    cpu.state_.a = cpu.read_memory(0x63);

    // 6DD4: BEQ $0026
    if (cpu.zero_flag()) cpu.state_.pc += 0x0026;

    // 6DD6: BLE $0015
    // TODO: Convert BLE $0015

    // 6DD8: DEC <$63
    // TODO: Convert DEC <$63

    // 6DDA: LDD #$04FF
    cpu.state_.d = 0x04FF;

    // 6DDD: BRA $001A
    cpu.state_.pc += 0x001A;

    // 6DDF: INC <$63
    // TODO: Convert INC <$63

    // 6DE1: LDD #$FB01
    cpu.state_.d = 0xFB01;

    // 6DE4: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // 6DE7: LDD #$3FCE
    cpu.state_.d = 0x3FCE;

    // 6DEA: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // 6DED: JSR $CE24
    cpu.call_function(0xCE24);

    // 6DF0: JSR $6EA2
    cpu.call_function(0x6EA2);

    // 6DF3: JSR $70BD
    cpu.call_function(0x70BD);

    // 6DF6: JSR $70CC
    cpu.call_function(0x70CC);

    // 6DFA: LDA <$63
    cpu.state_.a = cpu.read_memory(0x63);

    // 6DFC: BEQ $004E
    if (cpu.zero_flag()) cpu.state_.pc += 0x004E;

    // 6DFE: BLE $003D
    // TODO: Convert BLE $003D

    // 6E00: DEC <$63
    // TODO: Convert DEC <$63

    // 6E02: LDD #$04FF
    cpu.state_.d = 0x04FF;

    // 6E05: BRA $0042
    cpu.state_.pc += 0x0042;

    // 6E07: INC <$63
    // TODO: Convert INC <$63

    // 6E09: LDD #$FB01
    cpu.state_.d = 0xFB01;

    // 6E0C: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // 6E0F: LDD #$3FCE
    cpu.state_.d = 0x3FCE;

    // 6E12: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // 6E15: JSR $CE24
    cpu.call_function(0xCE24);

    // 6E18: JSR $6ECB
    cpu.call_function(0x6ECB);

    // 6E1B: JSR $70BD
    cpu.call_function(0x70BD);

    // 6E1E: JSR $70CC
    cpu.call_function(0x70CC);

    // 6E22: LDA <$63
    cpu.state_.a = cpu.read_memory(0x63);

    // 6E24: BEQ $0064
    if (cpu.zero_flag()) cpu.state_.pc += 0x0064;

    // 6E26: BLE $0061
    // TODO: Convert BLE $0061

    // 6E29: BRA $0062
    cpu.state_.pc += 0x0062;

    // 6E2C: STA <$63
    cpu.write_memory(0x63, cpu.state_.a);

    // 6E2E: LDA <$63
    cpu.state_.a = cpu.read_memory(0x63);

    // 6E30: BPL $0069
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0069;

    // 6E33: LDB #$20
    cpu.state_.b = 0x20;

    // 6E36: TST <$63
    // TODO: Convert TST <$63

    // 6E38: BPL $0074
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0074;

    // 6E3C: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6E3E: STD <$A5
    cpu.write_memory(0xA5, cpu.state_.d);

    // 6E40: LDA <$7D
    cpu.state_.a = cpu.read_memory(0x7D);

    // 6E42: BPL $007B
    if (!cpu.negative_flag()) cpu.state_.pc += 0x007B;

    // 6E45: LDB #$02
    cpu.state_.b = 0x02;

    // 6E48: TST <$7D
    // TODO: Convert TST <$7D

    // 6E4A: BPL $0086
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0086;

    // 6E4E: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6E50: ADDD <$A5
    cpu.state_.d += 0xA5;

    // 6E52: TST <$63
    // TODO: Convert TST <$63

    // 6E54: BNE $00A6
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00A6;

    // 6E56: SUBD <$A3
    cpu.state_.d -= 0xA3;

    // 6E58: BLE $009B
    // TODO: Convert BLE $009B

    // 6E5A: CMPD #$0010
    // TODO: Convert CMPD #$0010

    // 6E5E: BLE $0099
    // TODO: Convert BLE $0099

    // 6E60: LDD #$0010
    cpu.state_.d = 0x0010;

    // 6E63: BRA $00A4
    cpu.state_.pc += 0x00A4;

    // 6E65: CMPD #$FFF0
    // TODO: Convert CMPD #$FFF0

    // 6E69: BGE $00A4
    // TODO: Convert BGE $00A4

    // 6E6B: LDD #$FFF0
    cpu.state_.d = 0xFFF0;

    // 6E6E: BRA $00BE
    cpu.state_.pc += 0x00BE;

    // 6E70: SUBD <$A3
    cpu.state_.d -= 0xA3;

    // 6E72: BLE $00B5
    // TODO: Convert BLE $00B5

    // 6E74: CMPD #$0032
    // TODO: Convert CMPD #$0032

    // 6E78: BLE $00B3
    // TODO: Convert BLE $00B3

    // 6E7A: LDD #$0032
    cpu.state_.d = 0x0032;

    // 6E7D: BRA $00BE
    cpu.state_.pc += 0x00BE;

    // 6E7F: CMPD #$FFCE
    // TODO: Convert CMPD #$FFCE

    // 6E83: BGE $00BE
    // TODO: Convert BGE $00BE

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

    // 6E9B: BEQ $00D6
    if (cpu.zero_flag()) cpu.state_.pc += 0x00D6;

    // 6E9D: JSR $CE24
    cpu.call_function(0xCE24);

    // 6EA2: LDX $4B32
    cpu.state_.x = cpu.read_memory_word(0x4B32);

    // 6EA5: BNE $00E0
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00E0;

    // 6EA7: LDX #$4900
    cpu.state_.x = 0x4900;

    // 6EAA: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 6EAC: CMPA #$01
    cpu.compare_a(0x01);

    // 6EAE: BNE $00EF
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00EF;

    // 6EB0: LDA $6,X
    // TODO: Fix comma operator: LDA $6,X

    // 6EB2: BNE $00EF
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00EF;

    // 6EB4: STX <$64
    cpu.write_memory(0x64, cpu.state_.x);

    // 6EB6: JMP $6EF7
    cpu.state_.pc = 0x6EF7;

    // 6EB9: LDA $4B3C
    cpu.state_.a = cpu.read_memory(0x4B3C);

    // 6EBC: BLE $00F9
    // TODO: Convert BLE $00F9

    // 6EBE: LDA #$09
    cpu.state_.a = 0x09;

    // 6EC0: STA $4B3C
    cpu.write_memory(0x4B3C, cpu.state_.a);

    // 6EC3: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 6EC6: CMPX #$494B
    cpu.compare_x(0x494B);

    // 6EC9: BCS $00E0
    if (cpu.carry_flag()) cpu.state_.pc += 0x00E0;

    // 6ECB: LDD #$0000
    cpu.state_.d = 0x0000;

    // 6ECE: STD $4B32
    cpu.write_memory(0x4B32, cpu.state_.d);

    // 6ED1: LDA $5080
    cpu.state_.a = cpu.read_memory(0x5080);

    // 6ED4: BMI $0111
    if (cpu.negative_flag()) cpu.state_.pc += 0x0111;

    // 6ED6: LDB $5084
    cpu.state_.b = cpu.read_memory(0x5084);

    // 6ED9: BRA $0116
    cpu.state_.pc += 0x0116;

    // 6EDB: LDB #$7F
    cpu.state_.b = 0x7F;

    // 6EDD: SUBB $5084
    cpu.state_.b -= 0x5084;

    // 6EE0: STB $486D
    cpu.write_memory(0x486D, cpu.state_.b);

    // 6EE3: LDA $5080
    cpu.state_.a = cpu.read_memory(0x5080);

    // 6EE6: BMI $0123
    if (cpu.negative_flag()) cpu.state_.pc += 0x0123;

    // 6EE8: LDB $5082
    cpu.state_.b = cpu.read_memory(0x5082);

    // 6EEB: BRA $0128
    cpu.state_.pc += 0x0128;

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

    // 6F14: BLE $016F
    // TODO: Convert BLE $016F

    // 6F16: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // 6F19: ASL $5001
    // TODO: Convert ASL $5001

    // 6F1C: ROL $5000
    // TODO: Convert ROL $5000

    // 6F1F: BVS $018A
    // TODO: Convert BVS $018A

    // 6F23: BVC $015F
    // TODO: Convert BVC $015F

    // 6F27: BRA $018A
    cpu.state_.pc += 0x018A;

    // 6F29: ASL $5005
    // TODO: Convert ASL $5005

    // 6F2C: ROL $5004
    // TODO: Convert ROL $5004

    // 6F2F: BVC $014F
    // TODO: Convert BVC $014F

    // 6F31: ROR $5004
    // TODO: Convert ROR $5004

    // 6F34: ROR $5005
    // TODO: Convert ROR $5005

    // 6F37: BRA $018A
    cpu.state_.pc += 0x018A;

    // 6F39: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // 6F3C: ORB #$01
    cpu.state_.b |= 0x01;

    // 6F40: BVC $017C
    // TODO: Convert BVC $017C

    // 6F44: BRA $018A
    cpu.state_.pc += 0x018A;

    // 6F46: ASL $5005
    // TODO: Convert ASL $5005

    // 6F49: ROL $5004
    // TODO: Convert ROL $5004

    // 6F4C: BVC $0174
    // TODO: Convert BVC $0174

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

    // 6F75: BVC $01B3
    // TODO: Convert BVC $01B3

    // 6F77: INC <$A7
    // TODO: Convert INC <$A7

    // 6F79: BVC $01B3
    // TODO: Convert BVC $01B3

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

    // 6F8B: BPL $01C4
    if (!cpu.negative_flag()) cpu.state_.pc += 0x01C4;

    // 6F90: TST <$7D
    // TODO: Convert TST <$7D

    // 6F92: BGE $01CE
    // TODO: Convert BGE $01CE

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

    // 6FAF: BPL $01E8
    if (!cpu.negative_flag()) cpu.state_.pc += 0x01E8;

    // 6FB4: TST <$7F
    // TODO: Convert TST <$7F

    // 6FB6: BPL $01F2
    if (!cpu.negative_flag()) cpu.state_.pc += 0x01F2;

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

    // 6FC9: BLE $0201
    // TODO: Convert BLE $0201

}

} // namespace StarWars