#include "cpu_6809.h"

namespace StarWars {

void routine_dad3_de52_impl(CPU6809& cpu) {
    // Converted from rom_disasm_dad3_de52.md
    // Address: 0xDAD3_DE52

    label_DAD3:
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
    label_DAEE:
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
    // DB12: INCA 
    cpu.m_a++;
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
    // DB27: ABX 
    // TODO: Convert ABX 
    // DB28: ABX 
    // TODO: Convert ABX 
    // DB29: LDD ,X
    // TODO: Complex indexed addressing: ,X
    // DB2B: STD $4AE2
    cpu.write_memory16(0x4AE2, cpu.m_d);
    label_DB2E:
    // DB2E: RTS 
    return;
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
    // DB3F: COMB 
    cpu.m_b = ~cpu.m_b;
    // DB40: LSRB 
    cpu.m_b >>= 1;
    // DB41: NEGA 
    cpu.m_a = -cpu.m_a;
    // DB42: XNCB 
    // TODO: Convert XNCB 
    // DB43: BRA $DB9C
    goto label_DB9C;
    // DB45: NEGA 
    cpu.m_a = -cpu.m_a;
    // DB46: XNCB 
    // TODO: Convert XNCB 
    // DB47: ADDD <$40
    cpu.m_d += 0x40;
    // DB49: BRA $DB7C
    goto label_DB7C;
    // DB4B: RTS 
    return;
    // DB4C: XANDCC #$33
    // TODO: Convert XANDCC #$33
    // DB4E: BRA $DB9C
    goto label_DB9C;
    // DB50: LSRB 
    cpu.m_b >>= 1;
    // DB51: COMA 
    cpu.m_a = ~cpu.m_a;
    // DB52: NEGA 
    cpu.m_a = -cpu.m_a;
    // DB53: COMB 
    cpu.m_b = ~cpu.m_b;
    // DB54: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // DB55: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DB56: INCA 
    cpu.m_a++;
    // DB57: TSTA 
    cpu.test_a();
    // DB58: BRA $DBA6
    goto label_DBA6;
    // DB5A: LSRB 
    cpu.m_b >>= 1;
    // DB5B: LSRA 
    cpu.m_a >>= 1;
    // DB5C: BGT $DB7E
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDB7E;
    // DB5E: NEGA 
    cpu.m_a = -cpu.m_a;
    // DB5F: XCLRA 
    // TODO: Convert XCLRA 
    // DB60: LSRA 
    cpu.m_a >>= 1;
    // DB61: BRA $DBA4
    goto label_DBA4;
    // DB63: LSRB 
    cpu.m_b >>= 1;
    // DB64: NEGA 
    cpu.m_a = -cpu.m_a;
    // DB65: XNCB 
    // TODO: Convert XNCB 
    // DB66: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DB67: BGE $DBB2
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDBB2;
    // DB69: XCLRA 
    // TODO: Convert XCLRA 
    // DB6A: COMA 
    cpu.m_a = ~cpu.m_a;
    // DB6B: LDX $1,U
    // TODO: Fix comma operator: LDX $1,U
    // DB6D: INCA 
    cpu.m_a++;
    // DB6E: INCA 
    cpu.m_a++;
    // DB6F: BRA $DBC3
    goto label_DBC3;
    // DB71: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DB72: ASRA 
    // TODO: Convert ASRA 
    // DB73: ASLA 
    cpu.m_a <<= 1;
    // DB74: LSRB 
    cpu.m_b >>= 1;
    // DB75: COMB 
    cpu.m_b = ~cpu.m_b;
    // DB76: BRA $DBCA
    goto label_DBCA;
    // DB78: LSRA 
    cpu.m_a >>= 1;
    // DB79: COMB 
    cpu.m_b = ~cpu.m_b;
    // DB7A: LSRA 
    cpu.m_a >>= 1;
    // DB7B: XNCB 
    // TODO: Convert XNCB 
    label_DB7C:
    // DB7C: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // DB7D: LSRA 
    cpu.m_a >>= 1;
    // DB7E: LSRA 
    cpu.m_a >>= 1;
    // DB7F: LDX $C,U
    // TODO: Fix comma operator: LDX $C,U
    // DB81: LSRB 
    cpu.m_b >>= 1;
    // DB82: COMA 
    cpu.m_a = ~cpu.m_a;
    // DB83: NEGA 
    cpu.m_a = -cpu.m_a;
    // DB84: COMB 
    cpu.m_b = ~cpu.m_b;
    // DB85: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // DB86: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DB87: INCA 
    cpu.m_a++;
    // DB88: TSTA 
    cpu.test_a();
    // DB89: BRA $DBDF
    goto label_DBDF;
    // DB8B: XNCB 
    // TODO: Convert XNCB 
    // DB8C: NEGA 
    cpu.m_a = -cpu.m_a;
    // DB8D: LSRA 
    cpu.m_a >>= 1;
    // DB8E: LSRA 
    cpu.m_a >>= 1;
    // DB8F: TSTA 
    cpu.test_a();
    // DB90: NEGA 
    cpu.m_a = -cpu.m_a;
    // DB91: XNCB 
    // TODO: Convert XNCB 
    // DB92: XDECA 
    // TODO: Convert XDECA 
    // DB93: COMB 
    cpu.m_b = ~cpu.m_b;
    // DB94: BRA $DBEB
    goto label_DBEB;
    // DB96: COMB 
    cpu.m_b = ~cpu.m_b;
    // DB97: LSRA 
    cpu.m_a >>= 1;
    // DB98: LSRA 
    cpu.m_a >>= 1;
    // DB99: BRA $DBF0
    goto label_DBF0;
    // DB9B: XCLRA 
    // TODO: Convert XCLRA 
    label_DB9C:
    // DB9C: LSRA 
    cpu.m_a >>= 1;
    // DB9D: LSRA 
    cpu.m_a >>= 1;
    // DB9E: XNCB 
    // TODO: Convert XNCB 
    // DB9F: BRA $DBED
    goto label_DBED;
    // DBA1: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DBA2: COMA 
    cpu.m_a = ~cpu.m_a;
    // DBA3: LSRA 
    cpu.m_a >>= 1;
    label_DBA4:
    // DBA4: XCLRA 
    // TODO: Convert XCLRA 
    // DBA5: COMB 
    cpu.m_b = ~cpu.m_b;
    label_DBA6:
    // DBA6: LSRA 
    cpu.m_a >>= 1;
    // DBA7: LDX $7,U
    // TODO: Fix comma operator: LDX $7,U
    // DBA9: NEGA 
    cpu.m_a = -cpu.m_a;
    // DBAA: TSTA 
    cpu.test_a();
    // DBAB: LSRA 
    cpu.m_a >>= 1;
    // DBAC: BRA $DBFD
    goto label_DBFD;
    // DBAE: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // DBAF: LSRA 
    cpu.m_a >>= 1;
    // DBB0: SBCB <$49
    // TODO: Convert SBCB <$49
    // DBB2: XCLRA 
    // TODO: Convert XCLRA 
    // DBB3: COMB 
    cpu.m_b = ~cpu.m_b;
    // DBB4: LSRA 
    cpu.m_a >>= 1;
    // DBB5: XNCB 
    // TODO: Convert XNCB 
    // DBB6: LSRB 
    cpu.m_b >>= 1;
    // DBB7: BRA $DBFC
    goto label_DBFC;
    // DBB9: CLRA 
    cpu.m_a = 0;
    // DBBA: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DBBB: XCLRA 
    // TODO: Convert XCLRA 
    // DBBC: ADDD <$46
    cpu.m_d += 0x46;
    // DBBE: XNCB 
    // TODO: Convert XNCB 
    // DBBF: LSRA 
    cpu.m_a >>= 1;
    // DBC0: LSRA 
    cpu.m_a >>= 1;
    // DBC1: BRA $DC13
    goto label_DC13;
    label_DBC3:
    // DBC3: INCA 
    cpu.m_a++;
    // DBC4: NEGA 
    cpu.m_a = -cpu.m_a;
    // DBC5: ADCB <$32
    // TODO: Convert ADCB <$32
    // DBC7: BRA $DC19
    goto label_DC19;
    // DBC9: INCA 
    cpu.m_a++;
    label_DBCA:
    // DBCA: NEGA 
    cpu.m_a = -cpu.m_a;
    // DBCB: ROLB 
    cpu.m_b = (cpu.m_b << 1) | (cpu.carry_flag() ? 1 : 0);
    // DBCC: COMB 
    cpu.m_b = ~cpu.m_b;
    // DBCD: BRA $DC00
    goto label_DC00;
    // DBCF: BRA $DC14
    goto label_DC14;
    // DBD1: CLRA 
    cpu.m_a = 0;
    // DBD2: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DBD3: LDU #$3120
    cpu.m_u = 0x3120;
    // DBD6: COMA 
    cpu.m_a = ~cpu.m_a;
    // DBD7: CLRA 
    cpu.m_a = 0;
    // DBD8: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DBD9: XCLRA 
    // TODO: Convert XCLRA 
    // DBDA: BRA $DC0D
    goto label_DC0D;
    // DBDC: BRA $DC2E
    goto label_DC2E;
    // DBDE: INCA 
    cpu.m_a++;
    label_DBDF:
    // DBDF: NEGA 
    cpu.m_a = -cpu.m_a;
    // DBE0: ADCB <$32
    // TODO: Convert ADCB <$32
    // DBE2: BRA $DC27
    goto label_DC27;
    // DBE4: CLRA 
    cpu.m_a = 0;
    // DBE5: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DBE6: XCLRA 
    // TODO: Convert XCLRA 
    // DBE7: COMB 
    cpu.m_b = ~cpu.m_b;
    // DBE8: BRA $DC1B
    goto label_DC1B;
    // DBEA: BRA $DC3C
    goto label_DC3C;
    // DBEC: INCA 
    cpu.m_a++;
    label_DBED:
    // DBED: NEGA 
    cpu.m_a = -cpu.m_a;
    // DBEE: ADCB <$50
    // TODO: Convert ADCB <$50
    label_DBF0:
    // DBF0: LSRB 
    cpu.m_b >>= 1;
    // DBF1: INCA 
    cpu.m_a++;
    // DBF2: INCA 
    cpu.m_a++;
    // DBF3: BRA $DC49
    goto label_DC49;
    // DBF5: XNCB 
    // TODO: Convert XNCB 
    // DBF6: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DBF7: ASRA 
    // TODO: Convert ASRA 
    // DBF8: ASRA 
    // TODO: Convert ASRA 
    // DBF9: LSRA 
    cpu.m_a >>= 1;
    // DBFA: XNCB 
    // TODO: Convert XNCB 
    // DBFB: BRA $DC51
    goto label_DC51;
    label_DBFD:
    // DBFD: CLRA 
    cpu.m_a = 0;
    // DBFE: BRA $DC53
    goto label_DC53;
    label_DC00:
    // DC00: LSRB 
    cpu.m_b >>= 1;
    // DC01: NEGA 
    cpu.m_a = -cpu.m_a;
    // DC02: XNCB 
    // TODO: Convert XNCB 
    // DC03: ANDB <$43
    cpu.m_b &= 0x43;
    // DC05: XNCB 
    // TODO: Convert XNCB 
    // DC06: LSRA 
    cpu.m_a >>= 1;
    // DC07: LSRA 
    cpu.m_a >>= 1;
    // DC08: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DC09: LSRB 
    cpu.m_b >>= 1;
    // DC0A: ADDD <$43
    cpu.m_d += 0x43;
    // DC0C: XNCB 
    // TODO: Convert XNCB 
    label_DC0D:
    // DC0D: LSRA 
    cpu.m_a >>= 1;
    // DC0E: LSRA 
    cpu.m_a >>= 1;
    // DC0F: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DC10: ANDB <$53
    cpu.m_b &= 0x53;
    // DC12: ASLA 
    cpu.m_a <<= 1;
    label_DC13:
    // DC13: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    label_DC14:
    // DC14: LSRA 
    cpu.m_a >>= 1;
    // DC15: INCA 
    cpu.m_a++;
    // DC16: LSRA 
    cpu.m_a >>= 1;
    // DC17: BRA $DC60
    goto label_DC60;
    label_DC19:
    // DC19: CLRA 
    cpu.m_a = 0;
    // DC1A: XCLRA 
    // TODO: Convert XCLRA 
    label_DC1B:
    // DC1B: BITB #$46
    // TODO: Convert BITB #$46
    // DC1D: INCA 
    cpu.m_a++;
    // DC1E: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DC1F: ASRA 
    // TODO: Convert ASRA 
    // DC20: ASLA 
    cpu.m_a <<= 1;
    // DC21: LSRB 
    cpu.m_b >>= 1;
    // DC22: BRA $DC6D
    goto label_DC6D;
    // DC24: XCLRA 
    // TODO: Convert XCLRA 
    // DC25: COMB 
    cpu.m_b = ~cpu.m_b;
    // DC26: LSRB 
    cpu.m_b >>= 1;
    label_DC27:
    // DC27: XNCB 
    // TODO: Convert XNCB 
    // DC28: LSRB 
    cpu.m_b >>= 1;
    // DC29: COMA 
    cpu.m_a = ~cpu.m_a;
    // DC2A: LSRB 
    cpu.m_b >>= 1;
    // DC2B: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DC2C: CLRA 
    cpu.m_a = 0;
    // DC2D: XCLRA 
    // TODO: Convert XCLRA 
    label_DC2E:
    // DC2E: COMB 
    cpu.m_b = ~cpu.m_b;
    // DC2F: BRA $DC85
    goto label_DC85;
    // DC31: CLRA 
    cpu.m_a = 0;
    // DC32: BRA $DC86
    goto label_DC86;
    // DC34: LSRA 
    cpu.m_a >>= 1;
    // DC35: LSRA 
    cpu.m_a >>= 1;
    // DC36: BRA $DC7E
    goto label_DC7E;
    // DC38: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DC39: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // DC3A: BITB #$31
    // TODO: Convert BITB #$31
    label_DC3C:
    // DC3C: BGT $DC5E
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDC5E;
    // DC3E: BRA $DC99
    goto label_DC99;
    // DC40: CLRA 
    cpu.m_a = 0;
    // DC41: LSRB 
    cpu.m_b >>= 1;
    // DC42: XNCB 
    // TODO: Convert XNCB 
    // DC43: BRA $DC9D
    goto label_DC9D;
    // DC45: BLT $DC9E
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xDC9E;
    // DC47: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DC48: XCLRA 
    // TODO: Convert XCLRA 
    label_DC49:
    // DC49: ASRA 
    // TODO: Convert ASRA 
    // DC4A: BRA $DC95
    goto label_DC95;
    // DC4C: COMB 
    cpu.m_b = ~cpu.m_b;
    // DC4D: BRA $DC94
    goto label_DC94;
    // DC4F: NEGB 
    cpu.m_b = -cpu.m_b;
    // DC50: LSRB 
    cpu.m_b >>= 1;
    label_DC51:
    // DC51: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DC52: NEGB 
    cpu.m_b = -cpu.m_b;
    label_DC53:
    // DC53: NEGB 
    cpu.m_b = -cpu.m_b;
    // DC54: LSRA 
    cpu.m_a >>= 1;
    // DC55: LSRA 
    cpu.m_a >>= 1;
    // DC56: BRA $DCAF
    goto label_DCAF;
    // DC58: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DC59: LSRB 
    cpu.m_b >>= 1;
    // DC5A: ASLA 
    cpu.m_a <<= 1;
    // DC5B: BRA $DC9E
    goto label_DC9E;
    // DC5D: LDU #$494E
    cpu.m_u = 0x494E;
    label_DC60:
    // DC60: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // DC61: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DC62: COMB 
    cpu.m_b = ~cpu.m_b;
    // DC63: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DC64: XNCA 
    // TODO: Convert XNCA 
    // DC65: INCA 
    cpu.m_a++;
    // DC66: LSRA 
    cpu.m_a >>= 1;
    // DC67: BRA $DCAD
    goto label_DCAD;
    // DC69: LSRA 
    cpu.m_a >>= 1;
    // DC6A: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // DC6B: INCA 
    cpu.m_a++;
    // DC6C: LSRA 
    cpu.m_a >>= 1;
    label_DC6D:
    // DC6D: COMA 
    cpu.m_a = ~cpu.m_a;
    // DC6E: LSRB 
    cpu.m_b >>= 1;
    // DC6F: CLRA 
    cpu.m_a = 0;
    // DC70: XNCB 
    // TODO: Convert XNCB 
    // DC71: BRA $DCC6
    goto label_DCC6;
    // DC73: ASLA 
    cpu.m_a <<= 1;
    // DC74: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DC75: LSRA 
    cpu.m_a >>= 1;
    // DC76: INCA 
    cpu.m_a++;
    // DC77: LSRA 
    cpu.m_a >>= 1;
    // DC78: BRA $DCCE
    goto label_DCCE;
    // DC7A: ASLA 
    cpu.m_a <<= 1;
    // DC7B: NEGA 
    cpu.m_a = -cpu.m_a;
    // DC7C: ANDB <$57
    cpu.m_b &= 0x57;
    label_DC7E:
    // DC7E: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DC7F: INCA 
    cpu.m_a++;
    // DC80: INCA 
    cpu.m_a++;
    // DC81: BRA $DCD3
    goto label_DCD3;
    // DC83: XNCB 
    // TODO: Convert XNCB 
    // DC84: CLRA 
    cpu.m_a = 0;
    label_DC85:
    // DC85: LSRB 
    cpu.m_b >>= 1;
    label_DC86:
    // DC86: LSRA 
    cpu.m_a >>= 1;
    // DC87: COMA 
    cpu.m_a = ~cpu.m_a;
    // DC88: LSRB 
    cpu.m_b >>= 1;
    // DC89: BRA $DCE4
    goto label_DCE4;
    // DC8B: CLRA 
    cpu.m_a = 0;
    // DC8C: LSRB 
    cpu.m_b >>= 1;
    // DC8D: BRA $DCD5
    goto label_DCD5;
    // DC8F: CLRA 
    cpu.m_a = 0;
    // DC90: XNCB 
    // TODO: Convert XNCB 
    // DC91: BRA $DCB3
    goto label_DCB3;
    // DC93: BRA $DCD8
    goto label_DCD8;
    label_DC95:
    // DC95: CLRA 
    cpu.m_a = 0;
    // DC96: INCA 
    cpu.m_a++;
    // DC97: INCA 
    cpu.m_a++;
    // DC98: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    label_DC99:
    // DC99: COMB 
    cpu.m_b = ~cpu.m_b;
    // DC9A: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DC9B: CLRA 
    cpu.m_a = 0;
    // DC9C: XCLRA 
    // TODO: Convert XCLRA 
    label_DC9D:
    // DC9D: COMB 
    cpu.m_b = ~cpu.m_b;
    label_DC9E:
    // DC9E: LDX -$E,Y
    // TODO: Fix comma operator: LDX -$E,Y
    // DCA0: BGT $DCC2
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDCC2;
    // DCA2: BRA $DCE8
    goto label_DCE8;
    // DCA4: LSRA 
    cpu.m_a >>= 1;
    // DCA5: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // DCA6: INCA 
    cpu.m_a++;
    // DCA7: LSRA 
    cpu.m_a >>= 1;
    // DCA8: COMA 
    cpu.m_a = ~cpu.m_a;
    // DCA9: LSRB 
    cpu.m_b >>= 1;
    // DCAA: CLRA 
    cpu.m_a = 0;
    // DCAB: XNCB 
    // TODO: Convert XNCB 
    // DCAC: BRA $DD01
    goto label_DD01;
    // DCAE: LSRB 
    cpu.m_b >>= 1;
    label_DCAF:
    // DCAF: XNCB 
    // TODO: Convert XNCB 
    // DCB0: LSRA 
    cpu.m_a >>= 1;
    // DCB1: XCLRA 
    // TODO: Convert XCLRA 
    // DCB2: ASRA 
    // TODO: Convert ASRA 
    label_DCB3:
    // DCB3: LSRB 
    cpu.m_b >>= 1;
    // DCB4: ASLA 
    cpu.m_a <<= 1;
    // DCB5: BRA $DD00
    goto label_DD00;
    // DCB7: COMB 
    cpu.m_b = ~cpu.m_b;
    // DCB8: BRA $DD06
    goto label_DD06;
    // DCBA: CLRA 
    cpu.m_a = 0;
    // DCBB: COMB 
    cpu.m_b = ~cpu.m_b;
    // DCBC: LSRB 
    cpu.m_b >>= 1;
    // DCBD: BRA $DD16
    goto label_DD16;
    // DCBF: ASLA 
    cpu.m_a <<= 1;
    // DCC0: LSRA 
    cpu.m_a >>= 1;
    // DCC1: LDU #$4120
    cpu.m_u = 0x4120;
    // DCC4: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // DCC5: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    label_DCC6:
    // DCC6: XNCB 
    // TODO: Convert XNCB 
    // DCC7: LSRA 
    cpu.m_a >>= 1;
    // DCC8: XNCA 
    // TODO: Convert XNCA 
    // DCC9: NEGA 
    cpu.m_a = -cpu.m_a;
    // DCCA: INCA 
    cpu.m_a++;
    // DCCB: INCA 
    cpu.m_a++;
    // DCCC: BRA $DD17
    goto label_DD17;
    label_DCCE:
    // DCCE: TSTA 
    cpu.test_a();
    // DCCF: NEGB 
    cpu.m_b = -cpu.m_b;
    // DCD0: NEGA 
    cpu.m_a = -cpu.m_a;
    // DCD1: COMA 
    cpu.m_a = ~cpu.m_a;
    // DCD2: LSRB 
    cpu.m_b >>= 1;
    label_DCD3:
    // DCD3: COMB 
    cpu.m_b = ~cpu.m_b;
    // DCD4: BRA $DD2F
    goto label_DD2F;
    // DCD6: CLRA 
    cpu.m_a = 0;
    // DCD7: LSRB 
    cpu.m_b >>= 1;
    label_DCD8:
    // DCD8: XNCB 
    // TODO: Convert XNCB 
    // DCD9: BRA $DD2E
    goto label_DD2E;
    // DCDB: ASLA 
    cpu.m_a <<= 1;
    // DCDC: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DCDD: LSRA 
    cpu.m_a >>= 1;
    // DCDE: INCA 
    cpu.m_a++;
    // DCDF: LSRA 
    cpu.m_a >>= 1;
    // DCE0: BRA $DD31
    goto label_DD31;
    // DCE2: SBCB <$57
    // TODO: Convert SBCB <$57
    label_DCE4:
    // DCE4: ASLA 
    cpu.m_a <<= 1;
    // DCE5: LSRA 
    cpu.m_a >>= 1;
    // DCE6: XCLRA 
    // TODO: Convert XCLRA 
    // DCE7: BRA $DD42
    goto label_DD42;
    // DCE9: CLRA 
    cpu.m_a = 0;
    // DCEA: LSRB 
    cpu.m_b >>= 1;
    // DCEB: BRA $DD40
    goto label_DD40;
    // DCED: LSRB 
    cpu.m_b >>= 1;
    // DCEE: XNCB 
    // TODO: Convert XNCB 
    // DCEF: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DCF0: XDECA 
    // TODO: Convert XDECA 
    // DCF1: LSRA 
    cpu.m_a >>= 1;
    // DCF2: BRA $DD35
    goto label_DD35;
    // DCF4: BRA $DD42
    goto label_DD42;
    // DCF6: NEGA 
    cpu.m_a = -cpu.m_a;
    // DCF7: COMB 
    cpu.m_b = ~cpu.m_b;
    // DCF8: LSRA 
    cpu.m_a >>= 1;
    // DCF9: XNCB 
    // TODO: Convert XNCB 
    // DCFA: BRA $DD50
    goto label_DD50;
    // DCFC: CLRA 
    cpu.m_a = 0;
    // DCFD: ASRB 
    // TODO: Convert ASRB 
    // DCFE: LSRA 
    cpu.m_a >>= 1;
    // DCFF: XNCB 
    // TODO: Convert XNCB 
    label_DD00:
    // DD00: BRA $DD51
    goto label_DD51;
    // DD02: SBCB <$54
    // TODO: Convert SBCB <$54
    // DD04: XNCB 
    // TODO: Convert XNCB 
    // DD05: LSRA 
    cpu.m_a >>= 1;
    label_DD06:
    // DD06: XCLRA 
    // TODO: Convert XCLRA 
    // DD07: COMA 
    cpu.m_a = ~cpu.m_a;
    // DD08: ASLA 
    cpu.m_a <<= 1;
    // DD09: BRA $DD4E
    goto label_DD4E;
    // DD0B: NEGA 
    cpu.m_a = -cpu.m_a;
    // DD0C: LSRB 
    cpu.m_b >>= 1;
    // DD0D: ASRB 
    // TODO: Convert ASRB 
    // DD0E: NEGA 
    cpu.m_a = -cpu.m_a;
    // DD0F: INCA 
    cpu.m_a++;
    // DD10: XDECA 
    // TODO: Convert XDECA 
    // DD11: LDX -$D,Y
    // TODO: Fix comma operator: LDX -$D,Y
    // DD13: BGT $DD35
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDD35;
    // DD15: BRA $DD58
    goto label_DD58;
    label_DD17:
    // DD17: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DD18: TSTA 
    cpu.test_a();
    // DD19: BRA $DD74
    goto label_DD74;
    // DD1B: CLRA 
    cpu.m_a = 0;
    // DD1C: LSRB 
    cpu.m_b >>= 1;
    // DD1D: XNCB 
    // TODO: Convert XNCB 
    // DD1E: BRA $DD6C
    goto label_DD6C;
    // DD20: NEGA 
    cpu.m_a = -cpu.m_a;
    // DD21: COMB 
    cpu.m_b = ~cpu.m_b;
    // DD22: LSRA 
    cpu.m_a >>= 1;
    // DD23: XNCB 
    // TODO: Convert XNCB 
    // DD24: COMB 
    cpu.m_b = ~cpu.m_b;
    // DD25: BRA $DD7E
    goto label_DD7E;
    // DD27: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DD28: LSRB 
    cpu.m_b >>= 1;
    // DD29: ASLA 
    cpu.m_a <<= 1;
    // DD2A: BRA $DD6F
    goto label_DD6F;
    // DD2C: LSRB 
    cpu.m_b >>= 1;
    // DD2D: XNCB 
    // TODO: Convert XNCB 
    label_DD2E:
    // DD2E: COMB 
    cpu.m_b = ~cpu.m_b;
    label_DD2F:
    // DD2F: CLRA 
    cpu.m_a = 0;
    // DD30: XNCB 
    // TODO: Convert XNCB 
    label_DD31:
    // DD31: BRA $DD87
    goto label_DD87;
    // DD33: XSTU #$4558
    // TODO: Convert XSTU #$4558
    // DD36: NEGB 
    cpu.m_b = -cpu.m_b;
    // DD37: INCA 
    cpu.m_a++;
    // DD38: CLRA 
    cpu.m_a = 0;
    // DD39: LSRA 
    cpu.m_a >>= 1;
    // DD3A: LSRA 
    cpu.m_a >>= 1;
    // DD3B: BRA $DD82
    goto label_DD82;
    // DD3D: TSTA 
    cpu.test_a();
    // DD3E: NEGB 
    cpu.m_b = -cpu.m_b;
    // DD3F: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    label_DD40:
    // DD40: XNCB 
    // TODO: Convert XNCB 
    // DD41: LSRA 
    cpu.m_a >>= 1;
    label_DD42:
    // DD42: BRA $DD98
    goto label_DD98;
    // DD44: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DD45: LSRA 
    cpu.m_a >>= 1;
    // DD46: BRA $DD8E
    goto label_DD8E;
    // DD48: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DD49: ASRA 
    // TODO: Convert ASRA 
    // DD4A: ASLA 
    cpu.m_a <<= 1;
    // DD4B: LSRB 
    cpu.m_b >>= 1;
    // DD4C: LSRA 
    cpu.m_a >>= 1;
    // DD4D: XNCB 
    // TODO: Convert XNCB 
    label_DD4E:
    // DD4E: COMB 
    cpu.m_b = ~cpu.m_b;
    // DD4F: BGE $DD71
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDD71;
    label_DD51:
    // DD51: INCA 
    cpu.m_a++;
    // DD52: NEGA 
    cpu.m_a = -cpu.m_a;
    // DD53: COMB 
    cpu.m_b = ~cpu.m_b;
    // DD54: LSRA 
    cpu.m_a >>= 1;
    // DD55: SBCB <$54
    // TODO: Convert SBCB <$54
    // DD57: CLRA 
    cpu.m_a = 0;
    label_DD58:
    // DD58: ASRB 
    // TODO: Convert ASRB 
    // DD59: LSRA 
    cpu.m_a >>= 1;
    // DD5A: XNCB 
    // TODO: Convert XNCB 
    // DD5B: BRA $DDB1
    goto label_DDB1;
    // DD5D: CLRA 
    cpu.m_a = 0;
    // DD5E: NEGB 
    cpu.m_b = -cpu.m_b;
    // DD5F: COMB 
    cpu.m_b = ~cpu.m_b;
    // DD60: BRA $DDA3
    goto label_DDA3;
    // DD62: XCLRA 
    // TODO: Convert XCLRA 
    // DD63: LSRA 
    cpu.m_a >>= 1;
    // DD64: BRA $DDBA
    goto label_DDBA;
    // DD66: XNCB 
    // TODO: Convert XNCB 
    // DD67: LSRA 
    cpu.m_a >>= 1;
    // DD68: XCLRA 
    // TODO: Convert XCLRA 
    // DD69: COMA 
    cpu.m_a = ~cpu.m_a;
    // DD6A: ASLA 
    cpu.m_a <<= 1;
    // DD6B: BRA $DDC1
    goto label_DDC1;
    // DD6D: LSRB 
    cpu.m_b >>= 1;
    // DD6E: XNCB 
    // TODO: Convert XNCB 
    label_DD6F:
    // DD6F: XNCB 
    // TODO: Convert XNCB 
    // DD70: LSRA 
    cpu.m_a >>= 1;
    // DD71: LSRB 
    cpu.m_b >>= 1;
    // DD72: COMB 
    cpu.m_b = ~cpu.m_b;
    // DD73: LDX -$C,Y
    // TODO: Fix comma operator: LDX -$C,Y
    // DD75: BGT $DD97
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDD97;
    // DD77: BRA $DDCC
    goto label_DDCC;
    // DD79: ASLA 
    cpu.m_a <<= 1;
    // DD7A: CLRA 
    cpu.m_a = 0;
    // DD7B: CLRA 
    cpu.m_a = 0;
    // DD7C: LSRB 
    cpu.m_b >>= 1;
    // DD7D: BRA $DDC5
    goto label_DDC5;
    // DD7F: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DD80: XNCB 
    // TODO: Convert XNCB 
    // DD81: LSRA 
    cpu.m_a >>= 1;
    label_DD82:
    // DD82: XNCA 
    // TODO: Convert XNCA 
    // DD83: NEGA 
    cpu.m_a = -cpu.m_a;
    // DD84: INCA 
    cpu.m_a++;
    // DD85: INCA 
    cpu.m_a++;
    // DD86: COMB 
    cpu.m_b = ~cpu.m_b;
    label_DD87:
    // DD87: BRA $DDCB
    goto label_DDCB;
    // DD89: LSRA 
    cpu.m_a >>= 1;
    // DD8A: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // DD8B: CLRA 
    cpu.m_a = 0;
    // DD8C: XNCB 
    // TODO: Convert XNCB 
    // DD8D: LSRA 
    cpu.m_a >>= 1;
    label_DD8E:
    // DD8E: BRA $DDE4
    goto label_DDE4;
    // DD90: ASLA 
    cpu.m_a <<= 1;
    // DD91: LSRA 
    cpu.m_a >>= 1;
    // DD92: ADCB <$49
    // TODO: Convert ADCB <$49
    // DD94: TSTA 
    cpu.test_a();
    // DD95: NEGB 
    cpu.m_b = -cpu.m_b;
    // DD96: NEGA 
    cpu.m_a = -cpu.m_a;
    // DD97: COMA 
    cpu.m_a = ~cpu.m_a;
    label_DD98:
    // DD98: LSRB 
    cpu.m_b >>= 1;
    // DD99: BRA $DDF4
    goto label_DDF4;
    // DD9B: CLRA 
    cpu.m_a = 0;
    // DD9C: LSRB 
    cpu.m_b >>= 1;
    // DD9D: XNCB 
    // TODO: Convert XNCB 
    // DD9E: BRA $DDF3
    goto label_DDF3;
    // DDA0: ASLA 
    cpu.m_a <<= 1;
    // DDA1: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DDA2: LSRA 
    cpu.m_a >>= 1;
    label_DDA3:
    // DDA3: INCA 
    cpu.m_a++;
    // DDA4: LSRA 
    cpu.m_a >>= 1;
    // DDA5: LDX -$B,Y
    // TODO: Fix comma operator: LDX -$B,Y
    // DDA7: BGT $DDC9
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDDC9;
    // DDA9: BRA $DDFF
    goto label_DDFF;
    // DDAB: ASLA 
    cpu.m_a <<= 1;
    // DDAC: LSRA 
    cpu.m_a >>= 1;
    // DDAD: BRA $DE01
    goto label_DE01;
    // DDAF: LSRA 
    cpu.m_a >>= 1;
    // DDB0: XNCA 
    // TODO: Convert XNCA 
    label_DDB1:
    // DDB1: LSRA 
    cpu.m_a >>= 1;
    // DDB2: INCA 
    cpu.m_a++;
    // DDB3: BRA $DDFB
    goto label_DDFB;
    // DDB5: CLRA 
    cpu.m_a = 0;
    // DDB6: XNCB 
    // TODO: Convert XNCB 
    // DDB7: COMA 
    cpu.m_a = ~cpu.m_a;
    // DDB8: LSRA 
    cpu.m_a >>= 1;
    // DDB9: BRA $DE04
    goto label_DE04;
    // DDBB: COMB 
    cpu.m_b = ~cpu.m_b;
    // DDBC: BRA $DE02
    goto label_DE02;
    // DDBE: LSRA 
    cpu.m_a >>= 1;
    // DDBF: NEGB 
    cpu.m_b = -cpu.m_b;
    // DDC0: LSRA 
    cpu.m_a >>= 1;
    label_DDC1:
    // DDC1: XCLRA 
    // TODO: Convert XCLRA 
    // DDC2: LSRA 
    cpu.m_a >>= 1;
    // DDC3: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DDC4: XCLRA 
    // TODO: Convert XCLRA 
    label_DDC5:
    // DDC5: ASRA 
    // TODO: Convert ASRA 
    // DDC6: BRA $DE17
    goto label_DE17;
    // DDC8: LDU #$594F
    cpu.m_u = 0x594F;
    label_DDCB:
    // DDCB: LSRB 
    cpu.m_b >>= 1;
    label_DDCC:
    // DDCC: BRA $DE22
    goto label_DE22;
    // DDCE: CLRA 
    cpu.m_a = 0;
    // DDCF: BRA $DE24
    goto label_DE24;
    // DDD1: LSRB 
    cpu.m_b >>= 1;
    // DDD2: CLRA 
    cpu.m_a = 0;
    // DDD3: NEGB 
    cpu.m_b = -cpu.m_b;
    // DDD4: BRA $DE2A
    goto label_DE2A;
    // DDD6: ASLA 
    cpu.m_a <<= 1;
    // DDD7: LSRA 
    cpu.m_a >>= 1;
    // DDD8: BRA $DE1F
    goto label_DE1F;
    // DDDA: TSTA 
    cpu.test_a();
    // DDDB: NEGB 
    cpu.m_b = -cpu.m_b;
    // DDDC: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DDDD: XNCB 
    // TODO: Convert XNCB 
    // DDDE: LSRA 
    cpu.m_a >>= 1;
    // DDDF: BRA $DE23
    goto label_DE23;
    // DDE1: ROLB 
    cpu.m_b = (cpu.m_b << 1) | (cpu.carry_flag() ? 1 : 0);
    // DDE2: BRA $DE26
    goto label_DE26;
    label_DDE4:
    // DDE4: INCA 
    cpu.m_a++;
    // DDE5: CLRA 
    cpu.m_a = 0;
    // DDE6: ASRB 
    // TODO: Convert ASRB 
    // DDE7: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DDE8: XCLRA 
    // TODO: Convert XCLRA 
    // DDE9: XSTB #$55
    // TODO: Convert XSTB #$55
    // DDEB: NEGB 
    cpu.m_b = -cpu.m_b;
    // DDEC: BRA $DE42
    goto label_DE42;
    // DDEE: ASLA 
    cpu.m_a <<= 1;
    // DDEF: LSRA 
    cpu.m_a >>= 1;
    // DDF0: BRA $DE36
    goto label_DE36;
    // DDF2: LSRA 
    cpu.m_a >>= 1;
    label_DDF3:
    // DDF3: NEGA 
    cpu.m_a = -cpu.m_a;
    label_DDF4:
    // DDF4: LSRB 
    cpu.m_b >>= 1;
    // DDF5: ASLA 
    cpu.m_a <<= 1;
    // DDF6: BRA $DE4B
    goto label_DE4B;
    // DDF8: LSRB 
    cpu.m_b >>= 1;
    // DDF9: NEGA 
    cpu.m_a = -cpu.m_a;
    // DDFA: XNCB 
    // TODO: Convert XNCB 
    label_DDFB:
    // DDFB: LDX [A,Y]
    // TODO: Complex indexed addressing: [A,Y]
    // DDFD: STA $B8B9
    cpu.write_memory(0xB8B9, cpu.m_a);
    // DE00: COMB 
    cpu.m_b = ~cpu.m_b;
    label_DE01:
    // DE01: COMA 
    cpu.m_a = ~cpu.m_a;
    label_DE02:
    // DE02: CLRA 
    cpu.m_a = 0;
    // DE03: XNCB 
    // TODO: Convert XNCB 
    label_DE04:
    // DE04: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DE05: XCLRA 
    // TODO: Convert XCLRA 
    // DE06: XSTB #$54
    // TODO: Convert XSTB #$54
    // DE08: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DE09: LSRA 
    cpu.m_a >>= 1;
    // DE0A: BRA $DE52
    goto label_DE52;
    // DE0C: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DE0D: ASRA 
    // TODO: Convert ASRA 
    // DE0E: ASLA 
    cpu.m_a <<= 1;
    // DE0F: LSRB 
    cpu.m_b >>= 1;
    // DE10: LSRA 
    cpu.m_a >>= 1;
    // DE11: XNCB 
    // TODO: Convert XNCB 
    // DE12: COMB 
    cpu.m_b = ~cpu.m_b;
    // DE13: BRA $DE35
    goto label_DE35;
    // DE15: BRA $DE37
    goto label_DE37;
    label_DE17:
    // DE17: BRA $DE39
    goto label_DE39;
    // DE19: BRA $DE3B
    goto label_DE3B;
    // DE1B: BRA $DE3D
    goto label_DE3D;
    // DE1D: BRA $DE3F
    goto label_DE3F;
    label_DE1F:
    // DE1F: BRA $DE41
    goto label_DE41;
    // DE21: BRA $DE43
    goto label_DE43;
    label_DE23:
    // DE23: BRA $DE56
    goto label_DE56;
    // DE25: BGE $DE57
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDE57;
    // DE27: LEAX [$4441,W]
    // TODO: Complex indexed addressing: [$4441,W]
    // DE2B: XNCB 
    // TODO: Convert XNCB 
    // DE2C: LSRB 
    cpu.m_b >>= 1;
    // DE2D: ASLA 
    cpu.m_a <<= 1;
    // DE2E: BRA $DE86
    goto label_DE86;
    // DE30: NEGA 
    cpu.m_a = -cpu.m_a;
    // DE31: LSRA 
    cpu.m_a >>= 1;
    // DE32: LSRA 
    cpu.m_a >>= 1;
    // DE33: XNCB 
    // TODO: Convert XNCB 
    // DE34: BEQ $DE89
    if (cpu.zero_flag()) cpu.m_pc = 0xDE89;
    label_DE36:
    // DE36: BRA $DE8B
    goto label_DE8B;
    // DE38: ASLA 
    cpu.m_a <<= 1;
    label_DE39:
    // DE39: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // DE3A: NEGB 
    cpu.m_b = -cpu.m_b;
    label_DE3B:
    // DE3B: BRA $DE5D
    goto label_DE5D;
    label_DE3D:
    // DE3D: BRA $DE5F
    goto label_DE5F;
    label_DE3F:
    // DE3F: BRA $DE61
    goto label_DE61;
    label_DE41:
    // DE41: BRA $DE63
    goto label_DE63;
    label_DE43:
    // DE43: BRA $DE65
    goto label_DE65;
    // DE45: BRA $DE79
    goto label_DE79;
    // DE47: BGE $DE79
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDE79;
    // DE49: LEAX [$4C41,W]
    // TODO: Complex indexed addressing: [$4C41,W]
    // DE4D: COMB 
    cpu.m_b = ~cpu.m_b;
    // DE4E: LSRA 
    cpu.m_a >>= 1;
    // DE4F: XNCB 
    // TODO: Convert XNCB 
    // DE50: BRA $DE94
    goto label_DE94;
    label_DE52:
    // DE52: JMP $de52
    goto label_DE52;
}

} // namespace StarWars