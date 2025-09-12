#include "cpu_6809.h"

namespace StarWars {

void routine_fb38_impl(CPU6809& cpu) {
    // Converted from rom_disasm_fb38.md
    // Address: 0xFB38

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
    // TODO: Complex indexed addressing: ,S

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

    // FB5B: BPL $FFCF
    if (!cpu.negative_flag()) cpu.m_pc = 0xFB2C;

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

    // FB74: ANDB $0094,PCR
    // TODO: Fix comma operator: ANDB $0094,PCR

    // FB78: STD $501E
    cpu.write_memory16(0x501E, cpu.m_d);

    // FB7B: LDA #$57
    cpu.m_a = 0x57;

    // FB7D: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FB80: BRA $003B
    cpu.m_pc = 0xFBBD;

    // FB82: LDD #$AAAA
    cpu.m_d = 0xAAAA;

    // FB85: STD $501E
    cpu.write_memory16(0x501E, cpu.m_d);

    // FB88: LDA #$58
    cpu.m_a = 0x58;

    // FB8A: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FB8D: BRA $003B
    cpu.m_pc = 0xFBCA;

    // FB8F: LDD #$5555
    cpu.m_d = 0x5555;

    // FB92: STD $501E
    cpu.write_memory16(0x501E, cpu.m_d);

    // FB95: LDA #$59
    cpu.m_a = 0x59;

    // FB97: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FB9A: BRA $003B
    cpu.m_pc = 0xFBD7;

    // FB9C: LDA #$5A
    cpu.m_a = 0x5A;

    // FB9E: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FBA1: BRA $003B
    cpu.m_pc = 0xFBDE;

    // FBA3: LDA #$5B
    cpu.m_a = 0x5B;

    // FBA5: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FBA8: BRA $003B
    cpu.m_pc = 0xFBE5;

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

    // FBBD: BRA $003B
    cpu.m_pc = 0xFBFA;

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

    // FBD2: BRA $003B
    cpu.m_pc = 0xFC0F;

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
    cpu.m_pc = 0xFB73;

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

    // FC0D: STD $5018
    cpu.write_memory16(0x5018, cpu.m_d);

    // FC10: LDA #$5E
    cpu.m_a = 0x5E;

    // FC12: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FC16: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // FC19: JMP $FB73
    cpu.m_pc = 0xFB73;

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

    // FC2D: BCS $00EA
    if (cpu.carry_flag()) cpu.m_pc = 0xFC19;

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

    // FC51: BNE $0113
    if (!cpu.zero_flag()) cpu.m_pc = 0xFC66;

    // FC53: LDA #$5F
    cpu.m_a = 0x5F;

    // FC55: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // FC59: CMPU $5000
    // TODO: Convert CMPU $5000

    // FC5D: BEQ $012A
    if (cpu.zero_flag()) cpu.m_pc = 0xFC89;

    // FC5F: JMP $FB73
    cpu.m_pc = 0xFB73;

    // FC62: TFR U,D
    cpu.m_d = cpu.m_u;

    // FC64: LEAU D,U
    // TODO: Fix comma operator: LEAU D,U

    // FC66: CMPU #$0200
    // TODO: Convert CMPU #$0200

    // FC6A: BCS $010C
    if (cpu.carry_flag()) cpu.m_pc = 0xFC78;

    // FC6C: LDD #$0000
    cpu.m_d = 0x0000;

    // FC6F: JMP $FB73
    cpu.m_pc = 0xFB73;

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
    cpu.m_pc = 0xFB73;

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
    cpu.m_pc = 0xFB73;

    // FCD3: NEG <$00
    // TODO: Convert NEG <$00

    // FCD6: NEG <$55
    // TODO: Convert NEG <$55

    // FCD9: NEG <$00
    // TODO: Convert NEG <$00

    // FCDD: SUBB #$00
    cpu.m_b -= 0x00;

    // FCE1: BPL $0155
    if (!cpu.negative_flag()) cpu.m_pc = 0xFD38;

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

    // FD04: CMPX [$017B,PCR]
    // TODO: Complex indexed addressing: [$017B,PCR]

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

    // FD15: BEQ $01E2
    if (cpu.zero_flag()) cpu.m_pc = 0xFCF9;

    // FD17: JMP $F720
    cpu.m_pc = 0xF720;

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

    // FD31: BNE $0222
    if (!cpu.zero_flag()) cpu.m_pc = 0xFD55;

    // FD33: STA $4620
    cpu.write_memory(0x4620, cpu.m_a);

    // FD36: LDY #$0000
    cpu.m_y = 0x0000;

}

} // namespace StarWars