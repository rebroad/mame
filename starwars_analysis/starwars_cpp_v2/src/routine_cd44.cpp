#include "cpu_6809.h"

namespace StarWars {

void routine_cd44_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_cd44.md
    // Address: 0xCD44

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

    // CDC0: BMI $0079
    if (cpu.negative_flag()) cpu.state_.pc += 0x0079;

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

    // CE5A: BRA $015F
    cpu.state_.pc += 0x015F;

    // CE5E: BRA $0173
    cpu.state_.pc += 0x0173;

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

    // CED3: BRA $01C2
    cpu.state_.pc += 0x01C2;

    // CED6: XANDCC #$33
    // TODO: Convert XANDCC #$33

    // CED8: BRA $01D7
    cpu.state_.pc += 0x01D7;

    // CEDE: ORCC #$F6
    cpu.state_.cc |= 0xF6;

    // CEE1: EORA $0,X
    // TODO: Fix comma operator: EORA $0,X

    // CEE3: NEG <$E2
    // TODO: Convert NEG <$E2

    // CEE5: ASL <$1F
    // TODO: Convert ASL <$1F

    // CEE7: JMP $E000
    cpu.state_.pc = 0xE000;

    // CEEA: NEG <$00
    // TODO: Convert NEG <$00

    // CEEC: STU $74BB
    cpu.write_memory(0x74BB, cpu.state_.u);

    // CEEF: CMPA <$1E
    cpu.compare_a(cpu.read_memory(0x1E));

    // CEF1: SUBB #$FF
    cpu.state_.b -= 0xFF;

    // CEF3: LDU #$BB8B
    cpu.state_.u = 0xBB8B;

    // CEF6: NEG <$00
    // TODO: Convert NEG <$00

    // CEF8: STU $4CBB
    cpu.write_memory(0x4CBB, cpu.state_.u);

    // CEFB: CMPA <$01
    cpu.compare_a(cpu.read_memory(0x01));

    // CEFE: SUBB -$10,U
    // TODO: Fix comma operator: SUBB -$10,U

    // CF00: NEG <$00
    // TODO: Convert NEG <$00

    // CF02: STU $4C51
    cpu.write_memory(0x4C51, cpu.state_.u);

    // CF05: ADDB $1FEC
    cpu.state_.b += 0x1FEC;

    // CF08: SUBB -$E,Y
    // TODO: Fix comma operator: SUBB -$E,Y

    // CF0A: TFR CC,inv
    cpu.state_.inv = cpu.state_.cc;

    // CF0C: SUBB -$E,Y
    // TODO: Fix comma operator: SUBB -$E,Y

    // CF0E: ADDA $911F
    cpu.state_.a += 0x911F;

    // CF11: SUBA $FFEC
    cpu.state_.a -= 0xFFEC;

    // CF14: ADDA $911F
    cpu.state_.a += 0x911F;

    // CF17: CMPX <$FF
    cpu.compare_x(cpu.read_memory_word(0xFF));

    // CF19: EORA #$BB
    cpu.state_.a ^= 0xBB;

    // CF1B: ADDA #$00
    cpu.state_.a += 0x00;

    // CF1D: NEG <$FE
    // TODO: Convert NEG <$FE

    // CF1F: INC <$BB
    // TODO: Convert INC <$BB

    // CF21: ADDA #$00
    cpu.state_.a += 0x00;

    // CF23: CMPX #$E05A
    cpu.compare_x(0xE05A);

    // CF26: NEG <$00
    // TODO: Convert NEG <$00

    // CF28: CMPB $0,U
    // TODO: Fix comma operator: CMPB $0,U

    // CF2B: BITB $0,X
    // TODO: Convert BITB $0,X

    // CF2E: STU $D8BB
    cpu.write_memory(0xD8BB, cpu.state_.u);

    // CF31: BITA #$00
    // TODO: Convert BITA #$00

    // CF34: STU $CEBB
    cpu.write_memory(0xCEBB, cpu.state_.u);

    // CF37: ADDA #$00
    cpu.state_.a += 0x00;

    // CF3A: SUBB $8,Y
    // TODO: Fix comma operator: SUBB $8,Y

    // CF3C: NEG <$64
    // TODO: Convert NEG <$64

    // CF3E: SUBB ,-X
    // TODO: Complex indexed addressing: ,-X

    // CF40: XNC >$0080
    // TODO: Convert XNC >$0080

}

} // namespace StarWars