#include "cpu_6809.h"

namespace StarWars {

void routine_6da5_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_6da5.md
    // Address: 0x6DA5

    // 6DA5: LDD <$89
    cpu.state_.d = cpu.read_memory_word(0x89);

    // 6DA7: ADDD #$0080
    cpu.state_.d += 0x0080;

    // 6DAA: STD <$89
    cpu.write_memory(0x89, cpu.state_.d);

    // 6DAC: LDD $4B26
    cpu.state_.d = cpu.read_memory_word(0x4B26);

    // 6DAF: ADDD #$0080
    cpu.state_.d += 0x0080;

    // 6DB2: STD $4B26
    cpu.write_memory(0x4B26, cpu.state_.d);

    // 6DB6: LDD $4B24
    cpu.state_.d = cpu.read_memory_word(0x4B24);

    // 6DB9: ADDD #$FF80
    cpu.state_.d += 0xFF80;

    // 6DBC: STD $4B24
    cpu.write_memory(0x4B24, cpu.state_.d);

    // 6DC0: LDD $4B26
    cpu.state_.d = cpu.read_memory_word(0x4B26);

    // 6DC3: ADDD #$0080
    cpu.state_.d += 0x0080;

    // 6DC6: STD $4B26
    cpu.write_memory(0x4B26, cpu.state_.d);

    // 6DCA: LDD <$89
    cpu.state_.d = cpu.read_memory_word(0x89);

    // 6DCC: ADDD #$0080
    cpu.state_.d += 0x0080;

    // 6DCF: STD <$89
    cpu.write_memory(0x89, cpu.state_.d);

    // 6DD2: LDA <$63
    cpu.state_.a = cpu.read_memory(0x63);

    // 6DD4: BEQ $004B
    if (cpu.zero_flag()) cpu.state_.pc = 0x6E21;

    // 6DD6: BLE $003A
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x6E12;

    // 6DD8: DEC <$63
    // TODO: Convert DEC <$63

    // 6DDA: LDD #$04FF
    cpu.state_.d = 0x04FF;

    // 6DDD: BRA $003F
    cpu.state_.pc = 0x6E1E;

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

    // 6DFC: BEQ $0073
    if (cpu.zero_flag()) cpu.state_.pc = 0x6E71;

    // 6DFE: BLE $0062
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x6E62;

    // 6E00: DEC <$63
    // TODO: Convert DEC <$63

    // 6E02: LDD #$04FF
    cpu.state_.d = 0x04FF;

    // 6E05: BRA $0067
    cpu.state_.pc = 0x6E6E;

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

    // 6E24: BEQ $0089
    if (cpu.zero_flag()) cpu.state_.pc = 0x6EAF;

    // 6E26: BLE $0086
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x6EAE;

    // 6E29: BRA $0087
    cpu.state_.pc = 0x6EB2;

    // 6E2C: STA <$63
    cpu.write_memory(0x63, cpu.state_.a);

    // 6E2E: LDA <$63
    cpu.state_.a = cpu.read_memory(0x63);

    // 6E30: BPL $008E
    if (!cpu.negative_flag()) cpu.state_.pc = 0x6EC0;

    // 6E33: LDB #$20
    cpu.state_.b = 0x20;

    // 6E36: TST <$63
    // TODO: Convert TST <$63

    // 6E38: BPL $0099
    if (!cpu.negative_flag()) cpu.state_.pc = 0x6ED3;

    // 6E3C: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6E3E: STD <$A5
    cpu.write_memory(0xA5, cpu.state_.d);

    // 6E40: LDA <$7D
    cpu.state_.a = cpu.read_memory(0x7D);

    // 6E42: BPL $00A0
    if (!cpu.negative_flag()) cpu.state_.pc = 0x6EE4;

    // 6E45: LDB #$02
    cpu.state_.b = 0x02;

    // 6E48: TST <$7D
    // TODO: Convert TST <$7D

    // 6E4A: BPL $00AB
    if (!cpu.negative_flag()) cpu.state_.pc = 0x6EF7;

    // 6E4E: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6E50: ADDD <$A5
    cpu.state_.d += 0xA5;

    // 6E52: TST <$63
    // TODO: Convert TST <$63

    // 6E54: BNE $00CB
    if (!cpu.zero_flag()) cpu.state_.pc = 0x6F21;

    // 6E56: SUBD <$A3
    cpu.state_.d -= 0xA3;

    // 6E58: BLE $00C0
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x6F1A;

    // 6E5A: CMPD #$0010
    // TODO: Convert CMPD #$0010

    // 6E5E: BLE $00BE
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x6F1E;

    // 6E60: LDD #$0010
    cpu.state_.d = 0x0010;

    // 6E63: BRA $00C9
    cpu.state_.pc = 0x6F2E;

    // 6E65: CMPD #$FFF0
    // TODO: Convert CMPD #$FFF0

    // 6E69: BGE $00C9
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x6F34;

    // 6E6B: LDD #$FFF0
    cpu.state_.d = 0xFFF0;

    // 6E6E: BRA $00E3
    cpu.state_.pc = 0x6F53;

    // 6E70: SUBD <$A3
    cpu.state_.d -= 0xA3;

    // 6E72: BLE $00DA
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x6F4E;

    // 6E74: CMPD #$0032
    // TODO: Convert CMPD #$0032

    // 6E78: BLE $00D8
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x6F52;

    // 6E7A: LDD #$0032
    cpu.state_.d = 0x0032;

    // 6E7D: BRA $00E3
    cpu.state_.pc = 0x6F62;

    // 6E7F: CMPD #$FFCE
    // TODO: Convert CMPD #$FFCE

    // 6E83: BGE $00E3
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x6F68;

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

    // 6E9B: BEQ $00FB
    if (cpu.zero_flag()) cpu.state_.pc = 0x6F98;

    // 6E9D: JSR $CE24
    cpu.call_function(0xCE24);

    // 6EA2: LDX $4B32
    cpu.state_.x = cpu.read_memory_word(0x4B32);

    // 6EA5: BNE $0105
    if (!cpu.zero_flag()) cpu.state_.pc = 0x6FAC;

    // 6EA7: LDX #$4900
    cpu.state_.x = 0x4900;

    // 6EAA: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 6EAC: CMPA #$01
    cpu.compare_a(0x01);

    // 6EAE: BNE $0114
    if (!cpu.zero_flag()) cpu.state_.pc = 0x6FC4;

    // 6EB0: LDA $6,X
    // TODO: Fix comma operator: LDA $6,X

    // 6EB2: BNE $0114
    if (!cpu.zero_flag()) cpu.state_.pc = 0x6FC8;

    // 6EB4: STX <$64
    cpu.write_memory(0x64, cpu.state_.x);

    // 6EB6: JMP $6EF7
    cpu.state_.pc = 0x6EF7;

    // 6EB9: LDA $4B3C
    cpu.state_.a = cpu.read_memory(0x4B3C);

    // 6EBC: BLE $011E
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x6FDC;

    // 6EBE: LDA #$09
    cpu.state_.a = 0x09;

    // 6EC0: STA $4B3C
    cpu.write_memory(0x4B3C, cpu.state_.a);

    // 6EC3: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 6EC6: CMPX #$494B
    cpu.compare_x(0x494B);

    // 6EC9: BCS $0105
    if (cpu.carry_flag()) cpu.state_.pc = 0x6FD0;

    // 6ECB: LDD #$0000
    cpu.state_.d = 0x0000;

    // 6ECE: STD $4B32
    cpu.write_memory(0x4B32, cpu.state_.d);

    // 6ED1: LDA $5080
    cpu.state_.a = cpu.read_memory(0x5080);

    // 6ED4: BMI $0136
    if (cpu.negative_flag()) cpu.state_.pc = 0x700C;

    // 6ED6: LDB $5084
    cpu.state_.b = cpu.read_memory(0x5084);

    // 6ED9: BRA $013B
    cpu.state_.pc = 0x7016;

    // 6EDB: LDB #$7F
    cpu.state_.b = 0x7F;

    // 6EDD: SUBB $5084
    cpu.state_.b -= 0x5084;

    // 6EE0: STB $486D
    cpu.write_memory(0x486D, cpu.state_.b);

    // 6EE3: LDA $5080
    cpu.state_.a = cpu.read_memory(0x5080);

    // 6EE6: BMI $0148
    if (cpu.negative_flag()) cpu.state_.pc = 0x7030;

    // 6EE8: LDB $5082
    cpu.state_.b = cpu.read_memory(0x5082);

    // 6EEB: BRA $014D
    cpu.state_.pc = 0x703A;

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

    // 6F14: BLE $0194
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x70AA;

    // 6F16: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // 6F19: ASL $5001
    // TODO: Convert ASL $5001

    // 6F1C: ROL $5000
    // TODO: Convert ROL $5000

    // 6F1F: BVS $01AF
    // TODO: Convert BVS $01AF

    // 6F23: BVC $0184
    // TODO: Convert BVC $0184

    // 6F27: BRA $01AF
    cpu.state_.pc = 0x70D8;

    // 6F29: ASL $5005
    // TODO: Convert ASL $5005

    // 6F2C: ROL $5004
    // TODO: Convert ROL $5004

    // 6F2F: BVC $0174
    // TODO: Convert BVC $0174

    // 6F31: ROR $5004
    // TODO: Convert ROR $5004

    // 6F34: ROR $5005
    // TODO: Convert ROR $5005

    // 6F37: BRA $01AF
    cpu.state_.pc = 0x70E8;

    // 6F39: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // 6F3C: ORB #$01
    cpu.state_.b |= 0x01;

    // 6F40: BVC $01A1
    // TODO: Convert BVC $01A1

    // 6F44: BRA $01AF
    cpu.state_.pc = 0x70F5;

    // 6F46: ASL $5005
    // TODO: Convert ASL $5005

    // 6F49: ROL $5004
    // TODO: Convert ROL $5004

    // 6F4C: BVC $0199
    // TODO: Convert BVC $0199

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

    // 6F75: BVC $01D8
    // TODO: Convert BVC $01D8

    // 6F77: INC <$A7
    // TODO: Convert INC <$A7

    // 6F79: BVC $01D8
    // TODO: Convert BVC $01D8

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

    // 6F8B: BPL $01E9
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7176;

    // 6F90: TST <$7D
    // TODO: Convert TST <$7D

    // 6F92: BGE $01F3
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x7187;

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

    // 6FA4: STD >$0000
    cpu.write_memory(0x0000, cpu.state_.d);

}

} // namespace StarWars