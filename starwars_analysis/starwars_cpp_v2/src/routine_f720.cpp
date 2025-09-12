#include "cpu_6809.h"

namespace StarWars {

void routine_f720_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_f720.md
    // Address: 0xF720

    // F720: JMP $F720
    cpu.state_.pc = 0xF720;

    // F723: STB $4FF7
    cpu.write_memory(0x4FF7, cpu.state_.b);

    // F726: CLR $F958
    cpu.write_memory(0xF958, 0);

    // F729: EORB $8CF8
    cpu.state_.b ^= 0x8CF8;

    // F72C: ANDA #$F8
    cpu.state_.a &= 0xF8;

    // F72E: ANDA <$F8
    cpu.state_.a &= 0xF8;

    // F730: ORA [-$34,S]
    // TODO: Complex indexed addressing: [-$34,S]

    // F733: ADCB $3F64
    // TODO: Convert ADCB $3F64

    // F736: SUBA #$62
    cpu.state_.a -= 0x62;

    // F738: SUBA #$61
    cpu.state_.a -= 0x61;

    // F73A: SUBA #$65
    cpu.state_.a -= 0x65;

    // F73C: SUBA #$67
    cpu.state_.a -= 0x67;

    // F73E: SUBA #$66
    cpu.state_.a -= 0x66;

    // F740: SUBA #$63
    cpu.state_.a -= 0x63;

    // F742: SUBA #$1F
    cpu.state_.a -= 0x1F;

    // F744: XANDCC #$1F
    // TODO: Convert XANDCC #$1F

    // F746: ROR <$1E
    // TODO: Convert ROR <$1E

    // F748: ANDB <$1E
    cpu.state_.b &= 0x1E;

    // F74A: SBCA -$2,X
    // TODO: Convert SBCA -$2,X

    // F74C: NEG $1F6A
    // TODO: Convert NEG $1F6A

    // F74F: DEC <$D6
    // TODO: Convert DEC <$D6

    // F751: BPL $005C
    if (!cpu.negative_flag()) cpu.state_.pc = 0xF7AF;

    // F753: LDA #$10
    cpu.state_.a = 0x10;

    // F755: STA <$D6
    cpu.write_memory(0xD6, cpu.state_.a);

    // F757: LDX <$D4
    cpu.state_.x = cpu.read_memory_word(0xD4);

    // F759: LDD <$D2
    cpu.state_.d = cpu.read_memory_word(0xD2);

    // F75B: ANDA ,X
    // TODO: Complex indexed addressing: ,X

    // F75D: BNE $0047
    if (!cpu.zero_flag()) cpu.state_.pc = 0xF7A6;

    // F75F: ANDB $1,X
    // TODO: Fix comma operator: ANDB $1,X

    // F761: BNE $0047
    if (!cpu.zero_flag()) cpu.state_.pc = 0xF7AA;

    // F763: LDA #$3B
    cpu.state_.a = 0x3B;

    // F765: BRA $0049
    cpu.state_.pc = 0xF7B0;

    // F767: LDA #$29
    cpu.state_.a = 0x29;

    // F769: STA $4400
    cpu.write_memory(0x4400, cpu.state_.a);

    // F76C: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // F76E: CMPX #$F36E
    cpu.compare_x(0xF36E);

    // F771: BCS $005A
    if (cpu.carry_flag()) cpu.state_.pc = 0xF7CD;

    // F773: LDA #$20
    cpu.state_.a = 0x20;

    // F775: STA <$D6
    cpu.write_memory(0xD6, cpu.state_.a);

    // F777: LDX #$F34E
    cpu.state_.x = 0xF34E;

    // F77A: STX <$D4
    cpu.write_memory(0xD4, cpu.state_.x);

    // F77C: JMP $F714
    cpu.state_.pc = 0xF714;

    // F77F: STA $46C0
    cpu.write_memory(0x46C0, cpu.state_.a);

    // F782: STA $46C0
    cpu.write_memory(0x46C0, cpu.state_.a);

    // F785: LDD #$BFAE
    cpu.state_.d = 0xBFAE;

    // F788: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F78A: LDD #$8040
    cpu.state_.d = 0x8040;

    // F78D: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F78F: LDS #$4FFF
    cpu.state_.sp = 0x4FFF;

    // F793: LDB #$9E
    cpu.state_.b = 0x9E;

    // F795: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F798: LDB #$D3
    cpu.state_.b = 0xD3;

    // F79A: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F79D: LDB #$9F
    cpu.state_.b = 0x9F;

    // F79F: STB <$CE
    cpu.write_memory(0xCE, cpu.state_.b);

    // F7A1: LDA $4300
    cpu.state_.a = cpu.read_memory(0x4300);

    // F7A4: LDB $4320
    cpu.state_.b = cpu.read_memory(0x4320);

    // F7A7: ORB #$C7
    cpu.state_.b |= 0xC7;

    // F7A9: STD <$CC
    cpu.write_memory(0xCC, cpu.state_.d);

    // F7AD: STD <$CC
    cpu.write_memory(0xCC, cpu.state_.d);

    // F7AF: BCS $0096
    if (cpu.carry_flag()) cpu.state_.pc = 0xF847;

    // F7B1: LDB <$CE
    cpu.state_.b = cpu.read_memory(0xCE);

    // F7B3: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F7B6: INC <$CE
    // TODO: Convert INC <$CE

    // F7B8: LDD <$CC
    cpu.state_.d = cpu.read_memory_word(0xCC);

    // F7BA: BNE $008B
    if (!cpu.zero_flag()) cpu.state_.pc = 0xF847;

    // F7BC: LDD <$C8
    cpu.state_.d = cpu.read_memory_word(0xC8);

    // F7BE: STD <$CA
    cpu.write_memory(0xCA, cpu.state_.d);

    // F7C0: LDA $4300
    cpu.state_.a = cpu.read_memory(0x4300);

    // F7C3: ANDA #$CF
    cpu.state_.a &= 0xCF;

    // F7C5: LDB $4320
    cpu.state_.b = cpu.read_memory(0x4320);

    // F7C8: ANDB #$3A
    cpu.state_.b &= 0x3A;

    // F7CA: STD <$C8
    cpu.write_memory(0xC8, cpu.state_.d);

    // F7CC: EORA <$CA
    cpu.state_.a ^= 0xCA;

    // F7CE: ANDA <$CA
    cpu.state_.a &= 0xCA;

    // F7D0: EORB <$CB
    cpu.state_.b ^= 0xCB;

    // F7D2: ANDB <$CB
    cpu.state_.b &= 0xCB;

    // F7D4: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // F7D8: BEQ $00BF
    if (cpu.zero_flag()) cpu.state_.pc = 0xF899;

    // F7DA: LDA #$3B
    cpu.state_.a = 0x3B;

    // F7DC: STA $4400
    cpu.write_memory(0x4400, cpu.state_.a);

    // F7DF: LDD #$1EA2
    cpu.state_.d = 0x1EA2;

    // F7E2: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F7E4: LDD #$1F74
    cpu.state_.d = 0x1F74;

    // F7E7: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F7E9: LDA #$10
    cpu.state_.a = 0x10;

    // F7EB: JSR $E790
    cpu.call_function(0xE790);

    // F7EE: LDD $301E
    cpu.state_.d = cpu.read_memory_word(0x301E);

    // F7F1: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F7F3: LDD $3002
    cpu.state_.d = cpu.read_memory_word(0x3002);

    // F7F6: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F7F8: LDA $4340
    cpu.state_.a = cpu.read_memory(0x4340);

    // F7FB: JSR $F86C
    cpu.call_function(0xF86C);

    // F7FE: LDD #$1E70
    cpu.state_.d = 0x1E70;

    // F801: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F803: LDD #$1F5C
    cpu.state_.d = 0x1F5C;

    // F806: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F808: LDA #$10
    cpu.state_.a = 0x10;

    // F80A: JSR $E790
    cpu.call_function(0xE790);

    // F80D: LDD $3020
    cpu.state_.d = cpu.read_memory_word(0x3020);

    // F810: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F812: LDD $3022
    cpu.state_.d = cpu.read_memory_word(0x3022);

    // F815: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F817: LDD $3002
    cpu.state_.d = cpu.read_memory_word(0x3002);

    // F81A: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F81C: LDA $4360
    cpu.state_.a = cpu.read_memory(0x4360);

    // F81F: JSR $F86C
    cpu.call_function(0xF86C);

    // F822: LDB #$AF
    cpu.state_.b = 0xAF;

    // F824: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F827: LDD #$BFD5
    cpu.state_.d = 0xBFD5;

    // F82A: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F82C: LDD #$0000
    cpu.state_.d = 0x0000;

    // F82F: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F831: LDD #$0140
    cpu.state_.d = 0x0140;

    // F834: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F836: LDB $4380
    cpu.state_.b = cpu.read_memory(0x4380);

    // F839: SUBB #$80
    cpu.state_.b -= 0x80;

    // F83C: TFR D,U
    cpu.state_.u = cpu.state_.d;

    // F840: LEAU D,U
    // TODO: Fix comma operator: LEAU D,U

    // F842: TFR U,D
    cpu.state_.d = cpu.state_.u;

    // F844: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // F846: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F848: STA $46C1
    cpu.write_memory(0x46C1, cpu.state_.a);

    // F84B: STA $46C1
    cpu.write_memory(0x46C1, cpu.state_.a);

    // F84E: LDX #$0014
    cpu.state_.x = 0x0014;

    // F851: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // F853: BNE $0131
    if (!cpu.zero_flag()) cpu.state_.pc = 0xF986;

    // F855: LDB $4380
    cpu.state_.b = cpu.read_memory(0x4380);

    // F858: SUBB #$80
    cpu.state_.b -= 0x80;

    // F85B: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // F85D: ORA #$E0
    cpu.state_.a |= 0xE0;

    // F85F: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F861: LDD #$8040
    cpu.state_.d = 0x8040;

    // F864: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F866: LDU #$F725
    cpu.state_.u = 0xF725;

    // F869: JMP $F70D
    cpu.state_.pc = 0xF70D;

    // F86C: LDB #$07
    cpu.state_.b = 0x07;

    // F86F: BCC $0156
    if (!cpu.carry_flag()) cpu.state_.pc = 0xF9C7;

    // F871: LDX $3022
    cpu.state_.x = cpu.read_memory_word(0x3022);

    // F874: BRA $0159
    cpu.state_.pc = 0xF9CF;

    // F876: LDX $3032
    cpu.state_.x = cpu.read_memory_word(0x3032);

    // F879: STX ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.x);

    // F87C: BPL $014E
    if (!cpu.negative_flag()) cpu.state_.pc = 0xF9CC;

    // F87E: LDD #$8040
    cpu.state_.d = 0x8040;

    // F881: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F884: LDD #$BF20
    cpu.state_.d = 0xBF20;

    // F887: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F889: JMP $F70D
    cpu.state_.pc = 0xF70D;

    // F88C: LDD #$BEFD
    cpu.state_.d = 0xBEFD;

    // F88F: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F891: JMP $F70D
    cpu.state_.pc = 0xF70D;

    // F894: LDD #$BEA7
    cpu.state_.d = 0xBEA7;

    // F897: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F899: LDB #$CE
    cpu.state_.b = 0xCE;

    // F89B: STB <$CE
    cpu.write_memory(0xCE, cpu.state_.b);

    // F89D: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F8A0: LDB <$CE
    cpu.state_.b = cpu.read_memory(0xCE);

    // F8A3: CMPB #$D3
    cpu.compare_b(0xD3);

    // F8A5: BCS $017B
    if (cpu.carry_flag()) cpu.state_.pc = 0xFA22;

    // F8A7: JMP $F70D
    cpu.state_.pc = 0xF70D;

    // F8AA: LDD #$BFAE
    cpu.state_.d = 0xBFAE;

    // F8AD: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F8AF: LDD #$BFB3
    cpu.state_.d = 0xBFB3;

    // F8B2: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F8B4: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F8B6: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F8B8: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F8BA: LDD #$8040
    cpu.state_.d = 0x8040;

    // F8BD: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F8BF: LDB #$C9
    cpu.state_.b = 0xC9;

    // F8C1: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F8C4: LDB #$CA
    cpu.state_.b = 0xCA;

    // F8C6: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F8C9: JMP $F70D
    cpu.state_.pc = 0xF70D;

    // F8CC: LDA <$C6
    cpu.state_.a = cpu.read_memory(0xC6);

    // F8CE: CMPA #$01
    cpu.compare_a(0x01);

    // F8D0: BHI $01B9
    // TODO: Convert BHI $01B9

    // F8D2: LDD #$0000
    cpu.state_.d = 0x0000;

    // F8D5: STD <$C2
    cpu.write_memory(0xC2, cpu.state_.d);

    // F8D7: STA <$C4
    cpu.write_memory(0xC4, cpu.state_.a);

    // F8D9: LDD #$6000
    cpu.state_.d = 0x6000;

    // F8DC: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F8DE: LDD #$BFAF
    cpu.state_.d = 0xBFAF;

    // F8E1: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F8E3: LDD #$8040
    cpu.state_.d = 0x8040;

    // F8E6: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F8E8: LDD <$C2
    cpu.state_.d = cpu.read_memory_word(0xC2);

    // F8EA: ADDD #$0001
    cpu.state_.d += 0x0001;

    // F8ED: TST <$C4
    // TODO: Convert TST <$C4

    // F8EF: BNE $01E0
    if (!cpu.zero_flag()) cpu.state_.pc = 0xFAD1;

    // F8F1: CMPB #$FC
    cpu.compare_b(0xFC);

    // F8F3: BCS $01DC
    if (cpu.carry_flag()) cpu.state_.pc = 0xFAD1;

    // F8F5: LDA #$01
    cpu.state_.a = 0x01;

    // F8F7: STA <$C4
    cpu.write_memory(0xC4, cpu.state_.a);

    // F8F9: LDD #$0000
    cpu.state_.d = 0x0000;

    // F8FC: STD <$C2
    cpu.write_memory(0xC2, cpu.state_.d);

    // F8FE: BRA $01F7
    cpu.state_.pc = 0xFAF7;

    // F900: CMPB #$B0
    cpu.compare_b(0xB0);

    // F902: BCS $01E6
    if (cpu.carry_flag()) cpu.state_.pc = 0xFAEA;

    // F906: CMPA #$08
    cpu.compare_a(0x08);

    // F908: BCS $01EF
    if (cpu.carry_flag()) cpu.state_.pc = 0xFAF9;

    // F90A: CLR <$C4
    cpu.write_memory(0xC4, 0);

    // F90C: LDD #$0000
    cpu.state_.d = 0x0000;

    // F90F: STD <$C2
    cpu.write_memory(0xC2, cpu.state_.d);

    // F911: CMPB #$7F
    cpu.compare_b(0x7F);

    // F913: BCS $01F7
    if (cpu.carry_flag()) cpu.state_.pc = 0xFB0C;

    // F915: LDB #$7F
    cpu.state_.b = 0x7F;

    // F917: ORA #$70
    cpu.state_.a |= 0x70;

    // F919: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F91B: LDD #$6280
    cpu.state_.d = 0x6280;

    // F91E: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

}

} // namespace StarWars