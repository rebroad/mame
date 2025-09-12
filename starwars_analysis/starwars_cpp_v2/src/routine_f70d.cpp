#include "cpu_6809.h"

namespace StarWars {

void routine_f70d_impl(CPU6809& cpu) {
    // Converted from rom_disasm_f70d.md
    // Address: 0xF70D

    // F70D: LDD #$2020
    cpu.m_d = 0x2020;

    // F710: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F712: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F714: STA $4600
    cpu.write_memory(0x4600, cpu.m_a);

    // F717: LDA $4300
    cpu.m_a = cpu.read_memory(0x4300);

    // F71A: ANDA #$10
    cpu.m_a &= 0x10;

    // F71C: LBEQ $F65C
    // TODO: Convert LBEQ $F65C

    // F720: JMP $F720
    cpu.m_pc = 0xF720;

    // F723: STB $4FF7
    cpu.write_memory(0x4FF7, cpu.m_b);

    // F726: CLR $F958
    cpu.write_memory(0xF958, 0);

    // F729: EORB $8CF8
    cpu.m_b ^= 0x8CF8;

    // F72C: ANDA #$F8
    cpu.m_a &= 0xF8;

    // F72E: ANDA <$F8
    cpu.m_a &= 0xF8;

    // F730: ORA [-$34,S]
    // TODO: Complex indexed addressing: [-$34,S]

    // F733: ADCB $3F64
    // TODO: Convert ADCB $3F64

    // F736: SUBA #$62
    cpu.m_a -= 0x62;

    // F738: SUBA #$61
    cpu.m_a -= 0x61;

    // F73A: SUBA #$65
    cpu.m_a -= 0x65;

    // F73C: SUBA #$67
    cpu.m_a -= 0x67;

    // F73E: SUBA #$66
    cpu.m_a -= 0x66;

    // F740: SUBA #$63
    cpu.m_a -= 0x63;

    // F742: SUBA #$1F
    cpu.m_a -= 0x1F;

    // F744: XANDCC #$1F
    // TODO: Convert XANDCC #$1F

    // F746: ROR <$1E
    // TODO: Convert ROR <$1E

    // F748: ANDB <$1E
    cpu.m_b &= 0x1E;

    // F74A: SBCA -$2,X
    // TODO: Convert SBCA -$2,X

    // F74C: NEG $1F6A
    // TODO: Convert NEG $1F6A

    // F74F: DEC <$D6
    // TODO: Convert DEC <$D6

    // F751: BPL $F77C
    if (!cpu.negative_flag()) cpu.m_pc = 0xF77C;

    // F753: LDA #$10
    cpu.m_a = 0x10;

    // F755: STA <$D6
    cpu.write_memory(0xD6, cpu.m_a);

    // F757: LDX <$D4
    cpu.m_x = cpu.read_memory16(0xD4);

    // F759: LDD <$D2
    cpu.m_d = cpu.read_memory16(0xD2);

    // F75B: ANDA ,X
    // TODO: Complex indexed addressing: ,X

    // F75D: BNE $F767
    if (!cpu.zero_flag()) cpu.m_pc = 0xF767;

    // F75F: ANDB $1,X
    // TODO: Fix comma operator: ANDB $1,X

    // F761: BNE $F767
    if (!cpu.zero_flag()) cpu.m_pc = 0xF767;

    // F763: LDA #$3B
    cpu.m_a = 0x3B;

    // F765: BRA $F769
    cpu.m_pc = 0xF769;

    // F767: LDA #$29
    cpu.m_a = 0x29;

    // F769: STA $4400
    cpu.write_memory(0x4400, cpu.m_a);

    // F76C: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // F76E: CMPX #$F36E
    cpu.compare_x(0xF36E);

    // F771: BCS $F77A
    if (cpu.carry_flag()) cpu.m_pc = 0xF77A;

    // F773: LDA #$20
    cpu.m_a = 0x20;

    // F775: STA <$D6
    cpu.write_memory(0xD6, cpu.m_a);

    // F777: LDX #$F34E
    cpu.m_x = 0xF34E;

    // F77A: STX <$D4
    cpu.write_memory16(0xD4, cpu.m_x);

    // F77C: JMP $F714
    cpu.m_pc = 0xF714;

    // F77F: STA $46C0
    cpu.write_memory(0x46C0, cpu.m_a);

    // F782: STA $46C0
    cpu.write_memory(0x46C0, cpu.m_a);

    // F785: LDD #$BFAE
    cpu.m_d = 0xBFAE;

    // F788: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F78A: LDD #$8040
    cpu.m_d = 0x8040;

    // F78D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F78F: LDS #$4FFF
    cpu.m_sp = 0x4FFF;

    // F793: LDB #$9E
    cpu.m_b = 0x9E;

    // F795: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F798: LDB #$D3
    cpu.m_b = 0xD3;

    // F79A: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F79D: LDB #$9F
    cpu.m_b = 0x9F;

    // F79F: STB <$CE
    cpu.write_memory(0xCE, cpu.m_b);

    // F7A1: LDA $4300
    cpu.m_a = cpu.read_memory(0x4300);

    // F7A4: LDB $4320
    cpu.m_b = cpu.read_memory(0x4320);

    // F7A7: ORB #$C7
    cpu.m_b |= 0xC7;

    // F7A9: STD <$CC
    cpu.write_memory16(0xCC, cpu.m_d);

    // F7AD: STD <$CC
    cpu.write_memory16(0xCC, cpu.m_d);

    // F7AF: BCS $F7B6
    if (cpu.carry_flag()) cpu.m_pc = 0xF7B6;

    // F7B1: LDB <$CE
    cpu.m_b = cpu.read_memory(0xCE);

    // F7B3: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F7B6: INC <$CE
    // TODO: Convert INC <$CE

    // F7B8: LDD <$CC
    cpu.m_d = cpu.read_memory16(0xCC);

    // F7BA: BNE $F7AB
    if (!cpu.zero_flag()) cpu.m_pc = 0xF7AB;

    // F7BC: LDD <$C8
    cpu.m_d = cpu.read_memory16(0xC8);

    // F7BE: STD <$CA
    cpu.write_memory16(0xCA, cpu.m_d);

    // F7C0: LDA $4300
    cpu.m_a = cpu.read_memory(0x4300);

    // F7C3: ANDA #$CF
    cpu.m_a &= 0xCF;

    // F7C5: LDB $4320
    cpu.m_b = cpu.read_memory(0x4320);

    // F7C8: ANDB #$3A
    cpu.m_b &= 0x3A;

    // F7CA: STD <$C8
    cpu.write_memory16(0xC8, cpu.m_d);

    // F7CC: EORA <$CA
    cpu.m_a ^= 0xCA;

    // F7CE: ANDA <$CA
    cpu.m_a &= 0xCA;

    // F7D0: EORB <$CB
    cpu.m_b ^= 0xCB;

    // F7D2: ANDB <$CB
    cpu.m_b &= 0xCB;

    // F7D4: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // F7D8: BEQ $F7DF
    if (cpu.zero_flag()) cpu.m_pc = 0xF7DF;

    // F7DA: LDA #$3B
    cpu.m_a = 0x3B;

    // F7DC: STA $4400
    cpu.write_memory(0x4400, cpu.m_a);

    // F7DF: LDD #$1EA2
    cpu.m_d = 0x1EA2;

    // F7E2: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F7E4: LDD #$1F74
    cpu.m_d = 0x1F74;

    // F7E7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F7E9: LDA #$10
    cpu.m_a = 0x10;

    // F7EB: JSR $E790
    cpu.call_function(0xE790);

    // F7EE: LDD $301E
    cpu.m_d = cpu.read_memory16(0x301E);

    // F7F1: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F7F3: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    // F7F6: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F7F8: LDA $4340
    cpu.m_a = cpu.read_memory(0x4340);

    // F7FB: JSR $F86C
    cpu.call_function(0xF86C);

    // F7FE: LDD #$1E70
    cpu.m_d = 0x1E70;

    // F801: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F803: LDD #$1F5C
    cpu.m_d = 0x1F5C;

    // F806: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F808: LDA #$10
    cpu.m_a = 0x10;

    // F80A: JSR $E790
    cpu.call_function(0xE790);

    // F80D: LDD $3020
    cpu.m_d = cpu.read_memory16(0x3020);

    // F810: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F812: LDD $3022
    cpu.m_d = cpu.read_memory16(0x3022);

    // F815: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F817: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    // F81A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F81C: LDA $4360
    cpu.m_a = cpu.read_memory(0x4360);

    // F81F: JSR $F86C
    cpu.call_function(0xF86C);

    // F822: LDB #$AF
    cpu.m_b = 0xAF;

    // F824: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F827: LDD #$BFD5
    cpu.m_d = 0xBFD5;

    // F82A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F82C: LDD #$0000
    cpu.m_d = 0x0000;

    // F82F: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F831: LDD #$0140
    cpu.m_d = 0x0140;

    // F834: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F836: LDB $4380
    cpu.m_b = cpu.read_memory(0x4380);

    // F839: SUBB #$80
    cpu.m_b -= 0x80;

    // F83C: TFR D,U
    cpu.m_u = cpu.m_d;

    // F840: LEAU D,U
    // TODO: Fix comma operator: LEAU D,U

    // F842: TFR U,D
    cpu.m_d = cpu.m_u;

    // F844: ANDA #$1F
    cpu.m_a &= 0x1F;

    // F846: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F848: STA $46C1
    cpu.write_memory(0x46C1, cpu.m_a);

    // F84B: STA $46C1
    cpu.write_memory(0x46C1, cpu.m_a);

    // F84E: LDX #$0014
    cpu.m_x = 0x0014;

    // F851: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // F853: BNE $F851
    if (!cpu.zero_flag()) cpu.m_pc = 0xF851;

    // F855: LDB $4380
    cpu.m_b = cpu.read_memory(0x4380);

    // F858: SUBB #$80
    cpu.m_b -= 0x80;

    // F85B: ANDA #$1F
    cpu.m_a &= 0x1F;

    // F85D: ORA #$E0
    cpu.m_a |= 0xE0;

    // F85F: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F861: LDD #$8040
    cpu.m_d = 0x8040;

    // F864: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F866: LDU #$F725
    cpu.m_u = 0xF725;

    // F869: JMP $F70D
    cpu.m_pc = 0xF70D;

    // F86C: LDB #$07
    cpu.m_b = 0x07;

    // F86F: BCC $F876
    if (!cpu.carry_flag()) cpu.m_pc = 0xF876;

    // F871: LDX $3022
    cpu.m_x = cpu.read_memory16(0x3022);

    // F874: BRA $F879
    cpu.m_pc = 0xF879;

    // F876: LDX $3032
    cpu.m_x = cpu.read_memory16(0x3032);

    // F879: STX ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_x);

    // F87C: BPL $F86E
    if (!cpu.negative_flag()) cpu.m_pc = 0xF86E;

    // F87E: LDD #$8040
    cpu.m_d = 0x8040;

    // F881: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F884: LDD #$BF20
    cpu.m_d = 0xBF20;

    // F887: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F889: JMP $F70D
    cpu.m_pc = 0xF70D;

    // F88C: LDD #$BEFD
    cpu.m_d = 0xBEFD;

    // F88F: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F891: JMP $F70D
    cpu.m_pc = 0xF70D;

    // F894: LDD #$BEA7
    cpu.m_d = 0xBEA7;

    // F897: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F899: LDB #$CE
    cpu.m_b = 0xCE;

    // F89B: STB <$CE
    cpu.write_memory(0xCE, cpu.m_b);

    // F89D: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F8A0: LDB <$CE
    cpu.m_b = cpu.read_memory(0xCE);

    // F8A3: CMPB #$D3
    cpu.compare_b(0xD3);

    // F8A5: BCS $F89B
    if (cpu.carry_flag()) cpu.m_pc = 0xF89B;

    // F8A7: JMP $F70D
    cpu.m_pc = 0xF70D;

    // F8AA: LDD #$BFAE
    cpu.m_d = 0xBFAE;

    // F8AD: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F8AF: LDD #$BFB3
    cpu.m_d = 0xBFB3;

    // F8B2: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F8B4: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F8B6: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F8B8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F8BA: LDD #$8040
    cpu.m_d = 0x8040;

    // F8BD: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F8BF: LDB #$C9
    cpu.m_b = 0xC9;

    // F8C1: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F8C4: LDB #$CA
    cpu.m_b = 0xCA;

    // F8C6: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F8C9: JMP $F70D
    cpu.m_pc = 0xF70D;

    // F8CC: LDA <$C6
    cpu.m_a = cpu.read_memory(0xC6);

    // F8CE: CMPA #$01
    cpu.compare_a(0x01);

    // F8D0: BHI $F8D9
    // TODO: Convert BHI $F8D9

    // F8D2: LDD #$0000
    cpu.m_d = 0x0000;

    // F8D5: STD <$C2
    cpu.write_memory16(0xC2, cpu.m_d);

    // F8D7: STA <$C4
    cpu.write_memory(0xC4, cpu.m_a);

    // F8D9: LDD #$6000
    cpu.m_d = 0x6000;

    // F8DC: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F8DE: LDD #$BFAF
    cpu.m_d = 0xBFAF;

    // F8E1: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F8E3: LDD #$8040
    cpu.m_d = 0x8040;

    // F8E6: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F8E8: LDD <$C2
    cpu.m_d = cpu.read_memory16(0xC2);

    // F8EA: ADDD #$0001
    cpu.m_d += 0x0001;

    // F8ED: TST <$C4
    // TODO: Convert TST <$C4

    // F8EF: BNE $F900
    if (!cpu.zero_flag()) cpu.m_pc = 0xF900;

    // F8F1: CMPB #$FC
    cpu.compare_b(0xFC);

    // F8F3: BCS $F8FC
    if (cpu.carry_flag()) cpu.m_pc = 0xF8FC;

    // F8F5: LDA #$01
    cpu.m_a = 0x01;

    // F8F7: STA <$C4
    cpu.write_memory(0xC4, cpu.m_a);

    // F8F9: LDD #$0000
    cpu.m_d = 0x0000;

    // F8FC: STD <$C2
    cpu.write_memory16(0xC2, cpu.m_d);

    // F8FE: BRA $F917
    cpu.m_pc = 0xF917;

    // F900: CMPB #$B0
    cpu.compare_b(0xB0);

    // F902: BCS $F906
    if (cpu.carry_flag()) cpu.m_pc = 0xF906;

    // F906: CMPA #$08
    cpu.compare_a(0x08);

    // F908: BCS $F90F
    if (cpu.carry_flag()) cpu.m_pc = 0xF90F;

    // F90A: CLR <$C4
    cpu.write_memory(0xC4, 0);

    // F90C: LDD #$0000
    cpu.m_d = 0x0000;

}

} // namespace StarWars