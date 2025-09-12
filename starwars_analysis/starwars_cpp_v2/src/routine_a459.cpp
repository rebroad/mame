#include "cpu_6809.h"

namespace StarWars {

void routine_a459_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_a459.md
    // Address: 0xA459

    // A459: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // A45B: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // A460: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // A463: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // A465: SUBD $5042
    cpu.state_.d -= 0x5042;

    // A468: STD $5002
    cpu.write_memory(0x5002, cpu.state_.d);

    // A46B: LDD #$0000
    cpu.state_.d = 0x0000;

    // A46E: SUBD $5044
    cpu.state_.d -= 0x5044;

    // A471: STD $5004
    cpu.write_memory(0x5004, cpu.state_.d);

    // A474: LDD $4700
    cpu.state_.d = cpu.read_memory_word(0x4700);

    // A477: STD $5000
    cpu.write_memory(0x5000, cpu.state_.d);

    // A47A: LDA #$86
    cpu.state_.a = 0x86;

    // A47C: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A47F: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // A482: STD $501A
    cpu.write_memory(0x501A, cpu.state_.d);

    // A485: LDD $5004
    cpu.state_.d = cpu.read_memory_word(0x5004);

    // A488: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // A48B: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A48D: CMPA #$03
    cpu.compare_a(0x03);

    // A48F: BEQ $0046
    if (cpu.zero_flag()) cpu.state_.pc = 0xA4D7;

    // A491: LDD #$03C0
    cpu.state_.d = 0x03C0;

    // A494: STD $5002
    cpu.write_memory(0x5002, cpu.state_.d);

    // A497: LDD #$5280
    cpu.state_.d = 0x5280;

    // A49A: STD $5004
    cpu.write_memory(0x5004, cpu.state_.d);

    // A49D: BRA $0061
    cpu.state_.pc = 0xA500;

    // A49F: LDU #$49C2
    cpu.state_.u = 0x49C2;

    // A4A2: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X

    // A4A4: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // A4A6: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A4A8: BITA #$04
    // TODO: Convert BITA #$04

    // A4AA: LBNE $00F1
    // TODO: Convert LBNE $00F1

    // A4AE: LDD #$0690
    cpu.state_.d = 0x0690;

    // A4B1: STD $5002
    cpu.write_memory(0x5002, cpu.state_.d);

    // A4B4: LDD #$05A0
    cpu.state_.d = 0x05A0;

    // A4B7: STD $5004
    cpu.write_memory(0x5004, cpu.state_.d);

    // A4BA: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // A4BD: SUBD #$0100
    cpu.state_.d -= 0x0100;

    // A4C0: BPL $006C
    if (!cpu.negative_flag()) cpu.state_.pc = 0xA52E;

    // A4C2: LDD #$0000
    cpu.state_.d = 0x0000;

    // A4C5: STD $5000
    cpu.write_memory(0x5000, cpu.state_.d);

    // A4C8: LDA #$86
    cpu.state_.a = 0x86;

    // A4CA: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A4CD: LDD $501A
    cpu.state_.d = cpu.read_memory_word(0x501A);

    // A4D0: ADDD $5002
    cpu.state_.d += 0x5002;

    // A4D3: ADDD #$000A
    cpu.state_.d += 0x000A;

    // A4D6: SUBD $5078
    cpu.state_.d -= 0x5078;

    // A4D9: LBLT $00F1
    // TODO: Convert LBLT $00F1

    // A4DF: SUBD #$000A
    cpu.state_.d -= 0x000A;

    // A4E2: SUBD $5002
    cpu.state_.d -= 0x5002;

    // A4E5: LBGT $00F1
    // TODO: Convert LBGT $00F1

    // A4E9: LDD $507A
    cpu.state_.d = cpu.read_memory_word(0x507A);

    // A4EC: SUBD $501C
    cpu.state_.d -= 0x501C;

    // A4EF: BMI $00F1
    if (cpu.negative_flag()) cpu.state_.pc = 0xA5E2;

    // A4F1: SUBD $5004
    cpu.state_.d -= 0x5004;

    // A4F4: BGT $00F1
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xA5E7;

    // A4F6: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A4F8: CMPA #$03
    cpu.compare_a(0x03);

    // A4FA: BNE $00B1
    if (!cpu.zero_flag()) cpu.state_.pc = 0xA5AD;

    // A4FC: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // A4FF: CMPD <$C8
    // TODO: Convert CMPD <$C8

    // A502: BCC $00AF
    if (!cpu.carry_flag()) cpu.state_.pc = 0xA5B3;

    // A504: STD <$C8
    cpu.write_memory(0xC8, cpu.state_.d);

    // A506: STX <$C6
    cpu.write_memory(0xC6, cpu.state_.x);

    // A508: BRA $00F1
    cpu.state_.pc = 0xA5FB;

    // A50A: LDD #$4CE0
    cpu.state_.d = 0x4CE0;

    // A50D: STD $5002
    cpu.write_memory(0x5002, cpu.state_.d);

    // A510: LDA #$86
    cpu.state_.a = 0x86;

    // A512: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A515: LDD $507A
    cpu.state_.d = cpu.read_memory_word(0x507A);

    // A518: ADDD #$000A
    cpu.state_.d += 0x000A;

    // A51B: SUBD $501C
    cpu.state_.d -= 0x501C;

    // A51E: SUBD $5002
    cpu.state_.d -= 0x5002;

    // A521: BLT $00E5
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xA608;

    // A523: LDU #$49C2
    cpu.state_.u = 0x49C2;

    // A526: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X

    // A528: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // A52A: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A52C: BITA #$04
    // TODO: Convert BITA #$04

    // A52E: BNE $00F1
    if (!cpu.zero_flag()) cpu.state_.pc = 0xA621;

    // A530: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // A533: CMPD <$C8
    // TODO: Convert CMPD <$C8

    // A536: BCC $00E3
    if (!cpu.carry_flag()) cpu.state_.pc = 0xA61B;

    // A538: STD <$C8
    cpu.write_memory(0xC8, cpu.state_.d);

    // A53A: STX <$C6
    cpu.write_memory(0xC6, cpu.state_.x);

    // A53C: BRA $00F1
    cpu.state_.pc = 0xA62F;

    // A53E: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // A541: CMPD <$D0
    // TODO: Convert CMPD <$D0

    // A544: BCC $00F1
    if (!cpu.carry_flag()) cpu.state_.pc = 0xA637;

    // A546: STD <$D0
    cpu.write_memory(0xD0, cpu.state_.d);

    // A548: STX <$CE
    cpu.write_memory(0xCE, cpu.state_.x);

    // A54B: LDX <$C6
    cpu.state_.x = cpu.read_memory_word(0xC6);

    // A54D: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // A54F: SUBD $5098
    cpu.state_.d -= 0x5098;

    // A552: ANDA #$7F
    cpu.state_.a &= 0x7F;

    // A554: ADDD $5098
    cpu.state_.d += 0x5098;

    // A557: STD $5018
    cpu.write_memory(0x5018, cpu.state_.d);

    // A55A: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // A55C: STD $501A
    cpu.write_memory(0x501A, cpu.state_.d);

    // A55F: LDU #$49C2
    cpu.state_.u = 0x49C2;

    // A562: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X

    // A564: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // A566: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A568: ORA #$04
    cpu.state_.a |= 0x04;

    // A56A: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A56C: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A56E: CMPA #$03
    cpu.compare_a(0x03);

    // A570: BNE $0127
    if (!cpu.zero_flag()) cpu.state_.pc = 0xA699;

    // A572: LDD #$02D0
    cpu.state_.d = 0x02D0;

    // A575: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // A578: JSR $B852
    cpu.call_function(0xB852);

    // A57B: JSR $97F7
    cpu.call_function(0x97F7);

    // A57E: BRA $0133
    cpu.state_.pc = 0xA6B3;

    // A580: LDD #$5460
    cpu.state_.d = 0x5460;

    // A583: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // A586: JSR $B85E
    cpu.call_function(0xB85E);

    // A589: JSR $973A
    cpu.call_function(0x973A);

    // A58C: JSR $BDFD
    cpu.call_function(0xBDFD);

    // A591: LDA <$60
    cpu.state_.a = cpu.read_memory(0x60);

    // A593: BLT $0159
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xA6EE;

    // A595: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // A597: LDU #$49C2
    cpu.state_.u = 0x49C2;

    // A59A: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X

    // A59C: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // A59E: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5A0: BITA #$04
    // TODO: Convert BITA #$04

    // A5A2: BNE $0159
    if (!cpu.zero_flag()) cpu.state_.pc = 0xA6FD;

    // A5A4: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A5A6: CMPA #$02
    cpu.compare_a(0x02);

    // A5A8: LBEQ $01AF
    // TODO: Convert LBEQ $01AF

    // A5AC: LBHI $01FC
    // TODO: Convert LBHI $01FC

    // A5B0: BRA $015A
    cpu.state_.pc = 0xA70C;

    // A5B3: LDD #$4000
    cpu.state_.d = 0x4000;

    // A5B6: SUBD $507C
    cpu.state_.d -= 0x507C;

    // A5BB: STD $5000
    cpu.write_memory(0x5000, cpu.state_.d);

    // A5BE: LDD #$2940
    cpu.state_.d = 0x2940;

    // A5C1: STD $5004
    cpu.write_memory(0x5004, cpu.state_.d);

    // A5C4: LDD #$02D0
    cpu.state_.d = 0x02D0;

    // A5C7: STD $5002
    cpu.write_memory(0x5002, cpu.state_.d);

    // A5CA: LDA #$86
    cpu.state_.a = 0x86;

    // A5CC: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A5CF: LDD $5004
    cpu.state_.d = cpu.read_memory_word(0x5004);

    // A5D2: SUBD $5044
    cpu.state_.d -= 0x5044;

    // A5D5: BGE $0185
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xA75C;

    // A5D7: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5D9: ORA #$08
    cpu.state_.a |= 0x08;

    // A5DB: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A5DE: SUBD $5002
    cpu.state_.d -= 0x5002;

    // A5E1: BLE $0190
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xA773;

    // A5E3: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5E5: BITA #$08
    // TODO: Convert BITA #$08

    // A5E7: BEQ $01AE
    if (cpu.zero_flag()) cpu.state_.pc = 0xA797;

    // A5E9: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5EB: ANDA #$F7
    cpu.state_.a &= 0xF7;

    // A5ED: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A5EF: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // A5F2: BPL $019E
    if (!cpu.negative_flag()) cpu.state_.pc = 0xA792;

    // A5F4: JSR $A7B6
    cpu.call_function(0xA7B6);

    // A5F7: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // A5FA: BPL $01A6
    if (!cpu.negative_flag()) cpu.state_.pc = 0xA7A2;

    // A5FC: JSR $A7C8
    cpu.call_function(0xA7C8);

    // A5FF: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // A602: BPL $01AE
    if (!cpu.negative_flag()) cpu.state_.pc = 0xA7B2;

    // A604: JSR $A7BF
    cpu.call_function(0xA7BF);

    // A608: LDD #$4000
    cpu.state_.d = 0x4000;

    // A60B: SUBD $507C
    cpu.state_.d -= 0x507C;

    // A610: STD $5000
    cpu.write_memory(0x5000, cpu.state_.d);

    // A613: LDD #$2940
    cpu.state_.d = 0x2940;

    // A616: STD $5004
    cpu.write_memory(0x5004, cpu.state_.d);

    // A619: LDD #$02D0
    cpu.state_.d = 0x02D0;

    // A61C: STD $5002
    cpu.write_memory(0x5002, cpu.state_.d);

    // A61F: LDA #$86
    cpu.state_.a = 0x86;

    // A621: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A624: LDD $5004
    cpu.state_.d = cpu.read_memory_word(0x5004);

    // A627: SUBD $5044
    cpu.state_.d -= 0x5044;

    // A62A: BGE $01DA
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xA806;

    // A62C: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A62E: ORA #$08
    cpu.state_.a |= 0x08;

    // A630: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A633: SUBD $5002
    cpu.state_.d -= 0x5002;

    // A636: BLE $01E5
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xA81D;

    // A638: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A63A: BITA #$08
    // TODO: Convert BITA #$08

    // A63C: BEQ $01FB
    if (cpu.zero_flag()) cpu.state_.pc = 0xA839;

    // A63E: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A640: ANDA #$F7
    cpu.state_.a &= 0xF7;

    // A642: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A644: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // A647: BPL $01F3
    if (!cpu.negative_flag()) cpu.state_.pc = 0xA83C;

    // A649: JSR $A7C8
    cpu.call_function(0xA7C8);

    // A64C: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // A64F: BPL $01FB
    if (!cpu.negative_flag()) cpu.state_.pc = 0xA84C;

    // A651: JSR $A7BF
    cpu.call_function(0xA7BF);

    // A655: LDA #$40
    cpu.state_.a = 0x40;

    // A657: SUBA $5000
    cpu.state_.a -= 0x5000;

}

} // namespace StarWars