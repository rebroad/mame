#include "cpu_6809.h"

namespace StarWars {

void routine_a591_impl(CPU6809& cpu) {
    // Converted from rom_disasm_a591.md
    // Address: 0xA591

    // A591: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // A593: BLT $0021
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA5B6;

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

    // A5A2: BNE $0021
    if (!cpu.zero_flag()) cpu.m_pc = 0xA5C5;

    // A5A4: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // A5A6: CMPA #$02
    cpu.compare_a(0x02);

    // A5A8: LBEQ $0077
    // TODO: Convert LBEQ $0077

    // A5AC: LBHI $00C4
    // TODO: Convert LBHI $00C4

    // A5B0: BRA $0022
    cpu.m_pc = 0xA5D4;

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

    // A5D5: BGE $004D
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA624;

    // A5D7: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5D9: ORA #$08
    cpu.m_a |= 0x08;

    // A5DB: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A5DE: SUBD $5002
    cpu.m_d -= 0x5002;

    // A5E1: BLE $0058
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA63B;

    // A5E3: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5E5: BITA #$08
    // TODO: Convert BITA #$08

    // A5E7: BEQ $0076
    if (cpu.zero_flag()) cpu.m_pc = 0xA65F;

    // A5E9: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A5EB: ANDA #$F7
    cpu.m_a &= 0xF7;

    // A5ED: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A5EF: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A5F2: BPL $0066
    if (!cpu.negative_flag()) cpu.m_pc = 0xA65A;

    // A5F4: JSR $A7B6
    cpu.call_function(0xA7B6);

    // A5F7: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A5FA: BPL $006E
    if (!cpu.negative_flag()) cpu.m_pc = 0xA66A;

    // A5FC: JSR $A7C8
    cpu.call_function(0xA7C8);

    // A5FF: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A602: BPL $0076
    if (!cpu.negative_flag()) cpu.m_pc = 0xA67A;

    // A604: JSR $A7BF
    cpu.call_function(0xA7BF);

    // A608: LDD #$4000
    cpu.m_d = 0x4000;

    // A60B: SUBD $507C
    cpu.m_d -= 0x507C;

    // A610: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // A613: LDD #$2940
    cpu.m_d = 0x2940;

    // A616: STD $5004
    cpu.write_memory16(0x5004, cpu.m_d);

    // A619: LDD #$02D0
    cpu.m_d = 0x02D0;

    // A61C: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // A61F: LDA #$86
    cpu.m_a = 0x86;

    // A621: JSR $CDBA
    cpu.call_function(0xCDBA);

    // A624: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);

    // A627: SUBD $5044
    cpu.m_d -= 0x5044;

    // A62A: BGE $00A2
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA5CE;

    // A62C: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A62E: ORA #$08
    cpu.m_a |= 0x08;

    // A630: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A633: SUBD $5002
    cpu.m_d -= 0x5002;

    // A636: BLE $00AD
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA5E5;

    // A638: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A63A: BITA #$08
    // TODO: Convert BITA #$08

    // A63C: BEQ $00C3
    if (cpu.zero_flag()) cpu.m_pc = 0xA601;

    // A63E: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A640: ANDA #$F7
    cpu.m_a &= 0xF7;

    // A642: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // A644: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A647: BPL $00BB
    if (!cpu.negative_flag()) cpu.m_pc = 0xA604;

    // A649: JSR $A7C8
    cpu.call_function(0xA7C8);

    // A64C: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A64F: BPL $00C3
    if (!cpu.negative_flag()) cpu.m_pc = 0xA614;

    // A651: JSR $A7BF
    cpu.call_function(0xA7BF);

    // A655: LDA #$40
    cpu.m_a = 0x40;

    // A657: SUBA $507C
    cpu.m_a -= 0x507C;

    // A65A: CMPA $4703
    cpu.compare_a(cpu.read_memory(0x4703));

    // A65D: BCS $00E3
    if (cpu.carry_flag()) cpu.m_pc = 0xA642;

    // A65F: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A662: CMPA #$50
    cpu.compare_a(0x50);

    // A664: BCC $00D8
    if (!cpu.carry_flag()) cpu.m_pc = 0xA63E;

    // A666: JMP $A728
    cpu.m_pc = 0xA728;

    // A669: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // A66C: BPL $00E0
    if (!cpu.negative_flag()) cpu.m_pc = 0xA64E;

    // A66E: JMP $A728
    cpu.m_pc = 0xA728;

    // A671: JMP $A728
    cpu.m_pc = 0xA728;

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
    cpu.write_memory16(0xA8, cpu.m_u);

    // A68D: LDB #$40
    cpu.m_b = 0x40;

    // A68F: STB $5,U
    // TODO: Handle indexed addressing: STB $5,U

    // A691: LDB #$01
    cpu.m_b = 0x01;

    // A693: STB $3,U
    // TODO: Handle indexed addressing: STB $3,U

    // A695: LDB #$01
    cpu.m_b = 0x01;

    // A697: STB $4,U
    // TODO: Handle indexed addressing: STB $4,U

    // A699: LDA $4B3C
    cpu.m_a = cpu.read_memory(0x4B3C);

    // A69C: BLE $011A
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA6B8;

    // A69E: CMPX $4B32
    cpu.compare_x(cpu.read_memory16(0x4B32));

    // A6A1: BNE $011A
    if (!cpu.zero_flag()) cpu.m_pc = 0xA6BD;

    // A6A3: DEC $4B3C
    // TODO: Convert DEC $4B3C

    // A6A6: BNE $011A
    if (!cpu.zero_flag()) cpu.m_pc = 0xA6C2;

    // A6A8: JSR $BD4E
    cpu.call_function(0xBD4E);

    // A6AB: LDU ,U
    // TODO: Complex indexed addressing: ,U

    // A6AD: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // A6AF: LDD $8,X
    // TODO: Fix comma operator: LDD $8,X

    // A6B1: SUBD $5098
    cpu.m_d -= 0x5098;

    // A6B4: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // A6B6: LDD $A,X
    // TODO: Fix comma operator: LDD $A,X

    // A6B8: SUBD $509A
    cpu.m_d -= 0x509A;

    // A6BB: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // A6BD: LDD $C,X
    // TODO: Fix comma operator: LDD $C,X

    // A6BF: SUBD $509C
    cpu.m_d -= 0x509C;

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
    cpu.m_b = cpu.read_memory(0x4B19);

    // A6E3: CMPB #$0C
    cpu.compare_b(0x0C);

    // A6E5: BCS $015B
    if (cpu.carry_flag()) cpu.m_pc = 0xA742;

    // A6E7: LDX #$A6DE
    cpu.m_x = 0xA6DE;

    // A6EA: BRA $0161
    cpu.m_pc = 0xA74D;

    // A6ED: LDX #$A6C8
    cpu.m_x = 0xA6C8;

    // A6F0: LDX B,X
    // TODO: Fix comma operator: LDX B,X

    // A6F2: BRA $0177
    cpu.m_pc = 0xA76B;

    // A6F4: LDB $4B19
    cpu.m_b = cpu.read_memory(0x4B19);

    // A6F7: CMPB #$07
    cpu.compare_b(0x07);

    // A6F9: BLS $016C
    // TODO: Convert BLS $016C

    // A6FB: LDB #$07
    cpu.m_b = 0x07;

    // A6FE: LDX #$A718
    cpu.m_x = 0xA718;

    // A701: LDX B,X
    // TODO: Fix comma operator: LDX B,X

    // A703: BRA $0177
    cpu.m_pc = 0xA77C;

    // A705: LDX #$494B
    cpu.m_x = 0x494B;

    // A708: STX <$A8
    cpu.write_memory16(0xA8, cpu.m_x);

    // A70A: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // A70C: BEQ $0186
    if (cpu.zero_flag()) cpu.m_pc = 0xA694;

    // A70E: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // A710: CMPX #$496F
    cpu.compare_x(0x496F);

    // A713: BCS $0177
    if (cpu.carry_flag()) cpu.m_pc = 0xA78C;

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
    cpu.m_a = 0x70;

    // A72D: STA $5,X
    // TODO: Handle indexed addressing: STA $5,X

    // A72F: LDA #$05
    cpu.m_a = 0x05;

    // A731: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // A733: LDU <$64
    cpu.m_u = cpu.read_memory16(0x64);

    // A735: STX <$01
    cpu.write_memory16(0x01, cpu.m_x);

    // A737: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // A739: SUBD $509A
    cpu.m_d -= 0x509A;

    // A73C: BMI $01B1
    if (cpu.negative_flag()) cpu.m_pc = 0xA6EF;

    // A73E: LDA #$08
    cpu.m_a = 0x08;

    // A740: BRA $01B3
    cpu.m_pc = 0xA6F5;

    // A742: LDA #$07
    cpu.m_a = 0x07;

    // A744: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // A746: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // A748: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // A74A: SUBA $5098
    cpu.m_a -= 0x5098;

    // A74D: ANDA #$80
    cpu.m_a &= 0x80;

    // A74F: EORA ,U
    // TODO: Complex indexed addressing: ,U

    // A751: LDB $1,U
    // TODO: Fix comma operator: LDB $1,U

    // A753: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // A755: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // A757: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // A759: LDD #$0200
    cpu.m_d = 0x0200;

    // A75C: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // A75E: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // A760: SUBD $509A
    cpu.m_d -= 0x509A;

    // A763: STA $6,X
    // TODO: Handle indexed addressing: STA $6,X

    // A765: BPL $01DA
    if (!cpu.negative_flag()) cpu.m_pc = 0xA741;

    // A769: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // A76B: STD $4706
    cpu.write_memory16(0x4706, cpu.m_d);

    // A76E: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // A770: SUBD $5098
    cpu.m_d -= 0x5098;

    // A773: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // A776: LDD #$0200
    cpu.m_d = 0x0200;

    // A779: STD $4706
    cpu.write_memory16(0x4706, cpu.m_d);

    // A77C: LDA $4700
    cpu.m_a = cpu.read_memory(0x4700);

    // A781: BCC $01F3
    if (!cpu.carry_flag()) cpu.m_pc = 0xA776;

    // A784: STA $7,X
    // TODO: Handle indexed addressing: STA $7,X

    // A786: LDA <$7D
    cpu.m_a = cpu.read_memory(0x7D);

    // A788: EORA $6,X
    // TODO: Fix comma operator: EORA $6,X

    // A78A: BPL $01FF
    if (!cpu.negative_flag()) cpu.m_pc = 0xA78B;

    // A78C: CLR $6,X
    // TODO: Fix comma operator: CLR $6,X

    // A78E: BRA $0221
    cpu.m_pc = 0xA7B1;

    // A790: LDA <$00
    cpu.m_a = cpu.read_memory(0x00);

}

} // namespace StarWars