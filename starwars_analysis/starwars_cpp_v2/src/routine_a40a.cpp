#include "cpu_6809.h"

namespace StarWars {

void routine_a40a_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_a40a.md
    // Address: 0xA40A

    // A40A: JSR $CDE7
    cpu.call_function(0xCDE7);

    // A40D: LDD #$0000
    cpu.state_.d = 0x0000;

    // A410: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // A413: LDD <$B3
    cpu.state_.d = cpu.read_memory_word(0xB3);

    // A415: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // A418: LDD <$B5
    cpu.state_.d = cpu.read_memory_word(0xB5);

    // A41A: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // A41D: LDD #$000F
    cpu.state_.d = 0x000F;

    // A420: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // A423: LDA #$2A
    cpu.state_.a = 0x2A;

    // A425: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A428: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // A42B: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // A42E: LDD $5004
    cpu.state_.d = cpu.read_memory_word(0x5004);

    // A431: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // A434: BPL $004B
    if (!cpu.negative_flag()) cpu.state_.pc = 0xA481;

    // A436: LDA <$BC
    cpu.state_.a = cpu.read_memory(0xBC);

    // A438: BEQ $004B
    if (cpu.zero_flag()) cpu.state_.pc = 0xA485;

    // A43A: LDA #$FF
    cpu.state_.a = 0xFF;

    // A43C: STA <$BD
    cpu.write_memory(0xBD, cpu.state_.a);

    // A43E: LDA #$03
    cpu.state_.a = 0x03;

    // A440: STA $4B23
    cpu.write_memory(0x4B23, cpu.state_.a);

    // A443: LDD #$6280
    cpu.state_.d = 0x6280;

    // A446: STD $4B20
    cpu.write_memory(0x4B20, cpu.state_.d);

    // A449: LDD $5004
    cpu.state_.d = cpu.read_memory_word(0x5004);

    // A450: ADDB #$C0
    cpu.state_.b += 0xC0;

    // A452: STB $4B22
    cpu.write_memory(0x4B22, cpu.state_.b);

    // A455: JSR $CDE7
    cpu.call_function(0xCDE7);

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

    // A48F: BEQ $0095
    if (cpu.zero_flag()) cpu.state_.pc = 0xA426;

    // A491: LDD #$03C0
    cpu.state_.d = 0x03C0;

    // A494: STD $5002
    cpu.write_memory(0x5002, cpu.state_.d);

    // A497: LDD #$5280
    cpu.state_.d = 0x5280;

    // A49A: STD $5004
    cpu.write_memory(0x5004, cpu.state_.d);

    // A49D: BRA $00B0
    cpu.state_.pc = 0xA44F;

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

    // A4AA: LBNE $0140
    // TODO: Convert LBNE $0140

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

    // A4C0: BPL $00BB
    if (!cpu.negative_flag()) cpu.state_.pc = 0xA47D;

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

    // A4D9: LBLT $0140
    // TODO: Convert LBLT $0140

    // A4DF: SUBD #$000A
    cpu.state_.d -= 0x000A;

    // A4E2: SUBD $5002
    cpu.state_.d -= 0x5002;

    // A4E5: LBGT $0140
    // TODO: Convert LBGT $0140

    // A4E9: LDD $507A
    cpu.state_.d = cpu.read_memory_word(0x507A);

    // A4EC: SUBD $501C
    cpu.state_.d -= 0x501C;

    // A4EF: BMI $0140
    if (cpu.negative_flag()) cpu.state_.pc = 0xA531;

    // A4F1: SUBD $5004
    cpu.state_.d -= 0x5004;

    // A4F4: BGT $0140
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xA536;

    // A4F6: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A4F8: CMPA #$03
    cpu.compare_a(0x03);

    // A4FA: BNE $0100
    if (!cpu.zero_flag()) cpu.state_.pc = 0xA4FC;

    // A4FC: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // A4FF: CMPD <$C8
    // TODO: Convert CMPD <$C8

    // A502: BCC $00FE
    if (!cpu.carry_flag()) cpu.state_.pc = 0xA502;

    // A504: STD <$C8
    cpu.write_memory(0xC8, cpu.state_.d);

    // A506: STX <$C6
    cpu.write_memory(0xC6, cpu.state_.x);

    // A508: BRA $0140
    cpu.state_.pc = 0xA54A;

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

    // A521: BLT $0134
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xA557;

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

    // A52E: BNE $0140
    if (!cpu.zero_flag()) cpu.state_.pc = 0xA570;

    // A530: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // A533: CMPD <$C8
    // TODO: Convert CMPD <$C8

    // A536: BCC $0132
    if (!cpu.carry_flag()) cpu.state_.pc = 0xA56A;

    // A538: STD <$C8
    cpu.write_memory(0xC8, cpu.state_.d);

    // A53A: STX <$C6
    cpu.write_memory(0xC6, cpu.state_.x);

    // A53C: BRA $0140
    cpu.state_.pc = 0xA57E;

    // A53E: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // A541: CMPD <$D0
    // TODO: Convert CMPD <$D0

    // A544: BCC $0140
    if (!cpu.carry_flag()) cpu.state_.pc = 0xA586;

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

    // A570: BNE $0176
    if (!cpu.zero_flag()) cpu.state_.pc = 0xA5E8;

    // A572: LDD #$02D0
    cpu.state_.d = 0x02D0;

    // A575: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // A578: JSR $B852
    cpu.call_function(0xB852);

    // A57B: JSR $97F7
    cpu.call_function(0x97F7);

    // A57E: BRA $0182
    cpu.state_.pc = 0xA502;

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

    // A593: BLT $01A8
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xA53D;

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

    // A5A2: BNE $01A8
    if (!cpu.zero_flag()) cpu.state_.pc = 0xA54C;

    // A5A4: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A5A6: CMPA #$02
    cpu.compare_a(0x02);

    // A5A8: LBEQ $01FE
    // TODO: Convert LBEQ $01FE

    // A5AC: LBHI $024B
    // TODO: Convert LBHI $024B

    // A5B0: BRA $01A9
    cpu.state_.pc = 0xA55B;

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

    // A5D5: BGE $01D4
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xA5AB;

    // A5D7: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5D9: ORA #$08
    cpu.state_.a |= 0x08;

    // A5DB: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A5DE: SUBD $5002
    cpu.state_.d -= 0x5002;

    // A5E1: BLE $01DF
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xA5C2;

    // A5E3: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5E5: BITA #$08
    // TODO: Convert BITA #$08

    // A5E7: BEQ $01FD
    if (cpu.zero_flag()) cpu.state_.pc = 0xA5E6;

    // A5E9: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5EB: ANDA #$F7
    cpu.state_.a &= 0xF7;

    // A5ED: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A5EF: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // A5F2: BPL $01ED
    if (!cpu.negative_flag()) cpu.state_.pc = 0xA5E1;

    // A5F4: JSR $A7B6
    cpu.call_function(0xA7B6);

    // A5F7: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // A5FA: BPL $01F5
    if (!cpu.negative_flag()) cpu.state_.pc = 0xA5F1;

    // A5FC: JSR $A7C8
    cpu.call_function(0xA7C8);

    // A5FF: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // A602: BPL $01FD
    if (!cpu.negative_flag()) cpu.state_.pc = 0xA601;

    // A604: JSR $A7BF
    cpu.call_function(0xA7BF);

    // A608: LDD #$4000
    cpu.state_.d = 0x4000;

}

} // namespace StarWars