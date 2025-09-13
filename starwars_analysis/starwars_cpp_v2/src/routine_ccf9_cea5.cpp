#include "cpu_6809.h"

namespace StarWars {

void routine_ccf9_cea5_impl(CPU6809& cpu) {
    // Converted from rom_disasm_ccf9_cea5.md
    // Address: 0xCCF9_CEA5

    label_CCF9:
    // CCF9: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // CCFA: ANDA #$39
    cpu.m_a &= 0x39;
    // CCFC: ORCC #$01
    cpu.m_cc |= 0x01;
    // CCFE: ROR $4684
    // TODO: Convert ROR $4684
    // CD01: JSR $6782
    cpu.call_function(0x6782);
    // CD04: CLR $4684
    cpu.write_memory(0x4684, 0);
    // CD07: RTS 
    return;
    // CD08: ORCC #$01
    cpu.m_cc |= 0x01;
    // CD0A: ROR $4684
    // TODO: Convert ROR $4684
    // CD0D: JSR $67AA
    cpu.call_function(0x67AA);
    // CD10: CLR $4684
    cpu.write_memory(0x4684, 0);
    // CD13: RTS 
    return;
    // CD14: ORCC #$01
    cpu.m_cc |= 0x01;
    // CD16: ROR $4684
    // TODO: Convert ROR $4684
    // CD19: JSR $67D2
    cpu.call_function(0x67D2);
    // CD1C: CLR $4684
    cpu.write_memory(0x4684, 0);
    // CD1F: RTS 
    return;
    // CD20: ORCC #$01
    cpu.m_cc |= 0x01;
    // CD22: ROR $4684
    // TODO: Convert ROR $4684
    // CD25: JSR $67D4
    cpu.call_function(0x67D4);
    // CD28: CLR $4684
    cpu.write_memory(0x4684, 0);
    // CD2B: RTS 
    return;
    // CD2C: ORCC #$01
    cpu.m_cc |= 0x01;
    // CD2E: ROR $4684
    // TODO: Convert ROR $4684
    // CD31: JSR $6819
    cpu.call_function(0x6819);
    // CD34: CLR $4684
    cpu.write_memory(0x4684, 0);
    // CD37: RTS 
    return;
    // CD38: ORCC #$01
    cpu.m_cc |= 0x01;
    // CD3A: ROR $4684
    // TODO: Convert ROR $4684
    // CD3D: JSR $6864
    cpu.call_function(0x6864);
    // CD40: CLR $4684
    cpu.write_memory(0x4684, 0);
    // CD43: RTS 
    return;
    // CD44: ORCC #$01
    cpu.m_cc |= 0x01;
    // CD46: ROR $4684
    // TODO: Convert ROR $4684
    // CD49: JSR $68C7
    cpu.call_function(0x68C7);
    // CD4C: CLR $4684
    cpu.write_memory(0x4684, 0);
    // CD4F: RTS 
    return;
    // CD50: ORCC #$01
    cpu.m_cc |= 0x01;
    // CD52: ROR $4684
    // TODO: Convert ROR $4684
    // CD55: JSR $692D
    cpu.call_function(0x692D);
    // CD58: CLR $4684
    cpu.write_memory(0x4684, 0);
    // CD5B: RTS 
    return;
    // CD5C: ORCC #$01
    cpu.m_cc |= 0x01;
    // CD5E: ROR $4684
    // TODO: Convert ROR $4684
    // CD61: JSR $6978
    cpu.call_function(0x6978);
    // CD64: CLR $4684
    cpu.write_memory(0x4684, 0);
    // CD67: RTS 
    return;
    // CD68: ORCC #$01
    cpu.m_cc |= 0x01;
    // CD6A: ROR $4684
    // TODO: Convert ROR $4684
    // CD6D: JSR $6A0C
    cpu.call_function(0x6A0C);
    // CD70: CLR $4684
    cpu.write_memory(0x4684, 0);
    // CD73: RTS 
    return;
    // CD74: ORCC #$01
    cpu.m_cc |= 0x01;
    // CD76: ROR $4684
    // TODO: Convert ROR $4684
    // CD79: JSR $6AA0
    cpu.call_function(0x6AA0);
    // CD7C: CLR $4684
    cpu.write_memory(0x4684, 0);
    // CD7F: RTS 
    return;
    // CD80: ORCC #$01
    cpu.m_cc |= 0x01;
    // CD82: ROR $4684
    // TODO: Convert ROR $4684
    // CD85: JSR $7D9A
    cpu.call_function(0x7D9A);
    // CD88: CLR $4684
    cpu.write_memory(0x4684, 0);
    // CD8B: RTS 
    return;
    // CD8C: ORCC #$01
    cpu.m_cc |= 0x01;
    // CD8E: ROR $4684
    // TODO: Convert ROR $4684
    // CD91: JSR $7EAF
    cpu.call_function(0x7EAF);
    // CD94: CLR $4684
    cpu.write_memory(0x4684, 0);
    // CD97: RTS 
    return;
    // CD98: ASRA 
    // TODO: Convert ASRA 
    // CD99: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // CD9A: ASRA 
    // TODO: Convert ASRA 
    // CD9B: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // CD9C: ASRA 
    // TODO: Convert ASRA 
    // CD9D: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // CD9E: ASRA 
    // TODO: Convert ASRA 
    // CD9F: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // CDA0: ASRA 
    // TODO: Convert ASRA 
    // CDA1: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // CDA2: ASRA 
    // TODO: Convert ASRA 
    // CDA3: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // CDA4: ASRA 
    // TODO: Convert ASRA 
    // CDA5: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // CDA6: ASRA 
    // TODO: Convert ASRA 
    // CDA7: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // CDA8: RTS 
    return;
    // CDA9: ASLB 
    cpu.m_b <<= 1;
    // CDAA: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // CDAB: ASLB 
    cpu.m_b <<= 1;
    // CDAC: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // CDAD: ASLB 
    cpu.m_b <<= 1;
    // CDAE: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // CDAF: ASLB 
    cpu.m_b <<= 1;
    // CDB0: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // CDB1: ASLB 
    cpu.m_b <<= 1;
    // CDB2: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // CDB3: ASLB 
    cpu.m_b <<= 1;
    // CDB4: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // CDB5: ASLB 
    cpu.m_b <<= 1;
    // CDB6: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // CDB7: ASLB 
    cpu.m_b <<= 1;
    // CDB8: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // CDB9: RTS 
    return;
    label_CDBA:
    // CDBA: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);
    // CDBD: TST $4320
    // TODO: Convert TST $4320
    // CDC0: BMI $CDBD
    if (cpu.negative_flag()) cpu.m_pc = 0xCDBD;
    // CDC2: RTS 
    return;
    // CDC3: LDD #$0000
    cpu.m_d = 0x0000;
    // CDC6: STD -$A,U
    // TODO: Handle indexed addressing: STD -$A,U
    // CDC8: STD -$2,U
    // TODO: Handle indexed addressing: STD -$2,U
    // CDCA: STD $6,U
    // TODO: Handle indexed addressing: STD $6,U
    // CDCC: STD $8,U
    // TODO: Handle indexed addressing: STD $8,U
    // CDCE: STD $A,U
    // TODO: Handle indexed addressing: STD $A,U
    // CDD0: STD $C,U
    // TODO: Handle indexed addressing: STD $C,U
    // CDD2: STD -$E,U
    // TODO: Handle indexed addressing: STD -$E,U
    // CDD4: STD -$C,U
    // TODO: Handle indexed addressing: STD -$C,U
    // CDD6: STD -$8,U
    // TODO: Handle indexed addressing: STD -$8,U
    // CDD8: STD -$4,U
    // TODO: Handle indexed addressing: STD -$4,U
    // CDDA: STD ,U
    // TODO: Handle indexed addressing: STD ,U
    // CDDC: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U
    // CDDE: LDA #$40
    cpu.m_a = 0x40;
    // CDE0: STD -$10,U
    // TODO: Handle indexed addressing: STD -$10,U
    // CDE2: STD -$6,U
    // TODO: Handle indexed addressing: STD -$6,U
    // CDE4: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U
    // CDE6: RTS 
    return;
    // CDE7: LDD $502A
    cpu.m_d = cpu.read_memory16(0x502A);
    // CDEA: LDU $5030
    cpu.m_u = cpu.read_memory16(0x5030);
    // CDED: STD $5030
    cpu.write_memory16(0x5030, cpu.m_d);
    // CDF0: STU $502A
    cpu.write_memory16(0x502A, cpu.m_u);
    // CDF3: LDD $502C
    cpu.m_d = cpu.read_memory16(0x502C);
    // CDF6: LDU $5038
    cpu.m_u = cpu.read_memory16(0x5038);
    // CDF9: STD $5038
    cpu.write_memory16(0x5038, cpu.m_d);
    // CDFC: STU $502C
    cpu.write_memory16(0x502C, cpu.m_u);
    // CDFF: LDD $5034
    cpu.m_d = cpu.read_memory16(0x5034);
    // CE02: LDU $503A
    cpu.m_u = cpu.read_memory16(0x503A);
    // CE05: STD $503A
    cpu.write_memory16(0x503A, cpu.m_d);
    // CE08: STU $5034
    cpu.write_memory16(0x5034, cpu.m_u);
    // CE0B: RTS 
    return;
    // CE0C: STA $4702
    cpu.write_memory(0x4702, cpu.m_a);
    // CE0F: CLR $4701
    cpu.write_memory(0x4701, 0);
    // CE12: LDA #$77
    cpu.m_a = 0x77;
    // CE14: JSR $CDBA
    cpu.call_function(0xCDBA);
    // CE17: RTS 
    return;
    // CE18: STA $4702
    cpu.write_memory(0x4702, cpu.m_a);
    // CE1B: CLR $4701
    cpu.write_memory(0x4701, 0);
    // CE1E: LDA #$80
    cpu.m_a = 0x80;
    // CE20: JSR $CDBA
    cpu.call_function(0xCDBA);
    // CE23: RTS 
    return;
    // CE24: LDD #$0010
    cpu.m_d = 0x0010;
    // CE27: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);
    // CE2A: LDA #$00
    cpu.m_a = 0x00;
    // CE2C: JMP $CDBA
    goto label_CDBA;
    // CE2F: LDD #$0010
    cpu.m_d = 0x0010;
    // CE32: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);
    // CE35: LDA #$0E
    cpu.m_a = 0x0E;
    // CE37: JMP $CDBA
    goto label_CDBA;
    // CE3A: LDD #$0010
    cpu.m_d = 0x0010;
    // CE3D: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);
    // CE40: LDA #$1C
    cpu.m_a = 0x1C;
    // CE42: JMP $CDBA
    goto label_CDBA;
    // CE45: LDD <$53
    cpu.m_d = cpu.read_memory16(0x53);
    // CE47: STD <$54
    cpu.write_memory16(0x54, cpu.m_d);
    // CE49: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);
    // CE4C: STA <$53
    cpu.write_memory(0x53, cpu.m_a);
    // CE4E: RTS 
    return;
    // CE4F: SYNC 
    // TODO: Convert SYNC 
    // CE50: EORB <$35
    cpu.m_b ^= 0x35;
    // CE52: XSTX #$04C4
    // TODO: Convert XSTX #$04C4
    // CE55: LSRB 
    cpu.m_b >>= 1;
    // CE56: XNCB 
    // TODO: Convert XNCB 
    // CE57: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // CE58: LSRA 
    cpu.m_a >>= 1;
    // CE59: ROLB 
    cpu.m_b = (cpu.m_b << 1) | (cpu.carry_flag() ? 1 : 0);
    // CE5A: BRA $CEA3
    goto label_CEA3;
    // CE5C: CLRA 
    cpu.m_a = 0;
    // CE5D: LSRB 
    cpu.m_b >>= 1;
    // CE5E: BRA $CEB7
    goto label_CEB7;
    // CE60: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // CE61: XNCB 
    // TODO: Convert XNCB 
    // CE62: LSRA 
    cpu.m_a >>= 1;
    // CE63: LSRA 
    cpu.m_a >>= 1;
    // CE64: STA -$2,Y
    // TODO: Handle indexed addressing: STA -$2,Y
    // CE66: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE69: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE6C: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE6F: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE72: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE75: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE78: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE7B: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE7E: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE81: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE84: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE87: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE8A: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE8D: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE90: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE93: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE96: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE99: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE9C: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CE9F: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CEA2: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // CEA5: JMP $cea3
    goto label_CEA3;
}

} // namespace StarWars