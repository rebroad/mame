#include "cpu_6809.h"

namespace StarWars {

void routine_7bbd_7d9a_impl(CPU6809& cpu) {
    // Converted from rom_disasm_7bbd_7d9a.md
    // Address: 0x7BBD_7D9A

    // 7BBD: BCS $7C3D
    if (cpu.carry_flag()) cpu.m_pc = 0x7C3D;

    // 7BBF: ASL <$82
    // TODO: Convert ASL <$82

    // 7BC1: LDD <$7D
    cpu.m_d = cpu.read_memory16(0x7D);

    // 7BC4: SBCA #$C8
    // TODO: Convert SBCA #$C8

    // 7BC6: CMPA #$0A
    cpu.compare_a(0x0A);

    // 7BC8: SBCA #$D2
    // TODO: Convert SBCA #$D2

    // 7BCA: CLR $B982
    cpu.write_memory(0xB982, 0);

    // 7BCD: EORB #$81
    cpu.m_b ^= 0x81;

    // 7BCF: PULS A,PC
    // TODO: Convert PULS A,PC

    // 7BD1: SBCB <$7E
    // TODO: Convert SBCB <$7E

    // 7BD3: LSR $82D2
    // TODO: Convert LSR $82D2

    // 7BD6: SUBA #$C6
    cpu.m_a -= 0xC6;

    // 7BD8: SBCA #$C8
    // TODO: Convert SBCA #$C8

    // 7BDA: JMP $D883
    goto label_D883;

    // 7BDD: BCS $7C5D
    if (cpu.carry_flag()) cpu.m_pc = 0x7C5D;

    // 7BDF: ASL <$82
    // TODO: Convert ASL <$82

    // 7BE1: LDD <$80
    cpu.m_d = cpu.read_memory16(0x80);

    // 7BE3: BCS $7B67
    if (cpu.carry_flag()) cpu.m_pc = 0x7B67;

    // 7BE5: SUBB $7DE3
    cpu.m_b -= 0x7DE3;

    // 7BE8: SBCA #$E6
    // TODO: Convert SBCA #$E6

    // 7BEA: CLR $1682
    cpu.write_memory(0x1682, 0);

    // 7BED: EORB #$7F
    cpu.m_b ^= 0x7F;

    // 7BEF: ADCA $82C8
    // TODO: Convert ADCA $82C8

    // 7BF2: SUBA #$EE
    cpu.m_a -= 0xEE;

    // 7BF4: SBCA #$BE
    // TODO: Convert SBCA #$BE

    // 7BF6: SBCA #$42
    // TODO: Convert SBCA #$42

    // 7BF8: SBCA #$C8
    // TODO: Convert SBCA #$C8

    // 7BFA: JMP $5680
    goto label_5680;

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
    cpu.m_a -= 0x82;

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
    goto label_0882;

    // 7C21: LDD <$7E
    cpu.m_d = cpu.read_memory16(0x7E);

    // 7C23: JSR <$82
    cpu.call_function(0x82);

    // 7C25: SUBB $7FD2
    cpu.m_b -= 0x7FD2;

    // 7C28: SBCA #$F0
    // TODO: Convert SBCA #$F0

    // 7C2A: SUBA #$9B
    cpu.m_a -= 0x9B;

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
    cpu.m_a -= 0x7F;

    // 7C3E: JMP $0882
    goto label_0882;

    // 7C41: LDD <$7D
    cpu.m_d = cpu.read_memory16(0x7D);

    // 7C44: SBCA #$C8
    // TODO: Convert SBCA #$C8

    // 7C46: JMP $D882
    goto label_D882;

    // 7C49: SUBB $7FD2
    cpu.m_b -= 0x7FD2;

    // 7C4C: SBCA #$F0
    // TODO: Convert SBCA #$F0

    // 7C4E: SBCA #$A5
    // TODO: Convert SBCA #$A5

    // 7C50: SBCA #$F0
    // TODO: Convert SBCA #$F0

    // 7C52: TST $8082
    // TODO: Convert TST $8082

    // 7C55: LDB ,X++
    cpu.m_b = cpu.read_memory(cpu.m_x++);

    // 7C57: CMPA ,-X
    // TODO: Complex indexed addressing: ,-X

    // 7C59: SUBB $8176
    cpu.m_b -= 0x8176;

    // 7C5C: SUBA #$7F
    cpu.m_a -= 0x7F;

    // 7C5E: JMP $0882
    goto label_0882;

    // 7C61: LDD <$7E
    cpu.m_d = cpu.read_memory16(0x7E);

    // 7C63: JSR <$82
    cpu.call_function(0x82);

    // 7C65: SUBB $7FD2
    cpu.m_b -= 0x7FD2;

    // 7C68: SBCA #$F0
    // TODO: Convert SBCA #$F0

    // 7C6A: CMPA #$54
    cpu.compare_a(0x54);

    // 7C6C: SBCA #$C8
    // TODO: Convert SBCA #$C8

    // 7C6E: JMP $B982
    goto label_B982;

    // 7C71: SBCB <$7F
    // TODO: Convert SBCB <$7F

    // 7C74: SBCA #$D2
    // TODO: Convert SBCA #$D2

    // 7C76: JMP $F182
    goto label_F182;

    // 7C79: LDX $7D80
    cpu.m_x = cpu.read_memory16(0x7D80);

    // 7C7C: SUBA #$7F
    cpu.m_a -= 0x7F;

    // 7C7E: JMP $0882
    goto label_0882;

    // 7C81: LDD <$7C
    cpu.m_d = cpu.read_memory16(0x7C);

    // 7C83: LDX <$82
    cpu.m_x = cpu.read_memory16(0x82);

    // 7C85: SBCB <$7C
    // TODO: Convert SBCB <$7C

    // 7C87: LDX <$82
    cpu.m_x = cpu.read_memory16(0x82);

    // 7C89: SUBB $7C9E
    cpu.m_b -= 0x7C9E;

    // 7C8C: SBCA #$D2
    // TODO: Convert SBCA #$D2

    // 7C8E: INC $9E82
    // TODO: Convert INC $9E82

    // 7C91: SUBB $7C9E
    cpu.m_b -= 0x7C9E;

    // 7C94: SBCA #$D2
    // TODO: Convert SBCA #$D2

    // 7C96: INC $9E82
    // TODO: Convert INC $9E82

    // 7C99: SUBB $7C9E
    cpu.m_b -= 0x7C9E;

    // 7C9C: SUBA #$7F
    cpu.m_a -= 0x7F;

    // 7C9E: TST $117D
    // TODO: Convert TST $117D

    // 7CA1: SUBA #$7D
    cpu.m_a -= 0x7D;

    // 7CA3: ADDD -$2,S
    // TODO: Fix comma operator: ADDD -$2,S

    // 7CA5: JSR <$7E
    cpu.call_function(0x7E);

    // 7CA7: LSR $7EB9
    // TODO: Convert LSR $7EB9

    // 7CAA: JMP $F17F
    goto label_F17F;

    // 7CAE: CLR $D280
    cpu.write_memory(0xD280, 0);

    // 7CB1: COM <$80
    // TODO: Convert COM <$80

    // 7CB3: BCS $7C35
    if (cpu.carry_flag()) cpu.m_pc = 0x7C35;

    // 7CB5: ADDA <$80
    cpu.m_a += 0x80;

    // 7CB7: LDU ,X++
    cpu.m_u = cpu.read_memory16(cpu.m_x++);

    // 7CBA: CMPA #$76
    cpu.compare_a(0x76);

    // 7CBC: CMPA #$A1
    cpu.compare_a(0xA1);

    // 7CBE: SBCA #$A5
    // TODO: Convert SBCA #$A5

    // 7CC0: XDEC $1E7B
    // TODO: Convert XDEC $1E7B

    // 7CC4: XDEC $5E7B
    // TODO: Convert XDEC $5E7B

    // 7CC7: JMP $7B9E
    goto label_7B9E;

    // 7CCA: XDEC $BE7B
    // TODO: Convert XDEC $BE7B

    // 7CCD: LDU <$7B
    cpu.m_u = cpu.read_memory16(0x7B);

    // 7CCF: LDU $7C1E
    cpu.m_u = cpu.read_memory16(0x7C1E);

    // 7CD2: INC $3E7C
    // TODO: Convert INC $3E7C

    // 7CD6: NEG <$08
    // TODO: Convert NEG <$08

    // 7CD8: ASL <$02
    // TODO: Convert ASL <$02

    // 7CDA: NEG <$03
    // TODO: Convert NEG <$03

    // 7CDC: XNC <$20
    // TODO: Convert XNC <$20

    // 7CDE: BRA $7CE1
    goto label_7CE1;

    // 7CE0: COM <$30
    // TODO: Convert COM <$30

    // 7CE2: NEG <$02
    // TODO: Convert NEG <$02

    // 7CE4: XNC <$02
    // TODO: Convert XNC <$02

    // 7CE6: SUBA #$8C
    cpu.m_a -= 0x8C;

    // 7CE8: XNC <$38
    // TODO: Convert XNC <$38

    // 7CEA: ASL <$01
    // TODO: Convert ASL <$01

    // 7CEC: NEG <$00
    // TODO: Convert NEG <$00

    // 7CEE: NEG <$0E
    // TODO: Convert NEG <$0E

    // 7CF0: SBCB #$01
    // TODO: Convert SBCB #$01

    // 7CF2: SUBB #$00
    cpu.m_b -= 0x00;

    // 7CF4: XNC <$80
    // TODO: Convert XNC <$80

    // 7CF6: SUBA #$05
    cpu.m_a -= 0x05;

    // 7CF8: XNC <$00
    // TODO: Convert XNC <$00

    // 7CFA: NEG <$02
    // TODO: Convert NEG <$02

    // 7CFC: XANDCC #$08
    // TODO: Convert XANDCC #$08

    // 7CFE: XNC <$03
    // TODO: Convert XNC <$03

    // 7D00: COM <$02
    // TODO: Convert COM <$02

    // 7D02: SUBA #$B0
    cpu.m_a -= 0xB0;

    // 7D04: XNC <$0C
    // TODO: Convert XNC <$0C

    // 7D06: INC <$02
    // TODO: Convert INC <$02

    // 7D08: SBCB #$C2
    // TODO: Convert SBCB #$C2

    // 7D0A: XNC <$00
    // TODO: Convert XNC <$00

    // 7D0C: NEG <$02
    // TODO: Convert NEG <$02

    // 7D0E: ASL <$08
    // TODO: Convert ASL <$08

    // 7D10: LSR <$01
    // TODO: Convert LSR <$01

    // 7D12: NEG <$00
    // TODO: Convert NEG <$00

    // 7D14: NEG <$A0
    // TODO: Convert NEG <$A0

    // 7D16: SUBA $1,X
    // TODO: Fix comma operator: SUBA $1,X

    // 7D18: COM <$03
    // TODO: Convert COM <$03

    // 7D1A: NEG <$0A
    // TODO: Convert NEG <$0A

    // 7D1C: DEC <$01
    // TODO: Convert DEC <$01

    // 7D1E: NEG <$00
    // TODO: Convert NEG <$00

    // 7D20: NEG <$38
    // TODO: Convert NEG <$38

    // 7D22: XANDCC #$01
    // TODO: Convert XANDCC #$01

    // 7D24: BRA $7D46
    goto label_7D46;

    // 7D26: NEG <$C0
    // TODO: Convert NEG <$C0

    // 7D28: SUBB #$01
    cpu.m_b -= 0x01;

    // 7D2A: NEG <$00
    // TODO: Convert NEG <$00

    // 7D2C: NEG <$00
    // TODO: Convert NEG <$00

    // 7D2E: NEG <$01
    // TODO: Convert NEG <$01

    // 7D30: JMP <$0E
    // TODO: Invalid branch offset: <$0E

    // 7D32: NEG <$08
    // TODO: Convert NEG <$08

    // 7D34: ASL <$01
    // TODO: Convert ASL <$01

    // 7D36: NEG <$00
    // TODO: Convert NEG <$00

    // 7D38: NEG <$08
    // TODO: Convert NEG <$08

    // 7D3A: ASL <$01
    // TODO: Convert ASL <$01

    // 7D3C: BRA $7D5E
    goto label_7D5E;

    // 7D3E: NEG <$80
    // TODO: Convert NEG <$80

    // 7D40: SUBA #$05
    cpu.m_a -= 0x05;

    // 7D42: XNC <$00
    // TODO: Convert XNC <$00

    // 7D44: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // 7D46: INC <$00
    // TODO: Convert INC <$00

    // 7D48: XNC <$00
    // TODO: Convert XNC <$00

    // 7D4A: COM <$02
    // TODO: Convert COM <$02

    // 7D4C: SUBB #$00
    cpu.m_b -= 0x00;

    // 7D4E: XNC <$00
    // TODO: Convert XNC <$00

    // 7D50: SUBB #$02
    cpu.m_b -= 0x02;

    // 7D52: COM <$00
    // TODO: Convert COM <$00

    // 7D54: XNC <$00
    // TODO: Convert XNC <$00

    // 7D56: INC <$02
    // TODO: Convert INC <$02

    // 7D58: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X

    // 7D5A: LSR <$01
    // TODO: Convert LSR <$01

    // 7D5C: NEG <$00
    // TODO: Convert NEG <$00

    // 7D5E: XNC <$A0
    // TODO: Convert XNC <$A0

    // 7D60: SUBA $1,X
    // TODO: Fix comma operator: SUBA $1,X

    // 7D62: NEG <$00
    // TODO: Convert NEG <$00

    // 7D64: NEG <$03
    // TODO: Convert NEG <$03

    // 7D66: COM <$02
    // TODO: Convert COM <$02

    // 7D68: DEC <$0A
    // TODO: Convert DEC <$0A

    // 7D6A: NEG <$00
    // TODO: Convert NEG <$00

    // 7D6C: NEG <$01
    // TODO: Convert NEG <$01

    // 7D6E: SUBB #$C0
    cpu.m_b -= 0xC0;

    // 7D70: XNC <$A0
    // TODO: Convert XNC <$A0

    // 7D72: SUBA $1,X
    // TODO: Fix comma operator: SUBA $1,X

    // 7D74: COM <$03
    // TODO: Convert COM <$03

    // 7D76: NEG <$00
    // TODO: Convert NEG <$00

    // 7D78: NEG <$02
    // TODO: Convert NEG <$02

    // 7D7C: NEG <$00
    // TODO: Convert NEG <$00

    // 7D7E: NEG <$05
    // TODO: Convert NEG <$05

    // 7D80: NEG <$0A
    // TODO: Convert NEG <$0A

    // 7D82: DEC <$01
    // TODO: Convert DEC <$01

    // 7D84: NEG <$00
    // TODO: Convert NEG <$00

    // 7D86: NEG <$A0
    // TODO: Convert NEG <$A0

    // 7D88: SUBA $1,X
    // TODO: Fix comma operator: SUBA $1,X

    // 7D8A: NEG <$00
    // TODO: Convert NEG <$00

    // 7D8C: NEG <$0A
    // TODO: Convert NEG <$0A

    // 7D8E: DEC <$01
    // TODO: Convert DEC <$01

    // 7D90: NEG <$00
    // TODO: Convert NEG <$00

    // 7D92: NEG <$A0
    // TODO: Convert NEG <$A0

    // 7D94: SUBA $1,X
    // TODO: Fix comma operator: SUBA $1,X

    // 7D96: NEG <$00
    // TODO: Convert NEG <$00

    // 7D98: NEG <$0A
    // TODO: Convert NEG <$0A

    // 7D9A: JMP $7d9a
    goto label_7D9A;

}

} // namespace StarWars