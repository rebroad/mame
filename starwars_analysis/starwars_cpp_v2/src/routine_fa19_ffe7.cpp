#include "cpu_6809.h"

namespace StarWars {

void routine_fa19_ffe7_impl(CPU6809& cpu) {
    // Converted from rom_disasm_fa19_ffe7.md
    // Address: 0xFA19_FFE7

    label_FA19:
    // FA19: LEAX $8,X
    // TODO: Fix comma operator: LEAX $8,X

    // FA1B: CMPX #$FB73
    cpu.compare_x(0xFB73);

    // FA1E: LBCS $F994
    // TODO: Convert LBCS $F994

    // FA22: LDS #$4FFF
    cpu.m_sp = 0x4FFF;

    // FA26: TST <$CC
    // TODO: Convert TST <$CC

    // FA28: BNE $FA2E
    if (!cpu.zero_flag()) cpu.m_pc = 0xFA2E;

    // FA2A: LDB #$C5
    cpu.m_b = 0xC5;

    // FA2C: BRA $FA35
    goto label_FA35;

    // FA2E: LDB #$C4
    cpu.m_b = 0xC4;

    // FA30: JSR $E7C7
    cpu.call_function(0xE7C7);

    // FA33: LDB #$C6
    cpu.m_b = 0xC6;

    label_FA35:
    // FA35: JSR $E7C7
    cpu.call_function(0xE7C7);

    // FA38: LDX #$FAE1
    cpu.m_x = 0xFAE1;

    // FA3B: CLR <$CC
    cpu.write_memory(0xCC, 0);

    // FA3D: LDD #$6480
    cpu.m_d = 0x6480;

    // FA40: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA42: TFR X,D
    cpu.m_d = cpu.m_x;

    // FA44: SUBD #$FAE9
    cpu.m_d -= 0xFAE9;

    // FA48: LDS #$FA4E
    cpu.m_sp = 0xFA4E;

    // FA4C: JMP [,X]
    // TODO: Invalid branch offset: [,X]

    label_FA4E:
    // FA4E: BEQ $FAC1
    if (cpu.zero_flag()) cpu.m_pc = 0xFAC1;

    // FA50: STD <$D2
    cpu.write_memory16(0xD2, cpu.m_d);

    // FA52: INC <$CC
    // TODO: Convert INC <$CC

    // FA54: CMPX #$FAF9
    cpu.compare_x(0xFAF9);

    // FA57: BCC $FA92
    if (!cpu.carry_flag()) cpu.m_pc = 0xFA92;

    // FA59: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // FA5B: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA5D: LDD #$1EA2
    cpu.m_d = 0x1EA2;

    // FA60: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA62: LDD $3032
    cpu.m_d = cpu.read_memory16(0x3032);

    // FA65: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA67: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA69: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA6B: LDD $3022
    cpu.m_d = cpu.read_memory16(0x3022);

    // FA6E: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA70: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    // FA73: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA75: TFR X,D
    cpu.m_d = cpu.m_x;

    // FA77: SUBD #$FAE1
    cpu.m_d -= 0xFAE1;

    // FA7C: ADDB #$50
    cpu.m_b += 0x50;

    // FA7E: LDA #$03
    cpu.m_a = 0x03;

    // FA81: BCS $FA88
    if (cpu.carry_flag()) cpu.m_pc = 0xFA88;

    // FA83: LDU $3022
    cpu.m_u = cpu.read_memory16(0x3022);

    // FA86: BRA $FA8B
    goto label_FA8B;

    // FA88: LDU $3032
    cpu.m_u = cpu.read_memory16(0x3032);

    label_FA8B:
    // FA8B: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // FA8E: BPL $FA80
    if (!cpu.negative_flag()) cpu.m_pc = 0xFA80;

    // FA90: BRA $FAA9
    goto label_FAA9;

    // FA92: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // FA94: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA96: LDD #$0096
    cpu.m_d = 0x0096;

    // FA99: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA9B: TFR X,D
    cpu.m_d = cpu.m_x;

    // FA9D: SUBD #$FAF9
    cpu.m_d -= 0xFAF9;

    // FAA1: LDS #$3018
    cpu.m_sp = 0x3018;

    // FAA5: LDD B,S
    // TODO: Fix comma operator: LDD B,S

    // FAA7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    label_FAA9:
    // FAA9: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    // FAAC: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FAAE: LDS #$4FFF
    cpu.m_sp = 0x4FFF;

    // FAB2: LDA <$D2
    cpu.m_a = cpu.read_memory(0xD2);

    // FAB4: JSR $E790
    cpu.call_function(0xE790);

    // FAB7: LDA <$D3
    cpu.m_a = cpu.read_memory(0xD3);

    // FAB9: JSR $E790
    cpu.call_function(0xE790);

    // FABC: LDD #$8040
    cpu.m_d = 0x8040;

    // FABF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FAC1: LEAX $4,X
    // TODO: Fix comma operator: LEAX $4,X

    // FAC3: CMPX #$FB09
    cpu.compare_x(0xFB09);

    // FAC6: LBCS $FA42
    // TODO: Convert LBCS $FA42

    // FACA: LDS #$4FFF
    cpu.m_sp = 0x4FFF;

    // FACE: TST <$CC
    // TODO: Convert TST <$CC

    // FAD0: BNE $FAD6
    if (!cpu.zero_flag()) cpu.m_pc = 0xFAD6;

    // FAD2: LDB #$C8
    cpu.m_b = 0xC8;

    // FAD4: BRA $FAD8
    goto label_FAD8;

    // FAD6: LDB #$C7
    cpu.m_b = 0xC7;

    label_FAD8:
    // FAD8: JSR $E7C7
    cpu.call_function(0xE7C7);

    // FADB: LDU #$F727
    cpu.m_u = 0xF727;

    // FADE: JMP $F70D
    goto label_F70D;

    // FAE1: ADDB $AA1F
    cpu.m_b += 0xAA1F;

    // FAE4: DEC [D,S]
    // TODO: Convert DEC [D,S]

    // FAE6: STX $1F38
    cpu.write_memory16(0x1F38, cpu.m_x);

    // FAE9: LDD $AC1F
    cpu.m_d = cpu.read_memory16(0xAC1F);

    // FAEC: ROR <$FC
    // TODO: Convert ROR <$FC

    // FAEE: CMPX -$2,X
    // TODO: Fix comma operator: CMPX -$2,X

    // FAF0: ANDB <$FC
    cpu.m_b &= 0xFC;

    // FAF2: CMPX -$2,X
    // TODO: Fix comma operator: CMPX -$2,X

    // FAF4: SBCA [$FAA3,PCR]
    // TODO: Convert SBCA [$FAA3,PCR]

    // FAF7: EXG inv,D
    // TODO: Convert EXG inv,D

    // FAF9: ADDB $091F
    cpu.m_b += 0x091F;

    // FAFC: DEC [$FB1B,PCR]
    // TODO: Convert DEC [$FB1B,PCR]

    // FAFF: TFR U,A
    cpu.m_a = cpu.m_u;

    // FB01: LDD $721F
    cpu.m_d = cpu.read_memory16(0x721F);

    // FB04: ROR <$FB
    // TODO: Convert ROR <$FB

    // FB06: ANDB <$1E
    cpu.m_b &= 0x1E;

    // FB08: ANDB <$10
    cpu.m_b &= 0x10;

    // FB0A: LDU #$FB10
    cpu.m_u = 0xFB10;

    // FB0D: JMP $FBF6
    goto label_FBF6;

    // FB10: CMPD #$0001
    // TODO: Convert CMPD #$0001

    // FB14: BEQ $FB19
    if (cpu.zero_flag()) cpu.m_pc = 0xFB19;

    // FB16: JMP $FA4E
    goto label_FA4E;

    // FB19: LDU #$0002
    cpu.m_u = 0x0002;

    // FB1C: LDS #$FB23
    cpu.m_sp = 0xFB23;

    // FB20: JMP $FC0D
    goto label_FC0D;

    // FB23: CMPD -$0CB2,U
    // TODO: Convert CMPD -$0CB2,U

    // FB28: BEQ $FB2D
    if (cpu.zero_flag()) cpu.m_pc = 0xFB2D;

    // FB2A: JMP $FA4E
    goto label_FA4E;

    // FB2D: LEAU $2,U
    // TODO: Fix comma operator: LEAU $2,U

    // FB2F: CMPU #$0020
    // TODO: Convert CMPU #$0020

    // FB33: BCS $FB1C
    if (cpu.carry_flag()) cpu.m_pc = 0xFB1C;

    // FB35: JMP $FA4E
    goto label_FA4E;

    label_FB38:
    // FB38: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // FB3A: STD $4706
    cpu.write_memory16(0x4706, cpu.m_d);

    // FB3D: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // FB3F: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // FB43: LDD $4700
    cpu.m_d = cpu.read_memory16(0x4700);

    // FB46: CMPD $4,X
    // TODO: Convert CMPD $4,X

    // FB49: JMP ,S
    // TODO: Invalid branch offset: ,S

    // FB4C: NEG <$40
    // TODO: Convert NEG <$40

    // FB4E: NEG <$40
    // TODO: Convert NEG <$40

    // FB50: NEG <$00
    // TODO: Convert NEG <$00

    // FB52: EORB #$55
    cpu.m_b ^= 0x55;

    // FB56: NEG <$55
    // TODO: Convert NEG <$55

    // FB59: NEG <$96
    // TODO: Convert NEG <$96

    // FB5B: BPL $FB07
    if (!cpu.negative_flag()) cpu.m_pc = 0xFB07;

    // FB5E: NEG <$2A
    // TODO: Convert NEG <$2A

    // FB60: ORA $0,X
    // TODO: Fix comma operator: ORA $0,X

    // FB62: LSR $A,Y
    // TODO: Convert LSR $A,Y

    // FB64: ORA $A,Y
    // TODO: Fix comma operator: ORA $A,Y

    // FB66: ORA $0,U
    // TODO: Fix comma operator: ORA $0,U

    // FB68: NEG <$00
    // TODO: Convert NEG <$00

    // FB6A: LEAS -$B,U
    // TODO: Fix comma operator: LEAS -$B,U

    // FB70: NEG <$00
    // TODO: Convert NEG <$00

    // FB72: NEG <$6E
    // TODO: Convert NEG <$6E

    // FB74: ANDB $FBCC,PCR
    // TODO: Fix comma operator: ANDB $FBCC,PCR

    // FB78: STD $501E
    cpu.write_memory16(0x501E, cpu.m_d);

    // FB7B: LDA #$57
    cpu.m_a = 0x57;

    // FB7D: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FB80: BRA $FB73
    goto label_FB73;

    // FB82: LDD #$AAAA
    cpu.m_d = 0xAAAA;

    // FB85: STD $501E
    cpu.write_memory16(0x501E, cpu.m_d);

    // FB88: LDA #$58
    cpu.m_a = 0x58;

    // FB8A: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FB8D: BRA $FB73
    goto label_FB73;

    // FB8F: LDD #$5555
    cpu.m_d = 0x5555;

    // FB92: STD $501E
    cpu.write_memory16(0x501E, cpu.m_d);

    // FB95: LDA #$59
    cpu.m_a = 0x59;

    // FB97: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FB9A: BRA $FB73
    goto label_FB73;

    // FB9C: LDA #$5A
    cpu.m_a = 0x5A;

    // FB9E: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FBA1: BRA $FB73
    goto label_FB73;

    // FBA3: LDA #$5B
    cpu.m_a = 0x5B;

    // FBA5: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FBA8: BRA $FB73
    goto label_FB73;

    // FBAA: LDD #$5555
    cpu.m_d = 0x5555;

    // FBAD: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // FBB0: LDA #$5C
    cpu.m_a = 0x5C;

    // FBB2: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FBB6: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // FBB9: CMPD #$5555
    // TODO: Convert CMPD #$5555

    // FBBD: BRA $FB73
    goto label_FB73;

    // FBBF: LDD #$AAAA
    cpu.m_d = 0xAAAA;

    // FBC2: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // FBC5: LDA #$5C
    cpu.m_a = 0x5C;

    // FBC7: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FBCB: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // FBCE: CMPD #$AAAA
    // TODO: Convert CMPD #$AAAA

    // FBD2: BRA $FB73
    goto label_FB73;

    // FBD4: LDD #$2696
    cpu.m_d = 0x2696;

    // FBD7: STD $5018
    cpu.write_memory16(0x5018, cpu.m_d);

    // FBDA: LDD #$1B2C
    cpu.m_d = 0x1B2C;

    // FBDD: STD $501A
    cpu.write_memory16(0x501A, cpu.m_d);

    // FBE0: LDD #$4000
    cpu.m_d = 0x4000;

    // FBE3: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);

    // FBE6: LDA #$5D
    cpu.m_a = 0x5D;

    // FBE8: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FBEC: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // FBEF: CMPD #$0B6A
    // TODO: Convert CMPD #$0B6A

    // FBF3: JMP $FB73
    goto label_FB73;

    label_FBF6:
    // FBF6: LDA #$5A
    cpu.m_a = 0x5A;

    // FBF8: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FBFB: LDD #$0000
    cpu.m_d = 0x0000;

    // FBFE: STD $501A
    cpu.write_memory16(0x501A, cpu.m_d);

    // FC01: LDD #$4000
    cpu.m_d = 0x4000;

    // FC04: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);

    // FC07: LDD #$0001
    cpu.m_d = 0x0001;

    // FC0A: STD $5018
    cpu.write_memory16(0x5018, cpu.m_d);

    label_FC0D:
    // FC0D: STD $5018
    cpu.write_memory16(0x5018, cpu.m_d);

    // FC10: LDA #$5E
    cpu.m_a = 0x5E;

    // FC12: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FC16: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // FC19: JMP $FB73
    goto label_FB73;

    // FC1C: LDU #$5028
    cpu.m_u = 0x5028;

    // FC1F: LDD #$0005
    cpu.m_d = 0x0005;

    // FC22: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // FC24: ADDD #$0001
    cpu.m_d += 0x0001;

    // FC27: LEAU $8,U
    // TODO: Fix comma operator: LEAU $8,U

    // FC29: CMPU #$6000
    // TODO: Convert CMPU #$6000

    // FC2D: BCS $FC22
    if (cpu.carry_flag()) cpu.m_pc = 0xFC22;

    // FC2F: LDD #$0000
    cpu.m_d = 0x0000;

    // FC32: STD $501E
    cpu.write_memory16(0x501E, cpu.m_d);

    // FC35: LDD #$4000
    cpu.m_d = 0x4000;

    // FC38: STD $5020
    cpu.write_memory16(0x5020, cpu.m_d);

    // FC3B: LDD #$0004
    cpu.m_d = 0x0004;

    // FC3E: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // FC41: LDU #$0008
    cpu.m_u = 0x0008;

    // FC44: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);

    // FC47: TFR U,D
    cpu.m_d = cpu.m_u;

    // FC4B: LDA #$5B
    cpu.m_a = 0x5B;

    // FC4D: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FC51: BNE $FC4B
    if (!cpu.zero_flag()) cpu.m_pc = 0xFC4B;

    // FC53: LDA #$5F
    cpu.m_a = 0x5F;

    // FC55: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FC59: CMPU $5000
    // TODO: Convert CMPU $5000

    // FC5D: BEQ $FC62
    if (cpu.zero_flag()) cpu.m_pc = 0xFC62;

    // FC5F: JMP $FB73
    goto label_FB73;

    // FC62: TFR U,D
    cpu.m_d = cpu.m_u;

    // FC64: LEAU D,U
    // TODO: Fix comma operator: LEAU D,U

    // FC66: CMPU #$0200
    // TODO: Convert CMPU #$0200

    // FC6A: BCS $FC44
    if (cpu.carry_flag()) cpu.m_pc = 0xFC44;

    // FC6C: LDD #$0000
    cpu.m_d = 0x0000;

    // FC6F: JMP $FB73
    goto label_FB73;

    // FC72: LDD #$1B2C
    cpu.m_d = 0x1B2C;

    // FC75: STD $5018
    cpu.write_memory16(0x5018, cpu.m_d);

    // FC78: LDD #$0000
    cpu.m_d = 0x0000;

    // FC7B: STD $501A
    cpu.write_memory16(0x501A, cpu.m_d);

    // FC7E: LDD #$4000
    cpu.m_d = 0x4000;

    // FC81: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);

    // FC84: LDA #$5D
    cpu.m_a = 0x5D;

    // FC86: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FC8A: LDD #$196A
    cpu.m_d = 0x196A;

    // FC8D: STD $5018
    cpu.write_memory16(0x5018, cpu.m_d);

    // FC90: LDD #$0000
    cpu.m_d = 0x0000;

    // FC93: STD $501A
    cpu.write_memory16(0x501A, cpu.m_d);

    // FC96: LDD #$4000
    cpu.m_d = 0x4000;

    // FC99: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);

    // FC9C: LDA #$5E
    cpu.m_a = 0x5E;

    // FC9E: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FCA2: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // FCA5: CMPD #$3496
    // TODO: Convert CMPD #$3496

    // FCA9: JMP $FB73
    goto label_FB73;

    // FCAE: LDU #$FCD1
    cpu.m_u = 0xFCD1;

    // FCB1: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // FCB3: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // FCB5: STD $5018
    cpu.write_memory16(0x5018, cpu.m_d);

    // FCB8: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // FCBA: STD $501A
    cpu.write_memory16(0x501A, cpu.m_d);

    // FCBD: LDD $4,U
    // TODO: Fix comma operator: LDD $4,U

    // FCBF: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);

    // FCC2: LDA #$5D
    cpu.m_a = 0x5D;

    // FCC4: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FCC8: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // FCCB: CMPD $6,U
    // TODO: Convert CMPD $6,U

    // FCCE: JMP $FB73
    goto label_FB73;

    // FCD3: NEG <$00
    // TODO: Convert NEG <$00

    // FCD6: NEG <$55
    // TODO: Convert NEG <$55

    // FCD9: NEG <$00
    // TODO: Convert NEG <$00

    // FCDD: SUBB #$00
    cpu.m_b -= 0x00;

    // FCE1: BPL $FC8D
    if (!cpu.negative_flag()) cpu.m_pc = 0xFC8D;

    // FCE3: NEG <$00
    // TODO: Convert NEG <$00

    // FCE6: NEG <$2A
    // TODO: Convert NEG <$2A

    // FCE8: ORA $0,X
    // TODO: Fix comma operator: ORA $0,X

    // FCEA: NEG <$2A
    // TODO: Convert NEG <$2A

    // FCEC: ORA ,U+
    // TODO: Complex indexed addressing: ,U+

    // FCEE: NEG <$2A
    // TODO: Convert NEG <$2A

    // FCF0: ORA [D,S]
    // TODO: Complex indexed addressing: [D,S]

    // FCF2: LSR $FB82
    // TODO: Convert LSR $FB82

    // FCF5: ADDB $8FFB
    cpu.m_b += 0x8FFB;

    // FCF8: CMPX <$FB
    cpu.compare_x(cpu.read_memory16(0xFB));

    // FCFA: SUBD [D,S]
    // TODO: Complex indexed addressing: [D,S]

    // FCFC: ORA [D,S]
    // TODO: Complex indexed addressing: [D,S]

    // FCFE: STX $FCAC
    cpu.write_memory16(0xFCAC, cpu.m_x);

    // FD01: LDD $ACFC
    cpu.m_d = cpu.read_memory16(0xACFC);

    // FD04: CMPX [$FCB3,PCR]
    // TODO: Complex indexed addressing: [$FCB3,PCR]

    label_FD07:
    // FD07: LDA $4300
    cpu.m_a = cpu.read_memory(0x4300);

    // FD0A: ANDA #$10
    cpu.m_a &= 0x10;

    // FD0C: LDB $4320
    cpu.m_b = cpu.read_memory(0x4320);

    // FD0F: ANDB #$04
    cpu.m_b &= 0x04;

    // FD11: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // FD15: BEQ $FD1A
    if (cpu.zero_flag()) cpu.m_pc = 0xFD1A;

    // FD17: JMP $F720
    goto label_F720;

    // FD1A: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);

    // FD1D: LDA #$FF
    cpu.m_a = 0xFF;

    // FD1F: STA $4686
    cpu.write_memory(0x4686, cpu.m_a);

    // FD22: STA $4683
    cpu.write_memory(0x4683, cpu.m_a);

    // FD25: STA $4682
    cpu.write_memory(0x4682, cpu.m_a);

    // FD28: LDB $4340
    cpu.m_b = cpu.read_memory(0x4340);

    // FD2C: LDU #$FD9A
    cpu.m_u = 0xFD9A;

    // FD2F: CMPB ,U+
    // TODO: Complex indexed addressing: ,U+

    // FD31: BNE $FD5A
    if (!cpu.zero_flag()) cpu.m_pc = 0xFD5A;

    // FD33: STA $4620
    cpu.write_memory(0x4620, cpu.m_a);

    // FD36: LDY #$0000
    cpu.m_y = 0x0000;

    // FD3A: LDD #$BFAE
    cpu.m_d = 0xBFAE;

    // FD3D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FD3F: LDD #$8040
    cpu.m_d = 0x8040;

    // FD42: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FD44: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // FD46: LDS #$4FFF
    cpu.m_sp = 0x4FFF;

    // FD4A: JSR $E790
    cpu.call_function(0xE790);

    // FD4D: LDD #$2020
    cpu.m_d = 0x2020;

    // FD50: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FD52: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FD54: STA $4600
    cpu.write_memory(0x4600, cpu.m_a);

    // FD57: LDU #$FDBC
    cpu.m_u = 0xFDBC;

    // FD5A: LEAU $1,U
    // TODO: Fix comma operator: LEAU $1,U

    // FD5C: CMPU #$FDBC
    // TODO: Convert CMPU #$FDBC

    // FD60: BCS $FD2F
    if (cpu.carry_flag()) cpu.m_pc = 0xFD2F;

    // FD62: LDB $4340
    cpu.m_b = cpu.read_memory(0x4340);

    // FD66: TFR B,A
    cpu.m_a = cpu.m_b;

    // FD68: ANDB #$0F
    cpu.m_b &= 0x0F;

    // FD6A: ANDA #$F8
    cpu.m_a &= 0xF8;

    // FD6C: CMPA #$C0
    cpu.compare_a(0xC0);

    // FD6E: BEQ $FD72
    if (cpu.zero_flag()) cpu.m_pc = 0xFD72;

    // FD70: CLR <$D1
    cpu.write_memory(0xD1, 0);

    // FD72: LDX #$FD85
    cpu.m_x = 0xFD85;

    // FD75: CMPA ,X+
    // TODO: Complex indexed addressing: ,X+

    // FD77: BNE $FD7B
    if (!cpu.zero_flag()) cpu.m_pc = 0xFD7B;

    // FD79: JMP [,X]
    // TODO: Invalid branch offset: [,X]

    // FD7B: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // FD7D: CMPX #$FD9A
    cpu.compare_x(0xFD9A);

    // FD80: BCS $FD75
    if (cpu.carry_flag()) cpu.m_pc = 0xFD75;

    // FD82: JMP $FF24
    goto label_FF24;

    // FD85: NEG <$FD
    // TODO: Convert NEG <$FD

    // FD87: CMPX $80FD
    cpu.compare_x(cpu.read_memory16(0x80FD));

    // FD8A: STB <$C0
    cpu.write_memory(0xC0, cpu.m_b);

    // FD8C: STD $F2E0
    cpu.write_memory16(0xF2E0, cpu.m_d);

    // FD8F: LDU $4FE8
    cpu.m_u = cpu.read_memory16(0x4FE8);

    // FD92: LDU $4FF0
    cpu.m_u = cpu.read_memory16(0x4FF0);

    // FD95: LDU $7CF8
    cpu.m_u = cpu.read_memory16(0x7CF8);

    // FD98: LDU $A7E0
    cpu.m_u = cpu.read_memory16(0xA7E0);

    // FD9B: CMPB -$F,X
    // TODO: Fix comma operator: CMPB -$F,X

    // FD9E: SBCB -$E,X
    // TODO: Convert SBCB -$E,X

    // FDA0: ADDD -$D,X
    // TODO: Fix comma operator: ADDD -$D,X

    // FDA2: ANDB -$C,X
    // TODO: Fix comma operator: ANDB -$C,X

    // FDA4: BITB -$B,X
    // TODO: Convert BITB -$B,X

    // FDA6: LDB -$A,X
    // TODO: Fix comma operator: LDB -$A,X

    // FDA8: STB -$9,X
    // TODO: Handle indexed addressing: STB -$9,X

    // FDAA: EORB -$8,X
    // TODO: Fix comma operator: EORB -$8,X

    // FDAC: ADCB -$7,X
    // TODO: Convert ADCB -$7,X

    // FDAE: ORB $0,Y
    // TODO: Fix comma operator: ORB $0,Y

    // FDB0: SUBB $21F1
    cpu.m_b -= 0x21F1;

    // FDB3: BHI $FDA7
    // TODO: Convert BHI $FDA7

    // FDB5: BLS $FDAA
    // TODO: Convert BLS $FDAA

    // FDB7: BCC $FDAD
    if (!cpu.carry_flag()) cpu.m_pc = 0xFDAD;

    // FDB9: BCS $FDB3
    if (cpu.carry_flag()) cpu.m_pc = 0xFDB3;

    // FDBB: BNE $FE1A
    if (!cpu.zero_flag()) cpu.m_pc = 0xFE1A;

    // FDBD: BEQ $FDC2
    if (cpu.zero_flag()) cpu.m_pc = 0xFDC2;

    // FDBF: JMP $FF24
    goto label_FF24;

    // FDC2: TFR S,D
    cpu.m_d = cpu.m_sp;

    // FDC4: ANDA #$40
    cpu.m_a &= 0x40;

    // FDC6: ANDB #$01
    cpu.m_b &= 0x01;

    // FDC8: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // FDCC: BNE $FDD4
    if (!cpu.zero_flag()) cpu.m_pc = 0xFDD4;

    // FDCE: LDU #$4686
    cpu.m_u = 0x4686;

    // FDD1: JMP $FEFF
    goto label_FEFF;

    // FDD4: JMP $FD07
    goto label_FD07;

    // FDD8: BEQ $FDDD
    if (cpu.zero_flag()) cpu.m_pc = 0xFDDD;

    // FDDA: JMP $FF24
    goto label_FF24;

    // FDDD: TFR S,D
    cpu.m_d = cpu.m_sp;

    // FDDF: ANDA #$81
    cpu.m_a &= 0x81;

    // FDE1: ANDB #$F8
    cpu.m_b &= 0xF8;

    // FDE3: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // FDE7: BNE $FDEF
    if (!cpu.zero_flag()) cpu.m_pc = 0xFDEF;

    // FDE9: LDU #$4683
    cpu.m_u = 0x4683;

    // FDEC: JMP $FEFF
    goto label_FEFF;

    // FDEF: JMP $FD07
    goto label_FD07;

    // FDF2: CMPB #$06
    cpu.compare_b(0x06);

    // FDF4: BNE $FE0E
    if (!cpu.zero_flag()) cpu.m_pc = 0xFE0E;

    // FDF6: TST <$D1
    // TODO: Convert TST <$D1

    // FDF8: BNE $FE0C
    if (!cpu.zero_flag()) cpu.m_pc = 0xFE0C;

    // FDFA: LDX #$0800
    cpu.m_x = 0x0800;

    // FDFD: LDA #$00
    cpu.m_a = 0x00;

    // FDFF: STA ,X+
    // TODO: Handle indexed addressing: STA ,X+

    // FE01: ADDA #$05
    cpu.m_a += 0x05;

    // FE03: CMPX #$1000
    cpu.compare_x(0x1000);

    // FE06: BCS $FDFF
    if (cpu.carry_flag()) cpu.m_pc = 0xFDFF;

    // FE08: LDA #$FF
    cpu.m_a = 0xFF;

    // FE0A: STA <$D1
    cpu.write_memory(0xD1, cpu.m_a);

    // FE0C: BRA $FE34
    goto label_FE34;

    // FE0E: CLR <$D1
    cpu.write_memory(0xD1, 0);

    // FE10: STA $4620
    cpu.write_memory(0x4620, cpu.m_a);

    // FE13: LDX #$FE37
    cpu.m_x = 0xFE37;

    // FE19: CMPX #$FE4F
    cpu.compare_x(0xFE4F);

    // FE1C: BCS $FE21
    if (cpu.carry_flag()) cpu.m_pc = 0xFE21;

    // FE1E: JMP $FF24
    goto label_FF24;

    // FE21: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // FE23: STD >$0000
    cpu.write_memory16(0x0000, cpu.m_d);

    // FE26: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // FE28: STD >$0002
    cpu.write_memory16(0x0002, cpu.m_d);

    // FE2B: LDD #$2020
    cpu.m_d = 0x2020;

    // FE2E: STD >$0004
    cpu.write_memory16(0x0004, cpu.m_d);

    // FE31: STA $4600
    cpu.write_memory(0x4600, cpu.m_a);

    label_FE34:
    // FE34: JMP $FD07
    goto label_FD07;

    // FE37: BRA $FE59
    goto label_FE59;

    // FE39: BRA $FE5B
    goto label_FE5B;

    // FE3B: NEG <$00
    // TODO: Convert NEG <$00

    // FE3D: NEG <$00
    // TODO: Convert NEG <$00

    // FE40: XLBRA $1EC4
    // TODO: Convert XLBRA $1EC4

    // FE45: BRA $FE67
    goto label_FE67;

    // FE47: XNC $4020
    // TODO: Convert XNC $4020

    // FE4A: BRA $FEB3
    goto label_FEB3;

    // FE4C: SUBA #$20
    cpu.m_a -= 0x20;

    // FE4E: BRA $FDDE
    goto label_FDDE;

    // FE50: LDD $F158
    cpu.m_d = cpu.read_memory16(0xF158);

    // FE54: LDY #$0000
    cpu.m_y = 0x0000;

    // FE58: CMPX #$FD07
    cpu.compare_x(0xFD07);

    label_FE5B:
    // FE5B: BCS $FE60
    if (cpu.carry_flag()) cpu.m_pc = 0xFE60;

    // FE5D: JMP $FF24
    goto label_FF24;

    // FE60: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);

    // FE63: LEAY $1,Y
    // TODO: Fix comma operator: LEAY $1,Y

    // FE65: CMPY #$0200
    // TODO: Convert CMPY #$0200

    // FE69: BCS $FE71
    if (cpu.carry_flag()) cpu.m_pc = 0xFE71;

    // FE6B: LDS #$FD07
    cpu.m_sp = 0xFD07;

    // FE6F: BRA $FE75
    goto label_FE75;

    // FE71: LDS #$FE58
    cpu.m_sp = 0xFE58;

    label_FE75:
    // FE75: TFR X,D
    cpu.m_d = cpu.m_x;

    // FE77: SUBD #$FCFF
    cpu.m_d -= 0xFCFF;

    // FE7A: JMP [,X]
    // TODO: Invalid branch offset: [,X]

    // FE7C: LDX #$FB4B
    cpu.m_x = 0xFB4B;

    // FE83: LDY #$0000
    cpu.m_y = 0x0000;

    // FE87: CMPX #$FB73
    cpu.compare_x(0xFB73);

    // FE8A: BCS $FE8F
    if (cpu.carry_flag()) cpu.m_pc = 0xFE8F;

    // FE8C: JMP $FF24
    goto label_FF24;

    // FE8F: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);

    // FE92: LEAY $1,Y
    // TODO: Fix comma operator: LEAY $1,Y

    // FE94: CMPY #$0200
    // TODO: Convert CMPY #$0200

    // FE98: BCS $FEA0
    if (cpu.carry_flag()) cpu.m_pc = 0xFEA0;

    // FE9A: LDS #$FD07
    cpu.m_sp = 0xFD07;

    // FE9E: BRA $FEA4
    goto label_FEA4;

    // FEA0: LDS #$FE87
    cpu.m_sp = 0xFE87;

    label_FEA4:
    // FEA4: JMP $FB38
    goto label_FB38;

    // FEA7: ANDB #$07
    cpu.m_b &= 0x07;

    // FEA9: BEQ $FEAE
    if (cpu.zero_flag()) cpu.m_pc = 0xFEAE;

    // FEAB: JMP $FF24
    goto label_FF24;

    // FEAE: LDA #$01
    cpu.m_a = 0x01;

    // FEB0: STB $46E0
    cpu.write_memory(0x46E0, cpu.m_b);

    label_FEB3:
    // FEB3: TFR X,U
    cpu.m_u = cpu.m_x;

    // FEB5: LDB $4400
    cpu.m_b = cpu.read_memory(0x4400);

    // FEB8: LDB $4401
    cpu.m_b = cpu.read_memory(0x4401);

    // FEBB: ANDB #$40
    cpu.m_b &= 0x40;

    // FEBD: BNE $FF03
    if (!cpu.zero_flag()) cpu.m_pc = 0xFF03;

    // FEBF: LDB #$80
    cpu.m_b = 0x80;

    // FEC2: BMI $FF03
    if (cpu.negative_flag()) cpu.m_pc = 0xFF03;

    // FEC4: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);

    // FEC7: TST $4401
    // TODO: Convert TST $4401

    // FECA: BMI $FEC1
    if (cpu.negative_flag()) cpu.m_pc = 0xFEC1;

    // FECC: STA $4400
    cpu.write_memory(0x4400, cpu.m_a);

    // FECF: LDB $4401
    cpu.m_b = cpu.read_memory(0x4401);

    // FED2: BPL $FF03
    if (!cpu.negative_flag()) cpu.m_pc = 0xFF03;

    // FED4: LDX #$0100
    cpu.m_x = 0x0100;

    // FED7: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // FED9: BEQ $FF03
    if (cpu.zero_flag()) cpu.m_pc = 0xFF03;

    // FEDB: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);

    // FEDE: LDB $4401
    cpu.m_b = cpu.read_memory(0x4401);

    // FEE1: ANDB #$40
    cpu.m_b &= 0x40;

    // FEE3: BEQ $FED7
    if (cpu.zero_flag()) cpu.m_pc = 0xFED7;

    // FEE5: TST $4401
    // TODO: Convert TST $4401

    // FEE8: BMI $FF03
    if (cpu.negative_flag()) cpu.m_pc = 0xFF03;

    // FEEA: CMPA $4400
    cpu.compare_a(cpu.read_memory(0x4400));

    // FEED: BNE $FF03
    if (!cpu.zero_flag()) cpu.m_pc = 0xFF03;

    // FEEF: LDB $4401
    cpu.m_b = cpu.read_memory(0x4401);

    // FEF2: ANDB #$40
    cpu.m_b &= 0x40;

    // FEF4: BMI $FF03
    if (cpu.negative_flag()) cpu.m_pc = 0xFF03;

    // FEF7: BCC $FEB0
    if (!cpu.carry_flag()) cpu.m_pc = 0xFEB0;

    // FEF9: LDU #$4682
    cpu.m_u = 0x4682;

    // FEFC: JMP $FEFF
    goto label_FEFF;

    label_FEFF:
    // FEFF: LDA #$00
    cpu.m_a = 0x00;

    // FF01: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // FF03: LDX #$0000
    cpu.m_x = 0x0000;

    // FF06: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);

    // FF09: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // FF0B: CMPX #$AC55
    cpu.compare_x(0xAC55);

    // FF0E: BCS $FF06
    if (cpu.carry_flag()) cpu.m_pc = 0xFF06;

    // FF10: LDA #$FF
    cpu.m_a = 0xFF;

    // FF12: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // FF14: LDX #$0000
    cpu.m_x = 0x0000;

    // FF17: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);

    // FF1A: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // FF1C: CMPX #$AC55
    cpu.compare_x(0xAC55);

    // FF1F: BCS $FF17
    if (cpu.carry_flag()) cpu.m_pc = 0xFF17;

    // FF21: JMP $FD07
    goto label_FD07;

    label_FF24:
    // FF24: LDA #$00
    cpu.m_a = 0x00;

    // FF26: STA $4686
    cpu.write_memory(0x4686, cpu.m_a);

    // FF29: STA $4683
    cpu.write_memory(0x4683, cpu.m_a);

    // FF2C: STA $4682
    cpu.write_memory(0x4682, cpu.m_a);

    // FF2F: LDX #$0000
    cpu.m_x = 0x0000;

    // FF32: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);

    // FF35: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // FF37: CMPX #$5600
    cpu.compare_x(0x5600);

    // FF3A: BCS $FF32
    if (cpu.carry_flag()) cpu.m_pc = 0xFF32;

    // FF3C: LDA #$FF
    cpu.m_a = 0xFF;

    // FF3E: STA $4686
    cpu.write_memory(0x4686, cpu.m_a);

    // FF41: STA $4683
    cpu.write_memory(0x4683, cpu.m_a);

    // FF44: STA $4682
    cpu.write_memory(0x4682, cpu.m_a);

    // FF47: LDX #$0000
    cpu.m_x = 0x0000;

    // FF4A: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);

    // FF4D: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // FF4F: CMPX #$5600
    cpu.compare_x(0x5600);

    // FF52: BCS $FF4A
    if (cpu.carry_flag()) cpu.m_pc = 0xFF4A;

    // FF54: JMP $FD07
    goto label_FD07;

    // FF57: LDA [$C840]
    // TODO: Unrecognized operand: [$C840]

    // FF5B: LDA <$1F
    cpu.m_a = cpu.read_memory(0x1F);

    // FF5D: LSR -$10,X
    // TODO: Convert LSR -$10,X

    // FF60: SUBA -$C,S
    // TODO: Fix comma operator: SUBA -$C,S

    // FF62: LDA $0,Y
    // TODO: Fix comma operator: LDA $0,Y

    // FF64: XDEC $6EE0
    // TODO: Convert XDEC $6EE0

    // FF67: TST $E8AE
    // TODO: Convert TST $E8AE

    // FF6B: ASL $9207
    // TODO: Convert ASL $9207

    // FF6E: ANDB >$0018
    cpu.m_b &= 0x0018;

    // FF71: ADCB $0,U
    // TODO: Convert ADCB $0,U

    // FF73: ORA <$F5
    cpu.m_a |= 0xF5;

    // FF75: SUBA $3807
    cpu.m_a -= 0x3807;

    // FF78: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FF7B: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FF7E: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FF81: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FF84: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FF87: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FF8A: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FF8D: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FF90: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FF93: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FF96: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FF99: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FF9C: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FF9F: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFA2: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFA5: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFA8: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFAB: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFAE: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFB1: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFB4: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFB7: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFBA: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFBD: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFC0: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFC3: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFC6: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFC9: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFCC: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFCF: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFD2: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFD5: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFD8: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // FFDB: STU $434F
    cpu.write_memory16(0x434F, cpu.m_u);

    // FFE5: BRA $0018
    goto label_0018;

}

} // namespace StarWars