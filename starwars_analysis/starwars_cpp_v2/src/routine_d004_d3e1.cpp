#include "cpu_6809.h"

namespace StarWars {

void routine_d004_d3e1_impl(CPU6809& cpu) {
    // Converted from rom_disasm_d004_d3e1.md
    // Address: 0xD004_D3E1

    // D004: STU $BA00
    cpu.write_memory16(0xBA00, cpu.m_u);

    // D007: LDD <$E0
    cpu.m_d = cpu.read_memory16(0xE0);

    // D009: ORA $0,X
    // TODO: Fix comma operator: ORA $0,X

    // D00B: NEG <$E0
    // TODO: Convert NEG <$E0

    // D00D: CMPX #$BB9D
    cpu.compare_x(0xBB9D);

    // D011: ANDB [W,S]
    // TODO: Complex indexed addressing: [W,S]

    // D013: EORB [D,Y]
    // TODO: Complex indexed addressing: [D,Y]

    // D015: SUBD $0,X
    // TODO: Fix comma operator: SUBD $0,X

    // D017: NEG <$FF
    // TODO: Convert NEG <$FF

    // D019: ADDA $A300
    cpu.m_a += 0xA300;

    // D01D: LDA <$E0
    cpu.m_a = cpu.read_memory(0xE0);

    // D01F: LEAS -$1,X
    // TODO: Fix comma operator: LEAS -$1,X

    // D021: DEC [$7EBB]
    // TODO: Convert DEC [$7EBB]

    // D025: SUBD $0,X
    // TODO: Fix comma operator: SUBD $0,X

    // D027: NEG <$FF
    // TODO: Convert NEG <$FF

    // D029: ADDA $A302
    cpu.m_a += 0xA302;

    // D02D: ANDCC #$E0
    // TODO: Convert ANDCC #$E0

    // D02F: ANDA >$0000
    cpu.m_a &= 0x0000;

    // D032: SUBB [W,Y]
    // TODO: Complex indexed addressing: [W,Y]

    // D034: XNC >$0080
    // TODO: Convert XNC >$0080

    // D038: SUBB #$00
    cpu.m_b -= 0x00;

    // D03B: CMPX $1FB0
    cpu.compare_x(cpu.read_memory16(0x1FB0));

    // D03F: ANDB ,S+
    // TODO: Complex indexed addressing: ,S+

    // D041: SBCA #$BB
    // TODO: Convert SBCA #$BB

    // D043: SUBD $0,X
    // TODO: Fix comma operator: SUBD $0,X

    // D045: NEG <$FF
    // TODO: Convert NEG <$FF

    // D047: XANDCC #$BB
    // TODO: Convert XANDCC #$BB

    // D049: SUBD $0,X
    // TODO: Fix comma operator: SUBD $0,X

    // D04C: STU $E2BB
    cpu.write_memory16(0xE2BB, cpu.m_u);

    // D04F: SUBD $0,X
    // TODO: Fix comma operator: SUBD $0,X

    // D051: NEG <$FF
    // TODO: Convert NEG <$FF

    // D053: BGT $D010
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xD010;

    // D055: SUBD -$1,X
    // TODO: Fix comma operator: SUBD -$1,X

    // D057: SUBA $FFC4
    cpu.m_a -= 0xFFC4;

    // D05A: ADDA $A300
    cpu.m_a += 0xA300;

    // D05D: NEG <$FF
    // TODO: Convert NEG <$FF

    // D05F: BCC $D01C
    if (!cpu.carry_flag()) cpu.m_pc = 0xD01C;

    // D061: SUBD $2,X
    // TODO: Fix comma operator: SUBD $2,X

    // D063: ANDCC #$E1
    // TODO: Convert ANDCC #$E1

    // D066: NEG <$00
    // TODO: Convert NEG <$00

    // D068: CMPB -$A,Y
    // TODO: Fix comma operator: CMPB -$A,Y

    // D06A: TFR A,A
    cpu.m_a = cpu.m_a;

    // D06C: TFR PC,inv
    cpu.m_inv = cpu.m_pc;

    // D06E: ADDA $A01F
    cpu.m_a += 0xA01F;

    // D071: BGT $D053
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xD053;

    // D073: CWAI #$00
    // TODO: Convert CWAI #$00

    // D075: NEG <$FF
    // TODO: Convert NEG <$FF

    // D078: NEG <$D2
    // TODO: Convert NEG <$D2

    // D07A: SUBB $E,S
    // TODO: Fix comma operator: SUBB $E,S

    // D07C: XNC >$0080
    // TODO: Convert XNC >$0080

    // D080: SUBB #$00
    cpu.m_b -= 0x00;

    // D083: CMPX $019A
    cpu.compare_x(cpu.read_memory16(0x019A));

    // D086: NEG <$00
    // TODO: Convert NEG <$00

    // D088: LDU $841D
    cpu.m_u = cpu.read_memory16(0x841D);

    // D08B: ANDB ,S+
    // TODO: Complex indexed addressing: ,S+

    // D08D: DEC <$00
    // TODO: Convert DEC <$00

    // D08F: NEG <$E0
    // TODO: Convert NEG <$E0

    // D091: EORB #$BB
    cpu.m_b ^= 0xBB;

    // D093: SUBD $0,X
    // TODO: Fix comma operator: SUBD $0,X

    // D095: ANDA $FFEC
    cpu.m_a &= 0xFFEC;

    // D098: TFR S,inv
    cpu.m_inv = cpu.m_sp;

    // D09A: CMPB -$C,U
    // TODO: Fix comma operator: CMPB -$C,U

    // D09C: ADDA $A300
    cpu.m_a += 0xA300;

    // D09F: NEG <$E2
    // TODO: Convert NEG <$E2

    // D0A2: ADDA $A300
    cpu.m_a += 0xA300;

    // D0A5: ASL $E078
    // TODO: Convert ASL $E078

    // D0A8: ADDA $A300
    cpu.m_a += 0xA300;

    // D0AB: JMP [$C400]
    // TODO: Invalid branch offset: [$C400]

    // D0AF: ASL $FF1A
    // TODO: Convert ASL $FF1A

    // D0B2: NEG <$14
    // TODO: Convert NEG <$14

    // D0B4: STU $A600
    cpu.write_memory16(0xA600, cpu.m_u);

    // D0B7: BVC $D0B8
    // TODO: Convert BVC $D0B8

    // D0B9: LDD $0,X
    // TODO: Fix comma operator: LDD $0,X

    // D0BB: NEG <$E1
    // TODO: Convert NEG <$E1

    // D0BD: ASL [D,Y]
    // TODO: Convert ASL [D,Y]

    // D0BF: JSR <$00
    cpu.call_function(0x00);

    // D0C1: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // D0C3: SUBA >$0000
    cpu.m_a -= 0x0000;

    // D0C6: LDU $701F
    cpu.m_u = cpu.read_memory16(0x701F);

    // D0C9: CMPX <$FF
    cpu.compare_x(cpu.read_memory16(0xFF));

    // D0CB: CMPX <$BB
    cpu.compare_x(cpu.read_memory16(0xBB));

    // D0CD: ORA <$1F
    cpu.m_a |= 0x1F;

    // D0CF: CMPX <$E0
    cpu.compare_x(cpu.read_memory16(0xE0));

    // D0D1: BVC $D08E
    // TODO: Convert BVC $D08E

    // D0D3: JSR <$1F
    cpu.call_function(0x1F);

    // D0D5: SBCA <$E0
    // TODO: Convert SBCA <$E0

    // D0D7: LDX $BB94
    cpu.m_x = cpu.read_memory16(0xBB94);

    // D0DA: TFR inv,inv
    cpu.m_inv = cpu.m_inv;

    // D0DC: SUBB -$10,U
    // TODO: Fix comma operator: SUBB -$10,U

    // D0DF: BITB $0,X
    // TODO: Convert BITB $0,X

    // D0E1: NEG <$FE
    // TODO: Convert NEG <$FE

    // D0E3: EORB $0,X
    // TODO: Fix comma operator: EORB $0,X

    // D0E5: EXG inv,inv
    // TODO: Convert EXG inv,inv

    // D0E8: NEG <$50
    // TODO: Convert NEG <$50

    // D0EA: SUBB $D0A8,PCR
    // TODO: Fix comma operator: SUBB $D0A8,PCR

    // D0ED: STA <$00
    cpu.write_memory(0x00, cpu.m_a);

    // D0EF: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // D0F1: EORB <$00
    cpu.m_b ^= 0x00;

    // D0F3: ASL $FF38
    // TODO: Convert ASL $FF38

    // D0F6: TFR A,A
    cpu.m_a = cpu.m_a;

    // D0F8: TFR inv,inv
    cpu.m_inv = cpu.m_inv;

    // D0FA: ADDA $9A1F
    cpu.m_a += 0x9A1F;

    // D0FD: ANDB #$E0
    cpu.m_b &= 0xE0;

    // D0FF: LSR -$1,X
    // TODO: Convert LSR -$1,X

    // D101: EORB <$E0
    cpu.m_b ^= 0xE0;

    // D103: DEC <$1F
    // TODO: Convert DEC <$1F

    // D105: SBCB [$B000]
    // TODO: Convert SBCB [$B000]

    // D109: NEG <$FF
    // TODO: Convert NEG <$FF

    // D10B: BGT $D10D
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xD10D;

    // D10D: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // D10F: LDB >$0000
    cpu.m_b = cpu.read_memory(0x0000);

    // D112: SUBB [W,Y]
    // TODO: Complex indexed addressing: [W,Y]

    // D114: XNC >$0080
    // TODO: Convert XNC >$0080

    // D118: SUBB #$00
    cpu.m_b -= 0x00;

    // D11A: LSR [$0078]
    // TODO: Convert LSR [$0078]

    // D11E: SUBB $A,X
    // TODO: Fix comma operator: SUBB $A,X

    // D120: TFR inv,U
    cpu.m_u = cpu.m_inv;

    // D122: NEG <$1E
    // TODO: Convert NEG <$1E

    // D124: TFR DP,PC
    cpu.m_pc = cpu.m_dp;

    // D126: STU $D800
    cpu.write_memory16(0xD800, cpu.m_u);

    // D129: CWAI #$E0
    // TODO: Convert CWAI #$E0

    // D12C: SUBA -$8,X
    // TODO: Fix comma operator: SUBA -$8,X

    // D12E: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D130: LSR [$1FD3]
    // TODO: Convert LSR [$1FD3]

    // D134: TFR inv,DP
    cpu.m_dp = cpu.m_inv;

    // D136: TFR inv,X
    cpu.m_x = cpu.m_inv;

    // D138: STU $BA1F
    cpu.write_memory16(0xBA1F, cpu.m_u);

    // D13B: ADDD <$E0
    cpu.m_d += 0xE0;

    // D13E: SUBA -$8,X
    // TODO: Fix comma operator: SUBA -$8,X

    // D140: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D142: LSR [$1FD3]
    // TODO: Convert LSR [$1FD3]

    // D146: TFR inv,inv
    cpu.m_inv = cpu.m_inv;

    // D148: NEG <$5A
    // TODO: Convert NEG <$5A

    // D14A: STU $C41F
    cpu.write_memory16(0xC41F, cpu.m_u);

    // D14D: BITA $E01E
    // TODO: Convert BITA $E01E

    // D151: LBRA $D1BD
    // TODO: Convert LBRA $D1BD

    // D154: STU $F61F
    cpu.write_memory16(0xF61F, cpu.m_u);

    // D157: EORA #$FF
    cpu.m_a ^= 0xFF;

    // D159: SBCB ,Y+
    // TODO: Convert SBCB ,Y+

    // D15C: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D15E: LSR [$002D]
    // TODO: Convert LSR [$002D]

    // D162: TFR inv,inv
    cpu.m_inv = cpu.m_inv;

    // D164: NEG <$4B
    // TODO: Convert NEG <$4B

    // D166: SUBB $8,Y
    // TODO: Fix comma operator: SUBB $8,Y

    // D168: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // D16A: STU $C400
    cpu.write_memory16(0xC400, cpu.m_u);

    // D16D: BLT $D16F
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xD16F;

    // D16F: DEC <$00
    // TODO: Convert DEC <$00

    // D171: CLR <$E0
    cpu.write_memory(0xE0, 0);

    // D173: LEAS $0,X
    // TODO: Fix comma operator: LEAS $0,X

    // D175: CLR <$FF
    cpu.write_memory(0xFF, 0);

    // D177: SUBA $A018
    cpu.m_a -= 0xA018;

    // D17A: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D17C: LSR [$002D]
    // TODO: Convert LSR [$002D]

    // D180: NEG <$00
    // TODO: Convert NEG <$00

    // D182: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // D184: SUBB -$10,U
    // TODO: Fix comma operator: SUBB -$10,U

    // D186: NEG <$3C
    // TODO: Convert NEG <$3C

    // D188: STU $E200
    cpu.write_memory16(0xE200, cpu.m_u);

    // D18B: CWAI #$00
    // TODO: Convert CWAI #$00

    // D18D: NEG <$A0
    // TODO: Convert NEG <$A0

    // D190: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D192: LSR [$1F88]
    // TODO: Convert LSR [$1F88]

    // D196: SUBB -$2,X
    // TODO: Fix comma operator: SUBB -$2,X

    // D198: SUBA -$8,X
    // TODO: Fix comma operator: SUBA -$8,X

    // D19A: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D19C: LSR [$C000]
    // TODO: Convert LSR [$C000]

    // D1A0: LSR [$005A]
    // TODO: Convert LSR [$005A]

    // D1A4: SUBB $F,X
    // TODO: Fix comma operator: SUBB $F,X

    // D1A6: TFR inv,X
    cpu.m_x = cpu.m_inv;

    // D1A8: NEG <$0F
    // TODO: Convert NEG <$0F

    // D1AA: TFR DP,PC
    cpu.m_pc = cpu.m_dp;

    // D1AC: STU $E200
    cpu.write_memory16(0xE200, cpu.m_u);

    // D1AF: BLT $D191
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xD191;

    // D1B2: SUBA -$8,X
    // TODO: Fix comma operator: SUBA -$8,X

    // D1B4: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D1B6: LSR [$1FCC]
    // TODO: Convert LSR [$1FCC]

    // D1BA: NEG <$05
    // TODO: Convert NEG <$05

    // D1BC: NEG <$07
    // TODO: Convert NEG <$07

    // D1BE: STU $AB1F
    cpu.write_memory16(0xAB1F, cpu.m_u);

    // D1C1: BITA $E046
    // TODO: Convert BITA $E046

    // D1C4: SUBA -$8,X
    // TODO: Fix comma operator: SUBA -$8,X

    // D1C6: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D1C8: LSR [$1FF1]
    // TODO: Convert LSR [$1FF1]

    // D1CC: TFR inv,inv
    cpu.m_inv = cpu.m_inv;

    // D1CE: NEG <$5A
    // TODO: Convert NEG <$5A

    // D1D0: STU $EC1F
    cpu.write_memory16(0xEC1F, cpu.m_u);

    // D1D3: EORA #$E0
    cpu.m_a ^= 0xE0;

    // D1D5: NEG <$4F
    // TODO: Convert NEG <$4F

    // D1D7: LBRA $D234
    // TODO: Convert LBRA $D234

    // D1DA: SUBB -$C,X
    // TODO: Fix comma operator: SUBB -$C,X

    // D1DC: TFR B,D
    cpu.m_d = cpu.m_b;

    // D1DE: STU $CEA0
    cpu.write_memory16(0xCEA0, cpu.m_u);

    // D1E2: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D1E4: LSR [$003C]
    // TODO: Convert LSR [$003C]

    // D1E8: TFR inv,X
    cpu.m_x = cpu.m_inv;

    // D1EA: NEG <$34
    // TODO: Convert NEG <$34

    // D1EC: SUBB $1,U
    // TODO: Fix comma operator: SUBB $1,U

    // D1EE: TFR inv,Y
    cpu.m_y = cpu.m_inv;

    // D1F0: STU $B000
    cpu.write_memory16(0xB000, cpu.m_u);

    // D1F3: BLT $D1F5
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xD1F5;

    // D1F6: TFR inv,X
    cpu.m_x = cpu.m_inv;

    // D1F8: SUBB -$4,Y
    // TODO: Fix comma operator: SUBB -$4,Y

    // D1FA: NEG <$2D
    // TODO: Convert NEG <$2D

    // D1FC: STU $B0A0
    cpu.write_memory16(0xB0A0, cpu.m_u);

    // D200: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D202: LSR [$4F05]
    // TODO: Convert LSR [$4F05]

    // D206: TFR DP,PC
    cpu.m_pc = cpu.m_dp;

    // D208: SUBB $6,U
    // TODO: Fix comma operator: SUBB $6,U

    // D20A: NEG <$5A
    // TODO: Convert NEG <$5A

    // D20C: STU $E200
    cpu.write_memory16(0xE200, cpu.m_u);

    // D20F: BCS $D211
    if (cpu.carry_flag()) cpu.m_pc = 0xD211;

    // D211: EXG CC,D
    // TODO: Convert EXG CC,D

    // D214: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D216: LSR [$1F81]
    // TODO: Convert LSR [$1F81]

    // D21A: SUBB $0,X
    // TODO: Fix comma operator: SUBB $0,X

    // D21C: SUBA -$8,X
    // TODO: Fix comma operator: SUBA -$8,X

    // D21E: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D220: LSR [$C000]
    // TODO: Convert LSR [$C000]

    // D224: LSR [$005A]
    // TODO: Convert LSR [$005A]

    // D228: SUBB $A,X
    // TODO: Fix comma operator: SUBB $A,X

    // D22B: CLR <$A0
    cpu.write_memory(0xA0, 0);

    // D22E: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D230: LSR [$1F90]
    // TODO: Convert LSR [$1F90]

    // D234: STU $D800
    cpu.write_memory16(0xD800, cpu.m_u);

    // D238: SUBB -$4,Y
    // TODO: Fix comma operator: SUBB -$4,Y

    // D23A: TFR inv,U
    cpu.m_u = cpu.m_inv;

    // D23C: TFR inv,inv
    cpu.m_inv = cpu.m_inv;

    // D23E: TFR inv,Y
    cpu.m_y = cpu.m_inv;

    // D240: STU $CE00
    cpu.write_memory16(0xCE00, cpu.m_u);

    // D243: CLR <$E0
    cpu.write_memory(0xE0, 0);

    // D246: SUBA -$8,X
    // TODO: Fix comma operator: SUBA -$8,X

    // D248: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D24A: LSR [$1FE2]
    // TODO: Convert LSR [$1FE2]

    // D24E: TFR inv,X
    cpu.m_x = cpu.m_inv;

    // D250: NEG <$0F
    // TODO: Convert NEG <$0F

    // D252: STU $BA1F
    cpu.write_memory16(0xBA1F, cpu.m_u);

    // D255: ANDB #$E0
    cpu.m_b &= 0xE0;

    // D258: TFR inv,U
    cpu.m_u = cpu.m_inv;

    // D25A: TFR inv,inv
    cpu.m_inv = cpu.m_inv;

    // D25C: SUBA -$8,X
    // TODO: Fix comma operator: SUBA -$8,X

    // D25E: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D260: LSR [$0069]
    // TODO: Convert LSR [$0069]

    // D264: STU $CE1F
    cpu.write_memory16(0xCE1F, cpu.m_u);

    // D267: STA <$FF
    cpu.write_memory(0xFF, cpu.m_a);

    // D269: LDB $4F16
    cpu.m_b = cpu.read_memory(0x4F16);

    // D26C: NEG <$4B
    // TODO: Convert NEG <$4B

    // D26E: SUBB -$2,X
    // TODO: Fix comma operator: SUBB -$2,X

    // D270: TFR CC,inv
    cpu.m_inv = cpu.m_cc;

    // D272: STU $BA00
    cpu.write_memory16(0xBA00, cpu.m_u);

    // D275: BNE $D296
    if (!cpu.zero_flag()) cpu.m_pc = 0xD296;

    // D277: LDB $A018
    cpu.m_b = cpu.read_memory(0xA018);

    // D27A: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D27C: LSR [$0034]
    // TODO: Convert LSR [$0034]

    // D280: SUBB -$10,U
    // TODO: Fix comma operator: SUBB -$10,U

    // D282: TFR inv,X
    cpu.m_x = cpu.m_inv;

    // D284: STU $A600
    cpu.write_memory16(0xA600, cpu.m_u);

    // D287: BLT $D289
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xD289;

    // D289: BVC $D2AA
    // TODO: Convert BVC $D2AA

    // D28B: SBCB ,S+
    // TODO: Convert SBCB ,S+

    // D28D: LEAS $0,X
    // TODO: Fix comma operator: LEAS $0,X

    // D290: STU $C4A0
    cpu.write_memory16(0xC4A0, cpu.m_u);

    // D294: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D296: LSR [$002D]
    // TODO: Convert LSR [$002D]

    // D29A: NEG <$32
    // TODO: Convert NEG <$32

    // D29C: TFR inv,B
    cpu.m_b = cpu.m_inv;

    // D29E: SUBB $A,X
    // TODO: Fix comma operator: SUBB $A,X

    // D2A0: SUBA -$8,X
    // TODO: Fix comma operator: SUBA -$8,X

    // D2A2: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D2A4: LSR [$C000]
    // TODO: Convert LSR [$C000]

    // D2A8: LSR [$1F81]
    // TODO: Convert LSR [$1F81]

    // D2AC: SUBB $F,X
    // TODO: Fix comma operator: SUBB $F,X

    // D2AE: SUBA -$8,X
    // TODO: Fix comma operator: SUBA -$8,X

    // D2B0: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D2B2: LSR [$0034]
    // TODO: Convert LSR [$0034]

    // D2B6: NEG <$19
    // TODO: Convert NEG <$19

    // D2B8: NEG <$4B
    // TODO: Convert NEG <$4B

    // D2BA: STU $D81F
    cpu.write_memory16(0xD81F, cpu.m_u);

    // D2BD: BITA $E03C
    // TODO: Convert BITA $E03C

    // D2C0: NEG <$35
    // TODO: Convert NEG <$35

    // D2C2: NEG <$05
    // TODO: Convert NEG <$05

    // D2C4: NEG <$16
    // TODO: Convert NEG <$16

    // D2C6: STU $BF1F
    cpu.write_memory16(0xBF1F, cpu.m_u);

    // D2C9: CMPB $E055
    cpu.compare_b(cpu.read_memory(0xE055));

    // D2CC: SUBA -$8,X
    // TODO: Fix comma operator: SUBA -$8,X

    // D2CE: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D2D0: LSR [$002D]
    // TODO: Convert LSR [$002D]

    // D2D4: TFR inv,X
    cpu.m_x = cpu.m_inv;

    // D2D6: TFR inv,Y
    cpu.m_y = cpu.m_inv;

    // D2D8: STU $BA00
    cpu.write_memory16(0xBA00, cpu.m_u);

    // D2DC: SUBB $6,U
    // TODO: Fix comma operator: SUBB $6,U

    // D2DE: NEG <$16
    // TODO: Convert NEG <$16

    // D2E0: TFR inv,X
    cpu.m_x = cpu.m_inv;

    // D2E2: SUBA -$8,X
    // TODO: Fix comma operator: SUBA -$8,X

    // D2E4: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D2E6: LSR [$1F9F]
    // TODO: Convert LSR [$1F9F]

    // D2EA: STU $C900
    cpu.write_memory16(0xC900, cpu.m_u);

    // D2ED: ROL [$F140]
    // TODO: Convert ROL [$F140]

    // D2F1: SUBA -$8,X
    // TODO: Fix comma operator: SUBA -$8,X

    // D2F4: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D2F6: LSR [$1F97]
    // TODO: Convert LSR [$1F97]

    // D2FA: SUBB $D,Y
    // TODO: Fix comma operator: SUBB $D,Y

    // D2FC: NEG <$4B
    // TODO: Convert NEG <$4B

    // D2FE: STU $BA1F
    cpu.write_memory16(0xBA1F, cpu.m_u);

    // D301: ORB <$1F
    cpu.m_b |= 0x1F;

    // D303: LDB $1FDB
    cpu.m_b = cpu.read_memory(0x1FDB);

    // D306: SUBB -$10,U
    // TODO: Fix comma operator: SUBB -$10,U

    // D308: NEG <$00
    // TODO: Convert NEG <$00

    // D30A: STU $ABA0
    cpu.write_memory16(0xABA0, cpu.m_u);

    // D30E: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D310: LSR [$1FE2]
    // TODO: Convert LSR [$1FE2]

    // D314: NEG <$23
    // TODO: Convert NEG <$23

    // D316: NEG <$1E
    // TODO: Convert NEG <$1E

    // D318: SUBB -$E,Y
    // TODO: Fix comma operator: SUBB -$E,Y

    // D31A: TFR CC,inv
    cpu.m_inv = cpu.m_cc;

    // D31C: STU $C41F
    cpu.write_memory16(0xC41F, cpu.m_u);

    // D31F: SBCB $0,X
    // TODO: Convert SBCB $0,X

    // D321: BVC $D323
    // TODO: Convert BVC $D323

    // D323: ASL $E014
    // TODO: Convert ASL $E014

    // D326: SUBA -$8,X
    // TODO: Fix comma operator: SUBA -$8,X

    // D328: SUBA -$A,X
    // TODO: Fix comma operator: SUBA -$A,X

    // D32A: LSR [$C000]
    // TODO: Convert LSR [$C000]

    // D32F: SUBB $0,X
    // TODO: Fix comma operator: SUBB $0,X

    // D331: NEG <$00
    // TODO: Convert NEG <$00

    // D333: CWAI #$1F
    // TODO: Convert CWAI #$1F

    // D335: SBCB [$C41F]
    // TODO: Convert SBCB [$C41F]

    // D339: SBCB ,S+
    // TODO: Convert SBCB ,S+

    // D33B: BVC $D35C
    // TODO: Convert BVC $D35C

    // D33D: SBCB -$1,X
    // TODO: Convert SBCB -$1,X

    // D33F: EORB <$00
    cpu.m_b ^= 0x00;

    // D341: CWAI #$E0
    // TODO: Convert CWAI #$E0

    // D343: NEG <$1F
    // TODO: Convert NEG <$1F

    // D345: SBCB [$D800]
    // TODO: Convert SBCB [$D800]

    // D34A: NEG <$00
    // TODO: Convert NEG <$00

    // D34C: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // D34E: SUBB $8,Y
    // TODO: Fix comma operator: SUBB $8,Y

    // D350: SUBB #$00
    cpu.m_b -= 0x00;

    // D353: LDB >$005A
    cpu.m_b = cpu.read_memory(0x005A);

    // D356: NEG <$00
    // TODO: Convert NEG <$00

    // D358: TFR CC,inv
    cpu.m_inv = cpu.m_cc;

    // D35A: SUBB -$C,X
    // TODO: Fix comma operator: SUBB -$C,X

    // D35C: NEG <$3C
    // TODO: Convert NEG <$3C

    // D35E: SUBB -$C,X
    // TODO: Fix comma operator: SUBB -$C,X

    // D360: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // D362: NEG <$14
    // TODO: Convert NEG <$14

    // D364: NEG <$00
    // TODO: Convert NEG <$00

    // D366: STU $D81F
    cpu.write_memory16(0xD81F, cpu.m_u);

    // D369: ANDB #$E0
    cpu.m_b &= 0xE0;

    // D36C: NEG <$00
    // TODO: Convert NEG <$00

    // D36E: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // D370: NEG <$3C
    // TODO: Convert NEG <$3C

    // D372: SUBB $8,Y
    // TODO: Fix comma operator: SUBB $8,Y

    // D374: SUBB #$00
    cpu.m_b -= 0x00;

    // D377: SUBB $0,X
    // TODO: Fix comma operator: SUBB $0,X

    // D379: NEG <$1F
    // TODO: Convert NEG <$1F

    // D37B: ANDB #$00
    cpu.m_b &= 0x00;

    // D37D: EXG inv,D
    // TODO: Convert EXG inv,D

    // D37F: CWAI #$00
    // TODO: Convert CWAI #$00

    // D381: EXG inv,inv
    // TODO: Convert EXG inv,inv

    // D383: EORB <$00
    cpu.m_b ^= 0x00;

    // D385: EXG D,D
    // TODO: Convert EXG D,D

    // D387: BVC $D3A8
    // TODO: Convert BVC $D3A8

    // D389: ANDB #$E0
    cpu.m_b &= 0xE0;

    // D38B: NEG <$00
    // TODO: Convert NEG <$00

    // D38D: EXG inv,D
    // TODO: Convert EXG inv,D

    // D38F: BVC $D3B0
    // TODO: Convert BVC $D3B0

    // D391: LDA $0,X
    // TODO: Fix comma operator: LDA $0,X

    // D393: NEG <$00
    // TODO: Convert NEG <$00

    // D395: CWAI #$FF
    // TODO: Convert CWAI #$FF

    // D397: EORB <$C0
    cpu.m_b ^= 0xC0;

    // D399: NEG <$40
    // TODO: Convert NEG <$40

    // D39B: ORB -$1,X
    // TODO: Fix comma operator: ORB -$1,X

    // D39D: LDA $0,X
    // TODO: Fix comma operator: LDA $0,X

    // D39F: NEG <$00
    // TODO: Convert NEG <$00

    // D3A2: STU $EC1F
    cpu.write_memory16(0xEC1F, cpu.m_u);

    // D3A5: ANDB #$FF
    cpu.m_b &= 0xFF;

    // D3A7: LDD $0,X
    // TODO: Fix comma operator: LDD $0,X

    // D3A9: CWAI #$1F
    // TODO: Convert CWAI #$1F

    // D3AB: LDD $0,X
    // TODO: Fix comma operator: LDD $0,X

    // D3AD: NEG <$E0
    // TODO: Convert NEG <$E0

    // D3AF: BVC $D3B1
    // TODO: Convert BVC $D3B1

    // D3B1: CWAI #$FF
    // TODO: Convert CWAI #$FF

    // D3B3: LDD $0,X
    // TODO: Fix comma operator: LDD $0,X

    // D3B5: NEG <$00
    // TODO: Convert NEG <$00

    // D3B7: CWAI #$1F
    // TODO: Convert CWAI #$1F

    // D3B9: ANDB #$FF
    cpu.m_b &= 0xFF;

    // D3BB: EORB <$C0
    cpu.m_b ^= 0xC0;

    // D3BD: NEG <$44
    // TODO: Convert NEG <$44

    // D3BF: ORCC #$B9
    cpu.m_cc |= 0xB9;

    // D3C1: STU -$A,U
    // TODO: Handle indexed addressing: STU -$A,U

    // D3C3: BHI $D37E
    // TODO: Convert BHI $D37E

    // D3C5: STU $2,U
    // TODO: Handle indexed addressing: STU $2,U

    // D3C7: BPL $D382
    if (!cpu.negative_flag()) cpu.m_pc = 0xD382;

    // D3C9: STU $6,U
    // TODO: Handle indexed addressing: STU $6,U

    // D3CB: LSR <$C0
    // TODO: Convert LSR <$C0

    // D3CD: NEG <$46
    // TODO: Convert NEG <$46

    // D3CF: LSR <$B9
    // TODO: Convert LSR <$B9

    // D3D1: STU -$2,U
    // TODO: Handle indexed addressing: STU -$2,U

    // D3D3: PSHU PC,S,Y,X,D
    // TODO: Convert PSHU PC,S,Y,X,D

    // D3D5: NEG $5C06
    // TODO: Convert NEG $5C06

    // D3DA: LDB $7941
    cpu.m_b = cpu.read_memory(0x7941);

    // D3DD: LSR <$B9
    // TODO: Convert LSR <$B9

    // D3DF: STU -$1,U
    // TODO: Handle indexed addressing: STU -$1,U

}

} // namespace StarWars