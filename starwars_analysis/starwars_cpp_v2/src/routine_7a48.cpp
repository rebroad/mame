#include "cpu_6809.h"

namespace StarWars {

void routine_7a48_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_7a48.md
    // Address: 0x7A48

    // 7A48: LDU #$5090
    cpu.state_.u = 0x5090;

    // 7A4B: JSR $CDC3
    cpu.call_function(0xCDC3);

    // 7A4E: LDD #$0000
    cpu.state_.d = 0x0000;

    // 7A51: STD $5098
    cpu.write_memory(0x5098, cpu.state_.d);

    // 7A54: STD $509A
    cpu.write_memory(0x509A, cpu.state_.d);

    // 7A57: STD $509C
    cpu.write_memory(0x509C, cpu.state_.d);

    // 7A5A: LDD #$0000
    cpu.state_.d = 0x0000;

    // 7A5D: STA <$62
    cpu.write_memory(0x62, cpu.state_.a);

    // 7A5F: STA <$63
    cpu.write_memory(0x63, cpu.state_.a);

    // 7A61: STA <$31
    cpu.write_memory(0x31, cpu.state_.a);

    // 7A63: STA <$BC
    cpu.write_memory(0xBC, cpu.state_.a);

    // 7A65: STA <$B7
    cpu.write_memory(0xB7, cpu.state_.a);

    // 7A67: STA <$BD
    cpu.write_memory(0xBD, cpu.state_.a);

    // 7A69: STD <$A3
    cpu.write_memory(0xA3, cpu.state_.d);

    // 7A6B: STA $4878
    cpu.write_memory(0x4878, cpu.state_.a);

    // 7A6E: STA $486E
    cpu.write_memory(0x486E, cpu.state_.a);

    // 7A71: STA $4877
    cpu.write_memory(0x4877, cpu.state_.a);

    // 7A74: STD $4874
    cpu.write_memory(0x4874, cpu.state_.d);

    // 7A77: STD $486B
    cpu.write_memory(0x486B, cpu.state_.d);

    // 7A7B: STB $9D02
    cpu.write_memory(0x9D02, cpu.state_.b);

    // 7A7E: ADDA $5A30
    cpu.state_.a += 0x5A30;

    // 7A82: LDU $D,X
    // TODO: Fix comma operator: LDU $D,X

    // 7A84: EORA [$FFFF]
    // TODO: Unrecognized operand: [$FFFF]

    // 7A88: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7A8B: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7A8E: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7A91: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7A94: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7A97: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7A9A: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7A9D: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AA0: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AA3: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AA6: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AA9: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AAC: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AAF: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AB2: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AB5: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AB8: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7ABB: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7ABE: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AC1: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AC4: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AC7: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7ACA: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7ACD: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AD0: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AD3: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AD6: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AD9: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7ADC: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7ADF: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AE2: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AE5: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AE8: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AEB: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AEE: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AF1: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AF4: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // 7AF7: STU $434F
    cpu.write_memory(0x434F, cpu.state_.u);

    // 7B01: BRA $00EC
    cpu.state_.pc = 0x7BEF;

    // 7B04: XANDCC #$33
    // TODO: Convert XANDCC #$33

    // 7B06: BRA $0101
    cpu.state_.pc = 0x7C09;

    // 7B0C: EORA $ADBA
    cpu.state_.a ^= 0xADBA;

    // 7B0F: EORA $DFAD
    cpu.state_.a ^= 0xDFAD;

    // 7B12: LDA $A9BA
    cpu.state_.a = cpu.read_memory(0xA9BA);

    // 7B15: JSR [W,Y]
    // TODO: Complex indexed addressing: [W,Y]

    // 7B17: STU <$BB
    cpu.write_memory(0xBB, cpu.state_.u);

    // 7B19: LDA $BBDF
    cpu.state_.a = cpu.read_memory(0xBBDF);

    // 7B1C: LDA $AB7E
    cpu.state_.a = cpu.read_memory(0xAB7E);

    // 7B1F: ASL <$82
    // TODO: Convert ASL <$82

    // 7B21: LDD <$82
    cpu.state_.d = cpu.read_memory_word(0x82);

    // 7B23: LDA #$82
    cpu.state_.a = 0x82;

    // 7B25: LDD <$7D
    cpu.state_.d = cpu.read_memory_word(0x7D);

    // 7B28: SBCA #$DC
    // TODO: Convert SBCA #$DC

    // 7B2A: CMPA #$E2
    cpu.compare_a(0xE2);

    // 7B2C: SBCA #$DC
    // TODO: Convert SBCA #$DC

    // 7B2E: CMPA #$C3
    cpu.compare_a(0xC3);

    // 7B30: SBCA #$DC
    // TODO: Convert SBCA #$DC

    // 7B32: SBCA #$67
    // TODO: Convert SBCA #$67

    // 7B34: SBCA #$DC
    // TODO: Convert SBCA #$DC

    // 7B36: SBCA #$01
    // TODO: Convert SBCA #$01

    // 7B38: SBCA #$DC
    // TODO: Convert SBCA #$DC

    // 7B3A: CMPA #$E2
    cpu.compare_a(0xE2);

    // 7B3C: SBCA #$FA
    // TODO: Convert SBCA #$FA

    // 7B3E: JMP $0882
    cpu.state_.pc = 0x0882;

    // 7B41: LDD <$7D
    cpu.state_.d = cpu.read_memory_word(0x7D);

    // 7B44: SBCA #$C8
    // TODO: Convert SBCA #$C8

    // 7B46: TST $B182
    // TODO: Convert TST $B182

    // 7B49: EORB #$80
    cpu.state_.b ^= 0x80;

    // 7B4B: LDB #$82
    cpu.state_.b = 0x82;

    // 7B4D: LDD <$7F
    cpu.state_.d = cpu.read_memory_word(0x7F);

    // 7B4F: ASL $82DC
    // TODO: Convert ASL $82DC

    // 7B52: CLR $9782
    cpu.write_memory(0x9782, 0);

    // 7B55: LDD <$81
    cpu.state_.d = cpu.read_memory_word(0x81);

    // 7B57: ADDD #$82D2
    cpu.state_.d += 0x82D2;

    // 7B5A: TST $B182
    // TODO: Convert TST $B182

    // 7B5D: ORB $7E08
    cpu.state_.b |= 0x7E08;

    // 7B60: SBCA #$DC
    // TODO: Convert SBCA #$DC

    // 7B62: INC $F882
    // TODO: Convert INC $F882

    // 7B65: EORB #$7D
    cpu.state_.b ^= 0x7D;

    // 7B67: ORB #$82
    cpu.state_.b |= 0x82;

    // 7B69: LDD <$80
    cpu.state_.d = cpu.read_memory_word(0x80);

    // 7B6B: ROR ,-X
    // TODO: Convert ROR ,-X

    // 7B6D: LDB ,X+
    // TODO: Complex indexed addressing: ,X+

    // 7B70: SBCA #$BE
    // TODO: Convert SBCA #$BE

    // 7B72: SUBA #$C6
    cpu.state_.a -= 0xC6;

    // 7B74: SBCA #$C8
    // TODO: Convert SBCA #$C8

    // 7B76: JMP $3D82
    cpu.state_.pc = 0x3D82;

    // 7B79: SBCB <$82
    // TODO: Convert SBCB <$82

    // 7B7B: ASR ,--X
    // TODO: Convert ASR ,--X

    // 7B7D: BCS $01B5
    if (cpu.carry_flag()) cpu.state_.pc = 0x7D34;

    // 7B7F: ASL <$82
    // TODO: Convert ASL <$82

    // 7B81: LDD <$7D
    cpu.state_.d = cpu.read_memory_word(0x7D);

    // 7B84: SBCA #$C8
    // TODO: Convert SBCA #$C8

    // 7B86: JMP $D882
    cpu.state_.pc = 0xD882;

    // 7B89: SUBB $7E75
    cpu.state_.b -= 0x7E75;

    // 7B8C: SBCA #$D2
    // TODO: Convert SBCA #$D2

    // 7B8E: CMPA #$35
    cpu.compare_a(0x35);

    // 7B90: SBCA #$D2
    // TODO: Convert SBCA #$D2

    // 7B92: SBCA #$26
    // TODO: Convert SBCA #$26

    // 7B94: SBCA #$C8
    // TODO: Convert SBCA #$C8

    // 7B96: JMP $D882
    cpu.state_.pc = 0xD882;

    // 7B99: SUBB $7E75
    cpu.state_.b -= 0x7E75;

    // 7B9C: SUBD #$257E
    cpu.state_.d -= 0x257E;

    // 7B9F: ASL <$82
    // TODO: Convert ASL <$82

    // 7BA1: LDD <$82
    cpu.state_.d = cpu.read_memory_word(0x82);

    // 7BA3: BNE $00DF
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7C84;

    // 7BA5: EORB #$81
    cpu.state_.b ^= 0x81;

    // 7BA7: DEC <$82
    // TODO: Convert DEC <$82

    // 7BA9: SBCB <$80
    // TODO: Convert SBCB <$80

    // 7BAC: SBCA #$BE
    // TODO: Convert SBCA #$BE

    // 7BAE: SUBA #$66
    cpu.state_.a -= 0x66;

    // 7BB0: SBCA #$E6
    // TODO: Convert SBCA #$E6

    // 7BB2: JMP $3D82
    cpu.state_.pc = 0x3D82;

    // 7BB5: SBCB <$7E
    // TODO: Convert SBCB <$7E

    // 7BB7: BRN $00F3
    // TODO: Convert BRN $00F3

    // 7BB9: SBCB <$7C
    // TODO: Convert SBCB <$7C

    // 7BBB: LDB <$83
    cpu.state_.b = cpu.read_memory(0x83);

    // 7BBD: BCS $01F5
    if (cpu.carry_flag()) cpu.state_.pc = 0x7DB4;

    // 7BBF: ASL <$82
    // TODO: Convert ASL <$82

    // 7BC1: LDD <$7D
    cpu.state_.d = cpu.read_memory_word(0x7D);

    // 7BC4: SBCA #$C8
    // TODO: Convert SBCA #$C8

    // 7BC6: CMPA #$0A
    cpu.compare_a(0x0A);

    // 7BC8: SBCA #$D2
    // TODO: Convert SBCA #$D2

    // 7BCA: CLR $B982
    cpu.write_memory(0xB982, 0);

    // 7BCD: EORB #$81
    cpu.state_.b ^= 0x81;

    // 7BCF: PULS A,PC
    // TODO: Convert PULS A,PC

    // 7BD1: SBCB <$7E
    // TODO: Convert SBCB <$7E

    // 7BD3: LSR $82D2
    // TODO: Convert LSR $82D2

    // 7BD6: SUBA #$C6
    cpu.state_.a -= 0xC6;

    // 7BD8: SBCA #$C8
    // TODO: Convert SBCA #$C8

    // 7BDA: JMP $D883
    cpu.state_.pc = 0xD883;

    // 7BDD: BCS $0215
    if (cpu.carry_flag()) cpu.state_.pc = 0x7DF4;

    // 7BDF: ASL <$82
    // TODO: Convert ASL <$82

    // 7BE1: LDD <$80
    cpu.state_.d = cpu.read_memory_word(0x80);

    // 7BE3: BCS $011F
    if (cpu.carry_flag()) cpu.state_.pc = 0x7D04;

    // 7BE5: SUBB $7DE3
    cpu.state_.b -= 0x7DE3;

    // 7BE8: SBCA #$E6
    // TODO: Convert SBCA #$E6

    // 7BEA: CLR $1682
    cpu.write_memory(0x1682, 0);

    // 7BED: EORB #$7F
    cpu.state_.b ^= 0x7F;

    // 7BEF: ADCA $82C8
    // TODO: Convert ADCA $82C8

    // 7BF2: SUBA #$EE
    cpu.state_.a -= 0xEE;

    // 7BF4: SBCA #$BE
    // TODO: Convert SBCA #$BE

    // 7BF6: SBCA #$42
    // TODO: Convert SBCA #$42

    // 7BF8: SBCA #$C8
    // TODO: Convert SBCA #$C8

    // 7BFA: JMP $5680
    cpu.state_.pc = 0x5680;

    // 7BFD: CLR $7E08
    cpu.write_memory(0x7E08, 0);

    // 7C00: SBCA #$DC
    // TODO: Convert SBCA #$DC

    // 7C02: TST $1182
    // TODO: Convert TST $1182

    // 7C05: SBCB <$81
    // TODO: Convert SBCB <$81

    // 7C07: CMPA ,-X
    // TODO: Complex indexed addressing: ,-X

    // 7C09: LDB -$3,S
    // TODO: Fix comma operator: LDB -$3,S

    // 7C0B: SUBA #$82
    cpu.state_.a -= 0x82;

    // 7C0D: LDB ,X+
    // TODO: Complex indexed addressing: ,X+

    // 7C0F: COM <$82
    // TODO: Convert COM <$82

    // 7C11: SBCB <$7E
    // TODO: Convert SBCB <$7E

    // 7C13: ADCA $82D2
    // TODO: Convert ADCA $82D2

    // 7C16: CLR $4782
    cpu.write_memory(0x4782, 0);

    // 7C19: SBCB <$7E
    // TODO: Convert SBCB <$7E

    // 7C1B: CMPB $807F
    cpu.compare_b(cpu.read_memory(0x807F));

    // 7C1E: JMP $0882
    cpu.state_.pc = 0x0882;

    // 7C21: LDD <$7E
    cpu.state_.d = cpu.read_memory_word(0x7E);

    // 7C23: JSR <$82
    cpu.call_function(0x82);

    // 7C25: SUBB $7FD2
    cpu.state_.b -= 0x7FD2;

    // 7C28: SBCA #$F0
    // TODO: Convert SBCA #$F0

    // 7C2A: SUBA #$9B
    cpu.state_.a -= 0x9B;

    // 7C2C: SBCA #$F0
    // TODO: Convert SBCA #$F0

    // 7C2E: CMPA #$76
    cpu.compare_a(0x76);

    // 7C30: SBCA #$E6
    // TODO: Convert SBCA #$E6

    // 7C32: SBCA #$A5
    // TODO: Convert SBCA #$A5

    // 7C34: SBCA #$F0
    // TODO: Convert SBCA #$F0

    // 7C36: CMPA #$A1
    cpu.compare_a(0xA1);

    // 7C38: SBCA #$F0
    // TODO: Convert SBCA #$F0

    // 7C3A: SBCA #$01
    // TODO: Convert SBCA #$01

    // 7C3C: SUBA #$7F
    cpu.state_.a -= 0x7F;

    // 7C3E: JMP $0882
    cpu.state_.pc = 0x0882;

    // 7C41: LDD <$7D
    cpu.state_.d = cpu.read_memory_word(0x7D);

    // 7C44: SBCA #$C8
    // TODO: Convert SBCA #$C8

    // 7C46: JMP $D800
    cpu.state_.pc = 0xD800;

}

} // namespace StarWars