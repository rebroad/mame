#include "cpu_6809.h"

namespace StarWars {

void routine_cccc_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_cccc.md
    // Address: 0xCCCC

    // CCCC: ORCC #$01
    cpu.state_.cc |= 0x01;

    // CCCE: ROR $4684
    // TODO: Convert ROR $4684

    // CCD1: JSR $6724
    cpu.call_function(0x6724);

    // CCD4: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CCD8: ORCC #$01
    cpu.state_.cc |= 0x01;

    // CCDA: ROR $4684
    // TODO: Convert ROR $4684

    // CCDD: JSR $6726
    cpu.call_function(0x6726);

    // CCE0: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CCE4: ORCC #$01
    cpu.state_.cc |= 0x01;

    // CCE6: ROR $4684
    // TODO: Convert ROR $4684

    // CCE9: JSR $6761
    cpu.call_function(0x6761);

    // CCEC: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CCF0: ORCC #$01
    cpu.state_.cc |= 0x01;

    // CCF2: ROR $4684
    // TODO: Convert ROR $4684

    // CCF5: JSR $6761
    cpu.call_function(0x6761);

    // CCF8: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CCFC: ORCC #$01
    cpu.state_.cc |= 0x01;

    // CCFE: ROR $4684
    // TODO: Convert ROR $4684

    // CD01: JSR $6782
    cpu.call_function(0x6782);

    // CD04: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD08: ORCC #$01
    cpu.state_.cc |= 0x01;

    // CD0A: ROR $4684
    // TODO: Convert ROR $4684

    // CD0D: JSR $67AA
    cpu.call_function(0x67AA);

    // CD10: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD14: ORCC #$01
    cpu.state_.cc |= 0x01;

    // CD16: ROR $4684
    // TODO: Convert ROR $4684

    // CD19: JSR $67D2
    cpu.call_function(0x67D2);

    // CD1C: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD20: ORCC #$01
    cpu.state_.cc |= 0x01;

    // CD22: ROR $4684
    // TODO: Convert ROR $4684

    // CD25: JSR $67D4
    cpu.call_function(0x67D4);

    // CD28: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD2C: ORCC #$01
    cpu.state_.cc |= 0x01;

    // CD2E: ROR $4684
    // TODO: Convert ROR $4684

    // CD31: JSR $6819
    cpu.call_function(0x6819);

    // CD34: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD38: ORCC #$01
    cpu.state_.cc |= 0x01;

    // CD3A: ROR $4684
    // TODO: Convert ROR $4684

    // CD3D: JSR $6864
    cpu.call_function(0x6864);

    // CD40: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD44: ORCC #$01
    cpu.state_.cc |= 0x01;

    // CD46: ROR $4684
    // TODO: Convert ROR $4684

    // CD49: JSR $68C7
    cpu.call_function(0x68C7);

    // CD4C: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD50: ORCC #$01
    cpu.state_.cc |= 0x01;

    // CD52: ROR $4684
    // TODO: Convert ROR $4684

    // CD55: JSR $692D
    cpu.call_function(0x692D);

    // CD58: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD5C: ORCC #$01
    cpu.state_.cc |= 0x01;

    // CD5E: ROR $4684
    // TODO: Convert ROR $4684

    // CD61: JSR $6978
    cpu.call_function(0x6978);

    // CD64: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD68: ORCC #$01
    cpu.state_.cc |= 0x01;

    // CD6A: ROR $4684
    // TODO: Convert ROR $4684

    // CD6D: JSR $6A0C
    cpu.call_function(0x6A0C);

    // CD70: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD74: ORCC #$01
    cpu.state_.cc |= 0x01;

    // CD76: ROR $4684
    // TODO: Convert ROR $4684

    // CD79: JSR $6AA0
    cpu.call_function(0x6AA0);

    // CD7C: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD80: ORCC #$01
    cpu.state_.cc |= 0x01;

    // CD82: ROR $4684
    // TODO: Convert ROR $4684

    // CD85: JSR $7D9A
    cpu.call_function(0x7D9A);

    // CD88: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD8C: ORCC #$01
    cpu.state_.cc |= 0x01;

    // CD8E: ROR $4684
    // TODO: Convert ROR $4684

    // CD91: JSR $7EAF
    cpu.call_function(0x7EAF);

    // CD94: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CDBA: STA $4700
    cpu.write_memory(0x4700, cpu.state_.a);

    // CDBD: TST $4320
    // TODO: Convert TST $4320

    // CDC0: BMI $00F1
    if (cpu.negative_flag()) cpu.state_.pc = 0xCDB3;

    // CDC3: LDD #$0000
    cpu.state_.d = 0x0000;

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
    cpu.state_.a = 0x40;

    // CDE0: STD -$10,U
    // TODO: Handle indexed addressing: STD -$10,U

    // CDE2: STD -$6,U
    // TODO: Handle indexed addressing: STD -$6,U

    // CDE4: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // CDE7: LDD $502A
    cpu.state_.d = cpu.read_memory_word(0x502A);

    // CDEA: LDU $5030
    cpu.state_.u = cpu.read_memory_word(0x5030);

    // CDED: STD $5030
    cpu.write_memory(0x5030, cpu.state_.d);

    // CDF0: STU $502A
    cpu.write_memory(0x502A, cpu.state_.u);

    // CDF3: LDD $502C
    cpu.state_.d = cpu.read_memory_word(0x502C);

    // CDF6: LDU $5038
    cpu.state_.u = cpu.read_memory_word(0x5038);

    // CDF9: STD $5038
    cpu.write_memory(0x5038, cpu.state_.d);

    // CDFC: STU $502C
    cpu.write_memory(0x502C, cpu.state_.u);

    // CDFF: LDD $5034
    cpu.state_.d = cpu.read_memory_word(0x5034);

    // CE02: LDU $503A
    cpu.state_.u = cpu.read_memory_word(0x503A);

    // CE05: STD $503A
    cpu.write_memory(0x503A, cpu.state_.d);

    // CE08: STU $5034
    cpu.write_memory(0x5034, cpu.state_.u);

    // CE0C: STA $4702
    cpu.write_memory(0x4702, cpu.state_.a);

    // CE0F: CLR $4701
    cpu.write_memory(0x4701, 0);

    // CE12: LDA #$77
    cpu.state_.a = 0x77;

    // CE14: JSR $CDBA
    cpu.call_function(0xCDBA);

    // CE18: STA $4702
    cpu.write_memory(0x4702, cpu.state_.a);

    // CE1B: CLR $4701
    cpu.write_memory(0x4701, 0);

    // CE1E: LDA #$80
    cpu.state_.a = 0x80;

    // CE20: JSR $CDBA
    cpu.call_function(0xCDBA);

    // CE24: LDD #$0010
    cpu.state_.d = 0x0010;

    // CE27: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // CE2A: LDA #$00
    cpu.state_.a = 0x00;

    // CE2C: JMP $CDBA
    cpu.state_.pc = 0xCDBA;

    // CE2F: LDD #$0010
    cpu.state_.d = 0x0010;

    // CE32: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // CE35: LDA #$0E
    cpu.state_.a = 0x0E;

    // CE37: JMP $CDBA
    cpu.state_.pc = 0xCDBA;

    // CE3A: LDD #$0010
    cpu.state_.d = 0x0010;

    // CE3D: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // CE40: LDA #$1C
    cpu.state_.a = 0x1C;

    // CE42: JMP $CDBA
    cpu.state_.pc = 0xCDBA;

    // CE45: LDD <$53
    cpu.state_.d = cpu.read_memory_word(0x53);

    // CE47: STD <$54
    cpu.write_memory(0x54, cpu.state_.d);

    // CE49: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // CE4C: STA <$53
    cpu.write_memory(0x53, cpu.state_.a);

    // CE50: EORB <$35
    cpu.state_.b ^= 0x35;

    // CE52: XSTX #$04C4
    // TODO: Convert XSTX #$04C4

    // CE5A: BRA $01D7
    cpu.state_.pc = 0xCE33;

    // CE5E: BRA $01EB
    cpu.state_.pc = 0xCE4B;

    // CE64: STA -$2,Y
    // TODO: Handle indexed addressing: STA -$2,Y

    // CE66: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE69: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE6C: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE6F: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE72: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE75: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE78: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE7B: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE7E: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE81: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE84: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE87: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE8A: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE8D: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE90: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE93: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE96: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE99: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE9C: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CE9F: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CEA2: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CEA5: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CEA8: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CEAB: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CEAE: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CEB1: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CEB4: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CEB7: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CEBA: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CEBD: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CEC0: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CEC3: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CEC6: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // CEC9: STU $434F
    cpu.write_memory(0x434F, cpu.state_.u);

}

} // namespace StarWars