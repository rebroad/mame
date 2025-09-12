#include "cpu_6809.h"

namespace StarWars {

void routine_cc18_impl(CPU6809& cpu) {
    // Converted from rom_disasm_cc18.md
    // Address: 0xCC18

    // CC18: JSR $CC5B
    cpu.call_function(0xCC5B);

    // CC1B: LDA #$01
    cpu.m_a = 0x01;

    // CC1D: JSR $C2C3
    cpu.call_function(0xC2C3);

    // CC20: BNE $CC38
    if (!cpu.zero_flag()) cpu.m_pc = 0xCC38;

    // CC22: LDU #$4AB6
    cpu.m_u = 0x4AB6;

    // CC25: LDX #$4520
    cpu.m_x = 0x4520;

    // CC28: LDA #$08
    cpu.m_a = 0x08;

    // CC2A: JSR $C6D9
    cpu.call_function(0xC6D9);

    // CC2D: LDU #$4A8E
    cpu.m_u = 0x4A8E;

    // CC30: LDX #$4508
    cpu.m_x = 0x4508;

    // CC33: LDA #$0B
    cpu.m_a = 0x0B;

    // CC35: JSR $C6D9
    cpu.call_function(0xC6D9);

    // CC38: LDX #$4AB6
    cpu.m_x = 0x4AB6;

    // CC3B: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // CC3D: CMPA #$1B
    cpu.compare_a(0x1B);

    // CC3F: BCC $CC5B
    if (!cpu.carry_flag()) cpu.m_pc = 0xCC5B;

    // CC41: CMPX #$4AD4
    cpu.compare_x(0x4AD4);

    // CC44: BCS $CC3B
    if (cpu.carry_flag()) cpu.m_pc = 0xCC3B;

    // CC46: LDX #$4A8E
    cpu.m_x = 0x4A8E;

    // CC49: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // CC4B: CMPA #$A0
    cpu.compare_a(0xA0);

    // CC4D: BCC $CC5B
    if (!cpu.carry_flag()) cpu.m_pc = 0xCC5B;

    // CC4F: ANDA #$0F
    cpu.m_a &= 0x0F;

    // CC51: CMPA #$0A
    cpu.compare_a(0x0A);

    // CC53: BCC $CC5B
    if (!cpu.carry_flag()) cpu.m_pc = 0xCC5B;

    // CC55: CMPX #$4AB6
    cpu.compare_x(0x4AB6);

    // CC58: BCS $CC49
    if (cpu.carry_flag()) cpu.m_pc = 0xCC49;

    // CC5B: LDX #$4AB6
    cpu.m_x = 0x4AB6;

    // CC5E: LDU #$CC7A
    cpu.m_u = 0xCC7A;

    // CC61: LDD ,U++
    cpu.m_d = cpu.read_memory16(cpu.m_u++);

    // CC63: STD ,X++
    cpu.write_memory16(cpu.m_x++, cpu.m_d);

    // CC65: CMPX #$4AD4
    cpu.compare_x(0x4AD4);

    // CC68: BCS $CC61
    if (cpu.carry_flag()) cpu.m_pc = 0xCC61;

    // CC6A: LDX #$4A8E
    cpu.m_x = 0x4A8E;

    // CC6D: LDU #$CC98
    cpu.m_u = 0xCC98;

    // CC70: LDD ,U++
    cpu.m_d = cpu.read_memory16(cpu.m_u++);

    // CC72: STD ,X++
    cpu.write_memory16(cpu.m_x++, cpu.m_d);

    // CC74: CMPX #$4AB6
    cpu.compare_x(0x4AB6);

    // CC77: BCS $CC70
    if (cpu.carry_flag()) cpu.m_pc = 0xCC70;

    // CC7A: CLR <$02
    cpu.write_memory(0x02, 0);

    // CC7C: ROL <$17
    // TODO: Convert ROL <$17

    // CC7E: NEG <$0E
    // TODO: Convert NEG <$0E

    // CC80: ASL <$01
    // TODO: Convert ASL <$01

    // CC82: JMP <$07
    cpu.m_pc = 0x07;

    // CC84: DEC <$12
    // TODO: Convert DEC <$12

    // CC86: TST <$0C
    // TODO: Convert TST <$0C

    // CC88: ASL <$0A
    // TODO: Convert ASL <$0A

    // CC8A: LSR <$04
    // TODO: Convert LSR <$04

    // CC8C: JMP <$0C
    cpu.m_pc = 0x0C;

    // CC8E: NEG <$05
    // TODO: Convert NEG <$05

    // CC90: DEC <$04
    // TODO: Convert DEC <$04

    // CC92: LSR <$01
    // TODO: Convert LSR <$01

    // CC96: INC <$0D
    // TODO: Convert INC <$0D

    // CC98: NEG <$28
    // TODO: Convert NEG <$28

    // CC9C: NEG <$11
    // TODO: Convert NEG <$11

    // CC9E: ROL <$36
    // TODO: Convert ROL <$36

    // CCA0: NEG <$02
    // TODO: Convert NEG <$02

    // CCA4: NEG <$87
    // TODO: Convert NEG <$87

    // CCA6: BCS $CCF9
    if (cpu.carry_flag()) cpu.m_pc = 0xCCF9;

    // CCA8: NEG <$81
    // TODO: Convert NEG <$81

    // CCAA: PULS CC,A,X,U
    // TODO: Convert PULS CC,A,X,U

    // CCAC: NEG <$70
    // TODO: Convert NEG <$70

    // CCAF: ADCA <$00
    // TODO: Convert ADCA <$00

    // CCB2: SUBA #$00
    cpu.m_a -= 0x00;

    // CCB4: NEG <$49
    // TODO: Convert NEG <$49

    // CCB6: BRN $CD11
    // TODO: Convert BRN $CD11

    // CCB8: NEG <$38
    // TODO: Convert NEG <$38

    // CCBB: ROR $0,X
    // TODO: Convert ROR $0,X

    // CCBD: XANDCC #$06
    // TODO: Convert XANDCC #$06

    // CCC0: ORCC #$01
    cpu.m_cc |= 0x01;

    // CCC2: ROR $4684
    // TODO: Convert ROR $4684

    // CCC5: JSR $670D
    cpu.call_function(0x670D);

    // CCC8: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CCCC: ORCC #$01
    cpu.m_cc |= 0x01;

    // CCCE: ROR $4684
    // TODO: Convert ROR $4684

    // CCD1: JSR $6724
    cpu.call_function(0x6724);

    // CCD4: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CCD8: ORCC #$01
    cpu.m_cc |= 0x01;

    // CCDA: ROR $4684
    // TODO: Convert ROR $4684

    // CCDD: JSR $6726
    cpu.call_function(0x6726);

    // CCE0: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CCE4: ORCC #$01
    cpu.m_cc |= 0x01;

    // CCE6: ROR $4684
    // TODO: Convert ROR $4684

    // CCE9: JSR $6761
    cpu.call_function(0x6761);

    // CCEC: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CCF0: ORCC #$01
    cpu.m_cc |= 0x01;

    // CCF2: ROR $4684
    // TODO: Convert ROR $4684

    // CCF5: JSR $6761
    cpu.call_function(0x6761);

    // CCF8: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CCFC: ORCC #$01
    cpu.m_cc |= 0x01;

    // CCFE: ROR $4684
    // TODO: Convert ROR $4684

    // CD01: JSR $6782
    cpu.call_function(0x6782);

    // CD04: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD08: ORCC #$01
    cpu.m_cc |= 0x01;

    // CD0A: ROR $4684
    // TODO: Convert ROR $4684

    // CD0D: JSR $67AA
    cpu.call_function(0x67AA);

    // CD10: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD14: ORCC #$01
    cpu.m_cc |= 0x01;

    // CD16: ROR $4684
    // TODO: Convert ROR $4684

    // CD19: JSR $67D2
    cpu.call_function(0x67D2);

    // CD1C: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD20: ORCC #$01
    cpu.m_cc |= 0x01;

    // CD22: ROR $4684
    // TODO: Convert ROR $4684

    // CD25: JSR $67D4
    cpu.call_function(0x67D4);

    // CD28: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD2C: ORCC #$01
    cpu.m_cc |= 0x01;

    // CD2E: ROR $4684
    // TODO: Convert ROR $4684

    // CD31: JSR $6819
    cpu.call_function(0x6819);

    // CD34: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD38: ORCC #$01
    cpu.m_cc |= 0x01;

    // CD3A: ROR $4684
    // TODO: Convert ROR $4684

    // CD3D: JSR $6864
    cpu.call_function(0x6864);

    // CD40: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD44: ORCC #$01
    cpu.m_cc |= 0x01;

    // CD46: ROR $4684
    // TODO: Convert ROR $4684

    // CD49: JSR $68C7
    cpu.call_function(0x68C7);

    // CD4C: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD50: ORCC #$01
    cpu.m_cc |= 0x01;

    // CD52: ROR $4684
    // TODO: Convert ROR $4684

    // CD55: JSR $692D
    cpu.call_function(0x692D);

    // CD58: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD5C: ORCC #$01
    cpu.m_cc |= 0x01;

    // CD5E: ROR $4684
    // TODO: Convert ROR $4684

    // CD61: JSR $6978
    cpu.call_function(0x6978);

    // CD64: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD68: ORCC #$01
    cpu.m_cc |= 0x01;

    // CD6A: ROR $4684
    // TODO: Convert ROR $4684

    // CD6D: JSR $6A0C
    cpu.call_function(0x6A0C);

    // CD70: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD74: ORCC #$01
    cpu.m_cc |= 0x01;

    // CD76: ROR $4684
    // TODO: Convert ROR $4684

    // CD79: JSR $6AA0
    cpu.call_function(0x6AA0);

    // CD7C: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD80: ORCC #$01
    cpu.m_cc |= 0x01;

    // CD82: ROR $4684
    // TODO: Convert ROR $4684

    // CD85: JSR $7D9A
    cpu.call_function(0x7D9A);

    // CD88: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CD8C: ORCC #$01
    cpu.m_cc |= 0x01;

    // CD8E: ROR $4684
    // TODO: Convert ROR $4684

    // CD91: JSR $7EAF
    cpu.call_function(0x7EAF);

    // CD94: CLR $4684
    cpu.write_memory(0x4684, 0);

    // CDBA: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // CDBD: TST $4320
    // TODO: Convert TST $4320

    // CDC0: BMI $CDBD
    if (cpu.negative_flag()) cpu.m_pc = 0xCDBD;

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

    // CE0C: STA $4702
    cpu.write_memory(0x4702, cpu.m_a);

    // CE0F: CLR $4701
    cpu.write_memory(0x4701, 0);

    // CE12: LDA #$77
    cpu.m_a = 0x77;

    // CE14: JSR $CDBA
    cpu.call_function(0xCDBA);

}

} // namespace StarWars