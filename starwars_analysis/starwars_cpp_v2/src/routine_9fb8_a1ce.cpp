#include "cpu_6809.h"

namespace StarWars {

void routine_9fb8_a1ce_impl(CPU6809& cpu) {
    // Converted from rom_disasm_9fb8_a1ce.md
    // Address: 0x9FB8_A1CE

    // 9FB8: NEG <$03
    // TODO: Convert NEG <$03

    // 9FBA: EXG A,D
    // TODO: Convert EXG A,D

    // 9FBC: NEG <$60
    // TODO: Convert NEG <$60

    // 9FBE: NEG <$01
    // TODO: Convert NEG <$01

    // 9FC0: COM <$1F
    // TODO: Convert COM <$1F

    // 9FC2: NEG <$00
    // TODO: Convert NEG <$00

    // 9FC4: NEG <$00
    // TODO: Convert NEG <$00

    // 9FC6: NEG <$01
    // TODO: Convert NEG <$01

    // 9FC8: NEG <$18
    // TODO: Convert NEG <$18

    // 9FCA: NEG <$80
    // TODO: Convert NEG <$80

    // 9FCC: NEG <$01
    // TODO: Convert NEG <$01

    // 9FCE: COM <$01
    // TODO: Convert COM <$01

    // 9FD0: BRA $9FD2
    goto label_9FD2;

    // 9FD2: EORB <$00
    cpu.m_b ^= 0x00;

    // 9FD4: NEG <$01
    // TODO: Convert NEG <$01

    // 9FD6: XNC <$20
    // TODO: Convert XNC <$20

    // 9FD8: NEG <$28
    // TODO: Convert NEG <$28

    // 9FDA: NEG <$01
    // TODO: Convert NEG <$01

    // 9FDC: NEG <$03
    // TODO: Convert NEG <$03

    // 9FDE: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X

    // 9FE0: SUBA <$00
    cpu.m_a -= 0x00;

    // 9FE2: NEG <$02
    // TODO: Convert NEG <$02

    // 9FE4: LSR <$30
    // TODO: Convert LSR <$30

    // 9FE6: NEG <$60
    // TODO: Convert NEG <$60

    // 9FE8: NEG <$03
    // TODO: Convert NEG <$03

    // 9FEA: XNC <$05
    // TODO: Convert XNC <$05

    // 9FEC: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X

    // 9FEE: NEG >$0001
    // TODO: Convert NEG >$0001

    // 9FF1: XNC <$06
    // TODO: Convert XNC <$06

    // 9FF3: XANDCC #$00
    // TODO: Convert XANDCC #$00

    // 9FF5: SUBA >$0001
    cpu.m_a -= 0x0001;

    // 9FF8: COM <$07
    // TODO: Convert COM <$07

    // 9FFA: XANDCC #$00
    // TODO: Convert XANDCC #$00

    // 9FFC: SUBB $0,X
    // TODO: Fix comma operator: SUBB $0,X

    // 9FFE: NEG <$00
    // TODO: Convert NEG <$00

    // A000: ASL <$38
    // TODO: Convert ASL <$38

    // A002: NEG <$20
    // TODO: Convert NEG <$20

    // A004: NEG <$01
    // TODO: Convert NEG <$01

    // A006: NEG <$09
    // TODO: Convert NEG <$09

    // A008: XANDCC #$00
    // TODO: Convert XANDCC #$00

    // A00B: NEG <$01
    // TODO: Convert NEG <$01

    // A00D: COM <$0A
    // TODO: Convert COM <$0A

    // A010: NEG <$E8
    // TODO: Convert NEG <$E8

    // A012: NEG <$01
    // TODO: Convert NEG <$01

    // A014: NEG <$0B
    // TODO: Convert NEG <$0B

    // A017: NEG <$18
    // TODO: Convert NEG <$18

    // A019: NEG <$01
    // TODO: Convert NEG <$01

    // A01B: NEG <$0C
    // TODO: Convert NEG <$0C

    // A01E: NEG <$88
    // TODO: Convert NEG <$88

    // A020: NEG <$01
    // TODO: Convert NEG <$01

    // A022: XNC <$0D
    // TODO: Convert XNC <$0D

    // A025: NEG <$A0
    // TODO: Convert NEG <$A0

    // A027: NEG <$01
    // TODO: Convert NEG <$01

    // A029: COM <$0E
    // TODO: Convert COM <$0E

    // A02C: NEG <$C0
    // TODO: Convert NEG <$C0

    // A02E: NEG <$01
    // TODO: Convert NEG <$01

    // A030: NEG <$0F
    // TODO: Convert NEG <$0F

    // A033: NEG <$40
    // TODO: Convert NEG <$40

    // A035: NEG <$01
    // TODO: Convert NEG <$01

    // A037: NEG <$10
    // TODO: Convert NEG <$10

    // A03A: NEG <$60
    // TODO: Convert NEG <$60

    // A03C: NEG <$01
    // TODO: Convert NEG <$01

    // A03E: COM <$11
    // TODO: Convert COM <$11

    // A041: NEG <$78
    // TODO: Convert NEG <$78

    // A043: NEG <$01
    // TODO: Convert NEG <$01

    // A045: XNC <$12
    // TODO: Convert XNC <$12

    // A048: NEG <$E4
    // TODO: Convert NEG <$E4

    // A04A: NEG <$01
    // TODO: Convert NEG <$01

    // A04C: NEG <$13
    // TODO: Convert NEG <$13

    // A04F: NEG <$1C
    // TODO: Convert NEG <$1C

    // A051: NEG <$01
    // TODO: Convert NEG <$01

    // A053: NEG <$14
    // TODO: Convert NEG <$14

    // A055: NEG $0,X
    // TODO: Convert NEG $0,X

    // A057: SUBB >$0001
    cpu.m_b -= 0x0001;

    // A05A: NEG <$15
    // TODO: Convert NEG <$15

    // A05C: NEG $0,X
    // TODO: Convert NEG $0,X

    // A05E: NEG <$01
    // TODO: Convert NEG <$01

    // A061: NEG <$16
    // TODO: Convert NEG <$16

    // A063: NEG $0,X
    // TODO: Convert NEG $0,X

    // A065: INC >$0001
    // TODO: Convert INC >$0001

    // A068: COM <$17
    // TODO: Convert COM <$17

    // A06A: NEG >$00C8
    // TODO: Convert NEG >$00C8

    // A06D: NEG <$01
    // TODO: Convert NEG <$01

    // A06F: NEG <$18
    // TODO: Convert NEG <$18

    // A071: NEG >$00F8
    // TODO: Convert NEG >$00F8

    // A074: NEG <$01
    // TODO: Convert NEG <$01

    // A076: NEG <$19
    // TODO: Convert NEG <$19

    // A078: NEG >$0008
    // TODO: Convert NEG >$0008

    // A07B: NEG <$01
    // TODO: Convert NEG <$01

    // A07D: NEG <$1A
    // TODO: Convert NEG <$1A

    // A07F: NEG >$0038
    // TODO: Convert NEG >$0038

    // A082: NEG <$01
    // TODO: Convert NEG <$01

    // A084: NEG <$1B
    // TODO: Convert NEG <$1B

    // A086: NEG <$00
    // TODO: Convert NEG <$00

    // A088: SUBA $0,X
    // TODO: Fix comma operator: SUBA $0,X

    // A08A: NEG <$03
    // TODO: Convert NEG <$03

    // A08C: ANDCC #$00
    // TODO: Convert ANDCC #$00

    // A08E: NEG <$C0
    // TODO: Convert NEG <$C0

    // A090: NEG <$01
    // TODO: Convert NEG <$01

    // A092: XNC <$1D
    // TODO: Convert XNC <$1D

    // A094: NEG <$00
    // TODO: Convert NEG <$00

    // A097: NEG <$01
    // TODO: Convert NEG <$01

    // A099: XNC <$1E
    // TODO: Convert XNC <$1E

    // A09B: NEG <$00
    // TODO: Convert NEG <$00

    // A09D: NEG $0,X
    // TODO: Convert NEG $0,X

    // A09F: NEG <$03
    // TODO: Convert NEG <$03

    // A0A1: TFR X,D
    cpu.m_d = cpu.m_x;

    // A0A3: NEG <$E0
    // TODO: Convert NEG <$E0

    // A0A5: NEG <$01
    // TODO: Convert NEG <$01

    // A0A7: NEG <$00
    // TODO: Convert NEG <$00

    // A0A9: NEG <$20
    // TODO: Convert NEG <$20

    // A0AC: NEG <$01
    // TODO: Convert NEG <$01

    // A0AE: NEG <$01
    // TODO: Convert NEG <$01

    // A0B0: BRA $A0B2
    goto label_A0B2;

    // A0B2: SUBB #$00
    cpu.m_b -= 0x00;

    // A0B4: COM <$01
    // TODO: Convert COM <$01

    // A0B6: XNC <$20
    // TODO: Convert XNC <$20

    // A0B8: NEG <$40
    // TODO: Convert NEG <$40

    // A0BA: NEG <$03
    // TODO: Convert NEG <$03

    // A0BC: NEG <$03
    // TODO: Convert NEG <$03

    // A0BE: BVC $A0C0
    // TODO: Convert BVC $A0C0

    // A0C0: SUBB $0,X
    // TODO: Fix comma operator: SUBB $0,X

    // A0C2: NEG <$00
    // TODO: Convert NEG <$00

    // A0C4: LSR <$28
    // TODO: Convert LSR <$28

    // A0C6: NEG <$20
    // TODO: Convert NEG <$20

    // A0C8: NEG <$01
    // TODO: Convert NEG <$01

    // A0CA: NEG <$05
    // TODO: Convert NEG <$05

    // A0CC: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X

    // A0CE: SUBA <$00
    cpu.m_a -= 0x00;

    // A0D0: COM <$02
    // TODO: Convert COM <$02

    // A0D2: ROR <$30
    // TODO: Convert ROR <$30

    // A0D4: NEG <$A0
    // TODO: Convert NEG <$A0

    // A0D6: NEG <$03
    // TODO: Convert NEG <$03

    // A0D8: XNC <$07
    // TODO: Convert XNC <$07

    // A0DA: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X

    // A0DC: NEG $0,X
    // TODO: Convert NEG $0,X

    // A0DE: COM <$02
    // TODO: Convert COM <$02

    // A0E0: ASL <$38
    // TODO: Convert ASL <$38

    // A0E2: NEG <$B0
    // TODO: Convert NEG <$B0

    // A0E4: NEG <$01
    // TODO: Convert NEG <$01

    // A0E6: NEG <$09
    // TODO: Convert NEG <$09

    // A0E8: XANDCC #$00
    // TODO: Convert XANDCC #$00

    // A0EB: NEG <$01
    // TODO: Convert NEG <$01

    // A0ED: NEG <$0A
    // TODO: Convert NEG <$0A

    // A0F0: NEG <$D0
    // TODO: Convert NEG <$D0

    // A0F2: NEG <$03
    // TODO: Convert NEG <$03

    // A0F4: NEG <$0B
    // TODO: Convert NEG <$0B

    // A0F7: NEG <$00
    // TODO: Convert NEG <$00

    // A0F9: NEG <$03
    // TODO: Convert NEG <$03

    // A0FB: NEG <$0C
    // TODO: Convert NEG <$0C

    // A0FE: NEG <$30
    // TODO: Convert NEG <$30

    // A100: NEG <$03
    // TODO: Convert NEG <$03

    // A102: NEG <$0D
    // TODO: Convert NEG <$0D

    // A105: NEG <$80
    // TODO: Convert NEG <$80

    // A107: NEG <$01
    // TODO: Convert NEG <$01

    // A109: NEG <$0E
    // TODO: Convert NEG <$0E

    // A10C: NEG <$88
    // TODO: Convert NEG <$88

    // A10E: NEG <$01
    // TODO: Convert NEG <$01

    // A110: XNC <$0F
    // TODO: Convert XNC <$0F

    // A113: NEG <$00
    // TODO: Convert NEG <$00

    // A115: NEG <$01
    // TODO: Convert NEG <$01

    // A117: NEG <$10
    // TODO: Convert NEG <$10

    // A11A: NEG <$78
    // TODO: Convert NEG <$78

    // A11C: NEG <$01
    // TODO: Convert NEG <$01

    // A11E: XNC <$11
    // TODO: Convert XNC <$11

    // A120: NEG $0,X
    // TODO: Convert NEG $0,X

    // A122: SUBB #$00
    cpu.m_b -= 0x00;

    // A124: NEG <$00
    // TODO: Convert NEG <$00

    // A127: NEG $0,X
    // TODO: Convert NEG $0,X

    // A12A: NEG <$01
    // TODO: Convert NEG <$01

    // A12C: NEG <$13
    // TODO: Convert NEG <$13

    // A12E: ASL $0,X
    // TODO: Convert ASL $0,X

    // A130: SUBB <$00
    cpu.m_b -= 0x00;

    // A132: NEG <$00
    // TODO: Convert NEG <$00

    // A135: ASL $0,X
    // TODO: Convert ASL $0,X

    // A137: LEAX $0,X
    // TODO: Fix comma operator: LEAX $0,X

    // A139: NEG <$00
    // TODO: Convert NEG <$00

    // A13C: NEG >$0090
    // TODO: Convert NEG >$0090

    // A13F: NEG <$01
    // TODO: Convert NEG <$01

    // A141: NEG <$16
    // TODO: Convert NEG <$16

    // A143: NEG >$00A0
    // TODO: Convert NEG >$00A0

    // A146: NEG <$01
    // TODO: Convert NEG <$01

    // A148: NEG <$17
    // TODO: Convert NEG <$17

    // A14A: NEG >$00F0
    // TODO: Convert NEG >$00F0

    // A14D: NEG <$01
    // TODO: Convert NEG <$01

    // A14F: NEG <$18
    // TODO: Convert NEG <$18

    // A151: NEG >$0010
    // TODO: Convert NEG >$0010

    // A154: NEG <$01
    // TODO: Convert NEG <$01

    // A156: NEG <$19
    // TODO: Convert NEG <$19

    // A158: NEG >$0060
    // TODO: Convert NEG >$0060

    // A15B: NEG <$01
    // TODO: Convert NEG <$01

    // A15D: NEG <$1A
    // TODO: Convert NEG <$1A

    // A15F: NEG >$0070
    // TODO: Convert NEG >$0070

    // A162: NEG <$01
    // TODO: Convert NEG <$01

    // A164: NEG <$1B
    // TODO: Convert NEG <$1B

    // A166: NEG <$B8
    // TODO: Convert NEG <$B8

    // A169: NEG <$01
    // TODO: Convert NEG <$01

    // A16B: XNC <$1C
    // TODO: Convert XNC <$1C

    // A16D: NEG <$58
    // TODO: Convert NEG <$58

    // A170: NEG <$01
    // TODO: Convert NEG <$01

    // A172: XNC <$1D
    // TODO: Convert XNC <$1D

    // A174: BRA $A176
    goto label_A176;

    // A176: EORA <$00
    cpu.m_a ^= 0x00;

    // A178: NEG <$02
    // TODO: Convert NEG <$02

    // A17A: EXG Y,D
    // TODO: Convert EXG Y,D

    // A17C: NEG <$70
    // TODO: Convert NEG <$70

    // A17E: NEG <$01
    // TODO: Convert NEG <$01

    // A180: XNC <$1F
    // TODO: Convert XNC <$1F

    // A182: ORA <$9E
    cpu.m_a |= 0x9E;

    // A184: ADDA <$62
    cpu.m_a += 0x62;

    // A186: LDX <$E2
    cpu.m_x = cpu.read_memory16(0xE2);

    // A188: STX <$A6
    cpu.write_memory16(0xA6, cpu.m_x);

    // A18A: ADCA <$BE
    // TODO: Convert ADCA <$BE

    // A18C: ORA <$82
    cpu.m_a |= 0x82;

    // A18E: SUBA ,-Y
    // TODO: Complex indexed addressing: ,-Y

    // A190: CMPA $6,S
    // TODO: Fix comma operator: CMPA $6,S

    // A192: LDX <$02
    cpu.m_x = cpu.read_memory16(0x02);

    // A194: LDX <$C6
    cpu.m_x = cpu.read_memory16(0xC6);

    // A196: EORA <$DE
    cpu.m_a ^= 0xDE;

    // A198: ADCA <$A2
    // TODO: Convert ADCA <$A2

    // A19A: JSR <$22
    cpu.call_function(0x22);

    // A19C: JSR <$E6
    cpu.call_function(0xE6);

    // A19E: CMPX <$42
    cpu.compare_x(cpu.read_memory16(0x42));

    // A1A0: JSR <$06
    cpu.call_function(0x06);

    // A1A2: STX <$C2
    cpu.write_memory16(0xC2, cpu.m_x);

    // A1A4: SUBA A,X
    // TODO: Fix comma operator: SUBA A,X

    // A1A6: ADDA <$62
    cpu.m_a += 0x62;

    // A1A8: CMPX <$26
    cpu.compare_x(cpu.read_memory16(0x26));

    // A1AA: LDX <$E2
    cpu.m_x = cpu.read_memory16(0xE2);

    // A1AC: STX <$C2
    cpu.write_memory16(0xC2, cpu.m_x);

    // A1AE: ADCA <$BE
    // TODO: Convert ADCA <$BE

    // A1B0: ORA <$9E
    cpu.m_a |= 0x9E;

    // A1B2: SUBA ,-Y
    // TODO: Complex indexed addressing: ,-Y

    // A1B4: CMPA ,-X
    // TODO: Complex indexed addressing: ,-X

    // A1B6: LDX <$02
    cpu.m_x = cpu.read_memory16(0x02);

    // A1B8: LDX <$E2
    cpu.m_x = cpu.read_memory16(0xE2);

    // A1BA: EORA <$DE
    cpu.m_a ^= 0xDE;

    // A1BC: ADCA <$BE
    // TODO: Convert ADCA <$BE

    // A1BE: JSR <$22
    cpu.call_function(0x22);

    // A1C0: LDX <$02
    cpu.m_x = cpu.read_memory16(0x02);

    // A1C2: CMPX <$42
    cpu.compare_x(cpu.read_memory16(0x42));

    // A1C4: JSR <$22
    cpu.call_function(0x22);

    // A1C6: STX <$C2
    cpu.write_memory16(0xC2, cpu.m_x);

    // A1C8: SUBA ,-Y
    // TODO: Complex indexed addressing: ,-Y

    // A1CA: ADDA <$62
    cpu.m_a += 0x62;

    // A1CC: CMPX <$42
    cpu.compare_x(cpu.read_memory16(0x42));

    // A1CE: JMP $a1ce
    goto label_A1CE;

}

} // namespace StarWars