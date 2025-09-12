#include "cpu_6809.h"

namespace StarWars {

void routine_7d9a_impl(CPU6809& cpu) {
    // Converted from rom_disasm_7d9a.md
    // Address: 0x7D9A

    // 7D9A: DEC <$01
    // TODO: Convert DEC <$01

    // 7D9C: NEG <$00
    // TODO: Convert NEG <$00

    // 7D9E: NEG <$A0
    // TODO: Convert NEG <$A0

    // 7DA0: SUBA $1,X
    // TODO: Fix comma operator: SUBA $1,X

    // 7DA2: NEG <$00
    // TODO: Convert NEG <$00

    // 7DA4: NEG <$0A
    // TODO: Convert NEG <$0A

    // 7DA6: DEC <$01
    // TODO: Convert DEC <$01

    // 7DA8: NEG <$00
    // TODO: Convert NEG <$00

    // 7DAA: NEG <$A0
    // TODO: Convert NEG <$A0

    // 7DAC: SUBA $1,X
    // TODO: Fix comma operator: SUBA $1,X

    // 7DAE: NEG <$00
    // TODO: Convert NEG <$00

    // 7DB0: LSR <$02
    // TODO: Convert LSR <$02

    // 7DB2: SUBA #$80
    cpu.m_a -= 0x80;

    // 7DB4: XNC <$8C
    // TODO: Convert XNC <$8C

    // 7DB6: SUBD #$02B0
    cpu.m_d -= 0x02B0;

    // 7DB9: SUBA #$02
    cpu.m_a -= 0x02;

    // 7DBB: SUBA #$B0
    cpu.m_a -= 0xB0;

    // 7DBD: XNC <$02
    // TODO: Convert XNC <$02

    // 7DBF: XNC <$02
    // TODO: Convert XNC <$02

    // 7DC1: LEAS $E,X
    // TODO: Fix comma operator: LEAS $E,X

    // 7DC3: XNC <$0E
    // TODO: Convert XNC <$0E

    // 7DC5: SBCB #$02
    // TODO: Convert SBCB #$02

    // 7DC7: XNC <$02
    // TODO: Convert XNC <$02

    // 7DC9: LSR <$02
    // TODO: Convert LSR <$02

    // 7DCB: XNC <$02
    // TODO: Convert XNC <$02

    // 7DCD: XNC <$32
    // TODO: Convert XNC <$32

    // 7DCF: LEAS $2,X
    // TODO: Fix comma operator: LEAS $2,X

    // 7DD1: XNC <$02
    // TODO: Convert XNC <$02

    // 7DD3: XNC <$C8
    // TODO: Convert XNC <$C8

    // 7DD5: EORB #$02
    cpu.m_b ^= 0x02;

    // 7DD7: ASL <$08
    // TODO: Convert ASL <$08

    // 7DD9: XNC <$08
    // TODO: Convert XNC <$08

    // 7DDB: ASL <$02
    // TODO: Convert ASL <$02

    // 7DDD: SUBB ,S+
    // TODO: Complex indexed addressing: ,S+

    // 7DDF: XNC <$20
    // TODO: Convert XNC <$20

    // 7DE1: BRA $004E
    cpu.m_pc = 0x7E31;

    // 7DE3: NEG <$22
    // TODO: Convert NEG <$22

    // 7DE5: EORA #$01
    cpu.m_a ^= 0x01;

    // 7DE7: NEG <$00
    // TODO: Convert NEG <$00

    // 7DE9: NEG <$88
    // TODO: Convert NEG <$88

    // 7DEB: BHI $0054
    // TODO: Convert BHI $0054

    // 7DED: LEAU $0057,PCR
    // TODO: Fix comma operator: LEAU $0057,PCR

    // 7DF0: SUBA $A,X
    // TODO: Fix comma operator: SUBA $A,X

    // 7DF2: NEG <$00
    // TODO: Convert NEG <$00

    // 7DF4: NEG <$01
    // TODO: Convert NEG <$01

    // 7DF6: DEC <$A0
    // TODO: Convert DEC <$A0

    // 7DF8: NEG <$C0
    // TODO: Convert NEG <$C0

    // 7DFA: COM <$02
    // TODO: Convert COM <$02

    // 7DFC: BVC $FFE6
    // TODO: Convert BVC $FFE6

    // 7DFE: XNC <$00
    // TODO: Convert XNC <$00

    // 7E00: NEG <$02
    // TODO: Convert NEG <$02

    // 7E02: EORA #$28
    cpu.m_a ^= 0x28;

    // 7E04: XNC <$00
    // TODO: Convert XNC <$00

    // 7E06: NEG <$05
    // TODO: Convert NEG <$05

    // 7E08: XNC <$41
    // TODO: Convert XNC <$41

    // 7E0B: XNC <$41
    // TODO: Convert XNC <$41

    // 7E0E: XNC <$14
    // TODO: Convert XNC <$14

    // 7E11: XNC <$14
    // TODO: Convert XNC <$14

    // 7E14: XNC <$41
    // TODO: Convert XNC <$41

    // 7E17: XNC <$41
    // TODO: Convert XNC <$41

    // 7E1A: NEG <$3C
    // TODO: Convert NEG <$3C

    // 7E1C: CWAI #$01
    // TODO: Convert CWAI #$01

    // 7E1E: ADDD #$C305
    cpu.m_d += 0xC305;

    // 7E21: XNC <$80
    // TODO: Convert XNC <$80

    // 7E23: SUBA #$02
    cpu.m_a -= 0x02;

    // 7E25: NEG <$00
    // TODO: Convert NEG <$00

    // 7E27: XNC <$08
    // TODO: Convert XNC <$08

    // 7E29: ASL <$01
    // TODO: Convert ASL <$01

    // 7E2B: NEG <$00
    // TODO: Convert NEG <$00

    // 7E2D: XNC <$E0
    // TODO: Convert XNC <$E0

    // 7E2F: SUBB $2,X
    // TODO: Fix comma operator: SUBB $2,X

    // 7E31: COM <$03
    // TODO: Convert COM <$03

    // 7E33: XNC <$0E
    // TODO: Convert XNC <$0E

    // 7E35: JMP <$02
    cpu.m_pc = 0x02;

    // 7E37: SUBA $B001
    cpu.m_a -= 0xB001;

    // 7E3A: NEG <$00
    // TODO: Convert NEG <$00

    // 7E3C: LSR <$02
    // TODO: Convert LSR <$02

    // 7E3E: NEG <$00
    // TODO: Convert NEG <$00

    // 7E40: XNC <$0A
    // TODO: Convert XNC <$0A

    // 7E42: DEC <$02
    // TODO: Convert DEC <$02

    // 7E44: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y

    // 7E46: XNC <$00
    // TODO: Convert XNC <$00

    // 7E48: NEG <$02
    // TODO: Convert NEG <$02

    // 7E4A: BMI $00DD
    if (cpu.negative_flag()) cpu.m_pc = 0x7E29;

    // 7E4C: XNC <$00
    // TODO: Convert XNC <$00

    // 7E4E: NEG <$02
    // TODO: Convert NEG <$02

    // 7E50: SUBB #$C0
    cpu.m_b -= 0xC0;

    // 7E52: XNC <$AC
    // TODO: Convert XNC <$AC

    // 7E54: CMPX $5,X
    // TODO: Fix comma operator: CMPX $5,X

    // 7E56: XNC <$03
    // TODO: Convert XNC <$03

    // 7E58: COM <$02
    // TODO: Convert COM <$02

    // 7E5A: XNC <$00
    // TODO: Convert XNC <$00

    // 7E5C: NEG <$C0
    // TODO: Convert NEG <$C0

    // 7E5E: XNC <$02
    // TODO: Convert XNC <$02

    // 7E60: XNC <$30
    // TODO: Convert XNC <$30

    // 7E62: NEG <$30
    // TODO: Convert NEG <$30

    // 7E64: XNC <$02
    // TODO: Convert XNC <$02

    // 7E66: XNC <$0C
    // TODO: Convert XNC <$0C

    // 7E68: NEG <$0C
    // TODO: Convert NEG <$0C

    // 7E6A: XNC <$02
    // TODO: Convert XNC <$02

    // 7E6C: XNC <$C0
    // TODO: Convert XNC <$C0

    // 7E6E: NEG <$00
    // TODO: Convert NEG <$00

    // 7E70: XNC <$02
    // TODO: Convert XNC <$02

    // 7E72: NEG <$00
    // TODO: Convert NEG <$00

    // 7E74: LSR <$01
    // TODO: Convert LSR <$01

    // 7E76: XNC <$02
    // TODO: Convert XNC <$02

    // 7E78: NEG <$00
    // TODO: Convert NEG <$00

    // 7E7A: NEG <$01
    // TODO: Convert NEG <$01

    // 7E7C: XNC <$02
    // TODO: Convert XNC <$02

    // 7E7E: NEG <$00
    // TODO: Convert NEG <$00

    // 7E80: NEG <$01
    // TODO: Convert NEG <$01

    // 7E82: NEG <$00
    // TODO: Convert NEG <$00

    // 7E84: XNC <$F2
    // TODO: Convert XNC <$F2

    // 7E86: SBCB $010C
    // TODO: Convert SBCB $010C

    // 7E89: INC <$01
    // TODO: Convert INC <$01

    // 7E8B: XNC <$02
    // TODO: Convert XNC <$02

    // 7E8D: NEG <$00
    // TODO: Convert NEG <$00

    // 7E8F: NEG <$01
    // TODO: Convert NEG <$01

    // 7E91: EORA $02,Y
    // TODO: Fix comma operator: EORA $02,Y

    // 7E94: NEG <$00
    // TODO: Convert NEG <$00

    // 7E96: XNC <$03
    // TODO: Convert XNC <$03

    // 7E98: COM <$01
    // TODO: Convert COM <$01

    // 7E9A: NEG <$00
    // TODO: Convert NEG <$00

    // 7E9C: LSR <$02
    // TODO: Convert LSR <$02

    // 7E9E: BPL $00B0
    if (!cpu.negative_flag()) cpu.m_pc = 0x7E50;

    // 7EA0: NEG <$00
    // TODO: Convert NEG <$00

    // 7EA2: NEG <$02
    // TODO: Convert NEG <$02

    // 7EA4: ORA $02,Y
    // TODO: Fix comma operator: ORA $02,Y

    // 7EA7: NEG <$03
    // TODO: Convert NEG <$03

    // 7EA9: XNC <$00
    // TODO: Convert XNC <$00

    // 7EAB: INC <$02
    // TODO: Convert INC <$02

    // 7EAD: NEG <$03
    // TODO: Convert NEG <$03

    // 7EAF: XNC <$AA
    // TODO: Convert XNC <$AA

    // 7EB1: EORA $1,X
    // TODO: Fix comma operator: EORA $1,X

    // 7EB3: NEG <$00
    // TODO: Convert NEG <$00

    // 7EB5: XNC <$2A
    // TODO: Convert XNC <$2A

    // 7EB7: ORA $5,X
    // TODO: Fix comma operator: ORA $5,X

    // 7EB9: XNC <$0C
    // TODO: Convert XNC <$0C

    // 7EBB: INC <$02
    // TODO: Convert INC <$02

    // 7EBD: COM <$03
    // TODO: Convert COM <$03

    // 7EBF: XNC <$A0
    // TODO: Convert XNC <$A0

    // 7EC1: SUBA $1,X
    // TODO: Fix comma operator: SUBA $1,X

    // 7EC3: COM <$03
    // TODO: Convert COM <$03

    // 7EC5: NEG <$0A
    // TODO: Convert NEG <$0A

    // 7EC7: DEC <$01
    // TODO: Convert DEC <$01

    // 7EC9: BVC $0159
    // TODO: Convert BVC $0159

    // 7ECB: NEG <$0A
    // TODO: Convert NEG <$0A

    // 7ECD: DEC <$02
    // TODO: Convert DEC <$02

    // 7ECF: SUBA ,Y+
    // TODO: Complex indexed addressing: ,Y+

    // 7ED1: XNC <$00
    // TODO: Convert XNC <$00

    // 7ED3: NEG <$02
    // TODO: Convert NEG <$02

    // 7ED5: SUBD ,--Y
    // TODO: Complex indexed addressing: ,--Y

    // 7ED7: LSR <$02
    // TODO: Convert LSR <$02

    // 7ED9: EORA $02,Y
    // TODO: Fix comma operator: EORA $02,Y

    // 7EDC: NEG <$00
    // TODO: Convert NEG <$00

    // 7EDE: XNC <$2A
    // TODO: Convert XNC <$2A

    // 7EE0: BPL $014A
    if (!cpu.negative_flag()) cpu.m_pc = 0x7F2C;

    // 7EE2: NEG <$00
    // TODO: Convert NEG <$00

    // 7EE4: XNC <$A8
    // TODO: Convert XNC <$A8

    // 7EE6: EORA $2,X
    // TODO: Fix comma operator: EORA $2,X

    // 7EE8: NEG <$00
    // TODO: Convert NEG <$00

    // 7EEA: XNC <$2A
    // TODO: Convert XNC <$2A

    // 7EEC: BPL $0156
    if (!cpu.negative_flag()) cpu.m_pc = 0x7F44;

    // 7EEE: NEG <$00
    // TODO: Convert NEG <$00

    // 7EF0: LSR <$02
    // TODO: Convert LSR <$02

    // 7EF2: EORA #$88
    cpu.m_a ^= 0x88;

    // 7EF4: NEG <$22
    // TODO: Convert NEG <$22

    // 7EF6: BHI $015F
    // TODO: Convert BHI $015F

    // 7EF8: NEG <$00
    // TODO: Convert NEG <$00

    // 7EFA: XNC <$CC
    // TODO: Convert XNC <$CC

    // 7EFC: LDD #$0282
    cpu.m_d = 0x0282;

    // 7EFF: SBCA #$01
    // TODO: Convert SBCA #$01

    // 7F01: BVC $0191
    // TODO: Convert BVC $0191

    // 7F03: NEG <$00
    // TODO: Convert NEG <$00

    // 7F05: NEG <$01
    // TODO: Convert NEG <$01

    // 7F07: ORA $0,X
    // TODO: Fix comma operator: ORA $0,X

    // 7F09: NEG <$00
    // TODO: Convert NEG <$00

    // 7F0B: ORA $1,X
    // TODO: Fix comma operator: ORA $1,X

    // 7F0D: NEG <$00
    // TODO: Convert NEG <$00

    // 7F0F: XNC <$A8
    // TODO: Convert XNC <$A8

    // 7F11: EORA $1,X
    // TODO: Fix comma operator: EORA $1,X

    // 7F13: BPL $01A5
    if (!cpu.negative_flag()) cpu.m_pc = 0x7EBA;

    // 7F15: LSR <$01
    // TODO: Convert LSR <$01

    // 7F17: DEC <$A0
    // TODO: Convert DEC <$A0

    // 7F19: NEG <$C0
    // TODO: Convert NEG <$C0

    // 7F1B: INC <$01
    // TODO: Convert INC <$01

    // 7F1D: SUBA $A,X
    // TODO: Fix comma operator: SUBA $A,X

    // 7F1F: NEG <$00
    // TODO: Convert NEG <$00

    // 7F21: NEG <$01
    // TODO: Convert NEG <$01

    // 7F23: BVC $018B
    // TODO: Convert BVC $018B

    // 7F25: NEG <$03
    // TODO: Convert NEG <$03

    // 7F27: SUBB #$01
    cpu.m_b -= 0x01;

    // 7F29: BVC $01B9
    // TODO: Convert BVC $01B9

    // 7F2B: NEG <$00
    // TODO: Convert NEG <$00

    // 7F2D: NEG <$01
    // TODO: Convert NEG <$01

    // 7F2F: SUBA #$80
    cpu.m_a -= 0x80;

    // 7F31: NEG <$30
    // TODO: Convert NEG <$30

    // 7F33: COM <$01
    // TODO: Convert COM <$01

    // 7F35: XNC <$02
    // TODO: Convert XNC <$02

    // 7F37: NEG <$0C
    // TODO: Convert NEG <$0C

    // 7F39: NEG <$01
    // TODO: Convert NEG <$01

    // 7F3B: BVC $01A3
    // TODO: Convert BVC $01A3

    // 7F3D: NEG <$00
    // TODO: Convert NEG <$00

    // 7F3F: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // 7F41: SBCA #$28
    // TODO: Convert SBCA #$28

    // 7F43: NEG <$00
    // TODO: Convert NEG <$00

    // 7F45: NEG <$05
    // TODO: Convert NEG <$05

    // 7F47: NEG <$80
    // TODO: Convert NEG <$80

    // 7F49: SUBA #$01
    cpu.m_a -= 0x01;

    // 7F4B: BRA $01D3
    cpu.m_pc = 0x7F20;

    // 7F4D: NEG <$08
    // TODO: Convert NEG <$08

    // 7F4F: ASL <$01
    // TODO: Convert ASL <$01

    // 7F51: LEAX $C,X
    // TODO: Fix comma operator: LEAX $C,X

    // 7F53: NEG <$2A
    // TODO: Convert NEG <$2A

    // 7F55: BPL $01BE
    if (!cpu.negative_flag()) cpu.m_pc = 0x7F15;

    // 7F57: SUBB #$C0
    cpu.m_b -= 0xC0;

    // 7F59: NEG <$20
    // TODO: Convert NEG <$20

    // 7F5B: BRA $01C4
    cpu.m_pc = 0x7F21;

    // 7F5D: NEG <$00
    // TODO: Convert NEG <$00

    // 7F5F: NEG <$20
    // TODO: Convert NEG <$20

    // 7F61: BRA $01CA
    cpu.m_pc = 0x7F2D;

    // 7F63: SUBB #$C0
    cpu.m_b -= 0xC0;

    // 7F65: NEG <$20
    // TODO: Convert NEG <$20

    // 7F67: BRA $01D0
    cpu.m_pc = 0x7F39;

    // 7F69: SUBB #$C0
    cpu.m_b -= 0xC0;

    // 7F6B: NEG <$A8
    // TODO: Convert NEG <$A8

    // 7F6D: EORA $1,X
    // TODO: Fix comma operator: EORA $1,X

    // 7F6F: ASL <$08
    // TODO: Convert ASL <$08

    // 7F71: NEG <$03
    // TODO: Convert NEG <$03

    // 7F73: COM <$01
    // TODO: Convert COM <$01

    // 7F75: ASL <$08
    // TODO: Convert ASL <$08

    // 7F77: LSR <$02
    // TODO: Convert LSR <$02

    // 7F79: NEG <$00
    // TODO: Convert NEG <$00

    // 7F7B: XNC <$02
    // TODO: Convert XNC <$02

    // 7F7D: XNC <$02
    // TODO: Convert XNC <$02

    // 7F7F: NEG <$00
    // TODO: Convert NEG <$00

    // 7F81: NEG <$82
    // TODO: Convert NEG <$82

    // 7F83: SBCA #$01
    // TODO: Convert SBCA #$01

    // 7F85: CWAI #$3C
    // TODO: Convert CWAI #$3C

    // 7F87: NEG <$3C
    // TODO: Convert NEG <$3C

    // 7F89: CWAI #$01
    // TODO: Convert CWAI #$01

    // 7F8B: SBCA #$82
    // TODO: Convert SBCA #$82

    // 7F8D: XNC <$00
    // TODO: Convert XNC <$00

    // 7F8F: NEG <$02
    // TODO: Convert NEG <$02

    // 7F91: XNC <$02
    // TODO: Convert XNC <$02

    // 7F93: XNC <$00
    // TODO: Convert XNC <$00

    // 7F95: NEG <$05
    // TODO: Convert NEG <$05

    // 7F97: NEG <$00
    // TODO: Convert NEG <$00

    // 7F99: NEG <$00
    // TODO: Convert NEG <$00

}

} // namespace StarWars