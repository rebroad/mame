#include "cpu_6809.h"

namespace StarWars {

void routine_d486_d800_impl(CPU6809& cpu) {
    // Converted from rom_disasm_d486_d800.md
    // Address: 0xD486_D800

    label_D486:
    // D486: DECB 
    cpu.m_b--;
    // D487: ANDCC #$B9
    // TODO: Convert ANDCC #$B9
    // D489: STU $A,U
    // TODO: Handle indexed addressing: STU $A,U
    // D48B: XRES 
    // TODO: Convert XRES 
    // D48C: ADCA $EF41
    // TODO: Convert ADCA $EF41
    // D48F: BCS $D44A
    if (cpu.carry_flag()) cpu.m_pc = 0xD44A;
    // D491: STU -$4,U
    // TODO: Handle indexed addressing: STU -$4,U
    // D493: BNE $D44E
    if (!cpu.zero_flag()) cpu.m_pc = 0xD44E;
    // D495: STU -$6,U
    // TODO: Handle indexed addressing: STU -$6,U
    // D497: CWAI #$B9
    // TODO: Convert CWAI #$B9
    // D499: STU -$1,U
    // TODO: Handle indexed addressing: STU -$1,U
    // D49B: RTI 
    // TODO: Convert RTI 
    // D49C: ASLA 
    cpu.m_a <<= 1;
    // D49D: JMP <$C0
    // TODO: Invalid branch offset: <$C0
    // D49F: NEG <$5A
    // TODO: Convert NEG <$5A
    // D4A1: ANDCC #$B9
    // TODO: Convert ANDCC #$B9
    // D4A3: STU $A,U
    // TODO: Handle indexed addressing: STU $A,U
    // D4A5: XRES 
    // TODO: Convert XRES 
    // D4A6: ADCA $EF58
    // TODO: Convert ADCA $EF58
    // D4A9: BGE $D4A2
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xD4A2;
    // D4AB: ORCC #$B9
    cpu.m_cc |= 0xB9;
    // D4AD: STU -$6,U
    // TODO: Handle indexed addressing: STU -$6,U
    // D4AF: ANDCC #$B9
    // TODO: Convert ANDCC #$B9
    // D4B1: STU $A,U
    // TODO: Handle indexed addressing: STU $A,U
    // D4B3: XRES 
    // TODO: Convert XRES 
    // D4B4: ADCA $EF5B
    // TODO: Convert ADCA $EF5B
    // D4B7: NEG <$B9
    // TODO: Convert NEG <$B9
    // D4B9: STU $2,U
    // TODO: Handle indexed addressing: STU $2,U
    // D4BB: BPL $D476
    if (!cpu.negative_flag()) cpu.m_pc = 0xD476;
    // D4BD: STU $5,U
    // TODO: Handle indexed addressing: STU $5,U
    // D4BF: TFR inv,inv
    cpu.m_inv = cpu.m_inv;
    // D4C1: ADCB $5A1C
    // TODO: Convert ADCB $5A1C
    // D4C4: ADCA $EF4A
    // TODO: Convert ADCA $EF4A
    // D4C7: XRES 
    // TODO: Convert XRES 
    // D4C8: ADCA $EF5C
    // TODO: Convert ADCA $EF5C
    // D4CB: BNE $D486
    if (!cpu.zero_flag()) cpu.m_pc = 0xD486;
    // D4CD: STU $6,U
    // TODO: Handle indexed addressing: STU $6,U
    // D4CF: BCC $D48A
    if (!cpu.carry_flag()) cpu.m_pc = 0xD48A;
    // D4D1: STU -$A,U
    // TODO: Handle indexed addressing: STU -$A,U
    // D4D3: BHI $D4CB
    // TODO: Convert BHI $D4CB
    // D4D5: LSR $B9EF
    // TODO: Convert LSR $B9EF
    // D4D8: DECB 
    cpu.m_b--;
    // D4D9: ANDCC #$B9
    // TODO: Convert ANDCC #$B9
    // D4DB: STU $2,U
    // TODO: Handle indexed addressing: STU $2,U
    // D4DD: BPL $D498
    if (!cpu.negative_flag()) cpu.m_pc = 0xD498;
    // D4DF: STU $5,U
    // TODO: Handle indexed addressing: STU $5,U
    // D4E1: SWI 
    // TODO: Convert SWI 
    // D4E2: ADCA $EF5E
    // TODO: Convert ADCA $EF5E
    // D4E5: PSHU PC,Y,X,DP,CC
    // TODO: Convert PSHU PC,Y,X,DP,CC
    // D4E7: STU $5,U
    // TODO: Handle indexed addressing: STU $5,U
    // D4E9: SWI 
    // TODO: Convert SWI 
    // D4EA: ADCA $EF42
    // TODO: Convert ADCA $EF42
    // D4ED: BPL $D4E6
    if (!cpu.negative_flag()) cpu.m_pc = 0xD4E6;
    // D4EF: BCS $D535
    if (cpu.carry_flag()) cpu.m_pc = 0xD535;
    // D4F1: ORCC #$B9
    cpu.m_cc |= 0xB9;
    // D4F3: STU -$5,U
    // TODO: Handle indexed addressing: STU -$5,U
    // D4F5: BRN $D4B0
    // TODO: Convert BRN $D4B0
    // D4F7: STU -$4,U
    // TODO: Handle indexed addressing: STU -$4,U
    // D4F9: BNE $D4B4
    if (!cpu.zero_flag()) cpu.m_pc = 0xD4B4;
    // D4FB: STU $6,U
    // TODO: Handle indexed addressing: STU $6,U
    // D4FD: BCC $D4B8
    if (!cpu.carry_flag()) cpu.m_pc = 0xD4B8;
    // D4FF: STU $5,U
    // TODO: Handle indexed addressing: STU $5,U
    // D501: SWI 
    // TODO: Convert SWI 
    // D502: STB $2544
    cpu.write_memory(0x2544, cpu.m_b);
    // D505: ORCC #$B9
    cpu.m_cc |= 0xB9;
    // D507: STU -$A,U
    // TODO: Handle indexed addressing: STU -$A,U
    // D509: BHI $D4C4
    // TODO: Convert BHI $D4C4
    // D50B: STU $6,U
    // TODO: Handle indexed addressing: STU $6,U
    // D50D: BCC $D4C8
    if (!cpu.carry_flag()) cpu.m_pc = 0xD4C8;
    // D50F: STU -$4,U
    // TODO: Handle indexed addressing: STU -$4,U
    // D511: BNE $D4CC
    if (!cpu.zero_flag()) cpu.m_pc = 0xD4CC;
    // D513: STU $A,U
    // TODO: Handle indexed addressing: STU $A,U
    // D515: XRES 
    // TODO: Convert XRES 
    // D516: STB $255B
    cpu.write_memory(0x255B, cpu.m_b);
    // D519: NEG <$B9
    // TODO: Convert NEG <$B9
    // D51B: STU $5,U
    // TODO: Handle indexed addressing: STU $5,U
    // D51D: SWI 
    // TODO: Convert SWI 
    // D51E: ADCA $EF44
    // TODO: Convert ADCA $EF44
    // D521: ABX 
    // TODO: Convert ABX 
    // D522: ADCA $EF5C
    // TODO: Convert ADCA $EF5C
    // D525: ROR <$46
    // TODO: Convert ROR <$46
    // D527: BCC $D4E2
    if (!cpu.carry_flag()) cpu.m_pc = 0xD4E2;
    // D529: STU -$4,U
    // TODO: Handle indexed addressing: STU -$4,U
    // D52B: ROR <$C0
    // TODO: Convert ROR <$C0
    // D52D: NEG <$00
    // TODO: Convert NEG <$00
    // D52F: LDA <$1F
    cpu.m_a = cpu.read_memory(0x1F);
    // D531: CMPX <$B6
    cpu.compare_x(cpu.read_memory16(0xB6));
    // D533: SBCB $B6C5
    // TODO: Convert SBCB $B6C5
    // D536: STA $1D1F
    cpu.write_memory(0x1D1F, cpu.m_a);
    // D539: LDX $1FD8
    cpu.m_x = cpu.read_memory16(0x1FD8);
    // D53C: LDA $8FB6
    cpu.m_a = cpu.read_memory(0x8FB6);
    // D53F: STB [A,Y]
    // TODO: Handle indexed addressing: STB [A,Y]
    // D541: JSR -$1,X
    // TODO: Fix comma operator: JSR -$1,X
    // D543: LDA -$1,X
    // TODO: Fix comma operator: LDA -$1,X
    // D545: SUBA $B6A1
    cpu.m_a -= 0xB6A1;
    // D548: LDA $7CB6
    cpu.m_a = cpu.read_memory(0x7CB6);
    // D54B: JSR $B678
    cpu.call_function(0xB678);
    // D54E: LDA $AD72
    cpu.m_a = cpu.read_memory(0xAD72);
    // D551: NEG <$80
    // TODO: Convert NEG <$80
    // D553: NEGA 
    cpu.m_a = -cpu.m_a;
    // D554: SUBB #$00
    cpu.m_b -= 0x00;
    // D556: NEG <$1E
    // TODO: Convert NEG <$1E
    // D558: TFR B,inv
    cpu.m_inv = cpu.m_b;
    // D55A: LDA $F2B6
    cpu.m_a = cpu.read_memory(0xF2B6);
    // D55D: BITB #$B6
    // TODO: Convert BITB #$B6
    // D55F: JSR $B684
    cpu.call_function(0xB684);
    // D562: LDA $7CB6
    cpu.m_a = cpu.read_memory(0x7CB6);
    // D565: NEG $B69A
    // TODO: Convert NEG $B69A
    // D568: LDA $E172
    cpu.m_a = cpu.read_memory(0xE172);
    // D56B: NEG <$80
    // TODO: Convert NEG <$80
    // D56D: NEGA 
    cpu.m_a = -cpu.m_a;
    // D56E: SUBB #$00
    cpu.m_b -= 0x00;
    // D570: NEG <$5A
    // TODO: Convert NEG <$5A
    // D572: TFR DP,D
    cpu.m_d = cpu.m_dp;
    // D574: LDA $BDB6
    cpu.m_a = cpu.read_memory(0xBDB6);
    // D577: ORA <$B7
    cpu.m_a |= 0xB7;
    // D579: ROL <$B6
    // TODO: Convert ROL <$B6
    // D57B: JSR [A,Y]
    // TODO: Complex indexed addressing: [A,Y]
    // D57D: JSR $B6C5
    cpu.call_function(0xB6C5);
    // D580: XNC >$0080
    // TODO: Convert XNC >$0080
    // D583: NEGA 
    cpu.m_a = -cpu.m_a;
    // D584: SUBB #$00
    cpu.m_b -= 0x00;
    // D586: NEG <$96
    // TODO: Convert NEG <$96
    // D588: TFR inv,S
    cpu.m_sp = cpu.m_inv;
    // D58A: LDA $E7B6
    cpu.m_a = cpu.read_memory(0xE7B6);
    // D58D: BITB #$B6
    // TODO: Convert BITB #$B6
    // D58F: NEG $B670
    // TODO: Convert NEG $B670
    // D592: STA $1D72
    cpu.write_memory(0x1D72, cpu.m_a);
    // D595: NEG <$80
    // TODO: Convert NEG <$80
    // D597: NEGA 
    cpu.m_a = -cpu.m_a;
    // D598: SUBB #$00
    cpu.m_b -= 0x00;
    // D59A: TFR CC,D
    cpu.m_d = cpu.m_cc;
    // D59C: TFR DP,D
    cpu.m_d = cpu.m_dp;
    // D59E: LDA $7FB6
    cpu.m_a = cpu.read_memory(0x7FB6);
    // D5A1: JSR -$1,X
    // TODO: Fix comma operator: JSR -$1,X
    // D5A3: ORB <$00
    cpu.m_b |= 0x00;
    // D5A5: XHCF 
    // TODO: Convert XHCF 
    // D5A6: STA $13B6
    cpu.write_memory(0x13B6, cpu.m_a);
    // D5A9: ORA <$B6
    cpu.m_a |= 0xB6;
    // D5AB: XSTX #$B6E7
    // TODO: Convert XSTX #$B6E7
    // D5AE: TFR CC,inv
    cpu.m_inv = cpu.m_cc;
    // D5B0: TFR B,inv
    cpu.m_inv = cpu.m_b;
    // D5B2: STA $1DB6
    cpu.write_memory(0x1DB6, cpu.m_a);
    // D5B5: INC $B68A
    // TODO: Convert INC $B68A
    // D5B8: XNC >$0080
    // TODO: Convert XNC >$0080
    // D5BB: NEGA 
    cpu.m_a = -cpu.m_a;
    // D5BC: SUBB #$00
    cpu.m_b -= 0x00;
    // D5BE: TFR A,A
    cpu.m_a = cpu.m_a;
    // D5C0: TFR DP,D
    cpu.m_d = cpu.m_dp;
    // D5C2: LDA $C5B7
    cpu.m_a = cpu.read_memory(0xC5B7);
    // D5C5: ROL <$B6
    // TODO: Convert ROL <$B6
    // D5C7: JSR [A,Y]
    // TODO: Complex indexed addressing: [A,Y]
    // D5C9: NEG $B670
    // TODO: Convert NEG $B670
    // D5CC: LDA $C5B6
    cpu.m_a = cpu.read_memory(0xC5B6);
    // D5CF: JSR $7200
    cpu.call_function(0x7200);
    // D5D2: SUBA #$40
    cpu.m_a -= 0x40;
    // D5D4: SUBB #$00
    cpu.m_b -= 0x00;
    // D5D6: TFR PC,inv
    cpu.m_inv = cpu.m_pc;
    // D5D8: TFR inv,S
    cpu.m_sp = cpu.m_inv;
    // D5DA: STA $09B6
    cpu.write_memory(0x09B6, cpu.m_a);
    // D5DD: ORA <$B6
    cpu.m_a |= 0xB6;
    // D5DF: ASL $B6B1
    // TODO: Convert ASL $B6B1
    // D5E2: LDA $ADB6
    cpu.m_a = cpu.read_memory(0xADB6);
    // D5E5: JSR $B6FC
    cpu.call_function(0xB6FC);
    // D5E8: XNC >$0080
    // TODO: Convert XNC >$0080
    // D5EB: NEGA 
    cpu.m_a = -cpu.m_a;
    // D5EC: SUBB #$00
    cpu.m_b -= 0x00;
    // D5EE: TFR Y,inv
    cpu.m_inv = cpu.m_y;
    // D5F0: TFR inv,A
    cpu.m_a = cpu.m_inv;
    // D5F2: LDA $D4B6
    cpu.m_a = cpu.read_memory(0xD4B6);
    // D5F5: ORA #$B6
    cpu.m_a |= 0xB6;
    // D5F7: JSR $B6A1
    cpu.call_function(0xB6A1);
    // D5FA: LDA $ADB7
    cpu.m_a = cpu.read_memory(0xADB7);
    // D5FD: SEX 
    // TODO: Convert SEX 
    // D5FE: XNC >$0080
    // TODO: Convert XNC >$0080
    // D601: NEGA 
    cpu.m_a = -cpu.m_a;
    // D602: SUBB #$00
    cpu.m_b -= 0x00;
    // D604: NEG [$62FF]
    // TODO: Convert NEG [$62FF]
    // D608: COM [$64FF]
    // TODO: Convert COM [$64FF]
    // D60C: LSR [$66FF]
    // TODO: Convert LSR [$66FF]
    // D610: ASR [$6180]
    // TODO: Convert ASR [$6180]
    // D614: XNC ,X+
    // TODO: Convert XNC ,X+
    // D616: COM ,X+
    // TODO: Convert COM ,X+
    // D618: LSR ,X+
    // TODO: Convert LSR ,X+
    // D61A: LSR ,X+
    // TODO: Convert LSR ,X+
    // D61C: ROR ,X+
    // TODO: Convert ROR ,X+
    // D61E: ASR ,X+
    // TODO: Convert ASR ,X+
    // D620: ADCB $17F9
    // TODO: Convert ADCB $17F9
    // D623: DAA 
    // TODO: Convert DAA 
    // D624: ADCB $1BF9
    // TODO: Convert ADCB $1BF9
    // D627: SEX 
    // TODO: Convert SEX 
    // D628: ADCB $1FF9
    // TODO: Convert ADCB $1FF9
    // D62B: BRN $D626
    // TODO: Convert BRN $D626
    // D62D: BLS $D628
    // TODO: Convert BLS $D628
    // D62F: BCS $D62A
    if (cpu.carry_flag()) cpu.m_pc = 0xD62A;
    // D631: BEQ $D62C
    if (cpu.zero_flag()) cpu.m_pc = 0xD62C;
    // D633: BVS $D62E
    // TODO: Convert BVS $D62E
    // D635: BMI $D630
    if (cpu.negative_flag()) cpu.m_pc = 0xD630;
    // D637: BLT $D632
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xD632;
    // D639: BLE $D634
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xD634;
    // D63B: LEAY [$33F9,S]
    // TODO: Complex indexed addressing: [$33F9,S]
    // D63F: PULS CC,DP,X,Y,U,PC
    // TODO: Convert PULS CC,DP,X,Y,U,PC
    // D641: PULU CC,DP,X,Y,S,PC
    // TODO: Convert PULU CC,DP,X,Y,S,PC
    // D643: RTS 
    return;
    // D644: ADCB $3BF9
    // TODO: Convert ADCB $3BF9
    // D647: MUL 
    // TODO: Convert MUL 
    // D648: BITB $1EF5
    // TODO: Convert BITB $1EF5
    // D64B: NEG [B,S]
    // TODO: Convert NEG [B,S]
    // D64D: SUBD [B,S]
    // TODO: Complex indexed addressing: [B,S]
    // D64F: BITB [$3FF9,S]
    // TODO: Convert BITB [$3FF9,S]
    // D653: CLRA 
    cpu.m_a = 0;
    // D654: ADCB $5FF9
    // TODO: Convert ADCB $5FF9
    // D657: CLR [A,S]
    // TODO: Complex indexed addressing: [A,S]
    // D659: BVC $D651
    // TODO: Convert BVC $D651
    // D65B: ABX 
    // TODO: Convert ABX 
    // D65C: LDB $4CF6
    cpu.m_b = cpu.read_memory(0x4CF6);
    // D65F: XCLRB 
    // TODO: Convert XCLRB 
    // D660: JSR $D68D
    cpu.call_function(0xD68D);
    // D663: JSR $D690
    cpu.call_function(0xD690);
    // D666: LDD #$C000
    cpu.m_d = 0xC000;
    // D669: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D66B: JSR $D6A0
    cpu.call_function(0xD6A0);
    // D66E: JSR $D6A3
    cpu.call_function(0xD6A3);
    // D671: LDD #$C000
    cpu.m_d = 0xC000;
    // D674: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D676: JSR $D6BC
    cpu.call_function(0xD6BC);
    // D679: JSR $D6BF
    cpu.call_function(0xD6BF);
    // D67C: LDD #$C000
    cpu.m_d = 0xC000;
    // D67F: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D681: JSR $D6E7
    cpu.call_function(0xD6E7);
    // D684: JSR $D6EA
    cpu.call_function(0xD6EA);
    // D687: LDD #$C000
    cpu.m_d = 0xC000;
    // D68A: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D68C: RTS 
    return;
    // D68D: LDU #$0038
    cpu.m_u = 0x0038;
    // D690: JSR $D709
    cpu.call_function(0xD709);
    // D693: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);
    // D695: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D697: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);
    // D699: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D69B: LDD ,X
    // TODO: Complex indexed addressing: ,X
    // D69D: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D69F: RTS 
    return;
    // D6A0: LDU #$0046
    cpu.m_u = 0x0046;
    // D6A3: JSR $D709
    cpu.call_function(0xD709);
    // D6A6: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);
    // D6A8: NEGB 
    cpu.m_b = -cpu.m_b;
    // D6A9: ANDB #$1F
    cpu.m_b &= 0x1F;
    // D6AB: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D6AD: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);
    // D6AF: NEGB 
    cpu.m_b = -cpu.m_b;
    // D6B0: ORB #$E0
    cpu.m_b |= 0xE0;
    // D6B2: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D6B4: LDD ,X
    // TODO: Complex indexed addressing: ,X
    // D6B6: NEGB 
    cpu.m_b = -cpu.m_b;
    // D6B7: ANDB #$1F
    cpu.m_b &= 0x1F;
    // D6B9: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D6BB: RTS 
    return;
    // D6BC: LDU #$0054
    cpu.m_u = 0x0054;
    // D6BF: JSR $D709
    cpu.call_function(0xD709);
    // D6C2: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);
    // D6C4: NEGA 
    cpu.m_a = -cpu.m_a;
    // D6C5: ANDA #$1F
    cpu.m_a &= 0x1F;
    // D6C7: ORA #$40
    cpu.m_a |= 0x40;
    // D6C9: NEGB 
    cpu.m_b = -cpu.m_b;
    // D6CA: ANDB #$1F
    cpu.m_b &= 0x1F;
    // D6CC: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D6CE: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);
    // D6D0: NEGA 
    cpu.m_a = -cpu.m_a;
    // D6D1: ANDA #$1F
    cpu.m_a &= 0x1F;
    // D6D3: ORA #$40
    cpu.m_a |= 0x40;
    // D6D5: NEGB 
    cpu.m_b = -cpu.m_b;
    // D6D6: ORB #$E0
    cpu.m_b |= 0xE0;
    // D6D8: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D6DA: LDD ,X
    // TODO: Complex indexed addressing: ,X
    // D6DC: NEGA 
    cpu.m_a = -cpu.m_a;
    // D6DD: ANDA #$1F
    cpu.m_a &= 0x1F;
    // D6DF: ORA #$40
    cpu.m_a |= 0x40;
    // D6E1: NEGB 
    cpu.m_b = -cpu.m_b;
    // D6E2: ANDB #$1F
    cpu.m_b &= 0x1F;
    // D6E4: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D6E6: RTS 
    return;
    // D6E7: LDU #$0062
    cpu.m_u = 0x0062;
    // D6EA: JSR $D709
    cpu.call_function(0xD709);
    // D6ED: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);
    // D6EF: NEGA 
    cpu.m_a = -cpu.m_a;
    // D6F0: ANDA #$1F
    cpu.m_a &= 0x1F;
    // D6F2: ORA #$40
    cpu.m_a |= 0x40;
    // D6F4: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D6F6: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);
    // D6F8: NEGA 
    cpu.m_a = -cpu.m_a;
    // D6F9: ANDA #$1F
    cpu.m_a &= 0x1F;
    // D6FB: ORA #$40
    cpu.m_a |= 0x40;
    // D6FD: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D6FF: LDD ,X
    // TODO: Complex indexed addressing: ,X
    // D701: NEGA 
    cpu.m_a = -cpu.m_a;
    // D702: ANDA #$1F
    cpu.m_a &= 0x1F;
    // D704: ORA #$40
    cpu.m_a |= 0x40;
    // D706: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D708: RTS 
    return;
    // D709: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);
    // D70C: ANDA #$0F
    cpu.m_a &= 0x0F;
    // D70E: LDB #$06
    cpu.m_b = 0x06;
    // D710: MUL 
    // TODO: Convert MUL 
    // D711: LDX #$D716
    cpu.m_x = 0xD716;
    // D714: ABX 
    // TODO: Convert ABX 
    // D715: RTS 
    return;
    // D716: XNCA 
    // TODO: Convert XNCA 
    // D717: NEG <$4D
    // TODO: Convert NEG <$4D
    // D719: CMPB -$F,U
    // TODO: Fix comma operator: CMPB -$F,U
    // D71B: TFR S,inv
    cpu.m_inv = cpu.m_sp;
    // D71D: NEG <$46
    // TODO: Convert NEG <$46
    // D71F: CMPB -$C,U
    // TODO: Fix comma operator: CMPB -$C,U
    // D721: EXG S,B
    // TODO: Convert EXG S,B
    // D723: XNC <$43
    // TODO: Convert XNC <$43
    // D725: CMPB -$C,U
    // TODO: Fix comma operator: CMPB -$C,U
    // D727: SEX 
    // TODO: Convert SEX 
    // D728: COMA 
    cpu.m_a = ~cpu.m_a;
    // D729: NEG <$4C
    // TODO: Convert NEG <$4C
    // D72B: ADDD -$F,U
    // TODO: Fix comma operator: ADDD -$F,U
    // D72D: ANDCC #$42
    // TODO: Convert ANDCC #$42
    // D72F: NEG <$48
    // TODO: Convert NEG <$48
    // D731: ANDB -$A,U
    // TODO: Fix comma operator: ANDB -$A,U
    // D733: NOP 
    // NOP;
    // D734: COMA 
    cpu.m_a = ~cpu.m_a;
    // D735: XNC <$48
    // TODO: Convert XNC <$48
    // D737: LDB -$B,U
    // TODO: Fix comma operator: LDB -$B,U
    // D739: X18 
    // TODO: Convert X18 
    // D73A: LSRA 
    cpu.m_a >>= 1;
    // D73B: LSR <$43
    // TODO: Convert LSR <$43
    // D73D: SBCB -$8,U
    // TODO: Convert SBCB -$8,U
    // D73F: ORCC #$46
    cpu.m_cc |= 0x46;
    // D741: LSR <$45
    // TODO: Convert LSR <$45
    // D743: ANDB -$B,U
    // TODO: Fix comma operator: ANDB -$B,U
    // D745: LBSR $194A
    // TODO: Convert LBSR $194A
    // D748: RORA 
    cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // D749: LDB -$8,U
    // TODO: Fix comma operator: LDB -$8,U
    // D74B: X18 
    // TODO: Convert X18 
    // D74C: LSRA 
    cpu.m_a >>= 1;
    // D74D: LSR <$44
    // TODO: Convert LSR <$44
    // D74F: BITB -$8,U
    // TODO: Convert BITB -$8,U
    // D751: LBRA $1957
    // TODO: Convert LBRA $1957
    // D754: ASLA 
    cpu.m_a <<= 1;
    // D755: LDD -$A,U
    // TODO: Fix comma operator: LDD -$A,U
    // D757: NEGA 
    cpu.m_a = -cpu.m_a;
    // D759: XNC <$45
    // TODO: Convert XNC <$45
    // D75B: ORB -$6,U
    // TODO: Fix comma operator: ORB -$6,U
    // D75D: XHCF 
    // TODO: Convert XHCF 
    // D75E: NEGA 
    cpu.m_a = -cpu.m_a;
    // D75F: COM <$42
    // TODO: Convert COM <$42
    // D761: LDB -$3,U
    // TODO: Fix comma operator: LDB -$3,U
    // D763: LBSR $196E
    // TODO: Convert LBSR $196E
    // D766: NEGA 
    cpu.m_a = -cpu.m_a;
    // D767: ANDB -$3,U
    // TODO: Fix comma operator: ANDB -$3,U
    // D769: XHCF 
    // TODO: Convert XHCF 
    // D76A: NEGA 
    cpu.m_a = -cpu.m_a;
    // D76B: ROR <$41
    // TODO: Convert ROR <$41
    // D76D: LDB -$2,U
    // TODO: Fix comma operator: LDB -$2,U
    // D76F: XHCF 
    // TODO: Convert XHCF 
    // D770: NEGA 
    cpu.m_a = -cpu.m_a;
    // D771: XNC <$41
    // TODO: Convert XNC <$41
    // D773: STD -$1,U
    // TODO: Handle indexed addressing: STD -$1,U
    // D775: LDA $4300
    cpu.m_a = cpu.read_memory(0x4300);
    // D779: ANDA #$0F
    cpu.m_a &= 0x0F;
    // D77B: CMPA #$0F
    cpu.compare_a(0x0F);
    // D77D: BEQ $D783
    if (cpu.zero_flag()) cpu.m_pc = 0xD783;
    // D77F: LDA #$FF
    cpu.m_a = 0xFF;
    // D781: STA <$18
    cpu.write_memory(0x18, cpu.m_a);
    // D783: LDA <$18
    cpu.m_a = cpu.read_memory(0x18);
    // D785: BNE $D788
    if (!cpu.zero_flag()) cpu.m_pc = 0xD788;
    // D787: RTS 
    return;
    // D788: DEC <$18
    // TODO: Convert DEC <$18
    // D78A: LDA #$12
    cpu.m_a = 0x12;
    // D78C: CMPA <$14
    cpu.compare_a(cpu.read_memory(0x14));
    // D78E: BCC $D792
    if (!cpu.carry_flag()) cpu.m_pc = 0xD792;
    // D790: STA <$14
    cpu.write_memory(0x14, cpu.m_a);
    // D792: LDA <$17
    cpu.m_a = cpu.read_memory(0x17);
    // D794: STA $4681
    cpu.write_memory(0x4681, cpu.m_a);
    // D797: LDB <$16
    cpu.m_b = cpu.read_memory(0x16);
    // D799: STB $4680
    cpu.write_memory(0x4680, cpu.m_b);
    // D79C: ORA <$16
    cpu.m_a |= 0x16;
    // D79E: ORA <$15
    cpu.m_a |= 0x15;
    // D7A0: BEQ $D7A6
    if (cpu.zero_flag()) cpu.m_pc = 0xD7A6;
    // D7A2: LDA #$FF
    cpu.m_a = 0xFF;
    // D7A4: STA <$18
    cpu.write_memory(0x18, cpu.m_a);
    // D7A6: LDA $4300
    cpu.m_a = cpu.read_memory(0x4300);
    // D7A9: ANDA #$10
    cpu.m_a &= 0x10;
    // D7AB: BNE $D7B0
    if (!cpu.zero_flag()) cpu.m_pc = 0xD7B0;
    // D7AD: JMP $D8AE
    goto label_D8AE;
    // D7B0: LDA $4590
    cpu.m_a = cpu.read_memory(0x4590);
    // D7B3: ASLA 
    cpu.m_a <<= 1;
    // D7B4: ASLA 
    cpu.m_a <<= 1;
    // D7B5: ASLA 
    cpu.m_a <<= 1;
    // D7B6: ASLA 
    cpu.m_a <<= 1;
    // D7B7: STA <$09
    cpu.write_memory(0x09, cpu.m_a);
    // D7B9: LDA $4591
    cpu.m_a = cpu.read_memory(0x4591);
    // D7BC: ANDA #$0F
    cpu.m_a &= 0x0F;
    // D7BE: ORA <$09
    cpu.m_a |= 0x09;
    // D7C0: STA <$09
    cpu.write_memory(0x09, cpu.m_a);
    // D7C2: LDA <$0A
    cpu.m_a = cpu.read_memory(0x0A);
    // D7C4: ANDA #$03
    cpu.m_a &= 0x03;
    // D7C6: BNE $D7CB
    if (!cpu.zero_flag()) cpu.m_pc = 0xD7CB;
    // D7C8: JSR $C09D
    cpu.call_function(0xC09D);
    // D7CB: LDX #$480E
    cpu.m_x = 0x480E;
    // D7CE: LDA $4300
    cpu.m_a = cpu.read_memory(0x4300);
    // D7D1: CMPX #$480D
    cpu.compare_x(0x480D);
    // D7D4: BEQ $D7D9
    if (cpu.zero_flag()) cpu.m_pc = 0xD7D9;
    // D7D6: BCC $D7DA
    if (!cpu.carry_flag()) cpu.m_pc = 0xD7DA;
    // D7D8: LSRA 
    cpu.m_a >>= 1;
    // D7D9: LSRA 
    cpu.m_a >>= 1;
    // D7DA: LSRA 
    cpu.m_a >>= 1;
    // D7DB: LDA ,X
    // TODO: Complex indexed addressing: ,X
    // D7DD: ANDA #$1F
    cpu.m_a &= 0x1F;
    // D7DF: BCS $D812
    if (cpu.carry_flag()) cpu.m_pc = 0xD812;
    // D7E1: BEQ $D7EF
    if (cpu.zero_flag()) cpu.m_pc = 0xD7EF;
    // D7E3: CMPA #$1B
    cpu.compare_a(0x1B);
    // D7E5: BCC $D7ED
    if (!cpu.carry_flag()) cpu.m_pc = 0xD7ED;
    // D7E7: LDB <$0A
    cpu.m_b = cpu.read_memory(0x0A);
    // D7E9: ANDB #$01
    cpu.m_b &= 0x01;
    // D7EB: BNE $D7EF
    if (!cpu.zero_flag()) cpu.m_pc = 0xD7EF;
    // D7ED: SUBA #$01
    cpu.m_a -= 0x01;
    label_D7EF:
    // D7EF: STA ,X
    // TODO: Handle indexed addressing: STA ,X
    // D7F1: LDA $4300
    cpu.m_a = cpu.read_memory(0x4300);
    // D7F4: ANDA #$08
    cpu.m_a &= 0x08;
    // D7F6: BNE $D7FC
    if (!cpu.zero_flag()) cpu.m_pc = 0xD7FC;
    // D7F8: LDA #$F0
    cpu.m_a = 0xF0;
    // D7FA: STA <$0B
    cpu.write_memory(0x0B, cpu.m_a);
    // D7FC: LDA <$0B
    cpu.m_a = cpu.read_memory(0x0B);
    // D7FE: BEQ $D808
    if (cpu.zero_flag()) cpu.m_pc = 0xD808;
    label_D800:
    // D800: JMP $d800
    goto label_D800;
}

} // namespace StarWars