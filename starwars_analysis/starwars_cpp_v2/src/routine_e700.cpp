#include "cpu_6809.h"

namespace StarWars {

void routine_e700_impl(CPU6809& cpu) {
    // Converted from rom_disasm_e700.md
    // Address: 0xE700

    // E708: BRA $005E
    cpu.m_pc = 0xE768;

    // E70C: ANDB <$50
    cpu.m_b &= 0x50;

    // E712: BRA $0055
    cpu.m_pc = 0xE769;

    // E716: BRA $005B
    cpu.m_pc = 0xE773;

    // E71B: BRA $0071
    cpu.m_pc = 0xE78E;

    // E71E: BRA $0063
    cpu.m_pc = 0xE783;

    // E726: BITB #$50
    // TODO: Convert BITB #$50

    // E72C: BRA $006F
    cpu.m_pc = 0xE79D;

    // E730: BRA $0075
    cpu.m_pc = 0xE7A7;

    // E735: BRA $007D
    cpu.m_pc = 0xE7B4;

    // E739: BRA $008E
    cpu.m_pc = 0xE6C9;

    // E73E: BRA $0094
    cpu.m_pc = 0xE6D4;

    // E742: ANDB <$50
    cpu.m_b &= 0x50;

    // E747: BRA $009B
    cpu.m_pc = 0xE6E4;

    // E74D: BRA $0095
    cpu.m_pc = 0xE6E4;

    // E752: BRA $00A8
    cpu.m_pc = 0xE6FC;

    // E755: BRA $00A7
    cpu.m_pc = 0xE6FE;

    // E75D: BRA $00B1
    cpu.m_pc = 0xE710;

    // E763: ADDD <$A6
    cpu.m_d += 0xA6;

    // E765: ANDA #$BD
    cpu.m_a &= 0xBD;

    // E767: STB [,W]
    // TODO: Handle indexed addressing: STB [,W]

    // E769: LDA <$AD
    cpu.m_a = cpu.read_memory(0xAD);

    // E76B: BGT $0072
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE7DF;

    // E76D: LDD #$B913
    cpu.m_d = 0xB913;

    // E770: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E772: LDA $1,X
    // TODO: Fix comma operator: LDA $1,X

    // E774: JSR $E790
    cpu.call_function(0xE790);

    // E777: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X

    // E77D: JSR $E7AD
    cpu.call_function(0xE7AD);

    // E780: LDA <$AD
    cpu.m_a = cpu.read_memory(0xAD);

    // E782: BGT $0089
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE70D;

    // E784: LDD #$B913
    cpu.m_d = 0xB913;

    // E787: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E789: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X

    // E78B: JSR $E7AD
    cpu.call_function(0xE7AD);

    // E78E: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // E790: TFR A,B
    cpu.m_b = cpu.m_a;

    // E795: ANDB #$1E
    cpu.m_b &= 0x1E;

    // E797: BNE $00A2
    if (!cpu.zero_flag()) cpu.m_pc = 0xE73B;

    // E799: TST <$AD
    // TODO: Convert TST <$AD

    // E79B: BLE $00A2
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xE73F;

    // E79D: LDU $3002
    cpu.m_u = cpu.read_memory16(0x3002);

    // E7A0: BRA $00A9
    cpu.m_pc = 0xE74B;

    // E7A2: CLR <$AD
    cpu.write_memory(0xAD, 0);

    // E7A4: LDU #$3004
    cpu.m_u = 0x3004;

    // E7A7: LDU B,U
    // TODO: Fix comma operator: LDU B,U

    // E7A9: DEC <$AD
    // TODO: Convert DEC <$AD

    // E7AB: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // E7AE: ANDA #$1E
    cpu.m_a &= 0x1E;

    // E7B0: BNE $00BB
    if (!cpu.zero_flag()) cpu.m_pc = 0xE76D;

    // E7B2: TST <$AD
    // TODO: Convert TST <$AD

    // E7B4: BLE $00BB
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xE771;

    // E7B6: LDU $3002
    cpu.m_u = cpu.read_memory16(0x3002);

    // E7B9: BRA $00C2
    cpu.m_pc = 0xE77D;

    // E7BB: CLR <$AD
    cpu.write_memory(0xAD, 0);

    // E7BD: LDU #$3004
    cpu.m_u = 0x3004;

    // E7C0: LDU A,U
    // TODO: Fix comma operator: LDU A,U

    // E7C2: DEC <$AD
    // TODO: Convert DEC <$AD

    // E7C4: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // E7C7: CMPB #$D6
    cpu.compare_b(0xD6);

    // E7C9: BCC $00D2
    if (!cpu.carry_flag()) cpu.m_pc = 0xE79D;

    // E7CB: STB $48AE
    cpu.write_memory(0x48AE, cpu.m_b);

    // E7CE: BSR $00DD
    // TODO: Convert BSR $00DD

    // E7D0: BSR $00EA
    // TODO: Convert BSR $00EA

    // E7D3: CMPB #$D6
    cpu.compare_b(0xD6);

    // E7D5: BCC $00DC
    if (!cpu.carry_flag()) cpu.m_pc = 0xE7B3;

    // E7D7: STB $48AE
    cpu.write_memory(0x48AE, cpu.m_b);

    // E7DA: BSR $00EA
    // TODO: Convert BSR $00EA

    // E7DD: LDB $48AE
    cpu.m_b = cpu.read_memory(0x48AE);

    // E7E0: LDX #$EDA8
    cpu.m_x = 0xEDA8;

    // E7E5: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // E7E7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E7EA: LDB $48AE
    cpu.m_b = cpu.read_memory(0x48AE);

    // E7ED: LDX #$EA50
    cpu.m_x = 0xEA50;

    // E7F4: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // E7F6: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E7F8: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // E7FA: BRA $0111
    cpu.m_pc = 0xE80D;

    // E7FC: LDB $48AE
    cpu.m_b = cpu.read_memory(0x48AE);

    // E7FF: LDX #$EA50
    cpu.m_x = 0xEA50;

    // E806: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // E808: SUBD $48AF
    cpu.m_d -= 0x48AF;

    // E80B: ANDA #$1F
    cpu.m_a &= 0x1F;

    // E80D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E80F: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // E811: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E813: JSR $E821
    cpu.call_function(0xE821);

    // E816: LDD #$7200
    cpu.m_d = 0x7200;

    // E819: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E81B: LDD #$8040
    cpu.m_d = 0x8040;

    // E81E: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E821: LDX #$E894
    cpu.m_x = 0xE894;

    // E824: LDB $48AE
    cpu.m_b = cpu.read_memory(0x48AE);

    // E829: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // E82B: LDB ,X+
    // TODO: Complex indexed addressing: ,X+

    // E82D: STX $48B1
    cpu.write_memory16(0x48B1, cpu.m_x);

    // E831: CMPB #$82
    cpu.compare_b(0x82);

    // E833: BCS $013C
    if (cpu.carry_flag()) cpu.m_pc = 0xE871;

    // E835: LDX #$3016
    cpu.m_x = 0x3016;

    // E838: ANDB #$7F
    cpu.m_b &= 0x7F;

    // E83A: BRA $0188
    cpu.m_pc = 0xE7C4;

    // E83C: CMPB #$74
    cpu.compare_b(0x74);

    // E83E: BNE $0145
    if (!cpu.zero_flag()) cpu.m_pc = 0xE885;

    // E840: LDX #$2FDE
    cpu.m_x = 0x2FDE;

    // E843: BRA $0188
    cpu.m_pc = 0xE7CD;

    // E845: CMPB #$80
    cpu.compare_b(0x80);

    // E847: BNE $014F
    if (!cpu.zero_flag()) cpu.m_pc = 0xE898;

    // E849: LDX #$3058
    cpu.m_x = 0x3058;

    // E84D: BRA $0188
    cpu.m_pc = 0xE7D7;

    // E84F: CMPB #$60
    cpu.compare_b(0x60);

    // E851: BCS $0158
    if (cpu.carry_flag()) cpu.m_pc = 0xE8AB;

    // E853: LDX #$2FA4
    cpu.m_x = 0x2FA4;

    // E856: BRA $0188
    cpu.m_pc = 0xE7E0;

    // E858: CMPB #$40
    cpu.compare_b(0x40);

    // E85A: BNE $0161
    if (!cpu.zero_flag()) cpu.m_pc = 0xE8BD;

    // E85C: LDX #$2FC2
    cpu.m_x = 0x2FC2;

    // E85F: BRA $0188
    cpu.m_pc = 0xE7E9;

    // E861: CMPB #$4E
    cpu.compare_b(0x4E);

    // E863: BNE $016A
    if (!cpu.zero_flag()) cpu.m_pc = 0xE8CF;

    // E865: LDX #$2FFE
    cpu.m_x = 0x2FFE;

    // E868: BRA $0188
    cpu.m_pc = 0xE7F2;

    // E86A: CMPB #$58
    cpu.compare_b(0x58);

    // E86C: BNE $0173
    if (!cpu.zero_flag()) cpu.m_pc = 0xE8E1;

    // E86E: LDX #$2FF6
    cpu.m_x = 0x2FF6;

    // E871: BRA $0188
    cpu.m_pc = 0xE7FB;

    // E873: CMPB #$5A
    cpu.compare_b(0x5A);

    // E875: BNE $017C
    if (!cpu.zero_flag()) cpu.m_pc = 0xE8F3;

    // E877: LDX #$3000
    cpu.m_x = 0x3000;

    // E87A: BRA $0188
    cpu.m_pc = 0xE804;

    // E87C: CMPB #$4A
    cpu.compare_b(0x4A);

    // E87E: BNE $0185
    if (!cpu.zero_flag()) cpu.m_pc = 0xE805;

    // E880: LDX #$300C
    cpu.m_x = 0x300C;

    // E883: BRA $0188
    cpu.m_pc = 0xE80D;

    // E885: LDX #$2FF4
    cpu.m_x = 0x2FF4;

    // E888: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // E88A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E88C: LDX $48B1
    cpu.m_x = cpu.read_memory16(0x48B1);

    // E88F: TST -$1,X
    // TODO: Convert TST -$1,X

    // E891: BPL $012B
    if (!cpu.negative_flag()) cpu.m_pc = 0xE8BE;

    // E894: ADDB <$3F
    cpu.m_b += 0x3F;

    // E896: ADDB <$48
    cpu.m_b += 0x48;

    // E898: ADDB <$6C
    cpu.m_b += 0x6C;

    // E89A: ADDB <$80
    cpu.m_b += 0x80;

    // E89C: ADDB <$A8
    cpu.m_b += 0xA8;

    // E89E: ADDB <$A8
    cpu.m_b += 0xA8;

    // E8A0: ADDB <$B1
    cpu.m_b += 0xB1;

    // E8A2: ADDB <$BD
    cpu.m_b += 0xBD;

    // E8A4: ADDB <$C6
    cpu.m_b += 0xC6;

    // E8A6: ADDB <$D4
    cpu.m_b += 0xD4;

    // E8A8: ADDB <$E1
    cpu.m_b += 0xE1;

    // E8AA: ADDB <$EF
    cpu.m_b += 0xEF;

    // E8AC: LDD <$04
    cpu.m_d = cpu.read_memory16(0x04);

    // E8AE: LDD <$0B
    cpu.m_d = cpu.read_memory16(0x0B);

    // E8B0: LDD <$11
    cpu.m_d = cpu.read_memory16(0x11);

    // E8B2: LDD <$1C
    cpu.m_d = cpu.read_memory16(0x1C);

    // E8B4: LDD <$3B
    cpu.m_d = cpu.read_memory16(0x3B);

    // E8B6: LDD <$5E
    cpu.m_d = cpu.read_memory16(0x5E);

    // E8B8: LDD <$7D
    cpu.m_d = cpu.read_memory16(0x7D);

    // E8BA: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // E8BC: LDD <$C2
    cpu.m_d = cpu.read_memory16(0xC2);

    // E8BE: LDD <$E3
    cpu.m_d = cpu.read_memory16(0xE3);

    // E8C0: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // E8C2: STD <$12
    cpu.write_memory16(0x12, cpu.m_d);

    // E8C4: STD <$34
    cpu.write_memory16(0x34, cpu.m_d);

    // E8C6: STD <$56
    cpu.write_memory16(0x56, cpu.m_d);

    // E8C8: STD <$74
    cpu.write_memory16(0x74, cpu.m_d);

    // E8CA: STD <$93
    cpu.write_memory16(0x93, cpu.m_d);

    // E8CC: STD <$A6
    cpu.write_memory16(0xA6, cpu.m_d);

    // E8CE: STD <$C9
    cpu.write_memory16(0xC9, cpu.m_d);

    // E8D0: STD <$EA
    cpu.write_memory16(0xEA, cpu.m_d);

    // E8D2: STD <$FC
    cpu.write_memory16(0xFC, cpu.m_d);

    // E8D4: STD <$FD
    cpu.write_memory16(0xFD, cpu.m_d);

    // E8D6: STD <$FE
    cpu.write_memory16(0xFE, cpu.m_d);

    // E8D8: STD <$FF
    cpu.write_memory16(0xFF, cpu.m_d);

    // E8DA: LDU <$00
    cpu.m_u = cpu.read_memory16(0x00);

    // E8DC: LDU <$07
    cpu.m_u = cpu.read_memory16(0x07);

    // E8DE: LDU <$29
    cpu.m_u = cpu.read_memory16(0x29);

    // E8E0: LDU <$4B
    cpu.m_u = cpu.read_memory16(0x4B);

    // E8E2: LDU <$6D
    cpu.m_u = cpu.read_memory16(0x6D);

    // E8E4: LDU <$8F
    cpu.m_u = cpu.read_memory16(0x8F);

    // E8E6: LDU <$B1
    cpu.m_u = cpu.read_memory16(0xB1);

    // E8E8: LDU <$D3
    cpu.m_u = cpu.read_memory16(0xD3);

    // E8EA: LDU <$F5
    cpu.m_u = cpu.read_memory16(0xF5);

    // E8EC: STU <$17
    cpu.write_memory16(0x17, cpu.m_u);

    // E8EE: STU <$2A
    cpu.write_memory16(0x2A, cpu.m_u);

    // E8F0: STU <$4A
    cpu.write_memory16(0x4A, cpu.m_u);

    // E8F2: STU <$53
    cpu.write_memory16(0x53, cpu.m_u);

    // E8F4: STU <$57
    cpu.write_memory16(0x57, cpu.m_u);

    // E8F6: STU <$5D
    cpu.write_memory16(0x5D, cpu.m_u);

    // E8F8: STU <$61
    cpu.write_memory16(0x61, cpu.m_u);

    // E8FA: STU <$67
    cpu.write_memory16(0x67, cpu.m_u);

    // E8FC: STU <$6D
    cpu.write_memory16(0x6D, cpu.m_u);

    // E8FE: STU <$73
    cpu.write_memory16(0x73, cpu.m_u);

}

} // namespace StarWars