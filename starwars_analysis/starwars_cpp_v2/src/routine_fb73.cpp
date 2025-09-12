#include "cpu_6809.h"

namespace StarWars {

void routine_fb73_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_fb73.md
    // Address: 0xFB73

    // FB73: JMP ,S
    // TODO: Complex indexed addressing: ,S

    // FB75: LDD #$5555
    cpu.state_.d = 0x5555;

    // FB78: STD $501E
    cpu.write_memory(0x501E, cpu.state_.d);

    // FB7B: LDA #$57
    cpu.state_.a = 0x57;

    // FB7D: STA $4700
    cpu.write_memory(0x4700, cpu.state_.a);

    // FB80: BRA $0000
    cpu.state_.pc = 0xFB82;

    // FB82: LDD #$AAAA
    cpu.state_.d = 0xAAAA;

    // FB85: STD $501E
    cpu.write_memory(0x501E, cpu.state_.d);

    // FB88: LDA #$58
    cpu.state_.a = 0x58;

    // FB8A: STA $4700
    cpu.write_memory(0x4700, cpu.state_.a);

    // FB8D: BRA $0000
    cpu.state_.pc = 0xFB8F;

    // FB8F: LDD #$5555
    cpu.state_.d = 0x5555;

    // FB92: STD $501E
    cpu.write_memory(0x501E, cpu.state_.d);

    // FB95: LDA #$59
    cpu.state_.a = 0x59;

    // FB97: STA $4700
    cpu.write_memory(0x4700, cpu.state_.a);

    // FB9A: BRA $0000
    cpu.state_.pc = 0xFB9C;

    // FB9C: LDA #$5A
    cpu.state_.a = 0x5A;

    // FB9E: STA $4700
    cpu.write_memory(0x4700, cpu.state_.a);

    // FBA1: BRA $0000
    cpu.state_.pc = 0xFBA3;

    // FBA3: LDA #$5B
    cpu.state_.a = 0x5B;

    // FBA5: STA $4700
    cpu.write_memory(0x4700, cpu.state_.a);

    // FBA8: BRA $0000
    cpu.state_.pc = 0xFBAA;

    // FBAA: LDD #$5555
    cpu.state_.d = 0x5555;

    // FBAD: STD $5000
    cpu.write_memory(0x5000, cpu.state_.d);

    // FBB0: LDA #$5C
    cpu.state_.a = 0x5C;

    // FBB2: STA $4700
    cpu.write_memory(0x4700, cpu.state_.a);

    // FBB6: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // FBB9: CMPD #$5555
    // TODO: Convert CMPD #$5555

    // FBBD: BRA $0000
    cpu.state_.pc = 0xFBBF;

    // FBBF: LDD #$AAAA
    cpu.state_.d = 0xAAAA;

    // FBC2: STD $5000
    cpu.write_memory(0x5000, cpu.state_.d);

    // FBC5: LDA #$5C
    cpu.state_.a = 0x5C;

    // FBC7: STA $4700
    cpu.write_memory(0x4700, cpu.state_.a);

    // FBCB: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // FBCE: CMPD #$AAAA
    // TODO: Convert CMPD #$AAAA

    // FBD2: BRA $0000
    cpu.state_.pc = 0xFBD4;

    // FBD4: LDD #$2696
    cpu.state_.d = 0x2696;

    // FBD7: STD $5018
    cpu.write_memory(0x5018, cpu.state_.d);

    // FBDA: LDD #$1B2C
    cpu.state_.d = 0x1B2C;

    // FBDD: STD $501A
    cpu.write_memory(0x501A, cpu.state_.d);

    // FBE0: LDD #$4000
    cpu.state_.d = 0x4000;

    // FBE3: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // FBE6: LDA #$5D
    cpu.state_.a = 0x5D;

    // FBE8: STA $4700
    cpu.write_memory(0x4700, cpu.state_.a);

    // FBEC: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // FBEF: CMPD #$0B6A
    // TODO: Convert CMPD #$0B6A

    // FBF3: JMP $FB73
    cpu.state_.pc = 0xFB73;

    // FBF6: LDA #$5A
    cpu.state_.a = 0x5A;

    // FBF8: STA $4700
    cpu.write_memory(0x4700, cpu.state_.a);

    // FBFB: LDD #$0000
    cpu.state_.d = 0x0000;

    // FBFE: STD $501A
    cpu.write_memory(0x501A, cpu.state_.d);

    // FC01: LDD #$4000
    cpu.state_.d = 0x4000;

    // FC04: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // FC07: LDD #$0001
    cpu.state_.d = 0x0001;

    // FC0A: STD $5018
    cpu.write_memory(0x5018, cpu.state_.d);

    // FC0D: STD $5018
    cpu.write_memory(0x5018, cpu.state_.d);

    // FC10: LDA #$5E
    cpu.state_.a = 0x5E;

    // FC12: STA $4700
    cpu.write_memory(0x4700, cpu.state_.a);

    // FC16: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // FC19: JMP $FB73
    cpu.state_.pc = 0xFB73;

    // FC1C: LDU #$5028
    cpu.state_.u = 0x5028;

    // FC1F: LDD #$0005
    cpu.state_.d = 0x0005;

    // FC22: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // FC24: ADDD #$0001
    cpu.state_.d += 0x0001;

    // FC27: LEAU $8,U
    // TODO: Fix comma operator: LEAU $8,U

    // FC29: CMPU #$6000
    // TODO: Convert CMPU #$6000

    // FC2D: BCS $00AF
    if (cpu.carry_flag()) cpu.state_.pc = 0xFCDE;

    // FC2F: LDD #$0000
    cpu.state_.d = 0x0000;

    // FC32: STD $501E
    cpu.write_memory(0x501E, cpu.state_.d);

    // FC35: LDD #$4000
    cpu.state_.d = 0x4000;

    // FC38: STD $5020
    cpu.write_memory(0x5020, cpu.state_.d);

    // FC3B: LDD #$0004
    cpu.state_.d = 0x0004;

    // FC3E: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // FC41: LDU #$0008
    cpu.state_.u = 0x0008;

    // FC44: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // FC47: TFR U,D
    cpu.state_.d = cpu.state_.u;

    // FC4B: LDA #$5B
    cpu.state_.a = 0x5B;

    // FC4D: STA $4700
    cpu.write_memory(0x4700, cpu.state_.a);

    // FC51: BNE $00D8
    if (!cpu.zero_flag()) cpu.state_.pc = 0xFD2B;

    // FC53: LDA #$5F
    cpu.state_.a = 0x5F;

    // FC55: STA $4700
    cpu.write_memory(0x4700, cpu.state_.a);

    // FC59: CMPU $5000
    // TODO: Convert CMPU $5000

    // FC5D: BEQ $00EF
    if (cpu.zero_flag()) cpu.state_.pc = 0xFD4E;

    // FC5F: JMP $FB73
    cpu.state_.pc = 0xFB73;

    // FC62: TFR U,D
    cpu.state_.d = cpu.state_.u;

    // FC64: LEAU D,U
    // TODO: Fix comma operator: LEAU D,U

    // FC66: CMPU #$0200
    // TODO: Convert CMPU #$0200

    // FC6A: BCS $00D1
    if (cpu.carry_flag()) cpu.state_.pc = 0xFD3D;

    // FC6C: LDD #$0000
    cpu.state_.d = 0x0000;

    // FC6F: JMP $FB73
    cpu.state_.pc = 0xFB73;

    // FC72: LDD #$1B2C
    cpu.state_.d = 0x1B2C;

    // FC75: STD $5018
    cpu.write_memory(0x5018, cpu.state_.d);

    // FC78: LDD #$0000
    cpu.state_.d = 0x0000;

    // FC7B: STD $501A
    cpu.write_memory(0x501A, cpu.state_.d);

    // FC7E: LDD #$4000
    cpu.state_.d = 0x4000;

    // FC81: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // FC84: LDA #$5D
    cpu.state_.a = 0x5D;

    // FC86: STA $4700
    cpu.write_memory(0x4700, cpu.state_.a);

    // FC8A: LDD #$196A
    cpu.state_.d = 0x196A;

    // FC8D: STD $5018
    cpu.write_memory(0x5018, cpu.state_.d);

    // FC90: LDD #$0000
    cpu.state_.d = 0x0000;

    // FC93: STD $501A
    cpu.write_memory(0x501A, cpu.state_.d);

    // FC96: LDD #$4000
    cpu.state_.d = 0x4000;

    // FC99: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // FC9C: LDA #$5E
    cpu.state_.a = 0x5E;

    // FC9E: STA $4700
    cpu.write_memory(0x4700, cpu.state_.a);

    // FCA2: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // FCA5: CMPD #$3496
    // TODO: Convert CMPD #$3496

    // FCA9: JMP $FB73
    cpu.state_.pc = 0xFB73;

    // FCAE: LDU #$FCD1
    cpu.state_.u = 0xFCD1;

    // FCB1: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // FCB3: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // FCB5: STD $5018
    cpu.write_memory(0x5018, cpu.state_.d);

    // FCB8: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // FCBA: STD $501A
    cpu.write_memory(0x501A, cpu.state_.d);

    // FCBD: LDD $4,U
    // TODO: Fix comma operator: LDD $4,U

    // FCBF: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // FCC2: LDA #$5D
    cpu.state_.a = 0x5D;

    // FCC4: STA $4700
    cpu.write_memory(0x4700, cpu.state_.a);

    // FCC8: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // FCCB: CMPD $6,U
    // TODO: Convert CMPD $6,U

    // FCCE: JMP $FB73
    cpu.state_.pc = 0xFB73;

    // FCD3: NEG <$00
    // TODO: Convert NEG <$00

    // FCD6: NEG <$55
    // TODO: Convert NEG <$55

    // FCD9: NEG <$00
    // TODO: Convert NEG <$00

    // FCDD: SUBB #$00
    cpu.state_.b -= 0x00;

    // FCE1: BPL $011A
    if (!cpu.negative_flag()) cpu.state_.pc = 0xFDFD;

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
    cpu.state_.b += 0x8FFB;

    // FCF8: CMPX <$FB
    cpu.compare_x(cpu.read_memory_word(0xFB));

    // FCFA: SUBD [D,S]
    // TODO: Complex indexed addressing: [D,S]

    // FCFC: ORA [D,S]
    // TODO: Complex indexed addressing: [D,S]

    // FCFE: STX $FCAC
    cpu.write_memory(0xFCAC, cpu.state_.x);

    // FD01: LDD $ACFC
    cpu.state_.d = cpu.read_memory_word(0xACFC);

    // FD04: CMPX [$0140,PCR]
    // TODO: Complex indexed addressing: [$0140,PCR]

    // FD07: LDA $4300
    cpu.state_.a = cpu.read_memory(0x4300);

    // FD0A: ANDA #$10
    cpu.state_.a &= 0x10;

    // FD0C: LDB $4320
    cpu.state_.b = cpu.read_memory(0x4320);

    // FD0F: ANDB #$04
    cpu.state_.b &= 0x04;

    // FD11: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // FD15: BEQ $01A7
    if (cpu.zero_flag()) cpu.state_.pc = 0xFEBE;

    // FD17: JMP $F720
    cpu.state_.pc = 0xF720;

    // FD1A: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // FD1D: LDA #$FF
    cpu.state_.a = 0xFF;

    // FD1F: STA $4686
    cpu.write_memory(0x4686, cpu.state_.a);

    // FD22: STA $4683
    cpu.write_memory(0x4683, cpu.state_.a);

    // FD25: STA $4682
    cpu.write_memory(0x4682, cpu.state_.a);

    // FD28: LDB $4340
    cpu.state_.b = cpu.read_memory(0x4340);

    // FD2C: LDU #$FD9A
    cpu.state_.u = 0xFD9A;

    // FD2F: CMPB ,U+
    // TODO: Complex indexed addressing: ,U+

    // FD31: BNE $01E7
    if (!cpu.zero_flag()) cpu.state_.pc = 0xFF1A;

    // FD33: STA $4620
    cpu.write_memory(0x4620, cpu.state_.a);

    // FD36: LDY #$0000
    cpu.state_.y = 0x0000;

    // FD3A: LDD #$BFAE
    cpu.state_.d = 0xBFAE;

    // FD3D: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // FD3F: LDD #$8040
    cpu.state_.d = 0x8040;

    // FD42: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // FD44: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // FD46: LDS #$4FFF
    cpu.state_.sp = 0x4FFF;

    // FD4A: JSR $E790
    cpu.call_function(0xE790);

    // FD4D: LDD #$2020
    cpu.state_.d = 0x2020;

    // FD50: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // FD52: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // FD54: STA $4600
    cpu.write_memory(0x4600, cpu.state_.a);

    // FD57: LDU #$FDBC
    cpu.state_.u = 0xFDBC;

    // FD5A: LEAU $1,U
    // TODO: Fix comma operator: LEAU $1,U

    // FD5C: CMPU #$FDBC
    // TODO: Convert CMPU #$FDBC

    // FD60: BCS $01BC
    if (cpu.carry_flag()) cpu.state_.pc = 0xFF1E;

    // FD62: LDB $4340
    cpu.state_.b = cpu.read_memory(0x4340);

    // FD66: TFR B,A
    cpu.state_.a = cpu.state_.b;

    // FD68: ANDB #$0F
    cpu.state_.b &= 0x0F;

    // FD6A: ANDA #$F8
    cpu.state_.a &= 0xF8;

    // FD6C: CMPA #$C0
    cpu.compare_a(0xC0);

    // FD6E: BEQ $01FF
    if (cpu.zero_flag()) cpu.state_.pc = 0xFF6F;

    // FD70: CLR <$D1
    cpu.write_memory(0xD1, 0);

    // FD72: LDX #$0000
    cpu.state_.x = 0x0000;

}

} // namespace StarWars