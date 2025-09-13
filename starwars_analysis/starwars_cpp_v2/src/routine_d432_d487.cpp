#include "cpu_6809.h"

namespace StarWars {

void routine_d432_d487_impl(CPU6809& cpu) {
    // Converted from rom_disasm_d432_d487.md
    // Address: 0xD432_D487

    label_D432:
    // D432: ADCA $EF42
    // TODO: Convert ADCA $EF42

    // D435: DEC <$C0
    // TODO: Convert DEC <$C0

    // D437: NEG <$5C
    // TODO: Convert NEG <$5C

    // D439: ROR <$B9
    // TODO: Convert ROR <$B9

    // D43B: STU -$2,U
    // TODO: Handle indexed addressing: STU -$2,U

    // D43D: PSHU PC,S,Y,X,D
    // TODO: Convert PSHU PC,S,Y,X,D

    // D43F: SBCA -$1,U
    // TODO: Convert SBCA -$1,U

    // D443: BVS $D3FE
    // TODO: Convert BVS $D3FE

    // D445: STU -$2,U
    // TODO: Handle indexed addressing: STU -$2,U

    // D447: LBRA $8E39
    // TODO: Convert LBRA $8E39

    // D44B: BHI $D406
    // TODO: Convert BHI $D406

    // D44D: STU $2,U
    // TODO: Handle indexed addressing: STU $2,U

    // D44F: DEC <$B9
    // TODO: Convert DEC <$B9

    // D451: STU $3,U
    // TODO: Handle indexed addressing: STU $3,U

    // D453: PULS CC,DP,X,Y,PC
    // TODO: Convert PULS CC,DP,X,Y,PC

    // D455: STU [A,S]
    // TODO: Handle indexed addressing: STU [A,S]

    // D457: SBCB <$B9
    // TODO: Convert SBCB <$B9

    // D459: STU -$1,U
    // TODO: Handle indexed addressing: STU -$1,U

    // D45D: BPL $D418
    if (!cpu.negative_flag()) cpu.m_pc = 0xD418;

    // D45F: STU $5,U
    // TODO: Handle indexed addressing: STU $5,U

    // D462: ADCA $EF5E
    // TODO: Convert ADCA $EF5E

    // D465: PSHU PC,S,Y,X,D
    // TODO: Convert PSHU PC,S,Y,X,D

    // D467: BITA $B9EF
    // TODO: Convert BITA $B9EF

    // D46B: ANDCC #$B9
    // TODO: Convert ANDCC #$B9

    // D46D: STU $5,U
    // TODO: Handle indexed addressing: STU $5,U

    // D470: ADCA $EF46
    // TODO: Convert ADCA $EF46

    // D473: BCC $D42E
    if (!cpu.carry_flag()) cpu.m_pc = 0xD42E;

    // D475: STU -$4,U
    // TODO: Handle indexed addressing: STU -$4,U

    // D477: BNE $D432
    if (!cpu.zero_flag()) cpu.m_pc = 0xD432;

    // D479: STU -$5,U
    // TODO: Handle indexed addressing: STU -$5,U

    // D47B: BRN $D436
    // TODO: Convert BRN $D436

    // D47D: STU $5,U
    // TODO: Handle indexed addressing: STU $5,U

    // D47F: TFR PC,inv
    cpu.m_inv = cpu.m_pc;

    // D481: PSHU S,A,CC
    // TODO: Convert PSHU S,A,CC

    // D483: CLR <$C0
    cpu.write_memory(0xC0, 0);

    // D485: NEG <$5A
    // TODO: Convert NEG <$5A

    // D487: JMP $d486
    goto label_D486;

}

} // namespace StarWars