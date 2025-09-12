#include "cpu_0x6809.h"

namespace StarWars {

void routine_0xF70D_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_auto_0xF70D.md
    // Address: 0x0xF70D

    // Converted from rom_disasm_auto_0xF70D.md
    // Address: 0xROUTINE_0xF70D
    // 0xF70D: LDD 0x0x2020
    cpu.state_.d = 0x2020;
    // 0xF710: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF712: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF714: STA 0x0x4600
    cpu.cpu.write_memory(0x4600,  cpu.state_.a);
    // 0xF717: LDA 0x0x4300
    cpu.state_.a = 0x4300;
    // 0xF71A: ANDA 0x10
    cpu.state_.a &= 0x10;
    // 0xF71C: LBEQ 0x0xF65C
    // TODO: Convert LBEQ 0x0xF65C
    // 0xF720: JMP 0x0xF720
    cpu.state_.pc = 0xF720;
    // 0xF723: STB 0x0x4FF7
    cpu.cpu.write_memory(0x4FF7,  cpu.state_.b);
    // 0xF726: CLR 0x0xF958
    cpu.cpu.write_memory(0xF958,  0);
    // 0xF729: EORB 0x0x8CF8
    cpu.state_.b ^= 0x8CF8;
    // 0xF72C: ANDA 0xF8
    cpu.state_.a &= 0xF8;
    // 0xF72E: ANDA <0xF8
    cpu.state_.a &= 0xF8;
    // 0xF730: ORA [-0x34,cpu.state_.sp]
    cpu.state_.a |= [-0x34,cpu.state_.sp];
    // 0xF733: 0xADCB 0x0x3F64
    // TODO: Convert 0xADCB 0x0x3F64
    // 0xF736: SUBA 0x62
    cpu.state_.a -= 0x62;
    // 0xF738: SUBA 0x61
    cpu.state_.a -= 0x61;
    // 0xF73A: SUBA 0x65
    cpu.state_.a -= 0x65;
    // 0xF73C: SUBA 0x67
    cpu.state_.a -= 0x67;
    // 0xF73E: SUBA 0x66
    cpu.state_.a -= 0x66;
    // 0xF740: SUBA 0x63
    cpu.state_.a -= 0x63;
    // 0xF742: SUBA 0x1F
    cpu.state_.a -= 0x1F;
    // 0xF744: XANDCC 0x1F
    // TODO: Convert XANDCC 0x1F
    // 0xF746: ROR <0x0x1E
    // TODO: Convert ROR <0x0x1E
    // 0xF748: ANDB <0x0x1E
    cpu.state_.b &= 0x0x1E;
    // 0xF74A: SBCA -0x2,cpu.state_.x
    // TODO: Convert SBCA -0x2,cpu.state_.x
    // 0xF74C: NEG 0x0x1F6A
    // TODO: Convert NEG 0x0x1F6A
    // 0xF74F: DEC <0xD6
    // TODO: Convert DEC <0xD6
    // 0xF751: BPL 0x0xF77C
    if (!cpu.cpu.negative_flag()) cpu.state_.pc += 0xF77C;
    // 0xF753: LDA 0x10
    cpu.state_.a = 0x10;
    // 0xF755: STA <0xD6
    cpu.cpu.write_memory(0xD6,  cpu.state_.a);
    // 0xF757: LDX <0xD4
    cpu.state_.x = 0xD4;
    // 0xF759: LDD <0xD2
    cpu.state_.d = 0xD2;
    // 0xF75B: ANDA ,cpu.state_.x
    cpu.state_.a &= ,cpu.state_.x;
    // 0xF75D: BNE 0x0xF767
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF767;
    // 0xF75F: ANDB 0x1,cpu.state_.x
    cpu.state_.b &= 0x1,cpu.state_.x;
    // 0xF761: BNE 0x0xF767
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF767;
    // 0xF763: LDA 0x3B
    cpu.state_.a = 0x3B;
    // 0xF765: BRA 0x0xF769
    cpu.state_.pc += 0xF769;
    // 0xF767: LDA 0x29
    cpu.state_.a = 0x29;
    // 0xF769: STA 0x0x4400
    cpu.cpu.write_memory(0x4400,  cpu.state_.a);
    // 0xF76C: LEAX 0x2,cpu.state_.x
    cpu.state_.x += 0x2,cpu.state_.x;
    // 0xF76E: CMPX 0x0xF36E
    cpu.cpu.compare_x(0xF36E);
    // 0xF771: BCS 0x0xF77A
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF77A;
    // 0xF773: LDA 0x20
    cpu.state_.a = 0x20;
    // 0xF775: STA <0xD6
    cpu.cpu.write_memory(0xD6,  cpu.state_.a);
    // 0xF777: LDX 0x0xF34E
    cpu.state_.x = 0xF34E;
    // 0xF77A: STX <0xD4
    cpu.cpu.write_memory(0xD4,  cpu.state_.x);
    // 0xF77C: JMP 0x0xF714
    cpu.state_.pc = 0xF714;
    // 0xF77F: STA 0x0x46C0
    cpu.cpu.write_memory(0x46C0,  cpu.state_.a);
    // 0xF782: STA 0x0x46C0
    cpu.cpu.write_memory(0x46C0,  cpu.state_.a);
    // 0xF785: LDD 0x0xBFAE
    cpu.state_.d = 0xBFAE;
    // 0xF788: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF78A: LDD 0x0x8040
    cpu.state_.d = 0x8040;
    // 0xF78D: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF78F: LDS 0x0x4FFF
    cpu.state_.sp = 0x4FFF;
    // 0xF793: LDB 0x9E
    cpu.state_.b = 0x9E;
    // 0xF795: JSR 0x0xE7C7
    cpu.cpu.call_function(0xE7C7);
    // 0xF798: LDB 0xD3
    cpu.state_.b = 0xD3;
    // 0xF79A: JSR 0x0xE7C7
    cpu.cpu.call_function(0xE7C7);
    // 0xF79D: LDB 0x9F
    cpu.state_.b = 0x9F;
    // 0xF79F: STB <0xCE
    cpu.cpu.write_memory(0xCE,  cpu.state_.b);
    // 0xF7A1: LDA 0x0x4300
    cpu.state_.a = 0x4300;
    // 0xF7A4: LDB 0x0x4320
    cpu.state_.b = 0x4320;
    // 0xF7A7: ORB 0xC7
    cpu.state_.b |= 0xC7;
    // 0xF7A9: STD <0xcpu.state_.cc
    cpu.cpu.write_memory(0xcpu.state_.cc,  cpu.state_.d);
    // 0xF7AD: STD <0xcpu.state_.cc
    cpu.cpu.write_memory(0xcpu.state_.cc,  cpu.state_.d);
    // 0xF7AF: BCS 0x0xF7B6
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF7B6;
    // 0xF7B1: LDB <0xCE
    cpu.state_.b = 0xCE;
    // 0xF7B3: JSR 0x0xE7C7
    cpu.cpu.call_function(0xE7C7);
    // 0xF7B6: INC <0xCE
    // TODO: Convert INC <0xCE
    // 0xF7B8: LDD <0xcpu.state_.cc
    cpu.state_.d = 0xcpu.state_.cc;
    // 0xF7BA: BNE 0x0xF7AB
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF7AB;
    // 0xF7BC: LDD <0xC8
    cpu.state_.d = 0xC8;
    // 0xF7BE: STD <0xCA
    cpu.cpu.write_memory(0xCA,  cpu.state_.d);
    // 0xF7C0: LDA 0x0x4300
    cpu.state_.a = 0x4300;
    // 0xF7C3: ANDA 0xCF
    cpu.state_.a &= 0xCF;
    // 0xF7C5: LDB 0x0x4320
    cpu.state_.b = 0x4320;
    // 0xF7C8: ANDB 0x3A
    cpu.state_.b &= 0x3A;
    // 0xF7CA: STD <0xC8
    cpu.cpu.write_memory(0xC8,  cpu.state_.d);
    // 0xF7CC: EORA <0xCA
    cpu.state_.a ^= 0xCA;
    // 0xF7CE: ANDA <0xCA
    cpu.state_.a &= 0xCA;
    // 0xF7D0: EORB <0xCB
    cpu.state_.b ^= 0xCB;
    // 0xF7D2: ANDB <0xCB
    cpu.state_.b &= 0xCB;
    // 0xF7D4: CMPD 0x0x0000
    // TODO: Convert CMPD 0x0x0000
    // 0xF7D8: BEQ 0x0xF7DF
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF7DF;
    // 0xF7DA: LDA 0x3B
    cpu.state_.a = 0x3B;
    // 0xF7DC: STA 0x0x4400
    cpu.cpu.write_memory(0x4400,  cpu.state_.a);
    // 0xF7DF: LDD 0x0x0x1EA2
    cpu.state_.d = 0x0x1EA2;
    // 0xF7E2: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF7E4: LDD 0x0x1F74
    cpu.state_.d = 0x1F74;
    // 0xF7E7: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF7E9: LDA 0x10
    cpu.state_.a = 0x10;
    // 0xF7EB: JSR 0x0xE790
    cpu.cpu.call_function(0xE790);
    // 0xF7EE: LDD 0x300x1E
    cpu.state_.d = 0x300x1E;
    // 0xF7F1: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF7F3: LDD 0x0x3002
    cpu.state_.d = 0x3002;
    // 0xF7F6: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF7F8: LDA 0x0x4340
    cpu.state_.a = 0x4340;
    // 0xF7FB: JSR 0x0xF86C
    cpu.cpu.call_function(0xF86C);
    // 0xF7FE: LDD 0x0x0x1E70
    cpu.state_.d = 0x0x1E70;
    // 0xF801: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF803: LDD 0x0x1F5C
    cpu.state_.d = 0x1F5C;
    // 0xF806: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF808: LDA 0x10
    cpu.state_.a = 0x10;
    // 0xF80A: JSR 0x0xE790
    cpu.cpu.call_function(0xE790);
    // 0xF80D: LDD 0x0x3020
    cpu.state_.d = 0x3020;
    // 0xF810: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF812: LDD 0x0x3022
    cpu.state_.d = 0x3022;
    // 0xF815: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF817: LDD 0x0x3002
    cpu.state_.d = 0x3002;
    // 0xF81A: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF81C: LDA 0x0x4360
    cpu.state_.a = 0x4360;
    // 0xF81F: JSR 0x0xF86C
    cpu.cpu.call_function(0xF86C);
    // 0xF822: LDB 0xAF
    cpu.state_.b = 0xAF;
    // 0xF824: JSR 0x0xE7C7
    cpu.cpu.call_function(0xE7C7);
    // 0xF827: LDD 0x0xBFD5
    cpu.state_.d = 0xBFD5;
    // 0xF82A: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF82C: LDD 0x0x0000
    cpu.state_.d = 0x0000;
    // 0xF82F: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF831: LDD 0x0x0140
    cpu.state_.d = 0x0140;
    // 0xF834: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF836: LDB 0x0x4380
    cpu.state_.b = 0x4380;
    // 0xF839: SUBB 0x80
    cpu.state_.b -= 0x80;
    // 0xF83C: TFR cpu.state_.d,cpu.state_.u
    cpu.state_.cpu.state_.u = cpu.state_.cpu.state_.d;
    // 0xF840: LEAU cpu.state_.d,cpu.state_.u
    cpu.state_.u += cpu.state_.d,cpu.state_.u;
    // 0xF842: TFR cpu.state_.u,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.u;
    // 0xF844: ANDA 0x1F
    cpu.state_.a &= 0x1F;
    // 0xF846: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF848: STA 0x0x46C1
    cpu.cpu.write_memory(0x46C1,  cpu.state_.a);
    // 0xF84B: STA 0x0x46C1
    cpu.cpu.write_memory(0x46C1,  cpu.state_.a);
    // 0xF84E: LDX 0x0x0014
    cpu.state_.x = 0x0014;
    // 0xF851: LEAX -0x1,cpu.state_.x
    cpu.state_.x += -0x1,cpu.state_.x;
    // 0xF853: BNE 0x0xF851
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF851;
    // 0xF855: LDB 0x0x4380
    cpu.state_.b = 0x4380;
    // 0xF858: SUBB 0x80
    cpu.state_.b -= 0x80;
    // 0xF85B: ANDA 0x1F
    cpu.state_.a &= 0x1F;
    // 0xF85D: ORA 0xE0
    cpu.state_.a |= 0xE0;
    // 0xF85F: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF861: LDD 0x0x8040
    cpu.state_.d = 0x8040;
    // 0xF864: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF866: LDU 0x0xF725
    cpu.state_.u = 0xF725;
    // 0xF869: JMP 0x0xF70D
    cpu.state_.pc = 0xF70D;
    // 0xF86C: LDB 0x07
    cpu.state_.b = 0x07;
    // 0xF86F: BCC 0x0xF876
    if (!cpu.cpu.carry_flag()) cpu.state_.pc += 0xF876;
    // 0xF871: LDX 0x0x3022
    cpu.state_.x = 0x3022;
    // 0xF874: BRA 0x0xF879
    cpu.state_.pc += 0xF879;
    // 0xF876: LDX 0x0x3032
    cpu.state_.x = 0x3032;
    // 0xF879: STX ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.x);
    // 0xF87C: BPL 0x0xF86E
    if (!cpu.cpu.negative_flag()) cpu.state_.pc += 0xF86E;
    // 0xF87E: LDD 0x0x8040
    cpu.state_.d = 0x8040;
    // 0xF881: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
}

} // namespace StarWars
