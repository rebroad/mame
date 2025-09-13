#include "cpu_6809.h"

namespace StarWars {

void routine_ef7f_f261_impl(CPU6809& cpu) {
    // Converted from rom_disasm_ef7f_f261.md
    // Address: 0xEF7F_F261

    // EF7F: INC <$0A
    // TODO: Convert INC <$0A

    // EF81: JSR $D776
    cpu.call_function(0xD776);

    // EF84: LDA <$14
    cpu.m_a = cpu.read_memory(0x14);

    // EF86: CMPA #$24
    cpu.compare_a(0x24);

    // EF88: BCS $EF8B
    if (cpu.carry_flag()) cpu.m_pc = 0xEF8B;

    // EF8B: LDX #$481C
    cpu.m_x = 0x481C;

    // EF8E: LDA $4300
    cpu.m_a = cpu.read_memory(0x4300);

    // EF91: JSR $F133
    cpu.call_function(0xF133);

    // EF94: LDA $4320
    cpu.m_a = cpu.read_memory(0x4320);

    // EF97: JSR $F133
    cpu.call_function(0xF133);

    // EF9A: LDA $4340
    cpu.m_a = cpu.read_memory(0x4340);

    // EF9D: JSR $F133
    cpu.call_function(0xF133);

    // EFA0: LDA $4360
    cpu.m_a = cpu.read_memory(0x4360);

    // EFA3: JSR $F133
    cpu.call_function(0xF133);

    // EFA6: LDA <$33
    cpu.m_a = cpu.read_memory(0x33);

    // EFA8: STA <$34
    cpu.write_memory(0x34, cpu.m_a);

    // EFAA: LDA $4821
    cpu.m_a = cpu.read_memory(0x4821);

    // EFAD: ANDA #$30
    cpu.m_a &= 0x30;

    // EFAF: STA -$1,S
    // TODO: Handle indexed addressing: STA -$1,S

    // EFB1: LDA $481E
    cpu.m_a = cpu.read_memory(0x481E);

    // EFB4: ANDA #$CF
    cpu.m_a &= 0xCF;

    // EFB6: ORA -$1,S
    // TODO: Fix comma operator: ORA -$1,S

    // EFB8: STA <$33
    cpu.write_memory(0x33, cpu.m_a);

    // EFBA: EORA <$34
    cpu.m_a ^= 0x34;

    // EFBC: ANDA <$34
    cpu.m_a &= 0x34;

    // EFBE: STA <$32
    cpu.write_memory(0x32, cpu.m_a);

    // EFC0: LDA <$32
    cpu.m_a = cpu.read_memory(0x32);

    // EFC2: ANDA #$F0
    cpu.m_a &= 0xF0;

    // EFC4: BEQ $EFCA
    if (cpu.zero_flag()) cpu.m_pc = 0xEFCA;

    // EFC6: ORA <$31
    cpu.m_a |= 0x31;

    // EFC8: STA <$31
    cpu.write_memory(0x31, cpu.m_a);

    // EFCA: JSR $F146
    cpu.call_function(0xF146);

    // EFCD: LDA <$0A
    cpu.m_a = cpu.read_memory(0x0A);

    // EFCF: BNE $EFE6
    if (!cpu.zero_flag()) cpu.m_pc = 0xEFE6;

    // EFD1: LDA $4401
    cpu.m_a = cpu.read_memory(0x4401);

    // EFD5: BPL $EFDE
    if (!cpu.negative_flag()) cpu.m_pc = 0xEFDE;

    // EFD7: LDA $4400
    cpu.m_a = cpu.read_memory(0x4400);

    // EFDA: CMPA #$5A
    cpu.compare_a(0x5A);

    // EFDC: BEQ $EFE6
    if (cpu.zero_flag()) cpu.m_pc = 0xEFE6;

    // EFDE: STA $46E0
    cpu.write_memory(0x46E0, cpu.m_a);

    // EFE1: LDA #$00
    cpu.m_a = 0x00;

    // EFE3: STA $4400
    cpu.write_memory(0x4400, cpu.m_a);

    // EFE6: LDA <$0A
    cpu.m_a = cpu.read_memory(0x0A);

    // EFE8: ANDA #$03
    cpu.m_a &= 0x03;

    // EFEA: BNE $F034
    if (!cpu.zero_flag()) cpu.m_pc = 0xF034;

    // EFEC: LDA $481B
    cpu.m_a = cpu.read_memory(0x481B);

    // EFEF: ADDA #$01
    cpu.m_a += 0x01;

    // EFF1: CMPA #$FA
    cpu.compare_a(0xFA);

    // EFF3: BCS $EFF7
    if (cpu.carry_flag()) cpu.m_pc = 0xEFF7;

    // EFF5: LDA #$00
    cpu.m_a = 0x00;

    // EFF7: STA $481B
    cpu.write_memory(0x481B, cpu.m_a);

    // EFFA: BNE $F034
    if (!cpu.zero_flag()) cpu.m_pc = 0xF034;

    // EFFC: LDA $481A
    cpu.m_a = cpu.read_memory(0x481A);

    // EFFF: ADDA #$01
    cpu.m_a += 0x01;

    // F002: STA $481A
    cpu.write_memory(0x481A, cpu.m_a);

    // F005: LDA $4819
    cpu.m_a = cpu.read_memory(0x4819);

    // F008: ADCA #$00
    // TODO: Convert ADCA #$00

    // F00B: BCS $F010
    if (cpu.carry_flag()) cpu.m_pc = 0xF010;

    // F00D: STA $4819
    cpu.write_memory(0x4819, cpu.m_a);

    // F010: LDA $4B07
    cpu.m_a = cpu.read_memory(0x4B07);

    // F013: ADDA #$01
    cpu.m_a += 0x01;

    // F016: STA $4B07
    cpu.write_memory(0x4B07, cpu.m_a);

    // F019: LDA $4B06
    cpu.m_a = cpu.read_memory(0x4B06);

    // F01C: ADCA #$00
    // TODO: Convert ADCA #$00

    // F01F: STA $4B06
    cpu.write_memory(0x4B06, cpu.m_a);

    // F022: LDA $4B05
    cpu.m_a = cpu.read_memory(0x4B05);

    // F025: ADCA #$00
    // TODO: Convert ADCA #$00

    // F028: STA $4B05
    cpu.write_memory(0x4B05, cpu.m_a);

    // F02B: LDA $4B04
    cpu.m_a = cpu.read_memory(0x4B04);

    // F02E: ADCA #$00
    // TODO: Convert ADCA #$00

    // F031: STA $4B04
    cpu.write_memory(0x4B04, cpu.m_a);

    // F034: DEC <$40
    // TODO: Convert DEC <$40

    // F036: BVC $F041
    // TODO: Convert BVC $F041

    // F038: STA $4620
    cpu.write_memory(0x4620, cpu.m_a);

    // F03B: JSR $611E
    cpu.call_function(0x611E);

    // F03E: JMP $F12F
    goto label_F12F;

    // F041: LBPL $F12F
    // TODO: Convert LBPL $F12F

    // F045: LDA $4320
    cpu.m_a = cpu.read_memory(0x4320);

    // F049: LBPL $F12F
    // TODO: Convert LBPL $F12F

    // F04D: LDA <$3F
    cpu.m_a = cpu.read_memory(0x3F);

    // F04F: BPL $F06A
    if (!cpu.negative_flag()) cpu.m_pc = 0xF06A;

    // F051: LDA >$0000
    cpu.m_a = cpu.read_memory(0x0000);

    // F054: ANDA #$0A
    cpu.m_a &= 0x0A;

    // F056: BEQ $F05A
    if (cpu.zero_flag()) cpu.m_pc = 0xF05A;

    // F058: LDA #$14
    cpu.m_a = 0x14;

    // F05A: ORA #$00
    cpu.m_a |= 0x00;

    // F05C: STA <$3F
    cpu.write_memory(0x3F, cpu.m_a);

    // F05E: LDB #$38
    cpu.m_b = 0x38;

    // F061: ANDA #$0A
    cpu.m_a &= 0x0A;

    // F063: EORA #$0A
    cpu.m_a ^= 0x0A;

    // F065: ORA #$E0
    cpu.m_a |= 0xE0;

    // F067: STD >$0000
    cpu.write_memory16(0x0000, cpu.m_d);

    // F06A: DEC <$28
    // TODO: Convert DEC <$28

    // F06C: BPL $F073
    if (!cpu.negative_flag()) cpu.m_pc = 0xF073;

    // F06E: CLR <$28
    cpu.write_memory(0x28, 0);

    // F070: JSR $F18D
    cpu.call_function(0xF18D);

    // F073: JSR $F22B
    cpu.call_function(0xF22B);

    // F076: LDB <$3A
    cpu.m_b = cpu.read_memory(0x3A);

    // F078: ADDB #$02
    cpu.m_b += 0x02;

    // F07A: CMPB #$20
    cpu.compare_b(0x20);

    // F07C: BCS $F07F
    if (cpu.carry_flag()) cpu.m_pc = 0xF07F;

    // F07F: STB <$3A
    cpu.write_memory(0x3A, cpu.m_b);

    // F081: LDX #$0004
    cpu.m_x = 0x0004;

    // F085: LDU #$D620
    cpu.m_u = 0xD620;

    // F088: LDD ,U++
    cpu.m_d = cpu.read_memory16(cpu.m_u++);

    // F08A: STD ,--X
    // TODO: Handle indexed addressing: STD ,--X

    // F08C: CMPX #$0002
    cpu.compare_x(0x0002);

    // F08F: BGT $F088
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xF088;

    // F091: LDX #$0022
    cpu.m_x = 0x0022;

    // F094: CMPU #$D640
    // TODO: Convert CMPU #$D640

    // F098: BCC $F0A0
    if (!cpu.carry_flag()) cpu.m_pc = 0xF0A0;

    // F09A: LDD ,U++
    cpu.m_d = cpu.read_memory16(cpu.m_u++);

    // F09C: STD ,--X
    // TODO: Handle indexed addressing: STD ,--X

    // F09E: BRA $F094
    goto label_F094;

    // F0A0: LDB <$3B
    cpu.m_b = cpu.read_memory(0x3B);

    // F0A2: ADDB #$02
    cpu.m_b += 0x02;

    // F0A4: CMPB #$08
    cpu.compare_b(0x08);

    // F0A6: BCS $F0A9
    if (cpu.carry_flag()) cpu.m_pc = 0xF0A9;

    // F0A9: STB <$3B
    cpu.write_memory(0x3B, cpu.m_b);

    // F0AB: LDU #$D640
    cpu.m_u = 0xD640;

    // F0AE: LDD B,U
    // TODO: Fix comma operator: LDD B,U

    // F0B0: STD >$0022
    cpu.write_memory16(0x0022, cpu.m_d);

    // F0B3: DEC <$36
    // TODO: Convert DEC <$36

    // F0B5: BGT $F0D8
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xF0D8;

    // F0B7: LDB #$04
    cpu.m_b = 0x04;

    // F0B9: STB <$36
    cpu.write_memory(0x36, cpu.m_b);

    // F0BB: LDB <$37
    cpu.m_b = cpu.read_memory(0x37);

    // F0BD: ADDB #$02
    cpu.m_b += 0x02;

    // F0BF: CMPB #$08
    cpu.compare_b(0x08);

    // F0C1: BCS $F0C4
    if (cpu.carry_flag()) cpu.m_pc = 0xF0C4;

    // F0C4: STB <$37
    cpu.write_memory(0x37, cpu.m_b);

    // F0C6: LDU #$D648
    cpu.m_u = 0xD648;

    // F0C9: LDD B,U
    // TODO: Fix comma operator: LDD B,U

    // F0CB: STD >$002A
    cpu.write_memory16(0x002A, cpu.m_d);

    // F0CE: LDB <$37
    cpu.m_b = cpu.read_memory(0x37);

    // F0D0: LDU #$D650
    cpu.m_u = 0xD650;

    // F0D3: LDD B,U
    // TODO: Fix comma operator: LDD B,U

    // F0D5: STD >$002E
    cpu.write_memory16(0x002E, cpu.m_d);

    // F0D8: DEC <$38
    // TODO: Convert DEC <$38

    // F0DA: BGT $F0F3
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xF0F3;

    // F0DC: LDB #$01
    cpu.m_b = 0x01;

    // F0DE: STB <$38
    cpu.write_memory(0x38, cpu.m_b);

    // F0E0: LDB <$39
    cpu.m_b = cpu.read_memory(0x39);

    // F0E2: ADDB #$02
    cpu.m_b += 0x02;

    // F0E4: CMPB #$08
    cpu.compare_b(0x08);

    // F0E6: BCS $F0E9
    if (cpu.carry_flag()) cpu.m_pc = 0xF0E9;

    // F0E9: STB <$39
    cpu.write_memory(0x39, cpu.m_b);

    // F0EB: LDU #$D658
    cpu.m_u = 0xD658;

    // F0EE: LDD B,U
    // TODO: Fix comma operator: LDD B,U

    // F0F0: STD >$002C
    cpu.write_memory16(0x002C, cpu.m_d);

    // F0F3: LDB <$35
    cpu.m_b = cpu.read_memory(0x35);

    // F0F5: ADDB #$02
    cpu.m_b += 0x02;

    // F0F7: CMPB #$0E
    cpu.compare_b(0x0E);

    // F0F9: BCS $F0FC
    if (cpu.carry_flag()) cpu.m_pc = 0xF0FC;

    // F0FC: STB <$35
    cpu.write_memory(0x35, cpu.m_b);

    // F0FE: LDU #$D604
    cpu.m_u = 0xD604;

    // F101: LDD B,U
    // TODO: Fix comma operator: LDD B,U

    // F103: STD >$0030
    cpu.write_memory16(0x0030, cpu.m_d);

    // F106: LDD #$C000
    cpu.m_d = 0xC000;

    // F109: STD >$0032
    cpu.write_memory16(0x0032, cpu.m_d);

    // F10C: LDB <$3C
    cpu.m_b = cpu.read_memory(0x3C);

    // F10E: ADDB #$02
    cpu.m_b += 0x02;

    // F110: CMPB #$0E
    cpu.compare_b(0x0E);

    // F112: BCS $F115
    if (cpu.carry_flag()) cpu.m_pc = 0xF115;

    // F115: STB <$3C
    cpu.write_memory(0x3C, cpu.m_b);

    // F117: LDU #$D612
    cpu.m_u = 0xD612;

    // F11A: LDD B,U
    // TODO: Fix comma operator: LDD B,U

    // F11C: STD >$0034
    cpu.write_memory16(0x0034, cpu.m_d);

    // F11F: LDD #$C000
    cpu.m_d = 0xC000;

    // F122: STD >$0036
    cpu.write_memory16(0x0036, cpu.m_d);

    // F125: JSR $D660
    cpu.call_function(0xD660);

    // F128: STA $4600
    cpu.write_memory(0x4600, cpu.m_a);

    // F12B: LDA #$05
    cpu.m_a = 0x05;

    // F12D: STA <$40
    cpu.write_memory(0x40, cpu.m_a);

    // F12F: STA $4660
    cpu.write_memory(0x4660, cpu.m_a);

    // F133: LDB ,X
    // TODO: Complex indexed addressing: ,X

    // F135: STB $1,X
    // TODO: Handle indexed addressing: STB $1,X

    // F137: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // F139: ANDA $1,X
    // TODO: Fix comma operator: ANDA $1,X

    // F13B: ORA $2,X
    // TODO: Fix comma operator: ORA $2,X

    // F13D: STA $2,X
    // TODO: Handle indexed addressing: STA $2,X

    // F13F: ORB ,X++
    cpu.m_b |= cpu.m_x++;

    // F141: ANDB ,X
    // TODO: Complex indexed addressing: ,X

    // F143: STB ,X+
    // TODO: Handle indexed addressing: STB ,X+

    // F146: LDA <$0A
    cpu.m_a = cpu.read_memory(0x0A);

    // F149: LDY #$4829
    cpu.m_y = 0x4829;

    // F14D: BCS $F153
    if (cpu.carry_flag()) cpu.m_pc = 0xF153;

    // F14F: LDY #$482B
    cpu.m_y = 0x482B;

    // F153: LDB $1,Y
    // TODO: Fix comma operator: LDB $1,Y

    // F155: LDA $4380
    cpu.m_a = cpu.read_memory(0x4380);

    // F158: STA $1,Y
    // TODO: Handle indexed addressing: STA $1,Y

    // F15A: CMPA ,Y
    // TODO: Complex indexed addressing: ,Y

    // F15C: BCS $F16C
    if (cpu.carry_flag()) cpu.m_pc = 0xF16C;

    // F15E: CMPB ,Y
    // TODO: Complex indexed addressing: ,Y

    // F160: BLS $F16A
    // TODO: Convert BLS $F16A

    // F162: CMPB $1,Y
    // TODO: Fix comma operator: CMPB $1,Y

    // F164: BLS $F168
    // TODO: Convert BLS $F168

    // F166: LDB $1,Y
    // TODO: Fix comma operator: LDB $1,Y

    // F168: STB ,Y
    // TODO: Handle indexed addressing: STB ,Y

    // F16A: BRA $F178
    goto label_F178;

    // F16C: CMPB ,Y
    // TODO: Complex indexed addressing: ,Y

    // F16E: BCC $F178
    if (!cpu.carry_flag()) cpu.m_pc = 0xF178;

    // F170: CMPB $1,Y
    // TODO: Fix comma operator: CMPB $1,Y

    // F172: BCC $F176
    if (!cpu.carry_flag()) cpu.m_pc = 0xF176;

    // F174: LDB $1,Y
    // TODO: Fix comma operator: LDB $1,Y

    // F176: STB ,Y
    // TODO: Handle indexed addressing: STB ,Y

    // F178: CMPY #$4829
    // TODO: Convert CMPY #$4829

    // F17C: BNE $F186
    if (!cpu.zero_flag()) cpu.m_pc = 0xF186;

    // F17E: STA $46C0
    cpu.write_memory(0x46C0, cpu.m_a);

    // F181: STA $46C0
    cpu.write_memory(0x46C0, cpu.m_a);

    // F184: BRA $F18C
    goto label_F18C;

    // F186: STA $46C1
    cpu.write_memory(0x46C1, cpu.m_a);

    // F189: STA $46C1
    cpu.write_memory(0x46C1, cpu.m_a);

    // F18D: LDX #$4866
    cpu.m_x = 0x4866;

    // F190: LDA <$2B
    cpu.m_a = cpu.read_memory(0x2B);

    // F193: JSR $F1C6
    cpu.call_function(0xF1C6);

    // F196: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // F198: CMPA #$78
    cpu.compare_a(0x78);

    // F19A: BLE $F19E
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xF19E;

    // F19C: LDA #$78
    cpu.m_a = 0x78;

    // F19E: CMPA #$98
    cpu.compare_a(0x98);

    // F1A0: BGE $F1A4
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xF1A4;

    // F1A2: LDA #$98
    cpu.m_a = 0x98;

    // F1A4: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // F1A6: JSR $F1FD
    cpu.call_function(0xF1FD);

    // F1A9: LDX #$486F
    cpu.m_x = 0x486F;

    // F1AC: LDA <$29
    cpu.m_a = cpu.read_memory(0x29);

    // F1AF: JSR $F1C6
    cpu.call_function(0xF1C6);

    // F1B2: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // F1B4: CMPA #$70
    cpu.compare_a(0x70);

    // F1B6: BLE $F1BA
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xF1BA;

    // F1B8: LDA #$70
    cpu.m_a = 0x70;

    // F1BA: CMPA #$90
    cpu.compare_a(0x90);

    // F1BC: BGE $F1C0
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xF1C0;

    // F1BE: LDA #$90
    cpu.m_a = 0x90;

    // F1C0: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // F1C2: JSR $F1FD
    cpu.call_function(0xF1FD);

    // F1C6: CMPA ,X
    // TODO: Complex indexed addressing: ,X

    // F1C8: BCC $F1D0
    if (!cpu.carry_flag()) cpu.m_pc = 0xF1D0;

    // F1CA: CMPA $1,X
    // TODO: Fix comma operator: CMPA $1,X

    // F1CC: BCS $F1D0
    if (cpu.carry_flag()) cpu.m_pc = 0xF1D0;

    // F1CE: DEC ,X
    // TODO: Convert DEC ,X

    // F1D0: STA $1,X
    // TODO: Handle indexed addressing: STA $1,X

    // F1D2: CMPA ,X
    // TODO: Complex indexed addressing: ,X

    // F1D4: BCC $F1D8
    if (!cpu.carry_flag()) cpu.m_pc = 0xF1D8;

    // F1D6: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // F1D8: SUBA ,X
    // TODO: Complex indexed addressing: ,X

    // F1DA: STA <$51
    cpu.write_memory(0x51, cpu.m_a);

    // F1DC: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

    // F1DF: ADDA <$51
    cpu.m_a += 0x51;

    // F1E1: BNE $F1E5
    if (!cpu.zero_flag()) cpu.m_pc = 0xF1E5;

    // F1E3: LDA #$01
    cpu.m_a = 0x01;

    // F1E5: BCS $F1EB
    if (cpu.carry_flag()) cpu.m_pc = 0xF1EB;

    // F1E7: CLR $3,X
    // TODO: Fix comma operator: CLR $3,X

    // F1E9: BRA $F1F7
    goto label_F1F7;

    // F1EB: LDA #$FF
    cpu.m_a = 0xFF;

    // F1ED: INC $3,X
    // TODO: Convert INC $3,X

    // F1EF: LDB $3,X
    // TODO: Fix comma operator: LDB $3,X

    // F1F1: CMPB #$02
    cpu.compare_b(0x02);

    // F1F3: BCS $F1F7
    if (cpu.carry_flag()) cpu.m_pc = 0xF1F7;

    // F1F5: DEC $2,X
    // TODO: Convert DEC $2,X

    // F1F8: SUBA #$80
    cpu.m_a -= 0x80;

    // F1FA: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // F1FD: CLR <$51
    cpu.write_memory(0x51, 0);

    // F1FF: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // F201: LDB #$80
    cpu.m_b = 0x80;

    // F203: SUBD $5,X
    // TODO: Fix comma operator: SUBD $5,X

    // F205: BGE $F20A
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xF20A;

    // F208: DEC <$51
    // TODO: Convert DEC <$51

    // F20A: BLE $F20F
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xF20F;

    // F20C: ADDD #$00FF
    cpu.m_d += 0x00FF;

    // F20F: CMPA #$F8
    cpu.compare_a(0xF8);

    // F211: BLS $F215
    // TODO: Convert BLS $F215

    // F213: LDA #$F8
    cpu.m_a = 0xF8;

    // F215: LDB #$60
    cpu.m_b = 0x60;

    // F217: CMPA #$40
    cpu.compare_a(0x40);

    // F219: BCC $F21D
    if (!cpu.carry_flag()) cpu.m_pc = 0xF21D;

    // F21B: LDB #$30
    cpu.m_b = 0x30;

    // F21E: TST <$51
    // TODO: Convert TST <$51

    // F220: BPL $F226
    if (!cpu.negative_flag()) cpu.m_pc = 0xF226;

    // F224: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // F226: ADDD $5,X
    // TODO: Fix comma operator: ADDD $5,X

    // F228: STD $5,X
    // TODO: Handle indexed addressing: STD $5,X

    // F22B: LDB <$6B
    cpu.m_b = cpu.read_memory(0x6B);

    // F22D: LDA <$6C
    cpu.m_a = cpu.read_memory(0x6C);

    // F22F: ANDA #$C0
    cpu.m_a &= 0xC0;

    // F233: BCC $F237
    if (!cpu.carry_flag()) cpu.m_pc = 0xF237;

    // F235: ORA #$3F
    cpu.m_a |= 0x3F;

    // F23A: STD <$2F
    cpu.write_memory16(0x2F, cpu.m_d);

    // F23C: ADDD #$FF98
    cpu.m_d += 0xFF98;

    // F23F: ANDA #$1F
    cpu.m_a &= 0x1F;

    // F241: STD >$0024
    cpu.write_memory16(0x0024, cpu.m_d);

    // F244: LDB <$74
    cpu.m_b = cpu.read_memory(0x74);

    // F246: LDA <$75
    cpu.m_a = cpu.read_memory(0x75);

    // F248: ANDA #$C0
    cpu.m_a &= 0xC0;

    // F24C: BCC $F250
    if (!cpu.carry_flag()) cpu.m_pc = 0xF250;

    // F24E: ORA #$3F
    cpu.m_a |= 0x3F;

    // F253: STD <$2D
    cpu.write_memory16(0x2D, cpu.m_d);

    // F255: ANDA #$1F
    cpu.m_a &= 0x1F;

    // F257: STD >$0026
    cpu.write_memory16(0x0026, cpu.m_d);

    // F25A: LDD #$C000
    cpu.m_d = 0xC000;

    // F25D: STD >$0028
    cpu.write_memory16(0x0028, cpu.m_d);

    // F261: JMP $f261
    goto label_F261;

}

} // namespace StarWars