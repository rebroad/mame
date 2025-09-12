#include "cpu_6809.h"

namespace StarWars {

void routine_ff24_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_ff24.md
    // Address: 0xFF24

    // FF24: LDA #$00
    cpu.state_.a = 0x00;

    // FF26: STA $4686
    cpu.write_memory(0x4686, cpu.state_.a);

    // FF29: STA $4683
    cpu.write_memory(0x4683, cpu.state_.a);

    // FF2C: STA $4682
    cpu.write_memory(0x4682, cpu.state_.a);

    // FF2F: LDX #$0000
    cpu.state_.x = 0x0000;

    // FF32: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // FF35: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // FF37: CMPX #$5600
    cpu.compare_x(0x5600);

    // FF3A: BCS $000E
    if (cpu.carry_flag()) cpu.state_.pc = 0xFF4A;

    // FF3C: LDA #$FF
    cpu.state_.a = 0xFF;

    // FF3E: STA $4686
    cpu.write_memory(0x4686, cpu.state_.a);

    // FF41: STA $4683
    cpu.write_memory(0x4683, cpu.state_.a);

    // FF44: STA $4682
    cpu.write_memory(0x4682, cpu.state_.a);

    // FF47: LDX #$0000
    cpu.state_.x = 0x0000;

    // FF4A: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // FF4D: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // FF4F: CMPX #$5600
    cpu.compare_x(0x5600);

    // FF52: BCS $0026
    if (cpu.carry_flag()) cpu.state_.pc = 0xFF7A;

    // FF54: JMP $FD07
    cpu.state_.pc = 0xFD07;

    // FF57: LDA [$C840]
    // TODO: Unrecognized operand: [$C840]

    // FF5B: LDA <$1F
    cpu.state_.a = cpu.read_memory(0x1F);

    // FF5D: LSR -$10,X
    // TODO: Convert LSR -$10,X

    // FF60: SUBA -$C,S
    // TODO: Fix comma operator: SUBA -$C,S

    // FF62: LDA $0,Y
    // TODO: Fix comma operator: LDA $0,Y

    // FF64: XDEC $6EE0
    // TODO: Convert XDEC $6EE0

    // FF67: TST $E8AE
    // TODO: Convert TST $E8AE

    // FF6B: ASL $9207
    // TODO: Convert ASL $9207

    // FF6E: ANDB >$0018
    cpu.state_.b &= 0x0018;

    // FF71: ADCB $0,U
    // TODO: Convert ADCB $0,U

    // FF73: ORA <$F5
    cpu.state_.a |= 0xF5;

    // FF75: SUBA $3807
    cpu.state_.a -= 0x3807;

    // FF78: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FF7B: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FF7E: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FF81: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FF84: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FF87: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FF8A: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FF8D: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FF90: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FF93: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FF96: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FF99: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FF9C: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FF9F: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFA2: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFA5: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFA8: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFAB: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFAE: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFB1: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFB4: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFB7: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFBA: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFBD: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFC0: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFC3: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFC6: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFC9: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFCC: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFCF: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFD2: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFD5: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFD8: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // FFDB: STU $434F
    cpu.write_memory(0x434F, cpu.state_.u);

    // FFE5: BRA $00F4
    cpu.state_.pc = 0xFFDB;

    // FFE8: XANDCC #$33
    // TODO: Convert XANDCC #$33

    // FFEA: BRA $0109
    cpu.state_.pc = 0xFFF5;

    // FFF0: INC <$85
    // TODO: Convert INC <$85

    // FFF2: STU -$C,U
    // TODO: Handle indexed addressing: STU -$C,U

    // FFF4: STU -$C,U
    // TODO: Handle indexed addressing: STU -$C,U

    // FFF6: STU -$C,U
    // TODO: Handle indexed addressing: STU -$C,U

    // FFF8: STU -$A,U
    // TODO: Handle indexed addressing: STU -$A,U

    // FFFA: STU -$C,U
    // TODO: Handle indexed addressing: STU -$C,U

    // FFFC: STU -$C,U
    // TODO: Handle indexed addressing: STU -$C,U

    // FFFE: SBCB $6100
    // TODO: Convert SBCB $6100

}

} // namespace StarWars