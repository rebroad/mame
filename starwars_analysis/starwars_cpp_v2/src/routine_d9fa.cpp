#include "cpu_6809.h"

namespace StarWars {

void routine_d9fa_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_d9fa.md
    // Address: 0xD9FA

    // D9FA: LDD $4AE4
    cpu.state_.d = cpu.read_memory_word(0x4AE4);

    // D9FD: ADDD #$0001
    cpu.state_.d += 0x0001;

    // DA00: STD $4AE4
    cpu.write_memory(0x4AE4, cpu.state_.d);

    // DA03: CMPD #$00F8
    // TODO: Convert CMPD #$00F8

    // DA07: LBCC $009A
    // TODO: Convert LBCC $009A

    // DA0B: CMPD #$0040
    // TODO: Convert CMPD #$0040

    // DA0F: BCC $0024
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0024;

    // DA11: LDD $4AE6
    cpu.state_.d = cpu.read_memory_word(0x4AE6);

    // DA14: ADDB #$03
    cpu.state_.b += 0x03;

    // DA16: STD $4AE6
    cpu.write_memory(0x4AE6, cpu.state_.d);

    // DA19: LDD #$0040
    cpu.state_.d = 0x0040;

    // DA1C: BRA $0030
    cpu.state_.pc += 0x0030;

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

    // DA9A: BCC $00FB
    if (!cpu.carry_flag()) cpu.state_.pc += 0x00FB;

    // DA9C: LDD $4AE4
    cpu.state_.d = cpu.read_memory_word(0x4AE4);

    // DA9F: CMPD #$00E0
    // TODO: Convert CMPD #$00E0

    // DAA3: BCC $00B9
    if (!cpu.carry_flag()) cpu.state_.pc += 0x00B9;

    // DAA5: CMPD #$0040
    // TODO: Convert CMPD #$0040

    // DAA9: BCS $00B7
    if (cpu.carry_flag()) cpu.state_.pc += 0x00B7;

    // DAAB: LDD $1,X
    // TODO: Fix comma operator: LDD $1,X

    // DAAD: ADDD $3,X
    // TODO: Fix comma operator: ADDD $3,X

    // DAAF: STD $1,X
    // TODO: Handle indexed addressing: STD $1,X

    // DAB1: BRA $00F4
    cpu.state_.pc += 0x00F4;

    // DAB3: CMPD #$0160
    // TODO: Convert CMPD #$0160

    // DAB7: BCC $00C7
    if (!cpu.carry_flag()) cpu.state_.pc += 0x00C7;

    // DAB9: LDD #$0400
    cpu.state_.d = 0x0400;

    // DABC: STD $4A69
    cpu.write_memory(0x4A69, cpu.state_.d);

    // DABF: BRA $00F4
    cpu.state_.pc += 0x00F4;

    // DAC1: LDD $1,X
    // TODO: Fix comma operator: LDD $1,X

    // DAC3: ADDD $3,X
    // TODO: Fix comma operator: ADDD $3,X

    // DAC5: STD $1,X
    // TODO: Handle indexed addressing: STD $1,X

    // DAC7: CMPD #$F000
    // TODO: Convert CMPD #$F000

    // DACB: BCS $00F4
    if (cpu.carry_flag()) cpu.state_.pc += 0x00F4;

    // DACD: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // DAD0: LDU #$4A66
    cpu.state_.u = 0x4A66;

    // DAD3: CMPA ,U
    // TODO: Complex indexed addressing: ,U

    // DAD5: BNE $00E5
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00E5;

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

    // DAE5: BCS $00D9
    if (cpu.carry_flag()) cpu.state_.pc += 0x00D9;

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

    // DAF3: BCS $00A2
    if (cpu.carry_flag()) cpu.state_.pc += 0x00A2;

    // DAF5: LDD $4AE4
    cpu.state_.d = cpu.read_memory_word(0x4AE4);

    // DAF8: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // DAFC: BCS $0109
    if (cpu.carry_flag()) cpu.state_.pc += 0x0109;

    // DAFE: LDA #$07
    cpu.state_.a = 0x07;

    // DB00: STA $4841
    cpu.write_memory(0x4841, cpu.state_.a);

    // DB03: CMPD $4AE2
    // TODO: Convert CMPD $4AE2

    // DB07: BCS $0134
    if (cpu.carry_flag()) cpu.state_.pc += 0x0134;

    // DB09: LDA $4ADF
    cpu.state_.a = cpu.read_memory(0x4ADF);

    // DB0C: JSR $D95E
    cpu.call_function(0xD95E);

    // DB0F: LDA $4ADF
    cpu.state_.a = cpu.read_memory(0x4ADF);

    // DB13: CMPA #$59
    cpu.compare_a(0x59);

    // DB15: BCS $0125
    if (cpu.carry_flag()) cpu.state_.pc += 0x0125;

    // DB17: LDD #$FFFF
    cpu.state_.d = 0xFFFF;

    // DB1A: STD $4AE2
    cpu.write_memory(0x4AE2, cpu.state_.d);

    // DB1D: BRA $0134
    cpu.state_.pc += 0x0134;

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

    // DB43: BRA $01A2
    cpu.state_.pc += 0x01A2;

    // DB47: ADDD <$40
    cpu.state_.d += 0x40;

    // DB49: BRA $0182
    cpu.state_.pc += 0x0182;

    // DB4C: XANDCC #$33
    // TODO: Convert XANDCC #$33

    // DB4E: BRA $01A2
    cpu.state_.pc += 0x01A2;

    // DB58: BRA $01AC
    cpu.state_.pc += 0x01AC;

    // DB5C: BGT $0184
    // TODO: Convert BGT $0184

    // DB61: BRA $01AA
    cpu.state_.pc += 0x01AA;

    // DB67: BGE $01B8
    // TODO: Convert BGE $01B8

    // DB6B: LDX $1,U
    // TODO: Fix comma operator: LDX $1,U

    // DB6F: BRA $01C9
    cpu.state_.pc += 0x01C9;

    // DB76: BRA $01D0
    cpu.state_.pc += 0x01D0;

    // DB7F: LDX $C,U
    // TODO: Fix comma operator: LDX $C,U

    // DB89: BRA $01E5
    cpu.state_.pc += 0x01E5;

    // DB94: BRA $01F1
    cpu.state_.pc += 0x01F1;

    // DB99: BRA $01F6
    cpu.state_.pc += 0x01F6;

    // DB9F: BRA $01F3
    cpu.state_.pc += 0x01F3;

    // DBA7: LDX $7,U
    // TODO: Fix comma operator: LDX $7,U

    // DBAC: BRA $0203
    cpu.state_.pc += 0x0203;

    // DBB0: SBCB <$49
    // TODO: Convert SBCB <$49

    // DBB7: BRA $0202
    cpu.state_.pc += 0x0202;

    // DBBC: ADDD <$46
    cpu.state_.d += 0x46;

    // DBC1: BRA $0219
    cpu.state_.pc += 0x0219;

    // DBC5: ADCB <$32
    // TODO: Convert ADCB <$32

    // DBC7: BRA $021F
    cpu.state_.pc += 0x021F;

    // DBCD: BRA $0206
    cpu.state_.pc += 0x0206;

    // DBCF: BRA $021A
    cpu.state_.pc += 0x021A;

    // DBD3: LDU #$3120
    cpu.state_.u = 0x3120;

    // DBDA: BRA $0213
    cpu.state_.pc += 0x0213;

    // DBDC: BRA $0234
    cpu.state_.pc += 0x0234;

    // DBE0: ADCB <$32
    // TODO: Convert ADCB <$32

    // DBE2: BRA $022D
    cpu.state_.pc += 0x022D;

    // DBE8: BRA $0221
    cpu.state_.pc += 0x0221;

    // DBEA: BRA $0242
    cpu.state_.pc += 0x0242;

    // DBEE: ADCB <$50
    // TODO: Convert ADCB <$50

    // DBF3: BRA $024F
    cpu.state_.pc += 0x024F;

}

} // namespace StarWars