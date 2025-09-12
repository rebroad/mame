#include "cpu_6809.h"

namespace StarWars {

void routine_a54b_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_a54b.md
    // Address: 0xA54B

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

    // A570: BNE $0035
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0035;

    // A572: LDD #$02D0
    cpu.state_.d = 0x02D0;

    // A575: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // A578: JSR $B852
    cpu.call_function(0xB852);

    // A57B: JSR $97F7
    cpu.call_function(0x97F7);

    // A57E: BRA $0041
    cpu.state_.pc += 0x0041;

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

    // A593: BLT $0067
    // TODO: Convert BLT $0067

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

    // A5A2: BNE $0067
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0067;

    // A5A4: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A5A6: CMPA #$02
    cpu.compare_a(0x02);

    // A5A8: LBEQ $00BD
    // TODO: Convert LBEQ $00BD

    // A5AC: LBHI $010A
    // TODO: Convert LBHI $010A

    // A5B0: BRA $0068
    cpu.state_.pc += 0x0068;

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

    // A5D5: BGE $0093
    // TODO: Convert BGE $0093

    // A5D7: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5D9: ORA #$08
    cpu.state_.a |= 0x08;

    // A5DB: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A5DE: SUBD $5002
    cpu.state_.d -= 0x5002;

    // A5E1: BLE $009E
    // TODO: Convert BLE $009E

    // A5E3: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5E5: BITA #$08
    // TODO: Convert BITA #$08

    // A5E7: BEQ $00BC
    if (cpu.zero_flag()) cpu.state_.pc += 0x00BC;

    // A5E9: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5EB: ANDA #$F7
    cpu.state_.a &= 0xF7;

    // A5ED: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A5EF: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // A5F2: BPL $00AC
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00AC;

    // A5F4: JSR $A7B6
    cpu.call_function(0xA7B6);

    // A5F7: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // A5FA: BPL $00B4
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00B4;

    // A5FC: JSR $A7C8
    cpu.call_function(0xA7C8);

    // A5FF: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // A602: BPL $00BC
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00BC;

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

    // A62A: BGE $00E8
    // TODO: Convert BGE $00E8

    // A62C: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A62E: ORA #$08
    cpu.state_.a |= 0x08;

    // A630: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A633: SUBD $5002
    cpu.state_.d -= 0x5002;

    // A636: BLE $00F3
    // TODO: Convert BLE $00F3

    // A638: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A63A: BITA #$08
    // TODO: Convert BITA #$08

    // A63C: BEQ $0109
    if (cpu.zero_flag()) cpu.state_.pc += 0x0109;

    // A63E: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A640: ANDA #$F7
    cpu.state_.a &= 0xF7;

    // A642: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A644: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // A647: BPL $0101
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0101;

    // A649: JSR $A7C8
    cpu.call_function(0xA7C8);

    // A64C: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // A64F: BPL $0109
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0109;

    // A651: JSR $A7BF
    cpu.call_function(0xA7BF);

    // A655: LDA #$40
    cpu.state_.a = 0x40;

    // A657: SUBA $507C
    cpu.state_.a -= 0x507C;

    // A65A: CMPA $4703
    cpu.compare_a(cpu.read_memory(0x4703));

    // A65D: BCS $0129
    if (cpu.carry_flag()) cpu.state_.pc += 0x0129;

    // A65F: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // A662: CMPA #$50
    cpu.compare_a(0x50);

    // A664: BCC $011E
    if (!cpu.carry_flag()) cpu.state_.pc += 0x011E;

    // A666: JMP $A728
    cpu.state_.pc = 0xA728;

    // A669: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // A66C: BPL $0126
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0126;

    // A66E: JMP $A728
    cpu.state_.pc = 0xA728;

    // A671: JMP $A728
    cpu.state_.pc = 0xA728;

    // A675: EORA $B,S
    // TODO: Fix comma operator: EORA $B,S

    // A677: EORA -$B,S
    // TODO: Fix comma operator: EORA -$B,S

    // A679: EORA E,Y
    // TODO: Complex indexed addressing: E,Y

    // A67B: EORA [F,U]
    // TODO: Complex indexed addressing: [F,U]

    // A67D: EORA A,S
    // TODO: Fix comma operator: EORA A,S

    // A67F: EORA [-$5600,S]
    // TODO: Complex indexed addressing: [-$5600,S]

    // A683: ADCA $6,U
    // TODO: Convert ADCA $6,U

    // A685: ADCA ,--Y
    // TODO: Convert ADCA ,--Y

    // A687: ORA A,X
    // TODO: Fix comma operator: ORA A,X

    // A689: ORA [B,Y]
    // TODO: Complex indexed addressing: [B,Y]

    // A68B: STU <$A8
    cpu.write_memory(0xA8, cpu.state_.u);

    // A68D: LDB #$40
    cpu.state_.b = 0x40;

    // A68F: STB $5,U
    // TODO: Handle indexed addressing: STB $5,U

    // A691: LDB #$01
    cpu.state_.b = 0x01;

    // A693: STB $3,U
    // TODO: Handle indexed addressing: STB $3,U

    // A695: LDB #$01
    cpu.state_.b = 0x01;

    // A697: STB $4,U
    // TODO: Handle indexed addressing: STB $4,U

    // A699: LDA $4B3C
    cpu.state_.a = cpu.read_memory(0x4B3C);

    // A69C: BLE $0160
    // TODO: Convert BLE $0160

    // A69E: CMPX $4B32
    cpu.compare_x(cpu.read_memory_word(0x4B32));

    // A6A1: BNE $0160
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0160;

    // A6A3: DEC $4B3C
    // TODO: Convert DEC $4B3C

    // A6A6: BNE $0160
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0160;

    // A6A8: JSR $BD4E
    cpu.call_function(0xBD4E);

    // A6AB: LDU ,U
    // TODO: Complex indexed addressing: ,U

    // A6AD: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // A6AF: LDD $8,X
    // TODO: Fix comma operator: LDD $8,X

    // A6B1: SUBD $5098
    cpu.state_.d -= 0x5098;

    // A6B4: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A6B6: LDD $A,X
    // TODO: Fix comma operator: LDD $A,X

    // A6B8: SUBD $509A
    cpu.state_.d -= 0x509A;

    // A6BB: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A6BD: LDD $C,X
    // TODO: Fix comma operator: LDD $C,X

    // A6BF: SUBD $509C
    cpu.state_.d -= 0x509C;

    // A6C2: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U

    // A6C4: JSR $BE02
    cpu.call_function(0xBE02);

    // A6C9: ROL $9,U
    // TODO: Convert ROL $9,U

    // A6CB: ROL $9,U
    // TODO: Convert ROL $9,U

    // A6CD: COM $9,U
    // TODO: Convert COM $9,U

    // A6CF: COM $9,U
    // TODO: Convert COM $9,U

    // A6E0: LDB $4B19
    cpu.state_.b = cpu.read_memory(0x4B19);

    // A6E3: CMPB #$0C
    cpu.compare_b(0x0C);

    // A6E5: BCS $01A1
    if (cpu.carry_flag()) cpu.state_.pc += 0x01A1;

    // A6E7: LDX #$A6DE
    cpu.state_.x = 0xA6DE;

    // A6EA: BRA $01A7
    cpu.state_.pc += 0x01A7;

    // A6ED: LDX #$A6C8
    cpu.state_.x = 0xA6C8;

    // A6F0: LDX B,X
    // TODO: Fix comma operator: LDX B,X

    // A6F2: BRA $01BD
    cpu.state_.pc += 0x01BD;

    // A6F4: LDB $4B19
    cpu.state_.b = cpu.read_memory(0x4B19);

    // A6F7: CMPB #$07
    cpu.compare_b(0x07);

    // A6F9: BLS $01B2
    // TODO: Convert BLS $01B2

    // A6FB: LDB #$07
    cpu.state_.b = 0x07;

    // A6FE: LDX #$A718
    cpu.state_.x = 0xA718;

    // A701: LDX B,X
    // TODO: Fix comma operator: LDX B,X

    // A703: BRA $01BD
    cpu.state_.pc += 0x01BD;

    // A705: LDX #$494B
    cpu.state_.x = 0x494B;

    // A708: STX <$A8
    cpu.write_memory(0xA8, cpu.state_.x);

    // A70A: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // A70C: BEQ $01CC
    if (cpu.zero_flag()) cpu.state_.pc += 0x01CC;

    // A70E: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // A710: CMPX #$496F
    cpu.compare_x(0x496F);

    // A713: BCS $01BD
    if (cpu.carry_flag()) cpu.state_.pc += 0x01BD;

    // A715: LEAS $2,S
    // TODO: Fix comma operator: LEAS $2,S

    // A719: ROL $9,U
    // TODO: Convert ROL $9,U

    // A71B: ROL $9,U
    // TODO: Convert ROL $9,U

    // A71D: COM $9,U
    // TODO: Convert COM $9,U

    // A71F: COM $9,U
    // TODO: Convert COM $9,U

    // A728: JSR $A6E0
    cpu.call_function(0xA6E0);

    // A72B: LDA #$70
    cpu.state_.a = 0x70;

    // A72D: STA $5,X
    // TODO: Handle indexed addressing: STA $5,X

    // A72F: LDA #$05
    cpu.state_.a = 0x05;

    // A731: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // A733: LDU <$64
    cpu.state_.u = cpu.read_memory_word(0x64);

    // A735: STX <$01
    cpu.write_memory(0x01, cpu.state_.x);

    // A737: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // A739: SUBD $509A
    cpu.state_.d -= 0x509A;

    // A73C: BMI $01F7
    if (cpu.negative_flag()) cpu.state_.pc += 0x01F7;

    // A73E: LDA #$08
    cpu.state_.a = 0x08;

    // A740: BRA $01F9
    cpu.state_.pc += 0x01F9;

    // A742: LDA #$07
    cpu.state_.a = 0x07;

    // A744: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A746: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // A748: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A74A: SUBA >$0000
    cpu.state_.a -= 0x0000;

}

} // namespace StarWars