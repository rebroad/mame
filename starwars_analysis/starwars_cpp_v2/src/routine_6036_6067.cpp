#include "cpu_6809.h"

namespace StarWars {

void routine_6036_6067_impl(CPU6809& cpu) {
    // Converted from rom_disasm_6036_6067.md
    // Address: 0x6036_6067

    label_6036:
    // 6036: LDA <$41
    cpu.m_a = cpu.read_memory(0x41);
    // 6038: CMPA #$3D
    cpu.compare_a(0x3D);
    // 603A: BCC $603A
    if (!cpu.carry_flag()) cpu.m_pc = 0x603A;
    // 603C: ASLA 
    cpu.m_a <<= 1;
    // 603D: LDX #$6044
    cpu.m_x = 0x6044;
    // 6040: JSR [A,X]
    // TODO: Complex indexed addressing: [A,X]
    // 6042: BRA $6005
    goto label_6005;
    // 6044: XNC -$B,S
    // TODO: Convert XNC -$B,S
    // 6046: LSR ,-S
    // TODO: Convert LSR ,-S
    // 6048: LSR [,S++]
    // TODO: Convert LSR [,S++]
    // 604A: LSR -$D,X
    // TODO: Convert LSR -$D,X
    // 604C: LSR -$E,Y
    // TODO: Convert LSR -$E,Y
    // 604E: ASR $8,X
    // TODO: Convert ASR $8,X
    // 6050: ASR $B,S
    // TODO: Convert ASR $B,S
    // 6052: XNC ,S
    // TODO: Convert XNC ,S
    // 6054: COM $6,X
    // TODO: Convert COM $6,X
    // 6056: COM $6,Y
    // TODO: Convert COM $6,Y
    // 6058: COM $8,U
    // TODO: Convert COM $8,U
    // 605A: LSR -$7,U
    // TODO: Convert LSR -$7,U
    // 605C: LSR ,--X
    // TODO: Convert LSR ,--X
    // 605E: LSR $C,S
    // TODO: Convert LSR $C,S
    // 6060: LSR [$6670]
    // TODO: Convert LSR [$6670]
    // 6064: ROR $60D4,PCR
    // TODO: Convert ROR $60D4,PCR
    // 6067: RTI 
    // TODO: Convert RTI 
}

} // namespace StarWars