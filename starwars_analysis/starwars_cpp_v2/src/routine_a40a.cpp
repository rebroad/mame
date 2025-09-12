#include "cpu_6809.h"

namespace StarWars {

void routine_a40a_impl(CPU6809& cpu) {
    // Converted from rom_disasm_a40a.md
    // Address: 0xA40A

    // A40A: JSR $CDE7
    cpu.call_function(0xCDE7);

    // A40D: LDD #$0000
    cpu.m_d = 0x0000;

    // A410: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // A413: LDD <$B3
    cpu.m_d = cpu.read_memory16(0xB3);

    // A415: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // A418: LDD <$B5
    cpu.m_d = cpu.read_memory16(0xB5);

    // A41A: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // A41D: LDD #$000F
    cpu.m_d = 0x000F;

    // A420: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // A423: LDA #$2A
    cpu.m_a = 0x2A;

    // A425: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A428: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // A42B: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // A42E: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);

    // A431: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // A434: BPL $A455
    if (!cpu.negative_flag()) cpu.m_pc = 0xA455;

    // A436: LDA <$BC
    cpu.m_a = cpu.read_memory(0xBC);

    // A438: BEQ $A455
    if (cpu.zero_flag()) cpu.m_pc = 0xA455;

    // A43A: LDA #$FF
    cpu.m_a = 0xFF;

    // A43C: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // A43E: LDA #$03
    cpu.m_a = 0x03;

    // A440: STA $4B23
    cpu.write_memory(0x4B23, cpu.m_a);

    // A443: LDD #$6280
    cpu.m_d = 0x6280;

    // A446: STD $4B20
    cpu.write_memory16(0x4B20, cpu.m_d);

    // A449: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);

    // A450: ADDB #$C0
    cpu.m_b += 0xC0;

    // A452: STB $4B22
    cpu.write_memory(0x4B22, cpu.m_b);

    // A455: JSR $CDE7
    cpu.call_function(0xCDE7);

    // A459: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);

    // A45B: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // A460: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // A463: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // A465: SUBD $5042
    cpu.m_d -= 0x5042;

    // A468: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // A46B: LDD #$0000
    cpu.m_d = 0x0000;

    // A46E: SUBD $5044
    cpu.m_d -= 0x5044;

    // A471: STD $5004
    cpu.write_memory16(0x5004, cpu.m_d);

    // A474: LDD $4700
    cpu.m_d = cpu.read_memory16(0x4700);

    // A477: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // A47A: LDA #$86
    cpu.m_a = 0x86;

    // A47C: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A47F: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // A482: STD $501A
    cpu.write_memory16(0x501A, cpu.m_d);

    // A485: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);

    // A488: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);

    // A48B: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A48D: CMPA #$03
    cpu.compare_a(0x03);

    // A48F: BEQ $A49F
    if (cpu.zero_flag()) cpu.m_pc = 0xA49F;

    // A491: LDD #$03C0
    cpu.m_d = 0x03C0;

    // A494: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // A497: LDD #$5280
    cpu.m_d = 0x5280;

    // A49A: STD $5004
    cpu.write_memory16(0x5004, cpu.m_d);

    // A49D: BRA $A4BA
    cpu.m_pc = 0xA4BA;

    // A49F: LDU #$49C2
    cpu.m_u = 0x49C2;

    // A4A2: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X

    // A4A4: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // A4A6: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A4A8: BITA #$04
    // TODO: Convert BITA #$04

    // A4AA: LBNE $A54A
    // TODO: Convert LBNE $A54A

    // A4AE: LDD #$0690
    cpu.m_d = 0x0690;

    // A4B1: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // A4B4: LDD #$05A0
    cpu.m_d = 0x05A0;

    // A4B7: STD $5004
    cpu.write_memory16(0x5004, cpu.m_d);

    // A4BA: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // A4BD: SUBD #$0100
    cpu.m_d -= 0x0100;

    // A4C0: BPL $A4C5
    if (!cpu.negative_flag()) cpu.m_pc = 0xA4C5;

    // A4C2: LDD #$0000
    cpu.m_d = 0x0000;

    // A4C5: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // A4C8: LDA #$86
    cpu.m_a = 0x86;

    // A4CA: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A4CD: LDD $501A
    cpu.m_d = cpu.read_memory16(0x501A);

    // A4D0: ADDD $5002
    cpu.m_d += 0x5002;

    // A4D3: ADDD #$000A
    cpu.m_d += 0x000A;

    // A4D6: SUBD $5078
    cpu.m_d -= 0x5078;

    // A4D9: LBLT $A54A
    // TODO: Convert LBLT $A54A

    // A4DF: SUBD #$000A
    cpu.m_d -= 0x000A;

    // A4E2: SUBD $5002
    cpu.m_d -= 0x5002;

    // A4E5: LBGT $A54A
    // TODO: Convert LBGT $A54A

    // A4E9: LDD $507A
    cpu.m_d = cpu.read_memory16(0x507A);

    // A4EC: SUBD $501C
    cpu.m_d -= 0x501C;

    // A4EF: BMI $A54A
    if (cpu.negative_flag()) cpu.m_pc = 0xA54A;

    // A4F1: SUBD $5004
    cpu.m_d -= 0x5004;

    // A4F4: BGT $A54A
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA54A;

    // A4F6: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A4F8: CMPA #$03
    cpu.compare_a(0x03);

    // A4FA: BNE $A50A
    if (!cpu.zero_flag()) cpu.m_pc = 0xA50A;

    // A4FC: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // A4FF: CMPD <$C8
    // TODO: Convert CMPD <$C8

    // A502: BCC $A508
    if (!cpu.carry_flag()) cpu.m_pc = 0xA508;

    // A504: STD <$C8
    cpu.write_memory16(0xC8, cpu.m_d);

    // A506: STX <$C6
    cpu.write_memory16(0xC6, cpu.m_x);

    // A508: BRA $A54A
    cpu.m_pc = 0xA54A;

    // A50A: LDD #$4CE0
    cpu.m_d = 0x4CE0;

    // A50D: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // A510: LDA #$86
    cpu.m_a = 0x86;

    // A512: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A515: LDD $507A
    cpu.m_d = cpu.read_memory16(0x507A);

    // A518: ADDD #$000A
    cpu.m_d += 0x000A;

    // A51B: SUBD $501C
    cpu.m_d -= 0x501C;

    // A51E: SUBD $5002
    cpu.m_d -= 0x5002;

    // A521: BLT $A53E
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA53E;

    // A523: LDU #$49C2
    cpu.m_u = 0x49C2;

    // A526: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X

    // A528: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // A52A: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A52C: BITA #$04
    // TODO: Convert BITA #$04

    // A52E: BNE $A54A
    if (!cpu.zero_flag()) cpu.m_pc = 0xA54A;

    // A530: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // A533: CMPD <$C8
    // TODO: Convert CMPD <$C8

    // A536: BCC $A53C
    if (!cpu.carry_flag()) cpu.m_pc = 0xA53C;

    // A538: STD <$C8
    cpu.write_memory16(0xC8, cpu.m_d);

    // A53A: STX <$C6
    cpu.write_memory16(0xC6, cpu.m_x);

    // A53C: BRA $A54A
    cpu.m_pc = 0xA54A;

    // A53E: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // A541: CMPD <$D0
    // TODO: Convert CMPD <$D0

    // A544: BCC $A54A
    if (!cpu.carry_flag()) cpu.m_pc = 0xA54A;

    // A546: STD <$D0
    cpu.write_memory16(0xD0, cpu.m_d);

    // A548: STX <$CE
    cpu.write_memory16(0xCE, cpu.m_x);

    // A54B: LDX <$C6
    cpu.m_x = cpu.read_memory16(0xC6);

    // A54D: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // A54F: SUBD $5098
    cpu.m_d -= 0x5098;

    // A552: ANDA #$7F
    cpu.m_a &= 0x7F;

    // A554: ADDD $5098
    cpu.m_d += 0x5098;

    // A557: STD $5018
    cpu.write_memory16(0x5018, cpu.m_d);

    // A55A: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // A55C: STD $501A
    cpu.write_memory16(0x501A, cpu.m_d);

    // A55F: LDU #$49C2
    cpu.m_u = 0x49C2;

    // A562: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X

    // A564: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // A566: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A568: ORA #$04
    cpu.m_a |= 0x04;

    // A56A: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A56C: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A56E: CMPA #$03
    cpu.compare_a(0x03);

    // A570: BNE $A580
    if (!cpu.zero_flag()) cpu.m_pc = 0xA580;

    // A572: LDD #$02D0
    cpu.m_d = 0x02D0;

    // A575: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);

    // A578: JSR $B852
    cpu.call_function(0xB852);

    // A57B: JSR $97F7
    cpu.call_function(0x97F7);

    // A57E: BRA $A58C
    cpu.m_pc = 0xA58C;

    // A580: LDD #$5460
    cpu.m_d = 0x5460;

    // A583: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);

    // A586: JSR $B85E
    cpu.call_function(0xB85E);

    // A589: JSR $973A
    cpu.call_function(0x973A);

    // A58C: JSR $BDFD
    cpu.call_function(0xBDFD);

    // A591: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // A593: BLT $A5B2
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA5B2;

    // A595: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);

    // A597: LDU #$49C2
    cpu.m_u = 0x49C2;

    // A59A: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X

    // A59C: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // A59E: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5A0: BITA #$04
    // TODO: Convert BITA #$04

    // A5A2: BNE $A5B2
    if (!cpu.zero_flag()) cpu.m_pc = 0xA5B2;

    // A5A4: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A5A6: CMPA #$02
    cpu.compare_a(0x02);

    // A5A8: LBEQ $A608
    // TODO: Convert LBEQ $A608

    // A5AC: LBHI $A655
    // TODO: Convert LBHI $A655

    // A5B0: BRA $A5B3
    cpu.m_pc = 0xA5B3;

    // A5B3: LDD #$4000
    cpu.m_d = 0x4000;

    // A5B6: SUBD $507C
    cpu.m_d -= 0x507C;

    // A5BB: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // A5BE: LDD #$2940
    cpu.m_d = 0x2940;

    // A5C1: STD $5004
    cpu.write_memory16(0x5004, cpu.m_d);

    // A5C4: LDD #$02D0
    cpu.m_d = 0x02D0;

    // A5C7: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // A5CA: LDA #$86
    cpu.m_a = 0x86;

    // A5CC: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A5CF: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);

    // A5D2: SUBD $5044
    cpu.m_d -= 0x5044;

    // A5D5: BGE $A5DE
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA5DE;

    // A5D7: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5D9: ORA #$08
    cpu.m_a |= 0x08;

    // A5DB: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A5DE: SUBD $5002
    cpu.m_d -= 0x5002;

    // A5E1: BLE $A5E9
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA5E9;

    // A5E3: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5E5: BITA #$08
    // TODO: Convert BITA #$08

    // A5E7: BEQ $A607
    if (cpu.zero_flag()) cpu.m_pc = 0xA607;

    // A5E9: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5EB: ANDA #$F7
    cpu.m_a &= 0xF7;

    // A5ED: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A5EF: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A5F2: BPL $A5F7
    if (!cpu.negative_flag()) cpu.m_pc = 0xA5F7;

    // A5F4: JSR $A7B6
    cpu.call_function(0xA7B6);

    // A5F7: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A5FA: BPL $A5FF
    if (!cpu.negative_flag()) cpu.m_pc = 0xA5FF;

    // A5FC: JSR $A7C8
    cpu.call_function(0xA7C8);

    // A5FF: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A602: BPL $A607
    if (!cpu.negative_flag()) cpu.m_pc = 0xA607;

    // A604: JSR $A7BF
    cpu.call_function(0xA7BF);

    // A608: LDD #$4000
    cpu.m_d = 0x4000;

}

} // namespace StarWars