#include "cpu_6809.h"

namespace StarWars {

void routine_f182_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_f182.md
    // Address: 0xF182

    // F183: SUBB #$20
    cpu.state_.b -= 0x20;

    // F185: ROR <$B7
    // TODO: Convert ROR <$B7

    // F188: CMPB #$B7
    cpu.compare_b(0xB7);

    // F18B: CMPB #$39
    cpu.compare_b(0x39);

    // F18D: LDX #$4866
    cpu.state_.x = 0x4866;

    // F190: LDA <$2B
    cpu.state_.a = cpu.read_memory(0x2B);

    // F193: JSR $F1C6
    cpu.call_function(0xF1C6);

    // F196: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // F198: CMPA #$78
    cpu.compare_a(0x78);

    // F19A: BLE $001C
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xF1B8;

    // F19C: LDA #$78
    cpu.state_.a = 0x78;

    // F19E: CMPA #$98
    cpu.compare_a(0x98);

    // F1A0: BGE $0022
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xF1C4;

    // F1A2: LDA #$98
    cpu.state_.a = 0x98;

    // F1A4: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // F1A6: JSR $F1FD
    cpu.call_function(0xF1FD);

    // F1A9: LDX #$486F
    cpu.state_.x = 0x486F;

    // F1AC: LDA <$29
    cpu.state_.a = cpu.read_memory(0x29);

    // F1AF: JSR $F1C6
    cpu.call_function(0xF1C6);

    // F1B2: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // F1B4: CMPA #$70
    cpu.compare_a(0x70);

    // F1B6: BLE $0038
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xF1F0;

    // F1B8: LDA #$70
    cpu.state_.a = 0x70;

    // F1BA: CMPA #$90
    cpu.compare_a(0x90);

    // F1BC: BGE $003E
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xF1FC;

    // F1BE: LDA #$90
    cpu.state_.a = 0x90;

    // F1C0: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // F1C2: JSR $F1FD
    cpu.call_function(0xF1FD);

    // F1C6: CMPA ,X
    // TODO: Complex indexed addressing: ,X

    // F1C8: BCC $004E
    if (!cpu.carry_flag()) cpu.state_.pc = 0xF218;

    // F1CA: CMPA $1,X
    // TODO: Fix comma operator: CMPA $1,X

    // F1CC: BCS $004E
    if (cpu.carry_flag()) cpu.state_.pc = 0xF21C;

    // F1CE: DEC ,X
    // TODO: Convert DEC ,X

    // F1D0: STA $1,X
    // TODO: Handle indexed addressing: STA $1,X

    // F1D2: CMPA ,X
    // TODO: Complex indexed addressing: ,X

    // F1D4: BCC $0056
    if (!cpu.carry_flag()) cpu.state_.pc = 0xF22C;

    // F1D6: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // F1D8: SUBA ,X
    // TODO: Complex indexed addressing: ,X

    // F1DA: STA <$51
    cpu.write_memory(0x51, cpu.state_.a);

    // F1DC: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

    // F1DF: ADDA <$51
    cpu.state_.a += 0x51;

    // F1E1: BNE $0063
    if (!cpu.zero_flag()) cpu.state_.pc = 0xF246;

    // F1E3: LDA #$01
    cpu.state_.a = 0x01;

    // F1E5: BCS $0069
    if (cpu.carry_flag()) cpu.state_.pc = 0xF250;

    // F1E7: CLR $3,X
    // TODO: Fix comma operator: CLR $3,X

    // F1E9: BRA $0075
    cpu.state_.pc = 0xF260;

    // F1EB: LDA #$FF
    cpu.state_.a = 0xFF;

    // F1ED: INC $3,X
    // TODO: Convert INC $3,X

    // F1EF: LDB $3,X
    // TODO: Fix comma operator: LDB $3,X

    // F1F1: CMPB #$02
    cpu.compare_b(0x02);

    // F1F3: BCS $0075
    if (cpu.carry_flag()) cpu.state_.pc = 0xF26A;

    // F1F5: DEC $2,X
    // TODO: Convert DEC $2,X

    // F1F8: SUBA #$80
    cpu.state_.a -= 0x80;

    // F1FA: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // F1FD: CLR <$51
    cpu.write_memory(0x51, 0);

    // F1FF: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // F201: LDB #$80
    cpu.state_.b = 0x80;

    // F203: SUBD $5,X
    // TODO: Fix comma operator: SUBD $5,X

    // F205: BGE $0088
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xF18F;

    // F208: DEC <$51
    // TODO: Convert DEC <$51

    // F20A: BLE $008D
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xF199;

    // F20C: ADDD #$00FF
    cpu.state_.d += 0x00FF;

    // F20F: CMPA #$F8
    cpu.compare_a(0xF8);

    // F211: BLS $0093
    // TODO: Convert BLS $0093

    // F213: LDA #$F8
    cpu.state_.a = 0xF8;

    // F215: LDB #$60
    cpu.state_.b = 0x60;

    // F217: CMPA #$40
    cpu.compare_a(0x40);

    // F219: BCC $009B
    if (!cpu.carry_flag()) cpu.state_.pc = 0xF1B6;

    // F21B: LDB #$30
    cpu.state_.b = 0x30;

    // F21E: TST <$51
    // TODO: Convert TST <$51

    // F220: BPL $00A4
    if (!cpu.negative_flag()) cpu.state_.pc = 0xF1C6;

    // F224: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // F226: ADDD $5,X
    // TODO: Fix comma operator: ADDD $5,X

    // F228: STD $5,X
    // TODO: Handle indexed addressing: STD $5,X

    // F22B: LDB <$6B
    cpu.state_.b = cpu.read_memory(0x6B);

    // F22D: LDA <$6C
    cpu.state_.a = cpu.read_memory(0x6C);

    // F22F: ANDA #$C0
    cpu.state_.a &= 0xC0;

    // F233: BCC $00B5
    if (!cpu.carry_flag()) cpu.state_.pc = 0xF1EA;

    // F235: ORA #$3F
    cpu.state_.a |= 0x3F;

    // F23A: STD <$2F
    cpu.write_memory(0x2F, cpu.state_.d);

    // F23C: ADDD #$FF98
    cpu.state_.d += 0xFF98;

    // F23F: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // F241: STD >$0024
    cpu.write_memory(0x0024, cpu.state_.d);

    // F244: LDB <$74
    cpu.state_.b = cpu.read_memory(0x74);

    // F246: LDA <$75
    cpu.state_.a = cpu.read_memory(0x75);

    // F248: ANDA #$C0
    cpu.state_.a &= 0xC0;

    // F24C: BCC $00CE
    if (!cpu.carry_flag()) cpu.state_.pc = 0xF21C;

    // F24E: ORA #$3F
    cpu.state_.a |= 0x3F;

    // F253: STD <$2D
    cpu.write_memory(0x2D, cpu.state_.d);

    // F255: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // F257: STD >$0026
    cpu.write_memory(0x0026, cpu.state_.d);

    // F25A: LDD #$C000
    cpu.state_.d = 0xC000;

    // F25D: STD >$0028
    cpu.write_memory(0x0028, cpu.state_.d);

    // F261: ORCC #$10
    cpu.state_.cc |= 0x10;

    // F263: CLR $4684
    cpu.write_memory(0x4684, 0);

    // F266: LDA #$00
    cpu.state_.a = 0x00;

    // F268: STA $4686
    cpu.write_memory(0x4686, cpu.state_.a);

    // F26B: STA $4683
    cpu.write_memory(0x4683, cpu.state_.a);

    // F26E: STA $4682
    cpu.write_memory(0x4682, cpu.state_.a);

    // F271: LDA #$00
    cpu.state_.a = 0x00;

    // F273: STA $4685
    cpu.write_memory(0x4685, cpu.state_.a);

    // F276: LDA #$80
    cpu.state_.a = 0x80;

    // F278: STA $4685
    cpu.write_memory(0x4685, cpu.state_.a);

    // F27B: STA $4620
    cpu.write_memory(0x4620, cpu.state_.a);

    // F27E: LDU #$0000
    cpu.state_.u = 0x0000;

    // F281: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F284: LEAU -$1,U
    // TODO: Fix comma operator: LEAU -$1,U

    // F286: CMPU #$0000
    // TODO: Convert CMPU #$0000

    // F28A: BNE $00FF
    if (!cpu.zero_flag()) cpu.state_.pc = 0xF28B;

    // F28C: LDS #$4FFF
    cpu.state_.sp = 0x4FFF;

    // F290: LDA #$48
    cpu.state_.a = 0x48;

    // F292: TFR A,DP
    cpu.state_.dp = cpu.state_.a;

    // F294: STA $46E0
    cpu.write_memory(0x46E0, cpu.state_.a);

    // F297: LDA #$00
    cpu.state_.a = 0x00;

    // F299: STA $4400
    cpu.write_memory(0x4400, cpu.state_.a);

    // F29C: LDX #$4800
    cpu.state_.x = 0x4800;

    // F29F: LDD #$0000
    cpu.state_.d = 0x0000;

    // F2A2: STD ,X++
    cpu.write_memory(cpu.state_.x++, cpu.state_.d);

    // F2A4: CMPX #$5000
    cpu.compare_x(0x5000);

    // F2A7: BCS $0120
    if (cpu.carry_flag()) cpu.state_.pc = 0xF2C9;

    // F2A9: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F2AC: LDX #$5000
    cpu.state_.x = 0x5000;

    // F2AF: LDD #$0000
    cpu.state_.d = 0x0000;

    // F2B2: STD ,X++
    cpu.write_memory(cpu.state_.x++, cpu.state_.d);

    // F2B4: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F2B7: CMPX #$6000
    cpu.compare_x(0x6000);

    // F2BA: BCS $0130
    if (cpu.carry_flag()) cpu.state_.pc = 0xF2EC;

    // F2BC: LDX #$0000
    cpu.state_.x = 0x0000;

    // F2BF: LDD #$0000
    cpu.state_.d = 0x0000;

    // F2C2: STD ,X++
    cpu.write_memory(cpu.state_.x++, cpu.state_.d);

    // F2C4: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F2C7: CMPX #$3000
    cpu.compare_x(0x3000);

    // F2CA: BCS $0140
    if (cpu.carry_flag()) cpu.state_.pc = 0xF30C;

    // F2CC: LDA $4300
    cpu.state_.a = cpu.read_memory(0x4300);

    // F2CF: ANDA #$10
    cpu.state_.a &= 0x10;

    // F2D1: BNE $0154
    if (!cpu.zero_flag()) cpu.state_.pc = 0xF327;

    // F2D3: JMP $F36E
    cpu.state_.pc = 0xF36E;

    // F2D6: LDA $4340
    cpu.state_.a = cpu.read_memory(0x4340);

    // F2D9: LDB $4360
    cpu.state_.b = cpu.read_memory(0x4360);

    // F2DC: STA <$24
    cpu.write_memory(0x24, cpu.state_.a);

    // F2DE: STB <$27
    cpu.write_memory(0x27, cpu.state_.b);

    // F2E0: LDX #$0800
    cpu.state_.x = 0x0800;

    // F2E3: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // F2E5: BNE $0161
    if (!cpu.zero_flag()) cpu.state_.pc = 0xF348;

    // F2E7: LDA $4340
    cpu.state_.a = cpu.read_memory(0x4340);

    // F2EA: LDB $4360
    cpu.state_.b = cpu.read_memory(0x4360);

    // F2ED: CMPA <$24
    cpu.compare_a(cpu.read_memory(0x24));

    // F2EF: BNE $015A
    if (!cpu.zero_flag()) cpu.state_.pc = 0xF34B;

    // F2F1: CMPB <$27
    cpu.compare_b(cpu.read_memory(0x27));

    // F2F3: BNE $015A
    if (!cpu.zero_flag()) cpu.state_.pc = 0xF34F;

    // F2F5: LDD #$2020
    cpu.state_.d = 0x2020;

    // F2F8: LDX #$0000
    cpu.state_.x = 0x0000;

    // F2FB: STD ,X++
    cpu.write_memory(cpu.state_.x++, cpu.state_.d);

    // F2FD: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F300: CMPX #$2800
    cpu.compare_x(0x2800);

    // F303: BCS $0179
    if (cpu.carry_flag()) cpu.state_.pc = 0xF37E;

    // F305: LDD #$E038
    cpu.state_.d = 0xE038;

    // F308: STD >$0000
    cpu.write_memory(0x0000, cpu.state_.d);

    // F30B: LDA #$FF
    cpu.state_.a = 0xFF;

    // F30D: STA <$3F
    cpu.write_memory(0x3F, cpu.state_.a);

    // F30F: LDA #$3F
    cpu.state_.a = 0x3F;

    // F311: STA <$00
    cpu.write_memory(0x00, cpu.state_.a);

    // F313: LDA #$40
    cpu.state_.a = 0x40;

    // F315: STA <$28
    cpu.write_memory(0x28, cpu.state_.a);

    // F317: JSR $C306
    cpu.call_function(0xC306);

    // F31A: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F31D: LDA #$FF
    cpu.state_.a = 0xFF;

    // F31F: STA $4686
    cpu.write_memory(0x4686, cpu.state_.a);

    // F322: STA $4683
    cpu.write_memory(0x4683, cpu.state_.a);

    // F325: STA $4682
    cpu.write_memory(0x4682, cpu.state_.a);

    // F328: STA $4660
    cpu.write_memory(0x4660, cpu.state_.a);

    // F32B: JMP $6036
    cpu.state_.pc = 0x6036;

    // F32F: NEG <$50
    // TODO: Convert NEG <$50

    // F331: NEG <$50
    // TODO: Convert NEG <$50

    // F333: NEG <$00
    // TODO: Convert NEG <$00

    // F335: NEG <$08
    // TODO: Convert NEG <$08

    // F337: NEG <$10
    // TODO: Convert NEG <$10

    // F339: NEG <$18
    // TODO: Convert NEG <$18

    // F33B: NEG <$20
    // TODO: Convert NEG <$20

    // F33D: NEG <$28
    // TODO: Convert NEG <$28

    // F33F: NEG <$45
    // TODO: Convert NEG <$45

    // F341: NEG <$60
    // TODO: Convert NEG <$60

    // F343: NEG <$80
    // TODO: Convert NEG <$80

    // F345: NEG <$A0
    // TODO: Convert NEG <$A0

    // F347: NEG <$C0
    // TODO: Convert NEG <$C0

    // F349: NEG <$E0
    // TODO: Convert NEG <$E0

    // F34B: NEG <$28
    // TODO: Convert NEG <$28

    // F34D: NEG <$00
    // TODO: Convert NEG <$00

    // F34F: NEG <$00
    // TODO: Convert NEG <$00

    // F351: XNC <$00
    // TODO: Convert XNC <$00

    // F353: LSR <$00
    // TODO: Convert LSR <$00

    // F355: ASL <$00
    // TODO: Convert ASL <$00

    // F357: NEG <$20
    // TODO: Convert NEG <$20

    // F35A: NEG <$40
    // TODO: Convert NEG <$40

    // F35C: NEG <$80
    // TODO: Convert NEG <$80

    // F35E: NEG <$00
    // TODO: Convert NEG <$00

    // F360: XNC <$00
    // TODO: Convert XNC <$00

    // F362: LSR <$00
    // TODO: Convert LSR <$00

    // F364: ASL <$00
    // TODO: Convert ASL <$00

    // F366: NEG <$20
    // TODO: Convert NEG <$20

    // F369: NEG <$40
    // TODO: Convert NEG <$40

    // F36B: NEG <$80
    // TODO: Convert NEG <$80

    // F36D: NEG <$B6
    // TODO: Convert NEG <$B6

    // F370: BRA $0174
    cpu.state_.pc = 0xF3E6;

    // F372: LSR <$26
    // TODO: Convert LSR <$26

    // F374: XDEC <$B6
    // TODO: Convert XDEC <$B6

    // F379: ANDA #$7F
    cpu.state_.a &= 0x7F;

    // F37B: BEQ $01FE
    if (cpu.zero_flag()) cpu.state_.pc = 0xF37B;

    // F37D: JMP $FD07
    cpu.state_.pc = 0xFD07;

    // F380: LDS #$0000
    cpu.state_.sp = 0x0000;

}

} // namespace StarWars