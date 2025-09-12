#include "cpu_6809.h"

namespace StarWars {

void routine_f261_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_f261.md
    // Address: 0xF261

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

    // F28A: BNE $0020
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0020;

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

    // F2A7: BCS $0041
    if (cpu.carry_flag()) cpu.state_.pc += 0x0041;

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

    // F2BA: BCS $0051
    if (cpu.carry_flag()) cpu.state_.pc += 0x0051;

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

    // F2CA: BCS $0061
    if (cpu.carry_flag()) cpu.state_.pc += 0x0061;

    // F2CC: LDA $4300
    cpu.state_.a = cpu.read_memory(0x4300);

    // F2CF: ANDA #$10
    cpu.state_.a &= 0x10;

    // F2D1: BNE $0075
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0075;

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

    // F2E5: BNE $0082
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0082;

    // F2E7: LDA $4340
    cpu.state_.a = cpu.read_memory(0x4340);

    // F2EA: LDB $4360
    cpu.state_.b = cpu.read_memory(0x4360);

    // F2ED: CMPA <$24
    cpu.compare_a(cpu.read_memory(0x24));

    // F2EF: BNE $007B
    if (!cpu.zero_flag()) cpu.state_.pc += 0x007B;

    // F2F1: CMPB <$27
    cpu.compare_b(cpu.read_memory(0x27));

    // F2F3: BNE $007B
    if (!cpu.zero_flag()) cpu.state_.pc += 0x007B;

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

    // F303: BCS $009A
    if (cpu.carry_flag()) cpu.state_.pc += 0x009A;

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

    // F370: BRA $0095
    cpu.state_.pc += 0x0095;

    // F372: LSR <$26
    // TODO: Convert LSR <$26

    // F374: XDEC <$B6
    // TODO: Convert XDEC <$B6

    // F379: ANDA #$7F
    cpu.state_.a &= 0x7F;

    // F37B: BEQ $011F
    if (cpu.zero_flag()) cpu.state_.pc += 0x011F;

    // F37D: JMP $FD07
    cpu.state_.pc = 0xFD07;

    // F380: LDS #$0000
    cpu.state_.sp = 0x0000;

    // F384: LDU #$F32E
    cpu.state_.u = 0xF32E;

    // F387: LDX ,U++
    cpu.state_.x = cpu.read_memory_word(cpu.state_.u++);

    // F389: LDY #$0800
    cpu.state_.y = 0x0800;

    // F38D: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // F38F: BEQ $013C
    if (cpu.zero_flag()) cpu.state_.pc += 0x013C;

    // F391: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F393: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F396: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F399: TFR D,S
    cpu.state_.sp = cpu.state_.d;

    // F39B: BRA $017B
    cpu.state_.pc += 0x017B;

    // F39D: LDA #$80
    cpu.state_.a = 0x80;

    // F3A1: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // F3A3: TFR A,B
    cpu.state_.b = cpu.state_.a;

    // F3A5: EORB ,X
    // TODO: Complex indexed addressing: ,X

    // F3A7: BEQ $0154
    if (cpu.zero_flag()) cpu.state_.pc += 0x0154;

    // F3A9: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F3AB: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F3AE: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F3B1: TFR D,S
    cpu.state_.sp = cpu.state_.d;

    // F3B3: BRA $017B
    cpu.state_.pc += 0x017B;

    // F3B5: BCC $015D
    if (!cpu.carry_flag()) cpu.state_.pc += 0x015D;

    // F3B8: BNE $013F
    if (!cpu.zero_flag()) cpu.state_.pc += 0x013F;

    // F3BA: ADDA #$FF
    cpu.state_.a += 0xFF;

    // F3BC: BRA $013F
    cpu.state_.pc += 0x013F;

    // F3BE: TFR A,B
    cpu.state_.b = cpu.state_.a;

    // F3C1: BNE $013F
    if (!cpu.zero_flag()) cpu.state_.pc += 0x013F;

    // F3C3: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F3C6: CMPU #$F332
    // TODO: Convert CMPU #$F332

    // F3CA: BEQ $0171
    if (cpu.zero_flag()) cpu.state_.pc += 0x0171;

    // F3CC: CMPU #$F334
    // TODO: Convert CMPU #$F334

    // F3D0: BNE $0175
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0175;

    // F3D2: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // F3D4: BRA $0177
    cpu.state_.pc += 0x0177;

    // F3D6: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // F3D8: LEAY -$1,Y
    // TODO: Fix comma operator: LEAY -$1,Y

    // F3DA: BNE $012C
    if (!cpu.zero_flag()) cpu.state_.pc += 0x012C;

    // F3DC: CMPU #$F340
    // TODO: Convert CMPU #$F340

    // F3E0: BCS $0126
    if (cpu.carry_flag()) cpu.state_.pc += 0x0126;

    // F3E2: LDU #$F32E
    cpu.state_.u = 0xF32E;

    // F3E5: LDX ,U++
    cpu.state_.x = cpu.read_memory_word(cpu.state_.u++);

    // F3E7: LDY #$0800
    cpu.state_.y = 0x0800;

    // F3EB: INC ,X
    // TODO: Convert INC ,X

    // F3ED: BEQ $019A
    if (cpu.zero_flag()) cpu.state_.pc += 0x019A;

    // F3EF: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F3F1: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F3F4: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F3F7: TFR D,S
    cpu.state_.sp = cpu.state_.d;

    // F3F9: BRA $01C3
    cpu.state_.pc += 0x01C3;

    // F3FB: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // F3FD: BEQ $01AA
    if (cpu.zero_flag()) cpu.state_.pc += 0x01AA;

    // F3FF: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F401: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F404: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F407: TFR D,S
    cpu.state_.sp = cpu.state_.d;

    // F409: BRA $01C3
    cpu.state_.pc += 0x01C3;

    // F40B: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F40E: CMPU #$F332
    // TODO: Convert CMPU #$F332

    // F412: BEQ $01B9
    if (cpu.zero_flag()) cpu.state_.pc += 0x01B9;

    // F414: CMPU #$F334
    // TODO: Convert CMPU #$F334

    // F418: BNE $01BD
    if (!cpu.zero_flag()) cpu.state_.pc += 0x01BD;

    // F41A: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // F41C: BRA $01BF
    cpu.state_.pc += 0x01BF;

    // F41E: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // F420: LEAY -$1,Y
    // TODO: Fix comma operator: LEAY -$1,Y

    // F422: BNE $018A
    if (!cpu.zero_flag()) cpu.state_.pc += 0x018A;

    // F424: CMPU #$F340
    // TODO: Convert CMPU #$F340

    // F428: BCS $0184
    if (cpu.carry_flag()) cpu.state_.pc += 0x0184;

    // F42A: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F42C: ANDB #$01
    cpu.state_.b &= 0x01;

    // F42E: BNE $01DE
    if (!cpu.zero_flag()) cpu.state_.pc += 0x01DE;

    // F430: LDX #$4500
    cpu.state_.x = 0x4500;

    // F433: LDU #$4C00
    cpu.state_.u = 0x4C00;

    // F436: LDD ,X++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.x++);

    // F438: STD ,U++
    cpu.write_memory(cpu.state_.u++, cpu.state_.d);

    // F43A: CMPX #$4600
    cpu.compare_x(0x4600);

    // F43D: BCS $01D5
    if (cpu.carry_flag()) cpu.state_.pc += 0x01D5;

    // F43F: LDU #$F342
    cpu.state_.u = 0xF342;

    // F442: LDX #$4500
    cpu.state_.x = 0x4500;

    // F445: LDD #$0000
    cpu.state_.d = 0x0000;

    // F448: STD ,X++
    cpu.write_memory(cpu.state_.x++, cpu.state_.d);

    // F44A: CMPX #$4600
    cpu.compare_x(0x4600);

    // F44D: BCS $01E7
    if (cpu.carry_flag()) cpu.state_.pc += 0x01E7;

    // F44F: LDX #$4500
    cpu.state_.x = 0x4500;

    // F452: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // F454: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // F456: BEQ $0203
    if (cpu.zero_flag()) cpu.state_.pc += 0x0203;

    // F458: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F45A: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F45D: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F460: TFR D,D
    cpu.state_.d = cpu.state_.d;

}

} // namespace StarWars