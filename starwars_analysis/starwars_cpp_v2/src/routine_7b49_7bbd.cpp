#include "cpu_6809.h"

namespace StarWars {

void routine_7b49_7bbd_impl(CPU6809& cpu) {
    // Converted from rom_disasm_7b49_7bbd.md
    // Address: 0x7B49_7BBD

    // 7B49: EORB #$80
    cpu.m_b ^= 0x80;

    // 7B4B: LDB #$82
    cpu.m_b = 0x82;

    // 7B4D: LDD <$7F
    cpu.m_d = cpu.read_memory16(0x7F);

    // 7B4F: ASL $82DC
    // TODO: Convert ASL $82DC

    // 7B52: CLR $9782
    cpu.write_memory(0x9782, 0);

    // 7B55: LDD <$81
    cpu.m_d = cpu.read_memory16(0x81);

    // 7B57: ADDD #$82D2
    cpu.m_d += 0x82D2;

    // 7B5A: TST $B182
    // TODO: Convert TST $B182

    // 7B5D: ORB $7E08
    cpu.m_b |= 0x7E08;

    // 7B60: SBCA #$DC
    // TODO: Convert SBCA #$DC

    // 7B62: INC $F882
    // TODO: Convert INC $F882

    // 7B65: EORB #$7D
    cpu.m_b ^= 0x7D;

    // 7B67: ORB #$82
    cpu.m_b |= 0x82;

    // 7B69: LDD <$80
    cpu.m_d = cpu.read_memory16(0x80);

    // 7B6B: ROR ,-X
    // TODO: Convert ROR ,-X

    // 7B6D: LDB ,X+
    // TODO: Complex indexed addressing: ,X+

    // 7B70: SBCA #$BE
    // TODO: Convert SBCA #$BE

    // 7B72: SUBA #$C6
    cpu.m_a -= 0xC6;

    // 7B74: SBCA #$C8
    // TODO: Convert SBCA #$C8

    // 7B76: JMP $3D82
    goto label_3D82;

    // 7B79: SBCB <$82
    // TODO: Convert SBCB <$82

    // 7B7B: ASR ,--X
    // TODO: Convert ASR ,--X

    // 7B7D: BCS $7BFD
    if (cpu.carry_flag()) cpu.m_pc = 0x7BFD;

    // 7B7F: ASL <$82
    // TODO: Convert ASL <$82

    // 7B81: LDD <$7D
    cpu.m_d = cpu.read_memory16(0x7D);

    // 7B84: SBCA #$C8
    // TODO: Convert SBCA #$C8

    // 7B86: JMP $D882
    goto label_D882;

    // 7B89: SUBB $7E75
    cpu.m_b -= 0x7E75;

    // 7B8C: SBCA #$D2
    // TODO: Convert SBCA #$D2

    // 7B8E: CMPA #$35
    cpu.compare_a(0x35);

    // 7B90: SBCA #$D2
    // TODO: Convert SBCA #$D2

    // 7B92: SBCA #$26
    // TODO: Convert SBCA #$26

    // 7B94: SBCA #$C8
    // TODO: Convert SBCA #$C8

    // 7B96: JMP $D882
    goto label_D882;

    // 7B99: SUBB $7E75
    cpu.m_b -= 0x7E75;

    // 7B9C: SUBD #$257E
    cpu.m_d -= 0x257E;

    // 7B9F: ASL <$82
    // TODO: Convert ASL <$82

    // 7BA1: LDD <$82
    cpu.m_d = cpu.read_memory16(0x82);

    // 7BA3: BNE $7B27
    if (!cpu.zero_flag()) cpu.m_pc = 0x7B27;

    // 7BA5: EORB #$81
    cpu.m_b ^= 0x81;

    // 7BA7: DEC <$82
    // TODO: Convert DEC <$82

    // 7BA9: SBCB <$80
    // TODO: Convert SBCB <$80

    // 7BAC: SBCA #$BE
    // TODO: Convert SBCA #$BE

    // 7BAE: SUBA #$66
    cpu.m_a -= 0x66;

    // 7BB0: SBCA #$E6
    // TODO: Convert SBCA #$E6

    // 7BB2: JMP $3D82
    goto label_3D82;

    // 7BB5: SBCB <$7E
    // TODO: Convert SBCB <$7E

    // 7BB7: BRN $7B3B
    // TODO: Convert BRN $7B3B

    // 7BB9: SBCB <$7C
    // TODO: Convert SBCB <$7C

    // 7BBB: LDB <$83
    cpu.m_b = cpu.read_memory(0x83);

    // 7BBD: JMP $7bbd
    goto label_7BBD;

}

} // namespace StarWars