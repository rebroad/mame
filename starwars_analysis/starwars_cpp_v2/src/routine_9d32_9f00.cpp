#include "cpu_6809.h"

namespace StarWars {

void routine_9d32_9f00_impl(CPU6809& cpu) {
    // Converted from rom_disasm_9d32_9f00.md
    // Address: 0x9D32_9F00

    label_9D32:
    // 9D32: SUBB <$00
    cpu.m_b -= 0x00;
    // 9D34: COM <$01
    // TODO: Convert COM <$01
    // 9D36: XNC <$30
    // TODO: Convert XNC <$30
    // 9D38: NEG <$90
    // TODO: Convert NEG <$90
    // 9D3A: NEG <$03
    // TODO: Convert NEG <$03
    // 9D3C: XNC <$03
    // TODO: Convert XNC <$03
    // 9D3E: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X
    // 9D40: SUBB $0,X
    // TODO: Fix comma operator: SUBB $0,X
    // 9D42: NEG <$00
    // TODO: Convert NEG <$00
    // 9D44: LSR <$30
    // TODO: Convert LSR <$30
    // 9D46: NEG <$20
    // TODO: Convert NEG <$20
    // 9D48: NEG <$01
    // TODO: Convert NEG <$01
    // 9D4A: NEG <$05
    // TODO: Convert NEG <$05
    // 9D4C: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X
    // 9D4E: NEG >$0003
    // TODO: Convert NEG >$0003
    // 9D51: XNC <$06
    // TODO: Convert XNC <$06
    // 9D53: XANDCC #$00
    // TODO: Convert XANDCC #$00
    // 9D55: EORA >$0001
    cpu.m_a ^= 0x0001;
    // 9D58: NEG <$07
    // TODO: Convert NEG <$07
    // 9D5A: XANDCC #$00
    // TODO: Convert XANDCC #$00
    // 9D5C: ASLA 
    cpu.m_a <<= 1;
    // 9D5D: NEG <$01
    // TODO: Convert NEG <$01
    // 9D5F: NEG <$08
    // TODO: Convert NEG <$08
    // 9D61: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9D62: NEG <$90
    // TODO: Convert NEG <$90
    // 9D64: NEG <$01
    // TODO: Convert NEG <$01
    // 9D66: COM <$09
    // TODO: Convert COM <$09
    // 9D68: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9D69: NEG <$E8
    // TODO: Convert NEG <$E8
    // 9D6B: NEG <$03
    // TODO: Convert NEG <$03
    // 9D6D: NEG <$0A
    // TODO: Convert NEG <$0A
    // 9D6F: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9D70: NEG <$18
    // TODO: Convert NEG <$18
    // 9D72: NEG <$03
    // TODO: Convert NEG <$03
    // 9D74: NEG <$0B
    // TODO: Convert NEG <$0B
    // 9D76: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9D77: NEG <$48
    // TODO: Convert NEG <$48
    // 9D79: NEG <$01
    // TODO: Convert NEG <$01
    // 9D7B: NEG <$0C
    // TODO: Convert NEG <$0C
    // 9D7D: NEGB 
    cpu.m_b = -cpu.m_b;
    // 9D7E: NEG <$E0
    // TODO: Convert NEG <$E0
    // 9D80: NEG <$03
    // TODO: Convert NEG <$03
    // 9D82: NEG <$0D
    // TODO: Convert NEG <$0D
    // 9D84: NEGB 
    cpu.m_b = -cpu.m_b;
    // 9D85: NEG <$F0
    // TODO: Convert NEG <$F0
    // 9D87: NEG <$01
    // TODO: Convert NEG <$01
    // 9D89: NEG <$0E
    // TODO: Convert NEG <$0E
    // 9D8B: NEGB 
    cpu.m_b = -cpu.m_b;
    // 9D8C: NEG <$10
    // TODO: Convert NEG <$10
    // 9D8E: NEG <$01
    // TODO: Convert NEG <$01
    // 9D90: NEG <$0F
    // TODO: Convert NEG <$0F
    // 9D92: NEGB 
    cpu.m_b = -cpu.m_b;
    // 9D93: NEG <$20
    // TODO: Convert NEG <$20
    // 9D95: NEG <$03
    // TODO: Convert NEG <$03
    // 9D97: NEG <$10
    // TODO: Convert NEG <$10
    // 9D99: NEG $0,X
    // TODO: Convert NEG $0,X
    // 9D9B: EORA #$00
    cpu.m_a ^= 0x00;
    // 9D9D: NEG <$03
    // TODO: Convert NEG <$03
    // 9D9F: NEG $0,X
    // TODO: Convert NEG $0,X
    // 9DA2: SUBA $0,X
    // TODO: Fix comma operator: SUBA $0,X
    // 9DA4: NEG <$02
    // TODO: Convert NEG <$02
    // 9DA6: NOP 
    // NOP;
    // 9DA7: NEG $0,X
    // TODO: Convert NEG $0,X
    // 9DA9: SUBB #$00
    cpu.m_b -= 0x00;
    // 9DAB: NEG <$01
    // TODO: Convert NEG <$01
    // 9DAD: SYNC 
    // TODO: Convert SYNC 
    // 9DAE: NEG $0,X
    // TODO: Convert NEG $0,X
    // 9DB0: SUBB <$00
    cpu.m_b -= 0x00;
    // 9DB2: NEG <$01
    // TODO: Convert NEG <$01
    // 9DB4: XHCF 
    // TODO: Convert XHCF 
    // 9DB5: NEG $0,X
    // TODO: Convert NEG $0,X
    // 9DB7: EORB >$0001
    cpu.m_b ^= 0x0001;
    // 9DBA: NEG <$15
    // TODO: Convert NEG <$15
    // 9DBC: NEG $0,X
    // TODO: Convert NEG $0,X
    // 9DBE: ASL <$00
    // TODO: Convert ASL <$00
    // 9DC0: NEG <$00
    // TODO: Convert NEG <$00
    // 9DC2: LBRA $FDC5
    // TODO: Convert LBRA $FDC5
    // 9DC5: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X
    // 9DC7: NEG <$01
    // TODO: Convert NEG <$01
    // 9DC9: LBSR $FDCC
    // TODO: Convert LBSR $FDCC
    // 9DCC: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9DCD: NEG <$01
    // TODO: Convert NEG <$01
    // 9DCF: NEG <$18
    // TODO: Convert NEG <$18
    // 9DD1: NEG $0,X
    // TODO: Convert NEG $0,X
    // 9DD3: NEG $0,X
    // TODO: Convert NEG $0,X
    // 9DD5: NEG <$02
    // TODO: Convert NEG <$02
    // 9DD7: DAA 
    // TODO: Convert DAA 
    // 9DD8: NEG $0,X
    // TODO: Convert NEG $0,X
    // 9DDA: SUBA #$00
    cpu.m_a -= 0x00;
    // 9DDC: NEG <$02
    // TODO: Convert NEG <$02
    // 9DDE: ORCC #$70
    cpu.m_cc |= 0x70;
    // 9DE0: NEG <$00
    // TODO: Convert NEG <$00
    // 9DE2: NEG <$01
    // TODO: Convert NEG <$01
    // 9DE4: NEG <$1B
    // TODO: Convert NEG <$1B
    // 9DE6: SUBA #$00
    cpu.m_a -= 0x00;
    // 9DE8: EORA $0,X
    // TODO: Fix comma operator: EORA $0,X
    // 9DEA: NEG <$03
    // TODO: Convert NEG <$03
    // 9DEC: ANDCC #$80
    // TODO: Convert ANDCC #$80
    // 9DEE: NEG <$E0
    // TODO: Convert NEG <$E0
    // 9DF0: NEG <$01
    // TODO: Convert NEG <$01
    // 9DF2: COM <$1D
    // TODO: Convert COM <$1D
    // 9DF4: SUBA #$00
    cpu.m_a -= 0x00;
    // 9DF6: BRA $9DF8
    goto label_9DF8;
    label_9DF8:
    // 9DF8: NEG <$03
    // TODO: Convert NEG <$03
    // 9DFA: EXG A,D
    // TODO: Convert EXG A,D
    // 9DFC: NEG <$58
    // TODO: Convert NEG <$58
    // 9DFE: NEG <$01
    // TODO: Convert NEG <$01
    // 9E00: COM <$1F
    // TODO: Convert COM <$1F
    // 9E02: NEG <$00
    // TODO: Convert NEG <$00
    // 9E04: EORA >$0001
    cpu.m_a ^= 0x0001;
    // 9E07: XNC <$00
    // TODO: Convert XNC <$00
    // 9E09: NEG <$00
    // TODO: Convert NEG <$00
    // 9E0B: ASLA 
    cpu.m_a <<= 1;
    // 9E0C: NEG <$01
    // TODO: Convert NEG <$01
    // 9E0E: XNC <$01
    // TODO: Convert XNC <$01
    // 9E10: NEG <$A0
    // TODO: Convert NEG <$A0
    // 9E13: NEG <$01
    // TODO: Convert NEG <$01
    // 9E15: COM <$02
    // TODO: Convert COM <$02
    // 9E17: NEG <$E0
    // TODO: Convert NEG <$E0
    // 9E1A: NEG <$01
    // TODO: Convert NEG <$01
    // 9E1C: NEG <$03
    // TODO: Convert NEG <$03
    // 9E1E: NEG <$F8
    // TODO: Convert NEG <$F8
    // 9E21: NEG <$01
    // TODO: Convert NEG <$01
    // 9E23: NEG <$04
    // TODO: Convert NEG <$04
    // 9E25: NEG <$08
    // TODO: Convert NEG <$08
    // 9E28: NEG <$01
    // TODO: Convert NEG <$01
    // 9E2A: NEG <$05
    // TODO: Convert NEG <$05
    // 9E2C: NEG <$20
    // TODO: Convert NEG <$20
    // 9E2F: NEG <$01
    // TODO: Convert NEG <$01
    // 9E31: NEG <$06
    // TODO: Convert NEG <$06
    // 9E33: BRA $9E35
    goto label_9E35;
    label_9E35:
    // 9E35: EORB #$00
    cpu.m_b ^= 0x00;
    // 9E37: NEG <$01
    // TODO: Convert NEG <$01
    // 9E39: ASR <$20
    // TODO: Convert ASR <$20
    // 9E3B: NEG <$38
    // TODO: Convert NEG <$38
    // 9E3D: NEG <$01
    // TODO: Convert NEG <$01
    // 9E3F: NEG <$08
    // TODO: Convert NEG <$08
    // 9E41: BGE $9E43
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x9E43;
    // 9E43: ANDB $0,X
    // TODO: Fix comma operator: ANDB $0,X
    // 9E45: NEG <$00
    // TODO: Convert NEG <$00
    // 9E47: ROL <$2C
    // TODO: Convert ROL <$2C
    // 9E49: NEG <$1C
    // TODO: Convert NEG <$1C
    // 9E4B: NEG <$01
    // TODO: Convert NEG <$01
    // 9E4D: NEG <$0A
    // TODO: Convert NEG <$0A
    // 9E4F: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X
    // 9E51: SUBA <$00
    cpu.m_a -= 0x00;
    // 9E53: NEG <$03
    // TODO: Convert NEG <$03
    // 9E55: XDEC <$40
    // TODO: Convert XDEC <$40
    // 9E57: NEG <$00
    // TODO: Convert NEG <$00
    // 9E59: NEG <$03
    // TODO: Convert NEG <$03
    // 9E5B: NEG <$0C
    // TODO: Convert NEG <$0C
    // 9E5D: NEGB 
    cpu.m_b = -cpu.m_b;
    // 9E5E: NEG <$00
    // TODO: Convert NEG <$00
    // 9E60: NEG <$01
    // TODO: Convert NEG <$01
    // 9E62: NEG <$0D
    // TODO: Convert NEG <$0D
    // 9E64: NEGB 
    cpu.m_b = -cpu.m_b;
    // 9E65: NEG <$80
    // TODO: Convert NEG <$80
    // 9E67: NEG <$03
    // TODO: Convert NEG <$03
    // 9E69: COM <$0E
    // TODO: Convert COM <$0E
    // 9E6B: NEG $0,X
    // TODO: Convert NEG $0,X
    // 9E6D: EORB $0,X
    // TODO: Fix comma operator: EORB $0,X
    // 9E6F: COM <$01
    // TODO: Convert COM <$01
    // 9E71: CLR <$60
    cpu.write_memory(0x60, 0);
    // 9E73: NEG <$18
    // TODO: Convert NEG <$18
    // 9E75: NEG <$03
    // TODO: Convert NEG <$03
    // 9E77: NEG <$10
    // TODO: Convert NEG <$10
    // 9E79: NEG $0,X
    // TODO: Convert NEG $0,X
    // 9E7B: SUBA #$00
    cpu.m_a -= 0x00;
    // 9E7D: NEG <$03
    // TODO: Convert NEG <$03
    // 9E7F: NEG >$0088
    // TODO: Convert NEG >$0088
    // 9E83: NEG <$03
    // TODO: Convert NEG <$03
    // 9E85: XNC <$12
    // TODO: Convert XNC <$12
    // 9E87: NEG >$00A0
    // TODO: Convert NEG >$00A0
    // 9E8A: NEG <$01
    // TODO: Convert NEG <$01
    // 9E8C: NEG <$13
    // TODO: Convert NEG <$13
    // 9E8E: NEG >$00B0
    // TODO: Convert NEG >$00B0
    // 9E91: NEG <$01
    // TODO: Convert NEG <$01
    // 9E93: NEG <$14
    // TODO: Convert NEG <$14
    // 9E95: NEG >$00F0
    // TODO: Convert NEG >$00F0
    // 9E98: NEG <$01
    // TODO: Convert NEG <$01
    // 9E9A: COM <$15
    // TODO: Convert COM <$15
    // 9E9C: NEG >$0010
    // TODO: Convert NEG >$0010
    // 9E9F: NEG <$01
    // TODO: Convert NEG <$01
    // 9EA1: COM <$16
    // TODO: Convert COM <$16
    // 9EA3: NEG >$0050
    // TODO: Convert NEG >$0050
    // 9EA6: NEG <$01
    // TODO: Convert NEG <$01
    // 9EA8: NEG <$17
    // TODO: Convert NEG <$17
    // 9EAA: NEG >$0060
    // TODO: Convert NEG >$0060
    // 9EAD: NEG <$01
    // TODO: Convert NEG <$01
    // 9EAF: NEG <$18
    // TODO: Convert NEG <$18
    // 9EB1: NEG >$0078
    // TODO: Convert NEG >$0078
    // 9EB4: NEG <$03
    // TODO: Convert NEG <$03
    // 9EB6: XNC <$19
    // TODO: Convert XNC <$19
    // 9EB8: ASL >$00E0
    // TODO: Convert ASL >$00E0
    // 9EBB: NEG <$03
    // TODO: Convert NEG <$03
    // 9EBD: COM <$1A
    // TODO: Convert COM <$1A
    // 9EBF: ASL >$0020
    // TODO: Convert ASL >$0020
    // 9EC2: NEG <$03
    // TODO: Convert NEG <$03
    // 9EC4: COM <$1B
    // TODO: Convert COM <$1B
    // 9EC6: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9EC7: NEG <$B0
    // TODO: Convert NEG <$B0
    // 9EC9: NEG <$01
    // TODO: Convert NEG <$01
    // 9ECB: XNC <$1C
    // TODO: Convert XNC <$1C
    // 9ECD: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9ECE: NEG <$C0
    // TODO: Convert NEG <$C0
    // 9ED0: NEG <$01
    // TODO: Convert NEG <$01
    // 9ED2: XNC <$1D
    // TODO: Convert XNC <$1D
    // 9ED4: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9ED5: NEG <$30
    // TODO: Convert NEG <$30
    // 9ED7: NEG <$01
    // TODO: Convert NEG <$01
    // 9ED9: XNC <$1E
    // TODO: Convert XNC <$1E
    // 9EDB: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9EDC: NEG <$40
    // TODO: Convert NEG <$40
    // 9EDE: NEG <$01
    // TODO: Convert NEG <$01
    // 9EE0: XNC <$1F
    // TODO: Convert XNC <$1F
    // 9EE2: BRA $9EE4
    goto label_9EE4;
    label_9EE4:
    // 9EE4: SUBA #$00
    cpu.m_a -= 0x00;
    // 9EE6: COM <$02
    // TODO: Convert COM <$02
    // 9EE8: NEG <$20
    // TODO: Convert NEG <$20
    // 9EEA: NEG <$A0
    // TODO: Convert NEG <$A0
    // 9EEC: NEG <$03
    // TODO: Convert NEG <$03
    // 9EEE: NEG <$01
    // TODO: Convert NEG <$01
    // 9EF0: BRA $9EF2
    goto label_9EF2;
    label_9EF2:
    // 9EF2: SUBA >$0003
    cpu.m_a -= 0x0003;
    // 9EF5: NEG <$02
    // TODO: Convert NEG <$02
    // 9EF7: BRA $9EF9
    goto label_9EF9;
    label_9EF9:
    // 9EF9: NEGB 
    cpu.m_b = -cpu.m_b;
    // 9EFA: NEG <$03
    // TODO: Convert NEG <$03
    // 9EFC: NEG <$03
    // TODO: Convert NEG <$03
    // 9EFE: BRA $9F00
    goto label_9F00;
    label_9F00:
    // 9F00: JMP $9f00
    goto label_9F00;
}

} // namespace StarWars