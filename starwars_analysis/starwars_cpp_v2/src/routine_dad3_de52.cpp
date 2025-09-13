#include "cpu_6809.h"

namespace StarWars {

void routine_dad3_de52_impl(CPU6809& cpu) {
    // Converted from rom_disasm_dad3_de52.md
    // Address: 0xDAD3_DE52

    // DAD3: CMPA ,U
    // TODO: Complex indexed addressing: ,U

    // DAD5: BNE $DADF
    if (!cpu.zero_flag()) cpu.m_pc = 0xDADF;

    // DAD7: LDD #$0400
    cpu.m_d = 0x0400;

    // DADA: STD $3,U
    // TODO: Handle indexed addressing: STD $3,U

    // DADC: LDU $4ADD
    cpu.m_u = cpu.read_memory16(0x4ADD);

    // DADF: LEAU $5,U
    // TODO: Fix comma operator: LEAU $5,U

    // DAE1: CMPU $4ADD
    // TODO: Convert CMPU $4ADD

    // DAE5: BCS $DAD3
    if (cpu.carry_flag()) cpu.m_pc = 0xDAD3;

    // DAE7: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // DAE9: JSR $D971
    cpu.call_function(0xD971);

    // DAEC: LEAX -$5,X
    // TODO: Fix comma operator: LEAX -$5,X

    // DAEE: LEAX $5,X
    // TODO: Fix comma operator: LEAX $5,X

    // DAF0: CMPX $4ADD
    cpu.compare_x(cpu.read_memory16(0x4ADD));

    // DAF3: BCS $DA9C
    if (cpu.carry_flag()) cpu.m_pc = 0xDA9C;

    // DAF5: LDD $4AE4
    cpu.m_d = cpu.read_memory16(0x4AE4);

    // DAF8: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // DAFC: BCS $DB03
    if (cpu.carry_flag()) cpu.m_pc = 0xDB03;

    // DAFE: LDA #$07
    cpu.m_a = 0x07;

    // DB00: STA $4841
    cpu.write_memory(0x4841, cpu.m_a);

    // DB03: CMPD $4AE2
    // TODO: Convert CMPD $4AE2

    // DB07: BCS $DB2E
    if (cpu.carry_flag()) cpu.m_pc = 0xDB2E;

    // DB09: LDA $4ADF
    cpu.m_a = cpu.read_memory(0x4ADF);

    // DB0C: JSR $D95E
    cpu.call_function(0xD95E);

    // DB0F: LDA $4ADF
    cpu.m_a = cpu.read_memory(0x4ADF);

    // DB13: CMPA #$59
    cpu.compare_a(0x59);

    // DB15: BCS $DB1F
    if (cpu.carry_flag()) cpu.m_pc = 0xDB1F;

    // DB17: LDD #$FFFF
    cpu.m_d = 0xFFFF;

    // DB1A: STD $4AE2
    cpu.write_memory16(0x4AE2, cpu.m_d);

    // DB1D: BRA $DB2E
    goto label_DB2E;

    // DB1F: STA $4ADF
    cpu.write_memory(0x4ADF, cpu.m_a);

    // DB22: LDX #$DA8D
    cpu.m_x = 0xDA8D;

    // DB25: TFR A,B
    cpu.m_b = cpu.m_a;

    // DB29: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // DB2B: STD $4AE2
    cpu.write_memory16(0x4AE2, cpu.m_d);

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

    // DB43: BRA $DB9C
    goto label_DB9C;

    // DB47: ADDD <$40
    cpu.m_d += 0x40;

    // DB49: BRA $DB7C
    goto label_DB7C;

    // DB4C: XANDCC #$33
    // TODO: Convert XANDCC #$33

    // DB4E: BRA $DB9C
    goto label_DB9C;

    // DB58: BRA $DBA6
    goto label_DBA6;

    // DB5C: BGT $DB7E
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDB7E;

    // DB61: BRA $DBA4
    goto label_DBA4;

    // DB67: BGE $DBB2
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDBB2;

    // DB6B: LDX $1,U
    // TODO: Fix comma operator: LDX $1,U

    // DB6F: BRA $DBC3
    goto label_DBC3;

    // DB76: BRA $DBCA
    goto label_DBCA;

    // DB7F: LDX $C,U
    // TODO: Fix comma operator: LDX $C,U

    // DB89: BRA $DBDF
    goto label_DBDF;

    // DB94: BRA $DBEB
    goto label_DBEB;

    // DB99: BRA $DBF0
    goto label_DBF0;

    // DB9F: BRA $DBED
    goto label_DBED;

    // DBA7: LDX $7,U
    // TODO: Fix comma operator: LDX $7,U

    // DBAC: BRA $DBFD
    goto label_DBFD;

    // DBB0: SBCB <$49
    // TODO: Convert SBCB <$49

    // DBB7: BRA $DBFC
    goto label_DBFC;

    // DBBC: ADDD <$46
    cpu.m_d += 0x46;

    // DBC1: BRA $DC13
    goto label_DC13;

    // DBC5: ADCB <$32
    // TODO: Convert ADCB <$32

    // DBC7: BRA $DC19
    goto label_DC19;

    // DBCD: BRA $DC00
    goto label_DC00;

    // DBCF: BRA $DC14
    goto label_DC14;

    // DBD3: LDU #$3120
    cpu.m_u = 0x3120;

    // DBDA: BRA $DC0D
    goto label_DC0D;

    // DBDC: BRA $DC2E
    goto label_DC2E;

    // DBE0: ADCB <$32
    // TODO: Convert ADCB <$32

    // DBE2: BRA $DC27
    goto label_DC27;

    // DBE8: BRA $DC1B
    goto label_DC1B;

    // DBEA: BRA $DC3C
    goto label_DC3C;

    // DBEE: ADCB <$50
    // TODO: Convert ADCB <$50

    // DBF3: BRA $DC49
    goto label_DC49;

    // DBFB: BRA $DC51
    goto label_DC51;

    // DBFE: BRA $DC53
    goto label_DC53;

    // DC03: ANDB <$43
    cpu.m_b &= 0x43;

    // DC0A: ADDD <$43
    cpu.m_d += 0x43;

    // DC10: ANDB <$53
    cpu.m_b &= 0x53;

    // DC17: BRA $DC60
    goto label_DC60;

    // DC1B: BITB #$46
    // TODO: Convert BITB #$46

    // DC22: BRA $DC6D
    goto label_DC6D;

    // DC2F: BRA $DC85
    goto label_DC85;

    // DC32: BRA $DC86
    goto label_DC86;

    // DC36: BRA $DC7E
    goto label_DC7E;

    // DC3A: BITB #$31
    // TODO: Convert BITB #$31

    // DC3C: BGT $DC5E
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDC5E;

    // DC3E: BRA $DC99
    goto label_DC99;

    // DC43: BRA $DC9D
    goto label_DC9D;

    // DC45: BLT $DC9E
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xDC9E;

    // DC4A: BRA $DC95
    goto label_DC95;

    // DC4D: BRA $DC94
    goto label_DC94;

    // DC56: BRA $DCAF
    goto label_DCAF;

    // DC5B: BRA $DC9E
    goto label_DC9E;

    // DC5D: LDU #$494E
    cpu.m_u = 0x494E;

    // DC67: BRA $DCAD
    goto label_DCAD;

    // DC71: BRA $DCC6
    goto label_DCC6;

    // DC78: BRA $DCCE
    goto label_DCCE;

    // DC7C: ANDB <$57
    cpu.m_b &= 0x57;

    // DC81: BRA $DCD3
    goto label_DCD3;

    // DC89: BRA $DCE4
    goto label_DCE4;

    // DC8D: BRA $DCD5
    goto label_DCD5;

    // DC91: BRA $DCB3
    goto label_DCB3;

    // DC93: BRA $DCD8
    goto label_DCD8;

    // DC9E: LDX -$E,Y
    // TODO: Fix comma operator: LDX -$E,Y

    // DCA0: BGT $DCC2
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDCC2;

    // DCA2: BRA $DCE8
    goto label_DCE8;

    // DCAC: BRA $DD01
    goto label_DD01;

    // DCB5: BRA $DD00
    goto label_DD00;

    // DCB8: BRA $DD06
    goto label_DD06;

    // DCBD: BRA $DD16
    goto label_DD16;

    // DCC1: LDU #$4120
    cpu.m_u = 0x4120;

    // DCCC: BRA $DD17
    goto label_DD17;

    // DCD4: BRA $DD2F
    goto label_DD2F;

    // DCD9: BRA $DD2E
    goto label_DD2E;

    // DCE0: BRA $DD31
    goto label_DD31;

    // DCE2: SBCB <$57
    // TODO: Convert SBCB <$57

    // DCE7: BRA $DD42
    goto label_DD42;

    // DCEB: BRA $DD40
    goto label_DD40;

    // DCF2: BRA $DD35
    goto label_DD35;

    // DCF4: BRA $DD42
    goto label_DD42;

    // DCFA: BRA $DD50
    goto label_DD50;

    // DD00: BRA $DD51
    goto label_DD51;

    // DD02: SBCB <$54
    // TODO: Convert SBCB <$54

    // DD09: BRA $DD4E
    goto label_DD4E;

    // DD11: LDX -$D,Y
    // TODO: Fix comma operator: LDX -$D,Y

    // DD13: BGT $DD35
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDD35;

    // DD15: BRA $DD58
    goto label_DD58;

    // DD19: BRA $DD74
    goto label_DD74;

    // DD1E: BRA $DD6C
    goto label_DD6C;

    // DD25: BRA $DD7E
    goto label_DD7E;

    // DD2A: BRA $DD6F
    goto label_DD6F;

    // DD31: BRA $DD87
    goto label_DD87;

    // DD33: XSTU #$4558
    // TODO: Convert XSTU #$4558

    // DD3B: BRA $DD82
    goto label_DD82;

    // DD42: BRA $DD98
    goto label_DD98;

    // DD46: BRA $DD8E
    goto label_DD8E;

    // DD4F: BGE $DD71
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDD71;

    // DD55: SBCB <$54
    // TODO: Convert SBCB <$54

    // DD5B: BRA $DDB1
    goto label_DDB1;

    // DD60: BRA $DDA3
    goto label_DDA3;

    // DD64: BRA $DDBA
    goto label_DDBA;

    // DD6B: BRA $DDC1
    goto label_DDC1;

    // DD73: LDX -$C,Y
    // TODO: Fix comma operator: LDX -$C,Y

    // DD75: BGT $DD97
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDD97;

    // DD77: BRA $DDCC
    goto label_DDCC;

    // DD7D: BRA $DDC5
    goto label_DDC5;

    // DD87: BRA $DDCB
    goto label_DDCB;

    // DD8E: BRA $DDE4
    goto label_DDE4;

    // DD92: ADCB <$49
    // TODO: Convert ADCB <$49

    // DD99: BRA $DDF4
    goto label_DDF4;

    // DD9E: BRA $DDF3
    goto label_DDF3;

    // DDA5: LDX -$B,Y
    // TODO: Fix comma operator: LDX -$B,Y

    // DDA7: BGT $DDC9
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDDC9;

    // DDA9: BRA $DDFF
    goto label_DDFF;

    // DDAD: BRA $DE01
    goto label_DE01;

    // DDB3: BRA $DDFB
    goto label_DDFB;

    // DDB9: BRA $DE04
    goto label_DE04;

    // DDBC: BRA $DE02
    goto label_DE02;

    // DDC6: BRA $DE17
    goto label_DE17;

    // DDC8: LDU #$594F
    cpu.m_u = 0x594F;

    // DDCC: BRA $DE22
    goto label_DE22;

    // DDCF: BRA $DE24
    goto label_DE24;

    // DDD4: BRA $DE2A
    goto label_DE2A;

    // DDD8: BRA $DE1F
    goto label_DE1F;

    // DDDF: BRA $DE23
    goto label_DE23;

    // DDE2: BRA $DE26
    goto label_DE26;

    // DDE9: XSTB #$55
    // TODO: Convert XSTB #$55

    // DDEC: BRA $DE42
    goto label_DE42;

    // DDF0: BRA $DE36
    goto label_DE36;

    // DDF6: BRA $DE4B
    goto label_DE4B;

    // DDFB: LDX [A,Y]
    // TODO: Complex indexed addressing: [A,Y]

    // DDFD: STA $B8B9
    cpu.write_memory(0xB8B9, cpu.m_a);

    // DE06: XSTB #$54
    // TODO: Convert XSTB #$54

    // DE0A: BRA $DE52
    goto label_DE52;

    // DE13: BRA $DE35
    goto label_DE35;

    // DE15: BRA $DE37
    goto label_DE37;

    // DE17: BRA $DE39
    goto label_DE39;

    // DE19: BRA $DE3B
    goto label_DE3B;

    // DE1B: BRA $DE3D
    goto label_DE3D;

    // DE1D: BRA $DE3F
    goto label_DE3F;

    // DE1F: BRA $DE41
    goto label_DE41;

    // DE21: BRA $DE43
    goto label_DE43;

    // DE23: BRA $DE56
    goto label_DE56;

    // DE25: BGE $DE57
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDE57;

    // DE27: LEAX [$4441,W]
    // TODO: Complex indexed addressing: [$4441,W]

    // DE2E: BRA $DE86
    goto label_DE86;

    // DE34: BEQ $DE89
    if (cpu.zero_flag()) cpu.m_pc = 0xDE89;

    // DE36: BRA $DE8B
    goto label_DE8B;

    // DE3B: BRA $DE5D
    goto label_DE5D;

    // DE3D: BRA $DE5F
    goto label_DE5F;

    // DE3F: BRA $DE61
    goto label_DE61;

    // DE41: BRA $DE63
    goto label_DE63;

    // DE43: BRA $DE65
    goto label_DE65;

    // DE45: BRA $DE79
    goto label_DE79;

    // DE47: BGE $DE79
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDE79;

    // DE49: LEAX [$4C41,W]
    // TODO: Complex indexed addressing: [$4C41,W]

    // DE50: BRA $DE94
    goto label_DE94;

    // DE52: JMP $de52
    goto label_DE52;

}

} // namespace StarWars