#include "cpu_6809.h"

namespace StarWars {

void routine_d971_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_d971.md
    // Address: 0xD971

    // D971: LDU #$4A66
    cpu.state_.u = 0x4A66;

    // D974: CMPA ,U
    // TODO: Complex indexed addressing: ,U

    // D976: BNE $000B
    if (!cpu.zero_flag()) cpu.state_.pc += 0x000B;

    // D978: LDA #$00
    cpu.state_.a = 0x00;

    // D97A: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // D97C: LEAU $5,U
    // TODO: Fix comma operator: LEAU $5,U

    // D97E: CMPU $4ADD
    // TODO: Convert CMPU $4ADD

    // D982: BCS $0003
    if (cpu.carry_flag()) cpu.state_.pc += 0x0003;

    // D985: LDU #$4A66
    cpu.state_.u = 0x4A66;

    // D988: CMPU $4ADD
    // TODO: Convert CMPU $4ADD

    // D98C: BCC $006A
    if (!cpu.carry_flag()) cpu.state_.pc += 0x006A;

    // D98E: LDD #$7200
    cpu.state_.d = 0x7200;

    // D991: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D993: LDA ,U+
    // TODO: Complex indexed addressing: ,U+

    // D995: BEQ $0062
    if (cpu.zero_flag()) cpu.state_.pc += 0x0062;

    // D997: STA $48AE
    cpu.write_memory(0x48AE, cpu.state_.a);

    // D99A: LDD #$0198
    cpu.state_.d = 0x0198;

    // D99D: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D99F: LDD #$0000
    cpu.state_.d = 0x0000;

    // D9A2: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D9A4: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // D9A6: LDA #$71
    cpu.state_.a = 0x71;

    // D9A8: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D9AB: ADDB #$10
    cpu.state_.b += 0x10;

    // D9AD: LDA #$62
    cpu.state_.a = 0x62;

    // D9AF: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D9B1: LDX #$E99E
    cpu.state_.x = 0xE99E;

    // D9B4: LDB $48AE
    cpu.state_.b = cpu.read_memory(0x48AE);

    // D9B9: LDD #$1DD0
    cpu.state_.d = 0x1DD0;

    // D9BC: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D9BE: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // D9C0: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // D9C2: ORA #$00
    cpu.state_.a |= 0x00;

    // D9C4: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D9C6: JSR $E821
    cpu.call_function(0xE821);

    // D9C9: LDD #$7200
    cpu.state_.d = 0x7200;

    // D9CC: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D9CE: LDD #$8040
    cpu.state_.d = 0x8040;

    // D9D1: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D9D3: LEAU $4,U
    // TODO: Fix comma operator: LEAU $4,U

    // D9D5: CMPU $4ADD
    // TODO: Convert CMPU $4ADD

    // D9D9: BCS $0022
    if (cpu.carry_flag()) cpu.state_.pc += 0x0022;

    // D9DC: LDD #$0000
    cpu.state_.d = 0x0000;

    // D9DF: STD $4AE4
    cpu.write_memory(0x4AE4, cpu.state_.d);

    // D9E2: LDD #$6018
    cpu.state_.d = 0x6018;

    // D9E5: STD $4AE6
    cpu.write_memory(0x4AE6, cpu.state_.d);

    // D9E8: LDD #$4A66
    cpu.state_.d = 0x4A66;

    // D9EB: STD $4ADD
    cpu.write_memory(0x4ADD, cpu.state_.d);

    // D9EE: LDD $DB2F
    cpu.state_.d = cpu.read_memory_word(0xDB2F);

    // D9F1: STD $4AE2
    cpu.write_memory(0x4AE2, cpu.state_.d);

    // D9F4: LDA #$51
    cpu.state_.a = 0x51;

    // D9F6: STA $4ADF
    cpu.write_memory(0x4ADF, cpu.state_.a);

    // D9FA: LDD $4AE4
    cpu.state_.d = cpu.read_memory_word(0x4AE4);

    // D9FD: ADDD #$0001
    cpu.state_.d += 0x0001;

    // DA00: STD $4AE4
    cpu.write_memory(0x4AE4, cpu.state_.d);

    // DA03: CMPD #$00F8
    // TODO: Convert CMPD #$00F8

    // DA07: LBCC $0123
    // TODO: Convert LBCC $0123

    // DA0B: CMPD #$0040
    // TODO: Convert CMPD #$0040

    // DA0F: BCC $00AD
    if (!cpu.carry_flag()) cpu.state_.pc += 0x00AD;

    // DA11: LDD $4AE6
    cpu.state_.d = cpu.read_memory_word(0x4AE6);

    // DA14: ADDB #$03
    cpu.state_.b += 0x03;

    // DA16: STD $4AE6
    cpu.write_memory(0x4AE6, cpu.state_.d);

    // DA19: LDD #$0040
    cpu.state_.d = 0x0040;

    // DA1C: BRA $00B9
    cpu.state_.pc += 0x00B9;

    // DA1E: LDD $4AE4
    cpu.state_.d = cpu.read_memory_word(0x4AE4);

    // DA22: ADDB #$18
    cpu.state_.b += 0x18;

    // DA24: STD $4AE6
    cpu.write_memory(0x4AE6, cpu.state_.d);

    // DA27: LDD $4AE4
    cpu.state_.d = cpu.read_memory_word(0x4AE4);

    // DA2A: ORA #$73
    cpu.state_.a |= 0x73;

    // DA2C: STD $4AE8
    cpu.write_memory(0x4AE8, cpu.state_.d);

    // DA2F: LDD $4AE6
    cpu.state_.d = cpu.read_memory_word(0x4AE6);

    // DA32: ORA #$61
    cpu.state_.a |= 0x61;

    // DA34: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // DA36: LDD #$0198
    cpu.state_.d = 0x0198;

    // DA39: STD ,Y
    // TODO: Handle indexed addressing: STD ,Y

    // DA3B: STD $8,Y
    // TODO: Handle indexed addressing: STD $8,Y

    // DA3D: STD $10,Y
    // TODO: Handle indexed addressing: STD $10,Y

    // DA40: STD $18,Y
    // TODO: Handle indexed addressing: STD $18,Y

    // DA43: STD $20,Y
    // TODO: Handle indexed addressing: STD $20,Y

    // DA46: STD $28,Y
    // TODO: Handle indexed addressing: STD $28,Y

    // DA49: LDD #$0000
    cpu.state_.d = 0x0000;

    // DA4C: STD $2,Y
    // TODO: Handle indexed addressing: STD $2,Y

    // DA4E: STD $A,Y
    // TODO: Handle indexed addressing: STD $A,Y

    // DA50: STD $12,Y
    // TODO: Handle indexed addressing: STD $12,Y

    // DA53: STD $1A,Y
    // TODO: Handle indexed addressing: STD $1A,Y

    // DA56: STD $22,Y
    // TODO: Handle indexed addressing: STD $22,Y

    // DA59: STD $2A,Y
    // TODO: Handle indexed addressing: STD $2A,Y

    // DA5C: LDD $4AE8
    cpu.state_.d = cpu.read_memory_word(0x4AE8);

    // DA5F: STD $4,Y
    // TODO: Handle indexed addressing: STD $4,Y

    // DA61: STD $C,Y
    // TODO: Handle indexed addressing: STD $C,Y

    // DA63: STD $14,Y
    // TODO: Handle indexed addressing: STD $14,Y

    // DA66: STD $1C,Y
    // TODO: Handle indexed addressing: STD $1C,Y

    // DA69: STD $24,Y
    // TODO: Handle indexed addressing: STD $24,Y

    // DA6C: STD $2C,Y
    // TODO: Handle indexed addressing: STD $2C,Y

    // DA6F: LDD #$B400
    cpu.state_.d = 0xB400;

    // DA72: STD $6,Y
    // TODO: Handle indexed addressing: STD $6,Y

    // DA74: LDD #$B434
    cpu.state_.d = 0xB434;

    // DA77: STD $E,Y
    // TODO: Handle indexed addressing: STD $E,Y

    // DA79: LDD #$B458
    cpu.state_.d = 0xB458;

    // DA7C: STD $16,Y
    // TODO: Handle indexed addressing: STD $16,Y

    // DA7F: LDD #$B488
    cpu.state_.d = 0xB488;

    // DA82: STD $1E,Y
    // TODO: Handle indexed addressing: STD $1E,Y

    // DA85: LDD #$B4AE
    cpu.state_.d = 0xB4AE;

    // DA88: STD $26,Y
    // TODO: Handle indexed addressing: STD $26,Y

    // DA8B: LDD #$B4D2
    cpu.state_.d = 0xB4D2;

    // DA8E: STD $2E,Y
    // TODO: Handle indexed addressing: STD $2E,Y

    // DA91: LEAY $30,Y
    // TODO: Fix comma operator: LEAY $30,Y

    // DA94: LDX #$4A66
    cpu.state_.x = 0x4A66;

    // DA97: CMPX $4ADD
    cpu.compare_x(cpu.read_memory_word(0x4ADD));

    // DA9A: BCC $0184
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0184;

    // DA9C: LDD $4AE4
    cpu.state_.d = cpu.read_memory_word(0x4AE4);

    // DA9F: CMPD #$00E0
    // TODO: Convert CMPD #$00E0

    // DAA3: BCC $0142
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0142;

    // DAA5: CMPD #$0040
    // TODO: Convert CMPD #$0040

    // DAA9: BCS $0140
    if (cpu.carry_flag()) cpu.state_.pc += 0x0140;

    // DAAB: LDD $1,X
    // TODO: Fix comma operator: LDD $1,X

    // DAAD: ADDD $3,X
    // TODO: Fix comma operator: ADDD $3,X

    // DAAF: STD $1,X
    // TODO: Handle indexed addressing: STD $1,X

    // DAB1: BRA $017D
    cpu.state_.pc += 0x017D;

    // DAB3: CMPD #$0160
    // TODO: Convert CMPD #$0160

    // DAB7: BCC $0150
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0150;

    // DAB9: LDD #$0400
    cpu.state_.d = 0x0400;

    // DABC: STD $4A69
    cpu.write_memory(0x4A69, cpu.state_.d);

    // DABF: BRA $017D
    cpu.state_.pc += 0x017D;

    // DAC1: LDD $1,X
    // TODO: Fix comma operator: LDD $1,X

    // DAC3: ADDD $3,X
    // TODO: Fix comma operator: ADDD $3,X

    // DAC5: STD $1,X
    // TODO: Handle indexed addressing: STD $1,X

    // DAC7: CMPD #$F000
    // TODO: Convert CMPD #$F000

    // DACB: BCS $017D
    if (cpu.carry_flag()) cpu.state_.pc += 0x017D;

    // DACD: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // DAD0: LDU #$4A66
    cpu.state_.u = 0x4A66;

    // DAD3: CMPA ,U
    // TODO: Complex indexed addressing: ,U

    // DAD5: BNE $016E
    if (!cpu.zero_flag()) cpu.state_.pc += 0x016E;

    // DAD7: LDD #$0400
    cpu.state_.d = 0x0400;

    // DADA: STD $3,U
    // TODO: Handle indexed addressing: STD $3,U

    // DADC: LDU $4ADD
    cpu.state_.u = cpu.read_memory_word(0x4ADD);

    // DADF: LEAU $5,U
    // TODO: Fix comma operator: LEAU $5,U

    // DAE1: CMPU $4ADD
    // TODO: Convert CMPU $4ADD

    // DAE5: BCS $0162
    if (cpu.carry_flag()) cpu.state_.pc += 0x0162;

    // DAE7: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // DAE9: JSR $D971
    cpu.call_function(0xD971);

    // DAEC: LEAX -$5,X
    // TODO: Fix comma operator: LEAX -$5,X

    // DAEE: LEAX $5,X
    // TODO: Fix comma operator: LEAX $5,X

    // DAF0: CMPX $4ADD
    cpu.compare_x(cpu.read_memory_word(0x4ADD));

    // DAF3: BCS $012B
    if (cpu.carry_flag()) cpu.state_.pc += 0x012B;

    // DAF5: LDD $4AE4
    cpu.state_.d = cpu.read_memory_word(0x4AE4);

    // DAF8: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // DAFC: BCS $0192
    if (cpu.carry_flag()) cpu.state_.pc += 0x0192;

    // DAFE: LDA #$07
    cpu.state_.a = 0x07;

    // DB00: STA $4841
    cpu.write_memory(0x4841, cpu.state_.a);

    // DB03: CMPD $4AE2
    // TODO: Convert CMPD $4AE2

    // DB07: BCS $01BD
    if (cpu.carry_flag()) cpu.state_.pc += 0x01BD;

    // DB09: LDA $4ADF
    cpu.state_.a = cpu.read_memory(0x4ADF);

    // DB0C: JSR $D95E
    cpu.call_function(0xD95E);

    // DB0F: LDA $4ADF
    cpu.state_.a = cpu.read_memory(0x4ADF);

    // DB13: CMPA #$59
    cpu.compare_a(0x59);

    // DB15: BCS $01AE
    if (cpu.carry_flag()) cpu.state_.pc += 0x01AE;

    // DB17: LDD #$FFFF
    cpu.state_.d = 0xFFFF;

    // DB1A: STD $4AE2
    cpu.write_memory(0x4AE2, cpu.state_.d);

    // DB1D: BRA $01BD
    cpu.state_.pc += 0x01BD;

    // DB1F: STA $4ADF
    cpu.write_memory(0x4ADF, cpu.state_.a);

    // DB22: LDX #$DA8D
    cpu.state_.x = 0xDA8D;

    // DB25: TFR A,B
    cpu.state_.b = cpu.state_.a;

    // DB29: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // DB2B: STD $4AE2
    cpu.write_memory(0x4AE2, cpu.state_.d);

    // DB2F: NEG <$41
    // TODO: Convert NEG <$41

    // DB31: NEG <$50
    // TODO: Convert NEG <$50

    // DB33: NEG <$60
    // TODO: Convert NEG <$60

    // DB35: NEG <$70
    // TODO: Convert NEG <$70

    // DB37: NEG <$80
    // TODO: Convert NEG <$80

    // DB39: NEG <$90
    // TODO: Convert NEG <$90

    // DB3B: NEG <$A0
    // TODO: Convert NEG <$A0

    // DB3D: NEG <$B8
    // TODO: Convert NEG <$B8

    // DB43: BRA $022B
    cpu.state_.pc += 0x022B;

    // DB47: ADDD <$40
    cpu.state_.d += 0x40;

    // DB49: BRA $020B
    cpu.state_.pc += 0x020B;

    // DB4C: XANDCC #$33
    // TODO: Convert XANDCC #$33

    // DB4E: BRA $022B
    cpu.state_.pc += 0x022B;

    // DB58: BRA $0235
    cpu.state_.pc += 0x0235;

    // DB5C: BGT $020D
    // TODO: Convert BGT $020D

    // DB61: BRA $0233
    cpu.state_.pc += 0x0233;

    // DB67: BGE $0241
    // TODO: Convert BGE $0241

    // DB6B: LDX $1,U
    // TODO: Fix comma operator: LDX $1,U

    // DB6F: BRA $0252
    cpu.state_.pc += 0x0252;

}

} // namespace StarWars