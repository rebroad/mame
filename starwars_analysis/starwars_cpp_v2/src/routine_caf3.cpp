#include "cpu_6809.h"

namespace StarWars {

void routine_caf3_impl(CPU6809& cpu) {
    // Converted from rom_disasm_caf3.md
    // Address: 0xCAF3

    // CAF3: LDX $4AEC
    cpu.m_x = cpu.read_memory16(0x4AEC);

    // CAF6: LDB $4AEE
    cpu.m_b = cpu.read_memory(0x4AEE);

    // CAFA: TFR X,U
    cpu.m_u = cpu.m_x;

    // CAFC: LDA $4AEE
    cpu.m_a = cpu.read_memory(0x4AEE);

    // CAFF: CMPA #$03
    cpu.compare_a(0x03);

    // CB01: BCS $CB08
    if (cpu.carry_flag()) cpu.m_pc = 0xCB08;

    // CB03: LDX #$CC10
    cpu.m_x = 0xCC10;

    // CB06: BRA $CB0B
    cpu.m_pc = 0xCB0B;

    // CB08: LDX #$CBA4
    cpu.m_x = 0xCBA4;

    // CB0B: LDD $4879
    cpu.m_d = cpu.read_memory16(0x4879);

    // CB0E: SUBD #$0008
    cpu.m_d -= 0x0008;

    // CB11: SUBD ,X
    // TODO: Complex indexed addressing: ,X

    // CB14: BPL $CB1A
    if (!cpu.negative_flag()) cpu.m_pc = 0xCB1A;

    // CB18: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // CB1A: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // CB1C: CMPD #$0018
    // TODO: Convert CMPD #$0018

    // CB20: BCC $CB49
    if (!cpu.carry_flag()) cpu.m_pc = 0xCB49;

    // CB22: LDD $487B
    cpu.m_d = cpu.read_memory16(0x487B);

    // CB25: ADDD #$FF8C
    cpu.m_d += 0xFF8C;

    // CB28: SUBD $2,X
    // TODO: Fix comma operator: SUBD $2,X

    // CB2B: BPL $CB31
    if (!cpu.negative_flag()) cpu.m_pc = 0xCB31;

    // CB2F: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // CB31: CMPD #$0018
    // TODO: Convert CMPD #$0018

    // CB35: BCC $CB49
    if (!cpu.carry_flag()) cpu.m_pc = 0xCB49;

    // CB37: ADDD <$01
    cpu.m_d += 0x01;

    // CB39: CMPD #$0020
    // TODO: Convert CMPD #$0020

    // CB3D: BCC $CB49
    if (!cpu.carry_flag()) cpu.m_pc = 0xCB49;

    // CB3F: TFR X,D
    cpu.m_d = cpu.m_x;

    // CB41: SUBD #$CBA4
    cpu.m_d -= 0xCBA4;

    // CB46: STB $4AEF
    cpu.write_memory(0x4AEF, cpu.m_b);

    // CB49: LEAX $4,X
    // TODO: Fix comma operator: LEAX $4,X

    // CB4B: CMPX #$CC18
    cpu.compare_x(0xCC18);

    // CB4E: BCS $CB0B
    if (cpu.carry_flag()) cpu.m_pc = 0xCB0B;

    // CB50: LDA $4AEF
    cpu.m_a = cpu.read_memory(0x4AEF);

    // CB53: CMPA #$1B
    cpu.compare_a(0x1B);

    // CB55: BCC $CB59
    if (!cpu.carry_flag()) cpu.m_pc = 0xCB59;

    // CB57: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // CB59: LDA <$AC
    cpu.m_a = cpu.read_memory(0xAC);

    // CB5B: ANDA #$F0
    cpu.m_a &= 0xF0;

    // CB5D: BEQ $CBA3
    if (cpu.zero_flag()) cpu.m_pc = 0xCBA3;

    // CB5F: LDA $4AEF
    cpu.m_a = cpu.read_memory(0x4AEF);

    // CB62: CMPA #$1B
    cpu.compare_a(0x1B);

    // CB64: BNE $CB82
    if (!cpu.zero_flag()) cpu.m_pc = 0xCB82;

    // CB66: LDA $4AEE
    cpu.m_a = cpu.read_memory(0x4AEE);

    // CB69: CMPA #$02
    cpu.compare_a(0x02);

    // CB6B: BHI $CB71
    // TODO: Convert BHI $CB71

    // CB6D: LDA #$00
    cpu.m_a = 0x00;

    // CB6F: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // CB71: LDA $4AEE
    cpu.m_a = cpu.read_memory(0x4AEE);

    // CB74: BEQ $CB7D
    if (cpu.zero_flag()) cpu.m_pc = 0xCB7D;

    // CB76: DEC $4AEE
    // TODO: Convert DEC $4AEE

    // CB79: LDA #$00
    cpu.m_a = 0x00;

    // CB7B: STA -$1,U
    // TODO: Handle indexed addressing: STA -$1,U

    // CB7D: JSR $BDF8
    cpu.call_function(0xBDF8);

    // CB80: BRA $CBA3
    cpu.m_pc = 0xCBA3;

    // CB82: CMPA #$1C
    cpu.compare_a(0x1C);

    // CB84: BNE $CB91
    if (!cpu.zero_flag()) cpu.m_pc = 0xCB91;

    // CB86: LDD #$FFFF
    cpu.m_d = 0xFFFF;

    // CB89: STD $4AEC
    cpu.write_memory16(0x4AEC, cpu.m_d);

    // CB8C: JSR $BDD5
    cpu.call_function(0xBDD5);

    // CB8F: BRA $CBA3
    cpu.m_pc = 0xCBA3;

    // CB91: INC $4AEE
    // TODO: Convert INC $4AEE

    // CB94: LDA $4AEE
    cpu.m_a = cpu.read_memory(0x4AEE);

    // CB97: CMPA #$03
    cpu.compare_a(0x03);

    // CB99: BCS $CBA0
    if (cpu.carry_flag()) cpu.m_pc = 0xCBA0;

    // CB9B: LDA #$1C
    cpu.m_a = 0x1C;

    // CB9D: STA $4AEF
    cpu.write_memory(0x4AEF, cpu.m_a);

    // CBA0: JSR $BE16
    cpu.call_function(0xBE16);

    // CBA4: NEG <$1C
    // TODO: Convert NEG <$1C

    // CBA6: STU $44FE
    cpu.write_memory16(0x44FE, cpu.m_u);

    // CBA9: LDD <$FF
    cpu.m_d = cpu.read_memory16(0xFF);

    // CBAB: ANDA [W,S]
    // TODO: Complex indexed addressing: [W,S]

    // CBAD: LDD <$FF
    cpu.m_d = cpu.read_memory16(0xFF);

    // CBAF: LSR $FEDC
    // TODO: Convert LSR $FEDC

    // CBB2: STU $44FE
    cpu.write_memory16(0x44FE, cpu.m_u);

    // CBB5: LDD <$FF
    cpu.m_d = cpu.read_memory16(0xFF);

    // CBB8: LDU $DCFE
    cpu.m_u = cpu.read_memory16(0xDCFE);

    // CBBB: ANDB [W,S]
    // TODO: Complex indexed addressing: [W,S]

    // CBBD: LDD <$FE
    cpu.m_d = cpu.read_memory16(0xFE);

    // CBBF: ANDA $FEDC
    cpu.m_a &= 0xFEDC;

    // CBC2: LDU $84FE
    cpu.m_u = cpu.read_memory16(0x84FE);

    // CBC5: LDD <$FE
    cpu.m_d = cpu.read_memory16(0xFE);

    // CBC8: LDU $DCFE
    cpu.m_u = cpu.read_memory16(0xDCFE);

    // CBCB: BCC $CBCC
    if (!cpu.carry_flag()) cpu.m_pc = 0xCBCC;

    // CBCD: INC <$FE
    // TODO: Convert INC <$FE

    // CBCF: BCC $CBD0
    if (!cpu.carry_flag()) cpu.m_pc = 0xCBD0;

    // CBD1: CWAI #$FE
    // TODO: Convert CWAI #$FE

    // CBD3: BCC $CBD4
    if (!cpu.carry_flag()) cpu.m_pc = 0xCBD4;

    // CBD5: INC [W,S]
    // TODO: Convert INC [W,S]

    // CBD7: BCC $CBD8
    if (!cpu.carry_flag()) cpu.m_pc = 0xCBD8;

    // CBD9: CMPX <$FE
    cpu.compare_x(cpu.read_memory16(0xFE));

    // CBDB: BCC $CBDC
    if (!cpu.carry_flag()) cpu.m_pc = 0xCBDC;

    // CBDD: LDD #$FE24
    cpu.m_d = 0xFE24;

    // CBE0: STU $FCFE
    cpu.write_memory16(0xFCFE, cpu.m_u);

    // CBE3: BCC $CBE5
    if (!cpu.carry_flag()) cpu.m_pc = 0xCBE5;

    // CBE5: BGE $CBE5
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xCBE5;

    // CBE7: BCC $CBE9
    if (!cpu.carry_flag()) cpu.m_pc = 0xCBE9;

    // CBEA: LDU $2400
    cpu.m_u = cpu.read_memory16(0x2400);

    // CBED: CMPX #$FE24
    cpu.compare_x(0xFE24);

    // CBF0: NEG <$BC
    // TODO: Convert NEG <$BC

    // CBF2: LDU $2400
    cpu.m_u = cpu.read_memory16(0x2400);

    // CBF5: LDD [W,S]
    // TODO: Complex indexed addressing: [W,S]

    // CBF7: BCC $CBFA
    if (!cpu.carry_flag()) cpu.m_pc = 0xCBFA;

    // CBF9: ANDCC #$FE
    // TODO: Convert ANDCC #$FE

    // CBFB: BCC $CBFE
    if (!cpu.carry_flag()) cpu.m_pc = 0xCBFE;

    // CBFD: ANDCC #$FE
    // TODO: Convert ANDCC #$FE

    // CC00: NEG <$1C
    // TODO: Convert NEG <$1C

    // CC02: LDU $8401
    cpu.m_u = cpu.read_memory16(0x8401);

    // CC05: ANDCC #$FE
    // TODO: Convert ANDCC #$FE

    // CC07: ANDA $011C
    cpu.m_a &= 0x011C;

    // CC0A: LDU $E401
    cpu.m_u = cpu.read_memory16(0xE401);

    // CC0D: ANDCC #$FF
    // TODO: Convert ANDCC #$FF

    // CC10: NEG <$1C
    // TODO: Convert NEG <$1C

    // CC12: STU $7401
    cpu.write_memory16(0x7401, cpu.m_u);

    // CC15: ANDCC #$FF
    // TODO: Convert ANDCC #$FF

    // CC17: ANDA [$9876,PCR]
    // TODO: Complex indexed addressing: [$9876,PCR]

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

    // CCF2: ROR >$0000
    // TODO: Convert ROR >$0000

}

} // namespace StarWars