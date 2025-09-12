#include "cpu_6809.h"

namespace StarWars {

void routine_d883_impl(CPU6809& cpu) {
    // Converted from rom_disasm_d883.md
    // Address: 0xD883

    // D883: BCC $D889
    if (!cpu.carry_flag()) cpu.m_pc = 0xD889;

    // D885: INC <$12
    // TODO: Convert INC <$12

    // D887: INC <$12
    // TODO: Convert INC <$12

    // D889: STB <$13
    cpu.write_memory(0x13, cpu.m_b);

    // D88B: LDA <$09
    cpu.m_a = cpu.read_memory(0x09);

    // D88D: ANDA #$03
    cpu.m_a &= 0x03;

    // D88F: BEQ $D8AC
    if (cpu.zero_flag()) cpu.m_pc = 0xD8AC;

    // D891: TFR A,B
    cpu.m_b = cpu.m_a;

    // D895: ADDA <$12
    cpu.m_a += 0x12;

    // D897: BPL $D8A4
    if (!cpu.negative_flag()) cpu.m_pc = 0xD8A4;

    // D899: TST <$13
    // TODO: Convert TST <$13

    // D89B: BPL $D8AE
    if (!cpu.negative_flag()) cpu.m_pc = 0xD8AE;

    // D89E: BMI $D8AE
    if (cpu.negative_flag()) cpu.m_pc = 0xD8AE;

    // D8A0: ASL <$13
    // TODO: Convert ASL <$13

    // D8A2: LSR <$13
    // TODO: Convert LSR <$13

    // D8A4: CMPB #$01
    cpu.compare_b(0x01);

    // D8A6: BNE $D8AA
    if (!cpu.zero_flag()) cpu.m_pc = 0xD8AA;

    // D8A8: INC <$14
    // TODO: Convert INC <$14

    // D8AA: INC <$14
    // TODO: Convert INC <$14

    // D8AC: STA <$12
    cpu.write_memory(0x12, cpu.m_a);

    // D8AE: LDB <$0A
    cpu.m_b = cpu.read_memory(0x0A);

    // D8B0: ANDB #$0F
    cpu.m_b &= 0x0F;

    // D8B2: BNE $D8DE
    if (!cpu.zero_flag()) cpu.m_pc = 0xD8DE;

    // D8B4: LDX #$4817
    cpu.m_x = 0x4817;

    // D8B7: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // D8B9: BPL $D8C0
    if (!cpu.negative_flag()) cpu.m_pc = 0xD8C0;

    // D8BB: ANDA #$7F
    cpu.m_a &= 0x7F;

    // D8BE: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // D8C0: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // D8C2: CMPX #$4815
    cpu.compare_x(0x4815);

    // D8C5: BGE $D8B7
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xD8B7;

    // D8C8: BNE $D8DE
    if (!cpu.zero_flag()) cpu.m_pc = 0xD8DE;

    // D8CA: LDX #$4817
    cpu.m_x = 0x4817;

    // D8CD: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // D8CF: BEQ $D8D7
    if (cpu.zero_flag()) cpu.m_pc = 0xD8D7;

    // D8D1: ADDA #$7F
    cpu.m_a += 0x7F;

    // D8D3: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // D8D5: BRA $D8DE
    cpu.m_pc = 0xD8DE;

    // D8D7: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // D8D9: CMPX #$4815
    cpu.compare_x(0x4815);

    // D8DC: BGE $D8CD
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xD8CD;

    // D8DF: LDX #$4A52
    cpu.m_x = 0x4A52;

    // D8E2: CMPX $4AD9
    cpu.compare_x(cpu.read_memory16(0x4AD9));

    // D8E5: BCC $D8F1
    if (!cpu.carry_flag()) cpu.m_pc = 0xD8F1;

    // D8E7: CMPA ,X+
    // TODO: Complex indexed addressing: ,X+

    // D8E9: BNE $D8EC
    if (!cpu.zero_flag()) cpu.m_pc = 0xD8EC;

    // D8EC: CMPX $4AD9
    cpu.compare_x(cpu.read_memory16(0x4AD9));

    // D8EF: BCS $D8E7
    if (cpu.carry_flag()) cpu.m_pc = 0xD8E7;

    // D8F1: STA ,X+
    // TODO: Handle indexed addressing: STA ,X+

    // D8F3: STX $4AD9
    cpu.write_memory16(0x4AD9, cpu.m_x);

    // D8F7: LDX #$4A52
    cpu.m_x = 0x4A52;

    // D8FA: CMPA ,X
    // TODO: Complex indexed addressing: ,X

    // D8FC: BNE $D912
    if (!cpu.zero_flag()) cpu.m_pc = 0xD912;

    // D8FE: LDU $4AD9
    cpu.m_u = cpu.read_memory16(0x4AD9);

    // D901: CMPU #$4A52
    // TODO: Convert CMPU #$4A52

    // D905: BLS $D912
    // TODO: Convert BLS $D912

    // D907: LEAU -$1,U
    // TODO: Fix comma operator: LEAU -$1,U

    // D909: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // D90B: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // D90D: STU $4AD9
    cpu.write_memory16(0x4AD9, cpu.m_u);

    // D910: LEAX ,U
    // TODO: Complex indexed addressing: ,U

    // D912: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // D914: CMPX $4AD9
    cpu.compare_x(cpu.read_memory16(0x4AD9));

    // D917: BCS $D8FA
    if (cpu.carry_flag()) cpu.m_pc = 0xD8FA;

    // D91A: LDX #$4A52
    cpu.m_x = 0x4A52;

    // D91D: CLR ,X
    // TODO: Complex indexed addressing: ,X

    // D91F: STX $4AD9
    cpu.write_memory16(0x4AD9, cpu.m_x);

    // D923: LDU #$4A52
    cpu.m_u = 0x4A52;

    // D926: CMPU $4AD9
    // TODO: Convert CMPU $4AD9

    // D92A: BCC $D941
    if (!cpu.carry_flag()) cpu.m_pc = 0xD941;

    // D92C: LDB ,U+
    // TODO: Complex indexed addressing: ,U+

    // D92E: CMPB #$D6
    cpu.compare_b(0xD6);

    // D930: BCC $D93B
    if (!cpu.carry_flag()) cpu.m_pc = 0xD93B;

    // D932: STB $48AE
    cpu.write_memory(0x48AE, cpu.m_b);

    // D935: JSR $E7DD
    cpu.call_function(0xE7DD);

    // D938: JSR $E7FC
    cpu.call_function(0xE7FC);

    // D93B: CMPU $4AD9
    // TODO: Convert CMPU $4AD9

    // D93F: BCS $D92C
    if (cpu.carry_flag()) cpu.m_pc = 0xD92C;

    // D942: LDU #$4A52
    cpu.m_u = 0x4A52;

    // D945: CMPU $4AD9
    // TODO: Convert CMPU $4AD9

    // D949: BCC $D95D
    if (!cpu.carry_flag()) cpu.m_pc = 0xD95D;

    // D94B: LDB ,U+
    // TODO: Complex indexed addressing: ,U+

    // D94D: CMPB #$D6
    cpu.compare_b(0xD6);

    // D94F: BCC $D957
    if (!cpu.carry_flag()) cpu.m_pc = 0xD957;

    // D951: STB $48AE
    cpu.write_memory(0x48AE, cpu.m_b);

    // D954: JSR $E7FC
    cpu.call_function(0xE7FC);

    // D957: CMPU $4AD9
    // TODO: Convert CMPU $4AD9

    // D95B: BCS $D94B
    if (cpu.carry_flag()) cpu.m_pc = 0xD94B;

    // D95E: LDU $4ADD
    cpu.m_u = cpu.read_memory16(0x4ADD);

    // D961: STA ,U+
    // TODO: Handle indexed addressing: STA ,U+

    // D963: LDD #$0000
    cpu.m_d = 0x0000;

    // D966: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);

    // D968: LDD #$0100
    cpu.m_d = 0x0100;

    // D96B: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);

    // D96D: STU $4ADD
    cpu.write_memory16(0x4ADD, cpu.m_u);

    // D971: LDU #$4A66
    cpu.m_u = 0x4A66;

    // D974: CMPA ,U
    // TODO: Complex indexed addressing: ,U

    // D976: BNE $D97C
    if (!cpu.zero_flag()) cpu.m_pc = 0xD97C;

    // D978: LDA #$00
    cpu.m_a = 0x00;

    // D97A: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // D97C: LEAU $5,U
    // TODO: Fix comma operator: LEAU $5,U

    // D97E: CMPU $4ADD
    // TODO: Convert CMPU $4ADD

    // D982: BCS $D974
    if (cpu.carry_flag()) cpu.m_pc = 0xD974;

    // D985: LDU #$4A66
    cpu.m_u = 0x4A66;

    // D988: CMPU $4ADD
    // TODO: Convert CMPU $4ADD

    // D98C: BCC $D9DB
    if (!cpu.carry_flag()) cpu.m_pc = 0xD9DB;

    // D98E: LDD #$7200
    cpu.m_d = 0x7200;

    // D991: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D993: LDA ,U+
    // TODO: Complex indexed addressing: ,U+

    // D995: BEQ $D9D3
    if (cpu.zero_flag()) cpu.m_pc = 0xD9D3;

    // D997: STA $48AE
    cpu.write_memory(0x48AE, cpu.m_a);

    // D99A: LDD #$0198
    cpu.m_d = 0x0198;

    // D99D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D99F: LDD #$0000
    cpu.m_d = 0x0000;

    // D9A2: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D9A4: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // D9A6: LDA #$71
    cpu.m_a = 0x71;

    // D9A8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D9AB: ADDB #$10
    cpu.m_b += 0x10;

    // D9AD: LDA #$62
    cpu.m_a = 0x62;

    // D9AF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D9B1: LDX #$E99E
    cpu.m_x = 0xE99E;

    // D9B4: LDB $48AE
    cpu.m_b = cpu.read_memory(0x48AE);

    // D9B9: LDD #$1DD0
    cpu.m_d = 0x1DD0;

    // D9BC: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D9BE: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // D9C0: ANDA #$1F
    cpu.m_a &= 0x1F;

    // D9C2: ORA #$00
    cpu.m_a |= 0x00;

    // D9C4: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D9C6: JSR $E821
    cpu.call_function(0xE821);

    // D9C9: LDD #$7200
    cpu.m_d = 0x7200;

    // D9CC: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D9CE: LDD #$8040
    cpu.m_d = 0x8040;

    // D9D1: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D9D3: LEAU $4,U
    // TODO: Fix comma operator: LEAU $4,U

    // D9D5: CMPU $4ADD
    // TODO: Convert CMPU $4ADD

    // D9D9: BCS $D993
    if (cpu.carry_flag()) cpu.m_pc = 0xD993;

    // D9DC: LDD #$0000
    cpu.m_d = 0x0000;

    // D9DF: STD $4AE4
    cpu.write_memory16(0x4AE4, cpu.m_d);

    // D9E2: LDD #$6018
    cpu.m_d = 0x6018;

    // D9E5: STD $4AE6
    cpu.write_memory16(0x4AE6, cpu.m_d);

    // D9E8: LDD #$4A66
    cpu.m_d = 0x4A66;

    // D9EB: STD $4ADD
    cpu.write_memory16(0x4ADD, cpu.m_d);

    // D9EE: LDD $DB2F
    cpu.m_d = cpu.read_memory16(0xDB2F);

    // D9F1: STD $4AE2
    cpu.write_memory16(0x4AE2, cpu.m_d);

    // D9F4: LDA #$51
    cpu.m_a = 0x51;

    // D9F6: STA $4ADF
    cpu.write_memory(0x4ADF, cpu.m_a);

    // D9FA: LDD $4AE4
    cpu.m_d = cpu.read_memory16(0x4AE4);

    // D9FD: ADDD #$0001
    cpu.m_d += 0x0001;

    // DA00: STD $4AE4
    cpu.write_memory16(0x4AE4, cpu.m_d);

    // DA03: CMPD #$00F8
    // TODO: Convert CMPD #$00F8

    // DA07: LBCC $DA94
    // TODO: Convert LBCC $DA94

    // DA0B: CMPD #$0040
    // TODO: Convert CMPD #$0040

    // DA0F: BCC $DA1E
    if (!cpu.carry_flag()) cpu.m_pc = 0xDA1E;

    // DA11: LDD $4AE6
    cpu.m_d = cpu.read_memory16(0x4AE6);

    // DA14: ADDB #$03
    cpu.m_b += 0x03;

    // DA16: STD $4AE6
    cpu.write_memory16(0x4AE6, cpu.m_d);

    // DA19: LDD #$0040
    cpu.m_d = 0x0040;

    // DA1C: BRA $DA2A
    cpu.m_pc = 0xDA2A;

    // DA1E: LDD $4AE4
    cpu.m_d = cpu.read_memory16(0x4AE4);

    // DA22: ADDB #$18
    cpu.m_b += 0x18;

    // DA24: STD $4AE6
    cpu.write_memory16(0x4AE6, cpu.m_d);

    // DA27: LDD $4AE4
    cpu.m_d = cpu.read_memory16(0x4AE4);

    // DA2A: ORA #$73
    cpu.m_a |= 0x73;

    // DA2C: STD $4AE8
    cpu.write_memory16(0x4AE8, cpu.m_d);

    // DA2F: LDD $4AE6
    cpu.m_d = cpu.read_memory16(0x4AE6);

    // DA32: ORA #$61
    cpu.m_a |= 0x61;

    // DA34: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // DA36: LDD #$0198
    cpu.m_d = 0x0198;

    // DA39: STD ,Y
    // TODO: Handle indexed addressing: STD ,Y

    // DA3B: STD $8,Y
    // TODO: Handle indexed addressing: STD $8,Y

    // DA3D: STD $10,Y
    // TODO: Handle indexed addressing: STD $10,Y

    // DA40: STD $18,Y
    // TODO: Handle indexed addressing: STD $18,Y

    // DA43: STD $20,Y
    // TODO: Handle indexed addressing: STD $20,Y

    // DA46: STD $28,Y
    // TODO: Handle indexed addressing: STD $28,Y

    // DA49: LDD #$0000
    cpu.m_d = 0x0000;

    // DA4C: STD $2,Y
    // TODO: Handle indexed addressing: STD $2,Y

    // DA4E: STD $A,Y
    // TODO: Handle indexed addressing: STD $A,Y

    // DA50: STD $12,Y
    // TODO: Handle indexed addressing: STD $12,Y

    // DA53: STD $1A,Y
    // TODO: Handle indexed addressing: STD $1A,Y

    // DA56: STD $22,Y
    // TODO: Handle indexed addressing: STD $22,Y

    // DA59: STD $2A,Y
    // TODO: Handle indexed addressing: STD $2A,Y

    // DA5C: LDD $4AE8
    cpu.m_d = cpu.read_memory16(0x4AE8);

    // DA5F: STD $4,Y
    // TODO: Handle indexed addressing: STD $4,Y

    // DA61: STD $C,Y
    // TODO: Handle indexed addressing: STD $C,Y

    // DA63: STD $14,Y
    // TODO: Handle indexed addressing: STD $14,Y

    // DA66: STD $1C,Y
    // TODO: Handle indexed addressing: STD $1C,Y

    // DA69: STD $24,Y
    // TODO: Handle indexed addressing: STD $24,Y

    // DA6C: STD $2C,Y
    // TODO: Handle indexed addressing: STD $2C,Y

    // DA6F: LDD #$B400
    cpu.m_d = 0xB400;

    // DA72: STD $6,Y
    // TODO: Handle indexed addressing: STD $6,Y

    // DA74: LDD #$B434
    cpu.m_d = 0xB434;

    // DA77: STD $E,Y
    // TODO: Handle indexed addressing: STD $E,Y

    // DA79: LDD #$B458
    cpu.m_d = 0xB458;

    // DA7C: STD $16,Y
    // TODO: Handle indexed addressing: STD $16,Y

    // DA7F: LDD #$B488
    cpu.m_d = 0xB488;

    // DA82: STD $0,X
    // TODO: Handle indexed addressing: STD $0,X

}

} // namespace StarWars