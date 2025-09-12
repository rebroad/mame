#include "cpu_6809.h"

namespace StarWars {

void routine_f86c_impl(CPU6809& cpu) {
    // Converted from rom_disasm_f86c.md
    // Address: 0xF86C

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

    // F90F: STD <$C2
    cpu.write_memory16(0xC2, cpu.m_d);

    // F911: CMPB #$7F
    cpu.compare_b(0x7F);

    // F913: BCS $F917
    if (cpu.carry_flag()) cpu.m_pc = 0xF917;

    // F915: LDB #$7F
    cpu.m_b = 0x7F;

    // F917: ORA #$70
    cpu.m_a |= 0x70;

    // F919: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F91B: LDD #$6280
    cpu.m_d = 0x6280;

    // F91E: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F920: LDD #$BFBC
    cpu.m_d = 0xBFBC;

    // F923: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F925: LDD #$7200
    cpu.m_d = 0x7200;

    // F928: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F92A: LDB <$C4
    cpu.m_b = cpu.read_memory(0xC4);

    // F92C: BNE $F932
    if (!cpu.zero_flag()) cpu.m_pc = 0xF932;

    // F92E: LDB #$CC
    cpu.m_b = 0xCC;

    // F930: BRA $F934
    cpu.m_pc = 0xF934;

    // F932: LDB #$CD
    cpu.m_b = 0xCD;

    // F934: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F937: LDB #$CB
    cpu.m_b = 0xCB;

    // F939: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F93C: JMP $F70D
    cpu.m_pc = 0xF70D;

    // F93F: LDD #$BFC8
    cpu.m_d = 0xBFC8;

    // F942: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F944: LDX #$0038
    cpu.m_x = 0x0038;

    // F947: LDD #$BFCC
    cpu.m_d = 0xBFCC;

    // F94A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F94C: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // F94E: BNE $F94A
    if (!cpu.zero_flag()) cpu.m_pc = 0xF94A;

    // F950: LDD #$8040
    cpu.m_d = 0x8040;

    // F953: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F955: JMP $F70D
    cpu.m_pc = 0xF70D;

    // F958: LDD #$BFAE
    cpu.m_d = 0xBFAE;

    // F95B: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F95D: LDD #$8040
    cpu.m_d = 0x8040;

    // F960: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F962: LDD #$7200
    cpu.m_d = 0x7200;

    // F965: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F967: LDS #$4FFF
    cpu.m_sp = 0x4FFF;

    // F96B: LDB #$C2
    cpu.m_b = 0xC2;

    // F96D: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F970: LDA #$5D
    cpu.m_a = 0x5D;

    // F972: STA $4700
    cpu.write_memory(0x4700, cpu.m_a);

    // F975: TST $4320
    // TODO: Convert TST $4320

    // F978: BPL $F97F
    if (!cpu.negative_flag()) cpu.m_pc = 0xF97F;

    // F97A: TST $4320
    // TODO: Convert TST $4320

    // F97D: BPL $F98A
    if (!cpu.negative_flag()) cpu.m_pc = 0xF98A;

    // F97F: LDB #$C3
    cpu.m_b = 0xC3;

    // F981: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F984: LDU #$F727
    cpu.m_u = 0xF727;

    // F987: JMP $F70D
    cpu.m_pc = 0xF70D;

    // F98A: LDD #$6280
    cpu.m_d = 0x6280;

    // F98D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F98F: CLR <$CC
    cpu.write_memory(0xCC, 0);

    // F991: LDX #$FB4B
    cpu.m_x = 0xFB4B;

    // F994: LDS #$F99B
    cpu.m_sp = 0xF99B;

    // F998: JMP $FB38
    cpu.m_pc = 0xFB38;

    // F99B: BEQ $FA19
    if (cpu.zero_flag()) cpu.m_pc = 0xFA19;

    // F99D: STD <$D2
    cpu.write_memory16(0xD2, cpu.m_d);

    // F99F: INC <$CC
    // TODO: Convert INC <$CC

    // F9A1: LDS #$4FFF
    cpu.m_sp = 0x4FFF;

    // F9A5: LDD $6,X
    // TODO: Fix comma operator: LDD $6,X

    // F9A7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F9A9: LDD #$1E98
    cpu.m_d = 0x1E98;

    // F9AC: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F9AE: LDD $3032
    cpu.m_d = cpu.read_memory16(0x3032);

    // F9B1: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F9B3: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F9B5: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F9B7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F9B9: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    // F9BC: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F9BE: TFR X,D
    cpu.m_d = cpu.m_x;

    // F9C0: SUBD #$FB4B
    cpu.m_d -= 0xFB4B;

    // F9C4: LDA #$03
    cpu.m_a = 0x03;

    // F9C7: BCS $F9CE
    if (cpu.carry_flag()) cpu.m_pc = 0xF9CE;

    // F9C9: LDU $3022
    cpu.m_u = cpu.read_memory16(0x3022);

    // F9CC: BRA $F9D1
    cpu.m_pc = 0xF9D1;

    // F9CE: LDU $3032
    cpu.m_u = cpu.read_memory16(0x3032);

    // F9D1: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // F9D4: BPL $F9C6
    if (!cpu.negative_flag()) cpu.m_pc = 0xF9C6;

    // F9D6: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    // F9D9: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F9DB: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F9DD: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // F9DF: JSR $E790
    cpu.call_function(0xE790);

    // F9E2: LDA $1,X
    // TODO: Fix comma operator: LDA $1,X

    // F9E4: JSR $E790
    cpu.call_function(0xE790);

    // F9E7: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    // F9EA: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F9EC: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X

    // F9EE: JSR $E790
    cpu.call_function(0xE790);

    // F9F1: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // F9F3: JSR $E790
    cpu.call_function(0xE790);

    // F9F6: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    // F9F9: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // F9FB: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // F9FD: JSR $E790
    cpu.call_function(0xE790);

    // FA00: LDA $5,X
    // TODO: Fix comma operator: LDA $5,X

    // FA02: JSR $E790
    cpu.call_function(0xE790);

    // FA05: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    // FA08: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA0A: LDA <$D2
    cpu.m_a = cpu.read_memory(0xD2);

    // FA0C: JSR $E790
    cpu.call_function(0xE790);

    // FA0F: LDA <$D3
    cpu.m_a = cpu.read_memory(0xD3);

    // FA11: JSR $E790
    cpu.call_function(0xE790);

    // FA14: LDD #$8040
    cpu.m_d = 0x8040;

    // FA17: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA19: LEAX $8,X
    // TODO: Fix comma operator: LEAX $8,X

    // FA1B: CMPX #$FB73
    cpu.compare_x(0xFB73);

    // FA1E: LBCS $F994
    // TODO: Convert LBCS $F994

    // FA22: LDS #$4FFF
    cpu.m_sp = 0x4FFF;

    // FA26: TST <$CC
    // TODO: Convert TST <$CC

    // FA28: BNE $FA2E
    if (!cpu.zero_flag()) cpu.m_pc = 0xFA2E;

    // FA2A: LDB #$C5
    cpu.m_b = 0xC5;

    // FA2C: BRA $FA35
    cpu.m_pc = 0xFA35;

    // FA2E: LDB #$C4
    cpu.m_b = 0xC4;

    // FA30: JSR $E7C7
    cpu.call_function(0xE7C7);

    // FA33: LDB #$C6
    cpu.m_b = 0xC6;

    // FA35: JSR $E7C7
    cpu.call_function(0xE7C7);

    // FA38: LDX #$FAE1
    cpu.m_x = 0xFAE1;

    // FA3B: CLR <$CC
    cpu.write_memory(0xCC, 0);

    // FA3D: LDD #$6480
    cpu.m_d = 0x6480;

    // FA40: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA42: TFR X,D
    cpu.m_d = cpu.m_x;

    // FA44: SUBD #$FAE9
    cpu.m_d -= 0xFAE9;

    // FA48: LDS #$FA4E
    cpu.m_sp = 0xFA4E;

    // FA4C: JMP [,X]
    // TODO: Complex indexed addressing: [,X]

    // FA4E: BEQ $FAC1
    if (cpu.zero_flag()) cpu.m_pc = 0xFAC1;

    // FA50: STD <$D2
    cpu.write_memory16(0xD2, cpu.m_d);

    // FA52: INC <$CC
    // TODO: Convert INC <$CC

    // FA54: CMPX #$FAF9
    cpu.compare_x(0xFAF9);

    // FA57: BCC $FA92
    if (!cpu.carry_flag()) cpu.m_pc = 0xFA92;

    // FA59: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // FA5B: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA5D: LDD #$1EA2
    cpu.m_d = 0x1EA2;

    // FA60: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA62: LDD $3032
    cpu.m_d = cpu.read_memory16(0x3032);

    // FA65: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA67: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA69: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // FA6B: LDD >$0000
    cpu.m_d = cpu.read_memory16(0x0000);

}

} // namespace StarWars