#include "cpu_6809.h"

namespace StarWars {

void routine_7d9a_83a3_impl(CPU6809& cpu) {
    // Converted from rom_disasm_7d9a_83a3.md
    // Address: 0x7D9A_83A3

    label_7D9A:
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
    // 7DE1: BRA $7DE8
    goto label_7DE8;
    // 7DE3: NEG <$22
    // TODO: Convert NEG <$22
    // 7DE5: EORA #$01
    cpu.m_a ^= 0x01;
    // 7DE7: NEG <$00
    // TODO: Convert NEG <$00
    // 7DE9: NEG <$88
    // TODO: Convert NEG <$88
    // 7DEB: BHI $7DEE
    // TODO: Convert BHI $7DEE
    // 7DED: LEAU $7DF1,PCR
    // TODO: Fix comma operator: LEAU $7DF1,PCR
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
    // 7DFC: BVC $7D80
    // TODO: Convert BVC $7D80
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
    // 7E0A: NEGA 
    cpu.m_a = -cpu.m_a;
    // 7E0B: XNC <$41
    // TODO: Convert XNC <$41
    // 7E0D: NEGA 
    cpu.m_a = -cpu.m_a;
    // 7E0E: XNC <$14
    // TODO: Convert XNC <$14
    // 7E10: XHCF 
    // TODO: Convert XHCF 
    // 7E11: XNC <$14
    // TODO: Convert XNC <$14
    // 7E13: XHCF 
    // TODO: Convert XHCF 
    // 7E14: XNC <$41
    // TODO: Convert XNC <$41
    // 7E16: NEGA 
    cpu.m_a = -cpu.m_a;
    // 7E17: XNC <$41
    // TODO: Convert XNC <$41
    // 7E19: NEGA 
    cpu.m_a = -cpu.m_a;
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
    // TODO: Invalid branch offset: <$02
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
    // 7E4A: BMI $7E77
    if (cpu.negative_flag()) cpu.m_pc = 0x7E77;
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
    // 7E9E: BPL $7E4A
    if (!cpu.negative_flag()) cpu.m_pc = 0x7E4A;
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
    // 7EC9: BVC $7EF3
    // TODO: Convert BVC $7EF3
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
    // 7EE0: BPL $7EE4
    if (!cpu.negative_flag()) cpu.m_pc = 0x7EE4;
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
    // 7EEC: BPL $7EF0
    if (!cpu.negative_flag()) cpu.m_pc = 0x7EF0;
    // 7EEE: NEG <$00
    // TODO: Convert NEG <$00
    // 7EF0: LSR <$02
    // TODO: Convert LSR <$02
    // 7EF2: EORA #$88
    cpu.m_a ^= 0x88;
    // 7EF4: NEG <$22
    // TODO: Convert NEG <$22
    // 7EF6: BHI $7EF9
    // TODO: Convert BHI $7EF9
    // 7EF8: NEG <$00
    // TODO: Convert NEG <$00
    // 7EFA: XNC <$CC
    // TODO: Convert XNC <$CC
    // 7EFC: LDD #$0282
    cpu.m_d = 0x0282;
    // 7EFF: SBCA #$01
    // TODO: Convert SBCA #$01
    // 7F01: BVC $7F2B
    // TODO: Convert BVC $7F2B
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
    // 7F13: BPL $7F3F
    if (!cpu.negative_flag()) cpu.m_pc = 0x7F3F;
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
    // 7F23: BVC $7F25
    // TODO: Convert BVC $7F25
    // 7F25: NEG <$03
    // TODO: Convert NEG <$03
    // 7F27: SUBB #$01
    cpu.m_b -= 0x01;
    // 7F29: BVC $7F53
    // TODO: Convert BVC $7F53
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
    // 7F3B: BVC $7F3D
    // TODO: Convert BVC $7F3D
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
    // 7F4B: BRA $7F6D
    goto label_7F6D;
    // 7F4D: NEG <$08
    // TODO: Convert NEG <$08
    // 7F4F: ASL <$01
    // TODO: Convert ASL <$01
    // 7F51: LEAX $C,X
    // TODO: Fix comma operator: LEAX $C,X
    // 7F53: NEG <$2A
    // TODO: Convert NEG <$2A
    // 7F55: BPL $7F58
    if (!cpu.negative_flag()) cpu.m_pc = 0x7F58;
    // 7F57: SUBB #$C0
    cpu.m_b -= 0xC0;
    // 7F59: NEG <$20
    // TODO: Convert NEG <$20
    // 7F5B: BRA $7F5E
    goto label_7F5E;
    // 7F5D: NEG <$00
    // TODO: Convert NEG <$00
    // 7F5F: NEG <$20
    // TODO: Convert NEG <$20
    // 7F61: BRA $7F64
    goto label_7F64;
    // 7F63: SUBB #$C0
    cpu.m_b -= 0xC0;
    // 7F65: NEG <$20
    // TODO: Convert NEG <$20
    // 7F67: BRA $7F6A
    goto label_7F6A;
    // 7F69: SUBB #$C0
    cpu.m_b -= 0xC0;
    // 7F6B: NEG <$A8
    // TODO: Convert NEG <$A8
    label_7F6D:
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
    // 7F99: NEG <$01
    // TODO: Convert NEG <$01
    // 7F9B: XNC <$02
    // TODO: Convert XNC <$02
    // 7F9D: XNC <$8C
    // TODO: Convert XNC <$8C
    // 7F9F: CMPX #$0102
    cpu.compare_x(0x0102);
    // 7FA2: XNC <$02
    // TODO: Convert XNC <$02
    // 7FA4: SUBA $B001
    cpu.m_a -= 0xB001;
    // 7FA7: XNC <$02
    // TODO: Convert XNC <$02
    // 7FA9: XNC <$8C
    // TODO: Convert XNC <$8C
    // 7FAB: CMPX #$0102
    cpu.compare_x(0x0102);
    // 7FAE: XNC <$02
    // TODO: Convert XNC <$02
    // 7FB0: SUBA $B001
    cpu.m_a -= 0xB001;
    // 7FB3: XNC <$02
    // TODO: Convert XNC <$02
    // 7FB5: XNC <$80
    // TODO: Convert XNC <$80
    // 7FB7: SUBA #$05
    cpu.m_a -= 0x05;
    // 7FB9: XNC <$0A
    // TODO: Convert XNC <$0A
    // 7FBB: DEC <$02
    // TODO: Convert DEC <$02
    // 7FBD: SUBA $B002
    cpu.m_a -= 0xB002;
    // 7FC0: BGE $7FEE
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x7FEE;
    // 7FC2: XNC <$0B
    // TODO: Convert XNC <$0B
    // 7FC4: XDEC <$02
    // TODO: Convert XDEC <$02
    // 7FC6: NEG <$00
    // TODO: Convert NEG <$00
    // 7FC8: XNC <$0E
    // TODO: Convert XNC <$0E
    // 7FCA: JMP <$02
    // TODO: Invalid branch offset: <$02
    // 7FCC: XANDCC #$38
    // TODO: Convert XANDCC #$38
    // 7FCE: XNC <$E0
    // TODO: Convert XNC <$E0
    // 7FD0: SUBB $5,X
    // TODO: Fix comma operator: SUBB $5,X
    // 7FD2: NEG <$00
    // TODO: Convert NEG <$00
    // 7FD4: ORA $1,X
    // TODO: Fix comma operator: ORA $1,X
    // 7FD6: NEG <$00
    // TODO: Convert NEG <$00
    // 7FD8: NEG <$AA
    // TODO: Convert NEG <$AA
    // 7FDA: NEG <$01
    // TODO: Convert NEG <$01
    // 7FDC: NEG <$00
    // TODO: Convert NEG <$00
    // 7FDE: NEG <$00
    // TODO: Convert NEG <$00
    // 7FE0: ORA $1,X
    // TODO: Fix comma operator: ORA $1,X
    // 7FE2: NEG <$00
    // TODO: Convert NEG <$00
    // 7FE4: NEG <$AA
    // TODO: Convert NEG <$AA
    // 7FE6: NEG <$01
    // TODO: Convert NEG <$01
    // 7FE8: NEG <$00
    // TODO: Convert NEG <$00
    // 7FEA: NEG <$00
    // TODO: Convert NEG <$00
    // 7FEC: ORA $1,X
    // TODO: Fix comma operator: ORA $1,X
    // 7FEE: NEG <$00
    // TODO: Convert NEG <$00
    // 7FF0: NEG <$AA
    // TODO: Convert NEG <$AA
    // 7FF2: NEG <$01
    // TODO: Convert NEG <$01
    // 7FF4: NEG <$00
    // TODO: Convert NEG <$00
    // 7FF6: NEG <$00
    // TODO: Convert NEG <$00
    // 7FF8: ORA $1,X
    // TODO: Fix comma operator: ORA $1,X
    // 7FFA: NEG <$00
    // TODO: Convert NEG <$00
    // 7FFC: NEG <$AA
    // TODO: Convert NEG <$AA
    // 7FFE: NEG <$01
    // TODO: Convert NEG <$01
    // 8000: NEG <$00
    // TODO: Convert NEG <$00
    // 8002: LSR <$01
    // TODO: Convert LSR <$01
    // 8004: SUBA $B001
    cpu.m_a -= 0xB001;
    // 8007: BGE $8035
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8035;
    // 8009: NEG <$08
    // TODO: Convert NEG <$08
    // 800B: ASL <$02
    // TODO: Convert ASL <$02
    // 800D: NEG <$00
    // TODO: Convert NEG <$00
    // 800F: XNC <$0A
    // TODO: Convert XNC <$0A
    // 8011: DEC <$02
    // TODO: Convert DEC <$02
    // 8013: SUBA ,Y+
    // TODO: Complex indexed addressing: ,Y+
    // 8015: XNC <$0A
    // TODO: Convert XNC <$0A
    // 8017: DEC <$02
    // TODO: Convert DEC <$02
    // 8019: NEG <$00
    // TODO: Convert NEG <$00
    // 801B: NEG <$B0
    // TODO: Convert NEG <$B0
    // 801D: SUBA $012C
    cpu.m_a -= 0x012C;
    // 8020: BGE $8023
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8023;
    // 8022: ASL <$08
    // TODO: Convert ASL <$08
    // 8024: LSR <$01
    // TODO: Convert LSR <$01
    // 8026: ORA $0,X
    // TODO: Fix comma operator: ORA $0,X
    // 8028: NEG <$00
    // TODO: Convert NEG <$00
    // 802A: NEG <$01
    // TODO: Convert NEG <$01
    // 802C: NEG <$AA
    // TODO: Convert NEG <$AA
    // 802E: NEG <$00
    // TODO: Convert NEG <$00
    // 8030: NEG <$02
    // TODO: Convert NEG <$02
    // 8032: ORA $0,X
    // TODO: Fix comma operator: ORA $0,X
    // 8034: NEG <$0A
    // TODO: Convert NEG <$0A
    // 8036: DEC <$02
    // TODO: Convert DEC <$02
    // 8038: NEG <$00
    // TODO: Convert NEG <$00
    // 803A: NEG <$A0
    // TODO: Convert NEG <$A0
    // 803C: SUBA $2,X
    // TODO: Fix comma operator: SUBA $2,X
    // 803E: DEC <$0A
    // TODO: Convert DEC <$0A
    // 8040: NEG <$00
    // TODO: Convert NEG <$00
    // 8042: ORA $1,X
    // TODO: Fix comma operator: ORA $1,X
    // 8044: NEG <$00
    // TODO: Convert NEG <$00
    // 8046: NEG <$AA
    // TODO: Convert NEG <$AA
    // 8048: NEG <$01
    // TODO: Convert NEG <$01
    // 804A: NEG <$00
    // TODO: Convert NEG <$00
    // 804C: LSR <$02
    // TODO: Convert LSR <$02
    // 804E: NEG <$00
    // TODO: Convert NEG <$00
    // 8050: XNC <$32
    // TODO: Convert XNC <$32
    // 8052: JMP <$02
    // TODO: Invalid branch offset: <$02
    // 8054: XNC <$02
    // TODO: Convert XNC <$02
    // 8056: XNC <$08
    // TODO: Convert XNC <$08
    // 8058: ASL <$02
    // TODO: Convert ASL <$02
    // 805A: EORB #$C8
    cpu.m_b ^= 0xC8;
    // 805C: XNC <$20
    // TODO: Convert XNC <$20
    // 805E: BRA $8062
    goto label_8062;
    // 8060: BRA $8082
    goto label_8082;
    label_8062:
    // 8062: XNC <$00
    // TODO: Convert XNC <$00
    // 8064: NEG <$05
    // TODO: Convert NEG <$05
    // 8066: XNC <$00
    // TODO: Convert XNC <$00
    // 8068: NEG <$02
    // TODO: Convert NEG <$02
    // 806A: CMPX #$8C02
    cpu.compare_x(0x8C02);
    // 806D: SUBA #$80
    cpu.m_a -= 0x80;
    // 806F: XNC <$23
    // TODO: Convert XNC <$23
    // 8071: BLS $8075
    // TODO: Convert BLS $8075
    // 8073: BRA $8095
    goto label_8095;
    // 8075: XNC <$08
    // TODO: Convert XNC <$08
    // 8077: ASL <$02
    // TODO: Convert ASL <$02
    // 8079: XDEC <$0B
    // TODO: Convert XDEC <$0B
    // 807B: XNC <$00
    // TODO: Convert XNC <$00
    // 807D: NEG <$05
    // TODO: Convert NEG <$05
    // 807F: NEG <$00
    // TODO: Convert NEG <$00
    // 8081: NEG <$02
    // TODO: Convert NEG <$02
    // 8083: BPL $80AF
    if (!cpu.negative_flag()) cpu.m_pc = 0x80AF;
    // 8085: NEG <$20
    // TODO: Convert NEG <$20
    // 8087: BRA $808B
    goto label_808B;
    // 8089: SUBB #$C0
    cpu.m_b -= 0xC0;
    label_808B:
    // 808B: XNC <$30
    // TODO: Convert XNC <$30
    // 808D: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X
    // 808F: LDD #$CC02
    cpu.m_d = 0xCC02;
    // 8092: LEAU -$D,Y
    // TODO: Fix comma operator: LEAU -$D,Y
    // 8094: NEG <$0C
    // TODO: Convert NEG <$0C
    // 8096: INC <$04
    // TODO: Convert INC <$04
    // 8098: COM <$03
    // TODO: Convert COM <$03
    // 809A: COM <$01
    // TODO: Convert COM <$01
    // 809C: EORA F,Y
    // TODO: Complex indexed addressing: F,Y
    // 809E: NEG <$00
    // TODO: Convert NEG <$00
    // 80A0: NEG <$01
    // TODO: Convert NEG <$01
    // 80A2: COM <$AA
    // TODO: Convert COM <$AA
    // 80A4: XNC <$AA
    // TODO: Convert XNC <$AA
    // 80A6: COM <$01
    // TODO: Convert COM <$01
    // 80A8: NEG <$AA
    // TODO: Convert NEG <$AA
    // 80AA: NEG <$00
    // TODO: Convert NEG <$00
    // 80AC: NEG <$01
    // TODO: Convert NEG <$01
    // 80AE: NEG <$00
    // TODO: Convert NEG <$00
    // 80B0: NEG <$A2
    // TODO: Convert NEG <$A2
    // 80B2: ORA $1,X
    // TODO: Fix comma operator: ORA $1,X
    // 80B4: NEG <$00
    // TODO: Convert NEG <$00
    // 80B6: NEG <$00
    // TODO: Convert NEG <$00
    // 80B8: NEG <$01
    // TODO: Convert NEG <$01
    // 80BA: NEG <$AA
    // TODO: Convert NEG <$AA
    // 80BC: XNC <$AA
    // TODO: Convert XNC <$AA
    // 80BE: NEG <$01
    // TODO: Convert NEG <$01
    // 80C0: NEG <$AA
    // TODO: Convert NEG <$AA
    // 80C2: NEG <$00
    // TODO: Convert NEG <$00
    // 80C4: NEG <$05
    // TODO: Convert NEG <$05
    // 80C6: NEG <$00
    // TODO: Convert NEG <$00
    // 80C8: NEG <$01
    // TODO: Convert NEG <$01
    // 80CA: SUBB #$30
    cpu.m_b -= 0x30;
    // 80CC: XNC <$0A
    // TODO: Convert XNC <$0A
    // 80CE: DEC <$01
    // TODO: Convert DEC <$01
    // 80D0: LEAX ,U+
    // TODO: Complex indexed addressing: ,U+
    // 80D2: NEG <$00
    // TODO: Convert NEG <$00
    // 80D4: NEG <$01
    // TODO: Convert NEG <$01
    // 80D6: SUBB #$30
    cpu.m_b -= 0x30;
    // 80D8: XNC <$0A
    // TODO: Convert XNC <$0A
    // 80DA: DEC <$01
    // TODO: Convert DEC <$01
    // 80DC: LEAX ,U+
    // TODO: Complex indexed addressing: ,U+
    // 80DE: NEG <$00
    // TODO: Convert NEG <$00
    // 80E0: NEG <$01
    // TODO: Convert NEG <$01
    // 80E2: SUBB #$30
    cpu.m_b -= 0x30;
    // 80E4: XNC <$0A
    // TODO: Convert XNC <$0A
    // 80E6: DEC <$01
    // TODO: Convert DEC <$01
    // 80E8: NEG <$00
    // TODO: Convert NEG <$00
    // 80EA: NEG <$00
    // TODO: Convert NEG <$00
    // 80EC: NEG <$05
    // TODO: Convert NEG <$05
    // 80EE: NEG <$02
    // TODO: Convert NEG <$02
    // 80F0: XNC <$02
    // TODO: Convert XNC <$02
    // 80F2: LEAX ,X+
    // TODO: Complex indexed addressing: ,X+
    // 80F4: XNC <$0C
    // TODO: Convert XNC <$0C
    // 80F6: BRA $80FA
    goto label_80FA;
    // 80F8: SBCB #$0A
    // TODO: Convert SBCB #$0A
    label_80FA:
    // 80FA: NEG <$02
    // TODO: Convert NEG <$02
    // 80FC: XNC <$02
    // TODO: Convert XNC <$02
    // 80FE: DEC <$C2
    // TODO: Convert DEC <$C2
    // 8100: XNC <$20
    // TODO: Convert XNC <$20
    // 8102: INC <$02
    // TODO: Convert INC <$02
    // 8104: SUBA #$30
    cpu.m_a -= 0x30;
    // 8106: XNC <$02
    // TODO: Convert XNC <$02
    // 8108: XNC <$05
    // TODO: Convert XNC <$05
    // 810A: NEG <$02
    // TODO: Convert NEG <$02
    // 810C: XNC <$01
    // TODO: Convert XNC <$01
    // 810E: SUBB #$C0
    cpu.m_b -= 0xC0;
    // 8110: NEG <$20
    // TODO: Convert NEG <$20
    // 8112: BRA $8115
    goto label_8115;
    // 8114: JMP <$0E
    // TODO: Invalid branch offset: <$0E
    // 8116: NEG <$08
    // TODO: Convert NEG <$08
    // 8118: ASL <$02
    // TODO: Convert ASL <$02
    // 811A: NEG <$00
    // TODO: Convert NEG <$00
    // 811C: NEG <$02
    // TODO: Convert NEG <$02
    // 811E: XNC <$01
    // TODO: Convert XNC <$01
    // 8120: BGE $814E
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x814E;
    // 8122: NEG <$80
    // TODO: Convert NEG <$80
    // 8124: SUBA #$01
    cpu.m_a -= 0x01;
    // 8126: XNC <$02
    // TODO: Convert XNC <$02
    // 8128: XNC <$00
    // TODO: Convert XNC <$00
    // 812A: NEG <$01
    // TODO: Convert NEG <$01
    // 812C: CMPX #$8C01
    cpu.compare_x(0x8C01);
    // 812F: BRA $8151
    goto label_8151;
    // 8131: NEG <$03
    // TODO: Convert NEG <$03
    // 8133: COM <$05
    // TODO: Convert COM <$05
    // 8135: NEG <$03
    // TODO: Convert NEG <$03
    // 8137: COM <$02
    // TODO: Convert COM <$02
    // 8139: XNC <$02
    // TODO: Convert XNC <$02
    // 813B: NEG <$08
    // TODO: Convert NEG <$08
    // 813D: ASL <$02
    // TODO: Convert ASL <$02
    // 813F: SUBA $B002
    cpu.m_a -= 0xB002;
    // 8142: ASL <$08
    // TODO: Convert ASL <$08
    // 8144: NEG <$32
    // TODO: Convert NEG <$32
    // 8146: LEAS $2,X
    // TODO: Fix comma operator: LEAS $2,X
    // 8148: EORB #$C8
    cpu.m_b ^= 0xC8;
    // 814A: XNC <$80
    // TODO: Convert XNC <$80
    // 814C: SUBA #$01
    cpu.m_a -= 0x01;
    // 814E: BRA $8170
    goto label_8170;
    // 8150: XNC <$0B
    // TODO: Convert XNC <$0B
    // 8152: XDEC <$05
    // TODO: Convert XDEC <$05
    // 8154: NEG <$0E
    // TODO: Convert NEG <$0E
    // 8156: JMP <$02
    // TODO: Invalid branch offset: <$02
    // 8158: DEC <$00
    // TODO: Convert DEC <$00
    // 815A: NEG <$A0
    // TODO: Convert NEG <$A0
    // 815C: SUBA $2,X
    // TODO: Fix comma operator: SUBA $2,X
    // 815E: NEG <$0A
    // TODO: Convert NEG <$0A
    // 8160: NEG <$FA
    // TODO: Convert NEG <$FA
    // 8162: ORB $020A
    cpu.m_b |= 0x020A;
    // 8165: NEG <$01
    // TODO: Convert NEG <$01
    // 8167: SUBA ,Y+
    // TODO: Complex indexed addressing: ,Y+
    // 8169: XNC <$00
    // TODO: Convert XNC <$00
    // 816B: DEC <$01
    // TODO: Convert DEC <$01
    // 816D: ORB $FA02
    cpu.m_b |= 0xFA02;
    label_8170:
    // 8170: DEC <$00
    // TODO: Convert DEC <$00
    // 8172: NEG <$02
    // TODO: Convert NEG <$02
    // 8174: XNC <$05
    // TODO: Convert XNC <$05
    // 8176: NEG <$AA
    // TODO: Convert NEG <$AA
    // 8178: BPL $817B
    if (!cpu.negative_flag()) cpu.m_pc = 0x817B;
    // 817A: NEG <$00
    // TODO: Convert NEG <$00
    // 817C: NEG <$AA
    // TODO: Convert NEG <$AA
    // 817E: COM <$02
    // TODO: Convert COM <$02
    // 8180: COM <$AA
    // TODO: Convert COM <$AA
    // 8182: NEG <$AA
    // TODO: Convert NEG <$AA
    // 8184: NEG <$01
    // TODO: Convert NEG <$01
    // 8186: NEG <$00
    // TODO: Convert NEG <$00
    // 8188: NEG <$00
    // TODO: Convert NEG <$00
    // 818A: NEG <$01
    // TODO: Convert NEG <$01
    // 818C: ORA F,X
    // TODO: Complex indexed addressing: F,X
    // 818E: NEG <$00
    // TODO: Convert NEG <$00
    // 8190: NEG <$01
    // TODO: Convert NEG <$01
    // 8192: NEG <$00
    // TODO: Convert NEG <$00
    // 8194: NEG <$AA
    // TODO: Convert NEG <$AA
    // 8196: NEG <$02
    // TODO: Convert NEG <$02
    // 8198: NEG <$AA
    // TODO: Convert NEG <$AA
    // 819A: NEG <$AA
    // TODO: Convert NEG <$AA
    // 819C: NEG <$01
    // TODO: Convert NEG <$01
    // 819E: NEG <$00
    // TODO: Convert NEG <$00
    // 81A0: LSR <$02
    // TODO: Convert LSR <$02
    // 81A2: BPL $81CE
    if (!cpu.negative_flag()) cpu.m_pc = 0x81CE;
    // 81A4: NEG <$00
    // TODO: Convert NEG <$00
    // 81A6: NEG <$02
    // TODO: Convert NEG <$02
    // 81A8: EORA $01,Y
    // TODO: Fix comma operator: EORA $01,Y
    // 81AB: NEG <$00
    // TODO: Convert NEG <$00
    // 81AD: XNC <$2A
    // TODO: Convert XNC <$2A
    // 81AF: BPL $81B2
    if (!cpu.negative_flag()) cpu.m_pc = 0x81B2;
    // 81B1: NEG <$00
    // TODO: Convert NEG <$00
    // 81B3: XNC <$A8
    // TODO: Convert XNC <$A8
    // 81B5: EORA $1,X
    // TODO: Fix comma operator: EORA $1,X
    // 81B7: NEG <$00
    // TODO: Convert NEG <$00
    // 81B9: XNC <$8A
    // TODO: Convert XNC <$8A
    // 81BB: ORA $1,X
    // TODO: Fix comma operator: ORA $1,X
    // 81BD: NEG <$00
    // TODO: Convert NEG <$00
    // 81BF: NEG <$AA
    // TODO: Convert NEG <$AA
    // 81C1: SBCA $5,X
    // TODO: Convert SBCA $5,X
    // 81C3: NEG <$00
    // TODO: Convert NEG <$00
    // 81C5: NEG <$02
    // TODO: Convert NEG <$02
    // 81C7: LEAX $C,X
    // TODO: Fix comma operator: LEAX $C,X
    // 81C9: NEG <$00
    // TODO: Convert NEG <$00
    // 81CB: NEG <$02
    // TODO: Convert NEG <$02
    // 81CD: NEG <$00
    // TODO: Convert NEG <$00
    // 81CF: XNC <$0C
    // TODO: Convert XNC <$0C
    // 81D1: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X
    // 81D3: NEG <$00
    // TODO: Convert NEG <$00
    // 81D5: XNC <$30
    // TODO: Convert XNC <$30
    // 81D7: INC <$01
    // TODO: Convert INC <$01
    // 81D9: NEG <$00
    // TODO: Convert NEG <$00
    // 81DB: XNC <$00
    // TODO: Convert XNC <$00
    // 81DD: NEG <$02
    // TODO: Convert NEG <$02
    // 81DF: INC <$30
    // TODO: Convert INC <$30
    // 81E1: LSR <$02
    // TODO: Convert LSR <$02
    // 81E3: NEG <$00
    // TODO: Convert NEG <$00
    // 81E5: NEG <$00
    // TODO: Convert NEG <$00
    // 81E7: NEG <$01
    // TODO: Convert NEG <$01
    // 81E9: NEG <$00
    // TODO: Convert NEG <$00
    // 81EB: NEG <$00
    // TODO: Convert NEG <$00
    // 81ED: NEG <$02
    // TODO: Convert NEG <$02
    // 81EF: NEG <$00
    // TODO: Convert NEG <$00
    // 81F1: XNC <$3C
    // TODO: Convert XNC <$3C
    // 81F3: CWAI #$02
    // TODO: Convert CWAI #$02
    // 81F5: NEG <$00
    // TODO: Convert NEG <$00
    // 81F7: XNC <$C3
    // TODO: Convert XNC <$C3
    // 81F9: ADDD #$0100
    cpu.m_d += 0x0100;
    // 81FC: NEG <$02
    // TODO: Convert NEG <$02
    // 81FE: NEG <$00
    // TODO: Convert NEG <$00
    // 8200: LSR <$01
    // TODO: Convert LSR <$01
    // 8202: NEG <$00
    // TODO: Convert NEG <$00
    // 8204: NEG <$C0
    // TODO: Convert NEG <$C0
    // 8206: SUBB #$02
    cpu.m_b -= 0x02;
    // 8208: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y
    // 820A: NEG <$0C
    // TODO: Convert NEG <$0C
    // 820C: INC <$01
    // TODO: Convert INC <$01
    // 820E: COM <$03
    // TODO: Convert COM <$03
    // 8210: XNC <$00
    // TODO: Convert XNC <$00
    // 8212: NEG <$01
    // TODO: Convert NEG <$01
    // 8214: SUBB #$C0
    cpu.m_b -= 0xC0;
    // 8216: XNC <$30
    // TODO: Convert XNC <$30
    // 8218: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X
    // 821A: INC <$0C
    // TODO: Convert INC <$0C
    // 821C: NEG <$03
    // TODO: Convert NEG <$03
    // 821E: COM <$02
    // TODO: Convert COM <$02
    // 8220: NEG <$00
    // TODO: Convert NEG <$00
    // 8222: NEG <$00
    // TODO: Convert NEG <$00
    // 8224: NEG <$05
    // TODO: Convert NEG <$05
    // 8226: XNC <$00
    // TODO: Convert XNC <$00
    // 8228: NEG <$02
    // TODO: Convert NEG <$02
    // 822A: XNC <$02
    // TODO: Convert XNC <$02
    // 822C: XNC <$38
    // TODO: Convert XNC <$38
    // 822E: XANDCC #$01
    // TODO: Convert XANDCC #$01
    // 8230: SUBD ,--Y
    // TODO: Complex indexed addressing: ,--Y
    // 8232: NEG <$02
    // TODO: Convert NEG <$02
    // 8234: XNC <$02
    // TODO: Convert XNC <$02
    // 8236: CMPX #$8C02
    cpu.compare_x(0x8C02);
    // 8239: XNC <$02
    // TODO: Convert XNC <$02
    // 823B: XNC <$38
    // TODO: Convert XNC <$38
    // 823D: XANDCC #$02
    // TODO: Convert XANDCC #$02
    // 823F: NEG <$00
    // TODO: Convert NEG <$00
    // 8241: LSR <$01
    // TODO: Convert LSR <$01
    // 8243: XNC <$02
    // TODO: Convert XNC <$02
    // 8245: NEG <$00
    // TODO: Convert NEG <$00
    // 8247: NEG <$02
    // TODO: Convert NEG <$02
    // 8249: LEAS $C,X
    // TODO: Fix comma operator: LEAS $C,X
    // 824B: NEG <$C0
    // TODO: Convert NEG <$C0
    // 824D: LEAS $2,X
    // TODO: Fix comma operator: LEAS $2,X
    // 824F: NEG <$00
    // TODO: Convert NEG <$00
    // 8251: NEG <$83
    // TODO: Convert NEG <$83
    // 8253: ADDD $1,X
    // TODO: Fix comma operator: ADDD $1,X
    // 8255: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X
    // 8257: XNC <$03
    // TODO: Convert XNC <$03
    // 8259: NEG <$01
    // TODO: Convert NEG <$01
    // 825B: NEG <$B2
    // TODO: Convert NEG <$B2
    // 825D: NEG <$AC
    // TODO: Convert NEG <$AC
    // 825F: INC <$02
    // TODO: Convert INC <$02
    // 8261: NEG <$00
    // TODO: Convert NEG <$00
    // 8263: NEG <$00
    // TODO: Convert NEG <$00
    // 8265: NEG <$05
    // TODO: Convert NEG <$05
    // 8267: XNC <$00
    // TODO: Convert XNC <$00
    // 8269: NEG <$02
    // TODO: Convert NEG <$02
    // 826B: NEG <$00
    // TODO: Convert NEG <$00
    // 826D: NEG <$C3
    // TODO: Convert NEG <$C3
    // 826F: ADDD #$0200
    cpu.m_d += 0x0200;
    // 8272: NEG <$01
    // TODO: Convert NEG <$01
    // 8274: ADDD #$C302
    cpu.m_d += 0xC302;
    // 8277: NEG <$00
    // TODO: Convert NEG <$00
    // 8279: NEG <$C3
    // TODO: Convert NEG <$C3
    // 827B: ADDD #$0200
    cpu.m_d += 0x0200;
    // 827E: NEG <$01
    // TODO: Convert NEG <$01
    // 8280: ADDD #$C302
    cpu.m_d += 0xC302;
    // 8283: NEG <$00
    // TODO: Convert NEG <$00
    // 8285: LSR <$01
    // TODO: Convert LSR <$01
    // 8287: NEG <$00
    // TODO: Convert NEG <$00
    // 8289: XNC <$00
    // TODO: Convert XNC <$00
    // 828B: NEG <$01
    // TODO: Convert NEG <$01
    // 828D: ADDD #$0002
    cpu.m_d += 0x0002;
    // 8290: NEG <$00
    // TODO: Convert NEG <$00
    // 8292: XNC <$3C
    // TODO: Convert XNC <$3C
    // 8294: NEG <$01
    // TODO: Convert NEG <$01
    // 8296: NEG <$C3
    // TODO: Convert NEG <$C3
    // 8298: XNC <$00
    // TODO: Convert XNC <$00
    // 829A: NEG <$01
    // TODO: Convert NEG <$01
    // 829C: NEG <$3C
    // TODO: Convert NEG <$3C
    // 829E: XNC <$00
    // TODO: Convert XNC <$00
    // 82A0: NEG <$02
    // TODO: Convert NEG <$02
    // 82A2: NEG <$00
    // TODO: Convert NEG <$00
    // 82A4: LSR <$02
    // TODO: Convert LSR <$02
    // 82A6: ORA F,X
    // TODO: Complex indexed addressing: F,X
    // 82A8: XNC <$00
    // TODO: Convert XNC <$00
    // 82AA: NEG <$02
    // TODO: Convert NEG <$02
    // 82AC: ORA $AA02
    cpu.m_a |= 0xAA02;
    // 82AF: NEG <$00
    // TODO: Convert NEG <$00
    // 82B1: XNC <$AA
    // TODO: Convert XNC <$AA
    // 82B3: ADDA $2,X
    // TODO: Fix comma operator: ADDA $2,X
    // 82B5: NEG <$00
    // TODO: Convert NEG <$00
    // 82B7: XNC <$AE
    // TODO: Convert XNC <$AE
    // 82B9: ORA $2,X
    // TODO: Fix comma operator: ORA $2,X
    // 82BB: NEG <$00
    // TODO: Convert NEG <$00
    // 82BD: LSR <$01
    // TODO: Convert LSR <$01
    // 82BF: XHCF 
    // TODO: Convert XHCF 
    // 82C0: XHCF 
    // TODO: Convert XHCF 
    // 82C1: NEG <$BF
    // TODO: Convert NEG <$BF
    // 82C3: STX $0114
    cpu.write_memory16(0x0114, cpu.m_x);
    // 82C6: XHCF 
    // TODO: Convert XHCF 
    // 82C7: LSR <$01
    // TODO: Convert LSR <$01
    // 82C9: NEG <$00
    // TODO: Convert NEG <$00
    // 82CB: NEG <$95
    // TODO: Convert NEG <$95
    // 82CD: BITA <$01
    // TODO: Convert BITA <$01
    // 82CF: NEG <$00
    // TODO: Convert NEG <$00
    // 82D1: LSR <$01
    // TODO: Convert LSR <$01
    // 82D3: NEG <$00
    // TODO: Convert NEG <$00
    // 82D5: NEG <$56
    // TODO: Convert NEG <$56
    // 82D7: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // 82D8: NEG <$00
    // TODO: Convert NEG <$00
    // 82DA: NEG <$05
    // TODO: Convert NEG <$05
    // 82DC: NEG <$00
    // TODO: Convert NEG <$00
    // 82DE: NEG <$01
    // TODO: Convert NEG <$01
    // 82E0: LSRB 
    cpu.m_b >>= 1;
    // 82E1: LSRB 
    cpu.m_b >>= 1;
    // 82E2: NEG <$00
    // TODO: Convert NEG <$00
    // 82E4: NEG <$05
    // TODO: Convert NEG <$05
    // 82E6: NEG <$14
    // TODO: Convert NEG <$14
    // 82E8: XHCF 
    // TODO: Convert XHCF 
    // 82E9: NEG <$FE
    // TODO: Convert NEG <$FE
    // 82EB: LDU $0114
    cpu.m_u = cpu.read_memory16(0x0114);
    // 82EE: XHCF 
    // TODO: Convert XHCF 
    // 82EF: LSR <$01
    // TODO: Convert LSR <$01
    // 82F1: XHCF 
    // TODO: Convert XHCF 
    // 82F2: XHCF 
    // TODO: Convert XHCF 
    // 82F3: NEG <$FF
    // TODO: Convert NEG <$FF
    // 82F5: STU $0114
    cpu.write_memory16(0x0114, cpu.m_u);
    // 82F8: XHCF 
    // TODO: Convert XHCF 
    // 82F9: LSR <$01
    // TODO: Convert LSR <$01
    // 82FB: LSRB 
    cpu.m_b >>= 1;
    // 82FC: LSRB 
    cpu.m_b >>= 1;
    // 82FD: NEG <$15
    // TODO: Convert NEG <$15
    // 82FF: XHCF 
    // TODO: Convert XHCF 
    // 8300: NEG <$05
    // TODO: Convert NEG <$05
    // 8302: LSR <$01
    // TODO: Convert LSR <$01
    // 8304: NEG <$00
    // TODO: Convert NEG <$00
    // 8306: NEG <$05
    // TODO: Convert NEG <$05
    // 8308: LSR <$01
    // TODO: Convert LSR <$01
    // 830A: NEG <$00
    // TODO: Convert NEG <$00
    // 830C: NEG <$05
    // TODO: Convert NEG <$05
    // 830E: LSR <$01
    // TODO: Convert LSR <$01
    // 8310: NEG <$00
    // TODO: Convert NEG <$00
    // 8312: NEG <$05
    // TODO: Convert NEG <$05
    // 8314: LSR <$01
    // TODO: Convert LSR <$01
    // 8316: NEG <$00
    // TODO: Convert NEG <$00
    // 8318: NEG <$01
    // TODO: Convert NEG <$01
    // 831A: NEG <$01
    // TODO: Convert NEG <$01
    // 831C: NEG <$00
    // TODO: Convert NEG <$00
    // 831E: NEG <$01
    // TODO: Convert NEG <$01
    // 8320: NEG <$04
    // TODO: Convert NEG <$04
    // 8322: NEG <$00
    // TODO: Convert NEG <$00
    // 8324: COM <$01
    // TODO: Convert COM <$01
    // 8326: NEG <$00
    // TODO: Convert NEG <$00
    // 8328: XNC <$2A
    // TODO: Convert XNC <$2A
    // 832A: BPL $832D
    if (!cpu.negative_flag()) cpu.m_pc = 0x832D;
    // 832C: NEG <$00
    // TODO: Convert NEG <$00
    // 832E: XNC <$40
    // TODO: Convert XNC <$40
    // 8330: NEGA 
    cpu.m_a = -cpu.m_a;
    // 8331: XNC <$10
    // TODO: Convert XNC <$10
    // 8333: XNC <$04
    // TODO: Convert XNC <$04
    // 8336: LSR <$02
    // TODO: Convert LSR <$02
    // 8338: NEG <$01
    // TODO: Convert NEG <$01
    // 833A: NEG <$FF
    // TODO: Convert NEG <$FF
    // 833C: STU $04FF
    cpu.write_memory16(0x04FF, cpu.m_u);
    // 833F: STU $0386
    cpu.write_memory16(0x0386, cpu.m_u);
    // 8342: NEG <$97
    // TODO: Convert NEG <$97
    // 8344: LSRA 
    cpu.m_a >>= 1;
    // 8345: STA <$45
    cpu.write_memory(0x45, cpu.m_a);
    // 8347: LDX #$4989
    cpu.m_x = 0x4989;
    // 834A: LDA #$00
    cpu.m_a = 0x00;
    // 834C: STA ,X+
    // TODO: Handle indexed addressing: STA ,X+
    // 834E: CMPX #$49A9
    cpu.compare_x(0x49A9);
    // 8351: BCS $834C
    if (cpu.carry_flag()) cpu.m_pc = 0x834C;
    // 8353: LDB $4B12
    cpu.m_b = cpu.read_memory(0x4B12);
    // 8356: ASLB 
    cpu.m_b <<= 1;
    // 8357: LDX #$7CC0
    cpu.m_x = 0x7CC0;
    // 835A: ABX 
    // TODO: Convert ABX 
    // 835B: CMPX #$7CD6
    cpu.compare_x(0x7CD6);
    // 835E: BCS $8365
    if (cpu.carry_flag()) cpu.m_pc = 0x8365;
    // 8360: LDU #$4B3F
    cpu.m_u = 0x4B3F;
    // 8363: BRA $8367
    goto label_8367;
    // 8365: LDU ,X
    // TODO: Complex indexed addressing: ,X
    label_8367:
    // 8367: STU $49A9
    cpu.write_memory16(0x49A9, cpu.m_u);
    // 836A: STU $49AB
    cpu.write_memory16(0x49AB, cpu.m_u);
    // 836D: LDU ,U
    // TODO: Complex indexed addressing: ,U
    // 836F: LDD #$0000
    cpu.m_d = 0x0000;
    // 8372: STA $49C0
    cpu.write_memory(0x49C0, cpu.m_a);
    // 8375: STD $49B1
    cpu.write_memory16(0x49B1, cpu.m_d);
    // 8378: STD $49B5
    cpu.write_memory16(0x49B5, cpu.m_d);
    // 837B: STA <$92
    cpu.write_memory(0x92, cpu.m_a);
    // 837D: STA <$95
    cpu.write_memory(0x95, cpu.m_a);
    // 837F: STU $49AF
    cpu.write_memory16(0x49AF, cpu.m_u);
    // 8382: STU $49B3
    cpu.write_memory16(0x49B3, cpu.m_u);
    // 8385: JSR $8434
    cpu.call_function(0x8434);
    // 8388: JSR $8408
    cpu.call_function(0x8408);
    // 838B: JSR $83CE
    cpu.call_function(0x83CE);
    // 838E: JSR $83CE
    cpu.call_function(0x83CE);
    // 8391: JSR $83CE
    cpu.call_function(0x83CE);
    // 8394: JSR $83CE
    cpu.call_function(0x83CE);
    // 8397: JSR $83CE
    cpu.call_function(0x83CE);
    // 839A: JSR $83CE
    cpu.call_function(0x83CE);
    // 839D: JSR $83CE
    cpu.call_function(0x83CE);
    // 83A0: JSR $83CE
    cpu.call_function(0x83CE);
    // 83A3: RTS 
    return;
}

} // namespace StarWars