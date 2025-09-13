#include "cpu_6809.h"

namespace StarWars {

void routine_9991_9d32_impl(CPU6809& cpu) {
    // Converted from rom_disasm_9991_9d32.md
    // Address: 0x9991_9D32

    label_9991:
    // 9991: NEG <$00
    // TODO: Convert NEG <$00
    // 9993: DAA 
    // TODO: Convert DAA 
    // 9994: NEG >$00F0
    // TODO: Convert NEG >$00F0
    // 9997: NEG <$02
    // TODO: Convert NEG <$02
    // 9999: XNC <$1A
    // TODO: Convert XNC <$1A
    // 999B: NEG >$0010
    // TODO: Convert NEG >$0010
    // 999E: NEG <$02
    // TODO: Convert NEG <$02
    // 99A0: XNC <$1B
    // TODO: Convert XNC <$1B
    // 99A2: SUBA #$00
    cpu.m_a -= 0x00;
    // 99A4: SUBA <$00
    cpu.m_a -= 0x00;
    // 99A6: NEG <$03
    // TODO: Convert NEG <$03
    // 99A8: ANDCC #$80
    // TODO: Convert ANDCC #$80
    // 99AA: NEG <$D8
    // TODO: Convert NEG <$D8
    // 99AC: NEG <$01
    // TODO: Convert NEG <$01
    // 99AE: NEG <$1D
    // TODO: Convert NEG <$1D
    // 99B0: SUBA #$00
    cpu.m_a -= 0x00;
    // 99B2: BVC $99B4
    // TODO: Convert BVC $99B4
    // 99B4: NEG <$00
    // TODO: Convert NEG <$00
    // 99B6: EXG A,D
    // TODO: Convert EXG A,D
    // 99B8: NEG <$70
    // TODO: Convert NEG <$70
    // 99BA: NEG <$01
    // TODO: Convert NEG <$01
    // 99BC: XNC <$1F
    // TODO: Convert XNC <$1F
    // 99BE: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X
    // 99C0: EORA #$00
    cpu.m_a ^= 0x00;
    // 99C2: NEG <$02
    // TODO: Convert NEG <$02
    // 99C4: NEG <$30
    // TODO: Convert NEG <$30
    // 99C6: NEG <$98
    // TODO: Convert NEG <$98
    // 99C8: NEG <$03
    // TODO: Convert NEG <$03
    // 99CA: XNC <$01
    // TODO: Convert XNC <$01
    // 99CC: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X
    // 99CE: EORA $0,X
    // TODO: Fix comma operator: EORA $0,X
    // 99D0: COM <$02
    // TODO: Convert COM <$02
    // 99D2: XNC <$30
    // TODO: Convert XNC <$30
    // 99D4: NEG <$B8
    // TODO: Convert NEG <$B8
    // 99D6: NEG <$01
    // TODO: Convert NEG <$01
    // 99D8: XNC <$03
    // TODO: Convert XNC <$03
    // 99DA: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X
    // 99DC: EORB $0,X
    // TODO: Fix comma operator: EORB $0,X
    // 99DE: NEG <$00
    // TODO: Convert NEG <$00
    // 99E0: LSR <$30
    // TODO: Convert LSR <$30
    // 99E2: NEG <$F8
    // TODO: Convert NEG <$F8
    // 99E4: NEG <$03
    // TODO: Convert NEG <$03
    // 99E6: NEG <$05
    // TODO: Convert NEG <$05
    // 99E8: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X
    // 99EA: ASL <$00
    // TODO: Convert ASL <$00
    // 99EC: COM <$00
    // TODO: Convert COM <$00
    // 99EE: ROR <$30
    // TODO: Convert ROR <$30
    // 99F0: NEG <$18
    // TODO: Convert NEG <$18
    // 99F2: NEG <$01
    // TODO: Convert NEG <$01
    // 99F4: NEG <$07
    // TODO: Convert NEG <$07
    // 99F6: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X
    // 99F8: ASLA 
    cpu.m_a <<= 1;
    // 99F9: NEG <$01
    // TODO: Convert NEG <$01
    // 99FB: COM <$08
    // TODO: Convert COM <$08
    // 99FD: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X
    // 99FF: ASLB 
    cpu.m_b <<= 1;
    // 9A00: NEG <$03
    // TODO: Convert NEG <$03
    // 9A02: COM <$09
    // TODO: Convert COM <$09
    // 9A04: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X
    // 9A06: ASL $0,X
    // TODO: Convert ASL $0,X
    // 9A08: COM <$03
    // TODO: Convert COM <$03
    // 9A0A: DEC <$30
    // TODO: Convert DEC <$30
    // 9A0C: NEG <$78
    // TODO: Convert NEG <$78
    // 9A0E: NEG <$01
    // TODO: Convert NEG <$01
    // 9A10: COM <$0B
    // TODO: Convert COM <$0B
    // 9A12: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9A13: NEG <$90
    // TODO: Convert NEG <$90
    // 9A15: NEG <$01
    // TODO: Convert NEG <$01
    // 9A17: XNC <$0C
    // TODO: Convert XNC <$0C
    // 9A19: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9A1A: NEG <$A0
    // TODO: Convert NEG <$A0
    // 9A1C: NEG <$03
    // TODO: Convert NEG <$03
    // 9A1E: XNC <$0D
    // TODO: Convert XNC <$0D
    // 9A20: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9A21: NEG <$B0
    // TODO: Convert NEG <$B0
    // 9A23: NEG <$01
    // TODO: Convert NEG <$01
    // 9A25: XNC <$0E
    // TODO: Convert XNC <$0E
    // 9A27: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9A28: NEG <$F0
    // TODO: Convert NEG <$F0
    // 9A2A: NEG <$01
    // TODO: Convert NEG <$01
    // 9A2C: NEG <$0F
    // TODO: Convert NEG <$0F
    // 9A2E: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9A2F: NEG <$10
    // TODO: Convert NEG <$10
    // 9A31: NEG <$01
    // TODO: Convert NEG <$01
    // 9A33: NEG <$10
    // TODO: Convert NEG <$10
    // 9A35: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9A36: NEG <$50
    // TODO: Convert NEG <$50
    // 9A38: NEG <$01
    // TODO: Convert NEG <$01
    // 9A3A: COM <$11
    // TODO: Convert COM <$11
    // 9A3C: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9A3D: NEG <$60
    // TODO: Convert NEG <$60
    // 9A3F: NEG <$03
    // TODO: Convert NEG <$03
    // 9A41: COM <$12
    // TODO: Convert COM <$12
    // 9A43: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9A44: NEG <$70
    // TODO: Convert NEG <$70
    // 9A46: NEG <$01
    // TODO: Convert NEG <$01
    // 9A48: COM <$13
    // TODO: Convert COM <$13
    // 9A4A: LSRB 
    cpu.m_b >>= 1;
    // 9A4B: NEG <$CC
    // TODO: Convert NEG <$CC
    // 9A4D: NEG <$03
    // TODO: Convert NEG <$03
    // 9A4F: NEG <$14
    // TODO: Convert NEG <$14
    // 9A51: LSRB 
    cpu.m_b >>= 1;
    // 9A52: NEG <$34
    // TODO: Convert NEG <$34
    // 9A54: NEG <$03
    // TODO: Convert NEG <$03
    // 9A56: NEG <$15
    // TODO: Convert NEG <$15
    // 9A58: NEG $0,X
    // TODO: Convert NEG $0,X
    // 9A5A: SUBA $0,X
    // TODO: Fix comma operator: SUBA $0,X
    // 9A5C: NEG <$01
    // TODO: Convert NEG <$01
    // 9A5E: LBRA $FA61
    // TODO: Convert LBRA $FA61
    // 9A61: SUBB $0,X
    // TODO: Fix comma operator: SUBB $0,X
    // 9A63: COM <$00
    // TODO: Convert COM <$00
    // 9A65: LBSR $FA68
    // TODO: Convert LBSR $FA68
    // 9A68: BRA $9A6A
    goto label_9A6A;
    label_9A6A:
    // 9A6A: COM <$00
    // TODO: Convert COM <$00
    // 9A6C: X18 
    // TODO: Convert X18 
    // 9A6D: NEG $0,X
    // TODO: Convert NEG $0,X
    // 9A6F: NEG $0,X
    // TODO: Convert NEG $0,X
    // 9A71: NEG <$01
    // TODO: Convert NEG <$01
    // 9A73: DAA 
    // TODO: Convert DAA 
    // 9A74: LSR >$00E0
    // TODO: Convert LSR >$00E0
    // 9A77: NEG <$01
    // TODO: Convert NEG <$01
    // 9A79: NEG <$1A
    // TODO: Convert NEG <$1A
    // 9A7B: LSR >$0020
    // TODO: Convert LSR >$0020
    // 9A7E: NEG <$01
    // TODO: Convert NEG <$01
    // 9A80: NEG <$1B
    // TODO: Convert NEG <$1B
    // 9A82: SUBA #$00
    cpu.m_a -= 0x00;
    // 9A84: EORA <$00
    cpu.m_a ^= 0x00;
    // 9A86: NEG <$02
    // TODO: Convert NEG <$02
    // 9A88: ANDCC #$80
    // TODO: Convert ANDCC #$80
    // 9A8A: NEG <$B8
    // TODO: Convert NEG <$B8
    // 9A8C: NEG <$01
    // TODO: Convert NEG <$01
    // 9A8E: XNC <$1D
    // TODO: Convert XNC <$1D
    // 9A90: SUBA #$00
    cpu.m_a -= 0x00;
    // 9A92: ASLA 
    cpu.m_a <<= 1;
    // 9A93: NEG <$01
    // TODO: Convert NEG <$01
    // 9A95: COM <$1E
    // TODO: Convert COM <$1E
    // 9A97: SUBA #$00
    cpu.m_a -= 0x00;
    // 9A99: ASL $0,X
    // TODO: Convert ASL $0,X
    // 9A9B: NEG <$03
    // TODO: Convert NEG <$03
    // 9A9D: TFR D,S
    cpu.m_sp = cpu.m_d;
    // 9A9F: NEG <$30
    // TODO: Convert NEG <$30
    // 9AA1: NEG <$03
    // TODO: Convert NEG <$03
    // 9AA3: NEG <$00
    // TODO: Convert NEG <$00
    // 9AA5: INC <$00
    // TODO: Convert INC <$00
    // 9AA7: BRA $9AA9
    goto label_9AA9;
    label_9AA9:
    // 9AA9: COM <$00
    // TODO: Convert COM <$00
    // 9AAB: NEG <$10
    // TODO: Convert NEG <$10
    // 9AAD: NEG <$98
    // TODO: Convert NEG <$98
    // 9AAF: NEG <$03
    // TODO: Convert NEG <$03
    // 9AB1: NEG <$02
    // TODO: Convert NEG <$02
    // 9AB3: XHCF 
    // TODO: Convert XHCF 
    // 9AB4: NEG <$48
    // TODO: Convert NEG <$48
    // 9AB6: NEG <$03
    // TODO: Convert NEG <$03
    // 9AB8: NEG <$03
    // TODO: Convert NEG <$03
    // 9ABA: X18 
    // TODO: Convert X18 
    // 9ABB: NEG <$B0
    // TODO: Convert NEG <$B0
    // 9ABD: NEG <$03
    // TODO: Convert NEG <$03
    // 9ABF: COM <$04
    // TODO: Convert COM <$04
    // 9AC1: X18 
    // TODO: Convert X18 
    // 9AC2: NEG <$D0
    // TODO: Convert NEG <$D0
    // 9AC4: NEG <$03
    // TODO: Convert NEG <$03
    // 9AC6: NEG <$05
    // TODO: Convert NEG <$05
    // 9AC8: BRA $9ACA
    goto label_9ACA;
    label_9ACA:
    // 9ACA: SUBB #$00
    cpu.m_b -= 0x00;
    // 9ACC: COM <$01
    // TODO: Convert COM <$01
    // 9ACE: ROR <$24
    // TODO: Convert ROR <$24
    // 9AD0: NEG <$38
    // TODO: Convert NEG <$38
    // 9AD2: NEG <$03
    // TODO: Convert NEG <$03
    // 9AD4: XNC <$07
    // TODO: Convert XNC <$07
    // 9AD6: BCC $9AD8
    if (!cpu.carry_flag()) cpu.m_pc = 0x9AD8;
    // 9AD8: NEG >$0003
    // TODO: Convert NEG >$0003
    // 9ADB: XNC <$08
    // TODO: Convert XNC <$08
    // 9ADD: BVC $9ADF
    // TODO: Convert BVC $9ADF
    // 9ADF: NEG <$00
    // TODO: Convert NEG <$00
    // 9AE1: COM <$00
    // TODO: Convert COM <$00
    // 9AE3: ROL <$30
    // TODO: Convert ROL <$30
    // 9AE5: NEG <$88
    // TODO: Convert NEG <$88
    // 9AE7: NEG <$03
    // TODO: Convert NEG <$03
    // 9AE9: NEG <$0A
    // TODO: Convert NEG <$0A
    // 9AEB: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9AEC: NEG <$80
    // TODO: Convert NEG <$80
    // 9AEE: NEG <$03
    // TODO: Convert NEG <$03
    // 9AF0: NEG <$0B
    // TODO: Convert NEG <$0B
    // 9AF2: LSRA 
    cpu.m_a >>= 1;
    // 9AF3: NEG <$60
    // TODO: Convert NEG <$60
    // 9AF5: NEG <$03
    // TODO: Convert NEG <$03
    // 9AF7: XNC <$0C
    // TODO: Convert XNC <$0C
    // 9AF9: ASLA 
    cpu.m_a <<= 1;
    // 9AFA: NEG <$90
    // TODO: Convert NEG <$90
    // 9AFC: NEG <$03
    // TODO: Convert NEG <$03
    // 9AFE: NEG <$0D
    // TODO: Convert NEG <$0D
    // 9B00: ASLA 
    cpu.m_a <<= 1;
    // 9B01: NEG <$A8
    // TODO: Convert NEG <$A8
    // 9B03: NEG <$03
    // TODO: Convert NEG <$03
    // 9B05: COM <$0E
    // TODO: Convert COM <$0E
    // 9B07: INCA 
    cpu.m_a++;
    // 9B08: NEG <$50
    // TODO: Convert NEG <$50
    // 9B0A: NEG <$03
    // TODO: Convert NEG <$03
    // 9B0C: XNC <$0F
    // TODO: Convert XNC <$0F
    // 9B0E: NEGB 
    cpu.m_b = -cpu.m_b;
    // 9B0F: NEG <$E0
    // TODO: Convert NEG <$E0
    // 9B11: NEG <$03
    // TODO: Convert NEG <$03
    // 9B13: COM <$10
    // TODO: Convert COM <$10
    // 9B15: NEGB 
    cpu.m_b = -cpu.m_b;
    // 9B16: NEG <$00
    // TODO: Convert NEG <$00
    // 9B18: NEG <$03
    // TODO: Convert NEG <$03
    // 9B1A: XNC <$11
    // TODO: Convert XNC <$11
    // 9B1C: NEGB 
    cpu.m_b = -cpu.m_b;
    // 9B1D: NEG <$28
    // TODO: Convert NEG <$28
    // 9B1F: NEG <$03
    // TODO: Convert NEG <$03
    // 9B21: NEG <$12
    // TODO: Convert NEG <$12
    // 9B23: ASL $0,X
    // TODO: Convert ASL $0,X
    // 9B25: EORA >$0003
    cpu.m_a ^= 0x0003;
    // 9B28: COM <$13
    // TODO: Convert COM <$13
    // 9B2A: ASL $0,X
    // TODO: Convert ASL $0,X
    // 9B2C: EORB <$00
    cpu.m_b ^= 0x00;
    // 9B2E: COM <$00
    // TODO: Convert COM <$00
    // 9B30: XHCF 
    // TODO: Convert XHCF 
    // 9B31: NEG >$00A0
    // TODO: Convert NEG >$00A0
    // 9B34: NEG <$03
    // TODO: Convert NEG <$03
    // 9B36: COM <$15
    // TODO: Convert COM <$15
    // 9B38: NEG >$00E8
    // TODO: Convert NEG >$00E8
    // 9B3B: NEG <$03
    // TODO: Convert NEG <$03
    // 9B3D: NEG <$16
    // TODO: Convert NEG <$16
    // 9B3F: NEG >$0018
    // TODO: Convert NEG >$0018
    // 9B42: NEG <$03
    // TODO: Convert NEG <$03
    // 9B44: COM <$17
    // TODO: Convert COM <$17
    // 9B46: NEG >$0058
    // TODO: Convert NEG >$0058
    // 9B49: NEG <$03
    // TODO: Convert NEG <$03
    // 9B4B: COM <$18
    // TODO: Convert COM <$18
    // 9B4D: ASL >$00F8
    // TODO: Convert ASL >$00F8
    // 9B50: NEG <$03
    // TODO: Convert NEG <$03
    // 9B52: NEG <$19
    // TODO: Convert NEG <$19
    // 9B54: ASL >$0040
    // TODO: Convert ASL >$0040
    // 9B57: NEG <$03
    // TODO: Convert NEG <$03
    // 9B59: XNC <$1A
    // TODO: Convert XNC <$1A
    // 9B5B: ASL >$0068
    // TODO: Convert ASL >$0068
    // 9B5E: NEG <$03
    // TODO: Convert NEG <$03
    // 9B60: XNC <$1B
    // TODO: Convert XNC <$1B
    // 9B62: NEG <$00
    // TODO: Convert NEG <$00
    // 9B64: SUBA <$00
    cpu.m_a -= 0x00;
    // 9B66: NEG <$00
    // TODO: Convert NEG <$00
    // 9B68: NEG <$00
    // TODO: Convert NEG <$00
    // 9B6A: NEG <$B0
    // TODO: Convert NEG <$B0
    // 9B6C: NEG <$01
    // TODO: Convert NEG <$01
    // 9B6E: NEG <$01
    // TODO: Convert NEG <$01
    // 9B70: NEG <$00
    // TODO: Convert NEG <$00
    // 9B72: SUBB <$00
    cpu.m_b -= 0x00;
    // 9B74: NEG <$00
    // TODO: Convert NEG <$00
    // 9B76: XNC <$00
    // TODO: Convert XNC <$00
    // 9B78: NEG <$F0
    // TODO: Convert NEG <$F0
    // 9B7A: NEG <$01
    // TODO: Convert NEG <$01
    // 9B7C: NEG <$03
    // TODO: Convert NEG <$03
    // 9B7E: NEG <$00
    // TODO: Convert NEG <$00
    // 9B80: NEG <$01
    // TODO: Convert NEG <$01
    // 9B83: NEG <$04
    // TODO: Convert NEG <$04
    // 9B85: NEG <$00
    // TODO: Convert NEG <$00
    // 9B87: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X
    // 9B89: NEG <$00
    // TODO: Convert NEG <$00
    // 9B8B: LSR <$00
    // TODO: Convert LSR <$00
    // 9B8D: NEG <$50
    // TODO: Convert NEG <$50
    // 9B8F: NEG <$01
    // TODO: Convert NEG <$01
    // 9B91: NEG <$06
    // TODO: Convert NEG <$06
    // 9B93: NEG <$00
    // TODO: Convert NEG <$00
    // 9B95: NEG >$0001
    // TODO: Convert NEG >$0001
    // 9B98: NEG <$07
    // TODO: Convert NEG <$07
    // 9B9A: NEG <$C8
    // TODO: Convert NEG <$C8
    // 9B9D: NEG <$01
    // TODO: Convert NEG <$01
    // 9B9F: XNC <$08
    // TODO: Convert XNC <$08
    // 9BA1: BVC $9BA3
    // TODO: Convert BVC $9BA3
    // 9BA3: SUBB #$00
    cpu.m_b -= 0x00;
    // 9BA5: NEG <$02
    // TODO: Convert NEG <$02
    // 9BA7: ROL <$30
    // TODO: Convert ROL <$30
    // 9BA9: NEG <$88
    // TODO: Convert NEG <$88
    // 9BAB: NEG <$01
    // TODO: Convert NEG <$01
    // 9BAD: XNC <$0A
    // TODO: Convert XNC <$0A
    // 9BAF: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X
    // 9BB1: EORA $0,X
    // TODO: Fix comma operator: EORA $0,X
    // 9BB3: NEG <$02
    // TODO: Convert NEG <$02
    // 9BB5: XDEC <$30
    // TODO: Convert XDEC <$30
    // 9BB7: NEG <$48
    // TODO: Convert NEG <$48
    // 9BB9: NEG <$01
    // TODO: Convert NEG <$01
    // 9BBB: XNC <$0C
    // TODO: Convert XNC <$0C
    // 9BBD: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X
    // 9BBF: ASL $0,X
    // TODO: Convert ASL $0,X
    // 9BC1: NEG <$02
    // TODO: Convert NEG <$02
    // 9BC3: TST <$40
    // TODO: Convert TST <$40
    // 9BC5: NEG <$A0
    // TODO: Convert NEG <$A0
    // 9BC7: NEG <$01
    // TODO: Convert NEG <$01
    // 9BC9: COM <$0E
    // TODO: Convert COM <$0E
    // 9BCB: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9BCC: NEG <$40
    // TODO: Convert NEG <$40
    // 9BCE: NEG <$01
    // TODO: Convert NEG <$01
    // 9BD0: XNC <$0F
    // TODO: Convert XNC <$0F
    // 9BD2: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9BD3: NEG <$60
    // TODO: Convert NEG <$60
    // 9BD5: NEG <$01
    // TODO: Convert NEG <$01
    // 9BD7: COM <$10
    // TODO: Convert COM <$10
    // 9BD9: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9BDA: NEG <$80
    // TODO: Convert NEG <$80
    // 9BDC: NEG <$01
    // TODO: Convert NEG <$01
    // 9BDE: COM <$11
    // TODO: Convert COM <$11
    // 9BE0: NEG $0,X
    // TODO: Convert NEG $0,X
    // 9BE2: NEG <$00
    // TODO: Convert NEG <$00
    // 9BE4: NEG <$03
    // TODO: Convert NEG <$03
    // 9BE6: NOP 
    // NOP;
    // 9BE7: ASL $0,X
    // TODO: Convert ASL $0,X
    // 9BE9: ANDA #$00
    cpu.m_a &= 0x00;
    // 9BEB: NEG <$03
    // TODO: Convert NEG <$03
    // 9BED: SYNC 
    // TODO: Convert SYNC 
    // 9BEE: NEG >$0098
    // TODO: Convert NEG >$0098
    // 9BF1: NEG <$01
    // TODO: Convert NEG <$01
    // 9BF3: NEG <$14
    // TODO: Convert NEG <$14
    // 9BF5: NEG >$00B8
    // TODO: Convert NEG >$00B8
    // 9BF8: NEG <$01
    // TODO: Convert NEG <$01
    // 9BFA: NEG <$15
    // TODO: Convert NEG <$15
    // 9BFC: NEG >$00D8
    // TODO: Convert NEG >$00D8
    // 9BFF: NEG <$01
    // TODO: Convert NEG <$01
    // 9C01: NEG <$16
    // TODO: Convert NEG <$16
    // 9C03: NEG >$00F8
    // TODO: Convert NEG >$00F8
    // 9C06: NEG <$01
    // TODO: Convert NEG <$01
    // 9C08: NEG <$17
    // TODO: Convert NEG <$17
    // 9C0A: NEG >$0018
    // TODO: Convert NEG >$0018
    // 9C0D: NEG <$01
    // TODO: Convert NEG <$01
    // 9C0F: NEG <$18
    // TODO: Convert NEG <$18
    // 9C11: NEG >$0038
    // TODO: Convert NEG >$0038
    // 9C14: NEG <$01
    // TODO: Convert NEG <$01
    // 9C16: NEG <$19
    // TODO: Convert NEG <$19
    // 9C18: NEG >$0058
    // TODO: Convert NEG >$0058
    // 9C1B: NEG <$01
    // TODO: Convert NEG <$01
    // 9C1D: NEG <$1A
    // TODO: Convert NEG <$1A
    // 9C1F: NEG >$0078
    // TODO: Convert NEG >$0078
    // 9C22: NEG <$01
    // TODO: Convert NEG <$01
    // 9C24: NEG <$1B
    // TODO: Convert NEG <$1B
    // 9C26: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X
    // 9C28: EORB $0,X
    // TODO: Fix comma operator: EORB $0,X
    // 9C2A: NEG <$02
    // TODO: Convert NEG <$02
    // 9C2C: ANDCC #$30
    // TODO: Convert ANDCC #$30
    // 9C2E: NEG <$08
    // TODO: Convert NEG <$08
    // 9C30: NEG <$01
    // TODO: Convert NEG <$01
    // 9C32: XNC <$1D
    // TODO: Convert XNC <$1D
    // 9C34: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9C35: NEG <$F8
    // TODO: Convert NEG <$F8
    // 9C37: NEG <$01
    // TODO: Convert NEG <$01
    // 9C39: COM <$1E
    // TODO: Convert COM <$1E
    // 9C3B: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9C3C: NEG <$18
    // TODO: Convert NEG <$18
    // 9C3E: NEG <$01
    // TODO: Convert NEG <$01
    // 9C40: COM <$1F
    // TODO: Convert COM <$1F
    // 9C42: ASL <$00
    // TODO: Convert ASL <$00
    // 9C44: EORA $0,X
    // TODO: Fix comma operator: EORA $0,X
    // 9C46: COM <$02
    // TODO: Convert COM <$02
    // 9C48: NEG <$08
    // TODO: Convert NEG <$08
    // 9C4A: NEG <$58
    // TODO: Convert NEG <$58
    // 9C4C: NEG <$03
    // TODO: Convert NEG <$03
    // 9C4E: XNC <$01
    // TODO: Convert XNC <$01
    // 9C50: INC <$00
    // TODO: Convert INC <$00
    // 9C52: EORB $0,X
    // TODO: Fix comma operator: EORB $0,X
    // 9C54: NEG <$00
    // TODO: Convert NEG <$00
    // 9C56: XNC <$0C
    // TODO: Convert XNC <$0C
    // 9C58: NEG <$18
    // TODO: Convert NEG <$18
    // 9C5A: NEG <$01
    // TODO: Convert NEG <$01
    // 9C5C: NEG <$03
    // TODO: Convert NEG <$03
    // 9C5E: XHCF 
    // TODO: Convert XHCF 
    // 9C5F: NEG <$C4
    // TODO: Convert NEG <$C4
    // 9C61: NEG <$01
    // TODO: Convert NEG <$01
    // 9C63: NEG <$04
    // TODO: Convert NEG <$04
    // 9C65: XHCF 
    // TODO: Convert XHCF 
    // 9C66: NEG <$3C
    // TODO: Convert NEG <$3C
    // 9C68: NEG <$01
    // TODO: Convert NEG <$01
    // 9C6A: NEG <$05
    // TODO: Convert NEG <$05
    // 9C6C: BVC $9C6E
    // TODO: Convert BVC $9C6E
    // 9C6E: EORA $0,X
    // TODO: Fix comma operator: EORA $0,X
    // 9C70: NEG <$02
    // TODO: Convert NEG <$02
    // 9C72: ROR <$28
    // TODO: Convert ROR <$28
    // 9C74: NEG <$58
    // TODO: Convert NEG <$58
    // 9C76: NEG <$01
    // TODO: Convert NEG <$01
    // 9C78: XNC <$07
    // TODO: Convert XNC <$07
    // 9C7A: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X
    // 9C7C: NEG <$00
    // TODO: Convert NEG <$00
    // 9C7E: COM <$00
    // TODO: Convert COM <$00
    // 9C80: ASL <$38
    // TODO: Convert ASL <$38
    // 9C82: NEG <$E0
    // TODO: Convert NEG <$E0
    // 9C84: NEG <$01
    // TODO: Convert NEG <$01
    // 9C86: NEG <$09
    // TODO: Convert NEG <$09
    // 9C88: XANDCC #$00
    // TODO: Convert XANDCC #$00
    // 9C8A: BRA $9C8C
    goto label_9C8C;
    label_9C8C:
    // 9C8C: NEG <$00
    // TODO: Convert NEG <$00
    // 9C8E: DEC <$48
    // TODO: Convert DEC <$48
    // 9C90: NEG <$C0
    // TODO: Convert NEG <$C0
    // 9C92: NEG <$01
    // TODO: Convert NEG <$01
    // 9C94: COM <$0B
    // TODO: Convert COM <$0B
    // 9C96: ASLA 
    cpu.m_a <<= 1;
    // 9C97: NEG <$40
    // TODO: Convert NEG <$40
    // 9C99: NEG <$01
    // TODO: Convert NEG <$01
    // 9C9B: COM <$0C
    // TODO: Convert COM <$0C
    // 9C9D: NEGB 
    cpu.m_b = -cpu.m_b;
    // 9C9E: NEG <$90
    // TODO: Convert NEG <$90
    // 9CA0: NEG <$01
    // TODO: Convert NEG <$01
    // 9CA2: COM <$0D
    // TODO: Convert COM <$0D
    // 9CA4: NEGB 
    cpu.m_b = -cpu.m_b;
    // 9CA5: NEG <$D8
    // TODO: Convert NEG <$D8
    // 9CA7: NEG <$03
    // TODO: Convert NEG <$03
    // 9CA9: NEG <$0E
    // TODO: Convert NEG <$0E
    // 9CAB: NEGB 
    cpu.m_b = -cpu.m_b;
    // 9CAC: NEG <$28
    // TODO: Convert NEG <$28
    // 9CAE: NEG <$03
    // TODO: Convert NEG <$03
    // 9CB0: NEG <$0F
    // TODO: Convert NEG <$0F
    // 9CB2: NEGB 
    cpu.m_b = -cpu.m_b;
    // 9CB3: NEG <$70
    // TODO: Convert NEG <$70
    // 9CB5: NEG <$01
    // TODO: Convert NEG <$01
    // 9CB7: XNC <$10
    // TODO: Convert XNC <$10
    // 9CB9: ASLB 
    cpu.m_b <<= 1;
    // 9CBA: NEG <$F0
    // TODO: Convert NEG <$F0
    // 9CBC: NEG <$03
    // TODO: Convert NEG <$03
    // 9CBE: XNC <$11
    // TODO: Convert XNC <$11
    // 9CC0: ASLB 
    cpu.m_b <<= 1;
    // 9CC1: NEG <$10
    // TODO: Convert NEG <$10
    // 9CC3: NEG <$03
    // TODO: Convert NEG <$03
    // 9CC5: XNC <$12
    // TODO: Convert XNC <$12
    // 9CC7: ASL $0,X
    // TODO: Convert ASL $0,X
    // 9CC9: EORA >$0001
    cpu.m_a ^= 0x0001;
    // 9CCC: NEG <$13
    // TODO: Convert NEG <$13
    // 9CCE: ASL $0,X
    // TODO: Convert ASL $0,X
    // 9CD0: ASLA 
    cpu.m_a <<= 1;
    // 9CD1: NEG <$01
    // TODO: Convert NEG <$01
    // 9CD3: NEG <$14
    // TODO: Convert NEG <$14
    // 9CD5: NEG >$0088
    // TODO: Convert NEG >$0088
    // 9CD8: NEG <$01
    // TODO: Convert NEG <$01
    // 9CDA: COM <$15
    // TODO: Convert COM <$15
    // 9CDC: NEG >$00A0
    // TODO: Convert NEG >$00A0
    // 9CDF: NEG <$01
    // TODO: Convert NEG <$01
    // 9CE1: NEG <$16
    // TODO: Convert NEG <$16
    // 9CE3: NEG >$00D0
    // TODO: Convert NEG >$00D0
    // 9CE6: NEG <$01
    // TODO: Convert NEG <$01
    // 9CE8: COM <$17
    // TODO: Convert COM <$17
    // 9CEA: NEG >$0000
    // TODO: Convert NEG >$0000
    // 9CED: NEG <$01
    // TODO: Convert NEG <$01
    // 9CEF: NEG <$18
    // TODO: Convert NEG <$18
    // 9CF1: NEG >$0030
    // TODO: Convert NEG >$0030
    // 9CF4: NEG <$01
    // TODO: Convert NEG <$01
    // 9CF6: COM <$19
    // TODO: Convert COM <$19
    // 9CF8: NEG >$0060
    // TODO: Convert NEG >$0060
    // 9CFB: NEG <$01
    // TODO: Convert NEG <$01
    // 9CFD: NEG <$1A
    // TODO: Convert NEG <$1A
    // 9CFF: NEG >$0078
    // TODO: Convert NEG >$0078
    // 9D02: NEG <$01
    // TODO: Convert NEG <$01
    // 9D04: COM <$1B
    // TODO: Convert COM <$1B
    // 9D06: SUBA #$00
    cpu.m_a -= 0x00;
    // 9D08: SUBA >$0001
    cpu.m_a -= 0x0001;
    // 9D0B: NEG <$1C
    // TODO: Convert NEG <$1C
    // 9D0D: SUBA #$00
    cpu.m_a -= 0x00;
    // 9D0F: EORB $0,X
    // TODO: Fix comma operator: EORB $0,X
    // 9D11: NEG <$01
    // TODO: Convert NEG <$01
    // 9D13: SEX 
    // TODO: Convert SEX 
    // 9D14: SUBA #$00
    cpu.m_a -= 0x00;
    // 9D16: X18 
    // TODO: Convert X18 
    // 9D17: NEG <$01
    // TODO: Convert NEG <$01
    // 9D19: NEG <$1E
    // TODO: Convert NEG <$1E
    // 9D1B: SUBA #$00
    cpu.m_a -= 0x00;
    // 9D1D: NEGB 
    cpu.m_b = -cpu.m_b;
    // 9D1E: NEG <$01
    // TODO: Convert NEG <$01
    // 9D20: NEG <$1F
    // TODO: Convert NEG <$1F
    // 9D22: NEG $0,X
    // TODO: Convert NEG $0,X
    // 9D24: EORA <$00
    cpu.m_a ^= 0x00;
    // 9D26: NEG <$02
    // TODO: Convert NEG <$02
    // 9D28: NEG <$10
    // TODO: Convert NEG <$10
    // 9D2A: NEG <$68
    // TODO: Convert NEG <$68
    // 9D2C: NEG <$01
    // TODO: Convert NEG <$01
    // 9D2E: XNC <$01
    // TODO: Convert XNC <$01
    // 9D30: BRA $9D32
    goto label_9D32;
    label_9D32:
    // 9D32: JMP $9d32
    goto label_9D32;
}

} // namespace StarWars