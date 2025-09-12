#include "cpu_6809.h"

namespace StarWars {

void routine_7eaf_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_7eaf.md
    // Address: 0x7EAF

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

    // 7EC9: BVC $0044
    // TODO: Convert BVC $0044

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

    // 7EE0: BPL $0035
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7F17;

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

    // 7EEC: BPL $0041
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7F2F;

    // 7EEE: NEG <$00
    // TODO: Convert NEG <$00

    // 7EF0: LSR <$02
    // TODO: Convert LSR <$02

    // 7EF2: EORA #$88
    cpu.state_.a ^= 0x88;

    // 7EF4: NEG <$22
    // TODO: Convert NEG <$22

    // 7EF6: BHI $004A
    // TODO: Convert BHI $004A

    // 7EF8: NEG <$00
    // TODO: Convert NEG <$00

    // 7EFA: XNC <$CC
    // TODO: Convert XNC <$CC

    // 7EFC: LDD #$0282
    cpu.state_.d = 0x0282;

    // 7EFF: SBCA #$01
    // TODO: Convert SBCA #$01

    // 7F01: BVC $007C
    // TODO: Convert BVC $007C

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

    // 7F13: BPL $0090
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7FA5;

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

    // 7F23: BVC $0076
    // TODO: Convert BVC $0076

    // 7F25: NEG <$03
    // TODO: Convert NEG <$03

    // 7F27: SUBB #$01
    cpu.state_.b -= 0x01;

    // 7F29: BVC $00A4
    // TODO: Convert BVC $00A4

    // 7F2B: NEG <$00
    // TODO: Convert NEG <$00

    // 7F2D: NEG <$01
    // TODO: Convert NEG <$01

    // 7F2F: SUBA #$80
    cpu.state_.a -= 0x80;

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

    // 7F3B: BVC $008E
    // TODO: Convert BVC $008E

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
    cpu.state_.a -= 0x01;

    // 7F4B: BRA $00BE
    cpu.state_.pc = 0x800B;

    // 7F4D: NEG <$08
    // TODO: Convert NEG <$08

    // 7F4F: ASL <$01
    // TODO: Convert ASL <$01

    // 7F51: LEAX $C,X
    // TODO: Fix comma operator: LEAX $C,X

    // 7F53: NEG <$2A
    // TODO: Convert NEG <$2A

    // 7F55: BPL $00A9
    if (!cpu.negative_flag()) cpu.state_.pc = 0x8000;

    // 7F57: SUBB #$C0
    cpu.state_.b -= 0xC0;

    // 7F59: NEG <$20
    // TODO: Convert NEG <$20

    // 7F5B: BRA $00AF
    cpu.state_.pc = 0x800C;

    // 7F5D: NEG <$00
    // TODO: Convert NEG <$00

    // 7F5F: NEG <$20
    // TODO: Convert NEG <$20

    // 7F61: BRA $00B5
    cpu.state_.pc = 0x8018;

    // 7F63: SUBB #$C0
    cpu.state_.b -= 0xC0;

    // 7F65: NEG <$20
    // TODO: Convert NEG <$20

    // 7F67: BRA $00BB
    cpu.state_.pc = 0x8024;

    // 7F69: SUBB #$C0
    cpu.state_.b -= 0xC0;

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
    cpu.state_.a -= 0xB001;

    // 7FA7: XNC <$02
    // TODO: Convert XNC <$02

    // 7FA9: XNC <$8C
    // TODO: Convert XNC <$8C

    // 7FAB: CMPX #$0102
    cpu.compare_x(0x0102);

    // 7FAE: XNC <$02
    // TODO: Convert XNC <$02

    // 7FB0: SUBA $B001
    cpu.state_.a -= 0xB001;

    // 7FB3: XNC <$02
    // TODO: Convert XNC <$02

    // 7FB5: XNC <$80
    // TODO: Convert XNC <$80

    // 7FB7: SUBA #$05
    cpu.state_.a -= 0x05;

    // 7FB9: XNC <$0A
    // TODO: Convert XNC <$0A

    // 7FBB: DEC <$02
    // TODO: Convert DEC <$02

    // 7FBD: SUBA $B002
    cpu.state_.a -= 0xB002;

    // 7FC0: BGE $013F
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8101;

    // 7FC2: XNC <$0B
    // TODO: Convert XNC <$0B

    // 7FC4: XDEC <$02
    // TODO: Convert XDEC <$02

    // 7FC6: NEG <$00
    // TODO: Convert NEG <$00

    // 7FC8: XNC <$0E
    // TODO: Convert XNC <$0E

    // 7FCA: JMP <$02
    cpu.state_.pc = 0x02;

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
    cpu.state_.a -= 0xB001;

    // 8007: BGE $0186
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x818F;

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
    cpu.state_.a -= 0x012C;

    // 8020: BGE $0174
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8196;

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
    cpu.state_.pc = 0x02;

    // 8054: XNC <$02
    // TODO: Convert XNC <$02

    // 8056: XNC <$08
    // TODO: Convert XNC <$08

    // 8058: ASL <$02
    // TODO: Convert ASL <$02

    // 805A: EORB #$C8
    cpu.state_.b ^= 0xC8;

    // 805C: XNC <$20
    // TODO: Convert XNC <$20

    // 805E: BRA $01B3
    cpu.state_.pc = 0x8213;

    // 8060: BRA $01D3
    cpu.state_.pc = 0x8235;

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
    cpu.state_.a -= 0x80;

    // 806F: XNC <$23
    // TODO: Convert XNC <$23

    // 8071: BLS $01C6
    // TODO: Convert BLS $01C6

    // 8073: BRA $01E6
    cpu.state_.pc = 0x825B;

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

    // 8083: BPL $0200
    if (!cpu.negative_flag()) cpu.state_.pc = 0x8285;

    // 8085: NEG <$20
    // TODO: Convert NEG <$20

    // 8087: BRA $01DC
    cpu.state_.pc = 0x8265;

    // 8089: SUBB #$C0
    cpu.state_.b -= 0xC0;

    // 808B: XNC <$30
    // TODO: Convert XNC <$30

    // 808D: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // 808F: LDD #$CC02
    cpu.state_.d = 0xCC02;

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

}

} // namespace StarWars