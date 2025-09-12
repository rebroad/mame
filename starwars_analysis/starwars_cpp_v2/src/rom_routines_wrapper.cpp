#include "cpu_6809.h"
#include <functional>
#include <map>

namespace StarWars {

// Implementation of StarWarsCPU class (declared in header)
StarWarsCPU::State::State(CPU6809& cpu)
    : a(cpu.m_a), b(cpu.m_b), d(cpu.m_d), x(cpu.m_x), y(cpu.m_y),
      u(cpu.m_u), sp(cpu.m_sp), dp(cpu.m_dp), cc(cpu.m_cc), pc(cpu.m_pc) {}

StarWarsCPU::StarWarsCPU(CPU6809& cpu) : state_(cpu), cpu_(cpu) {
    std::cout << "StarWarsCPU: Created wrapper, initial PC=0x" << std::hex << state_.pc << std::endl;
}

// Memory access methods
void StarWarsCPU::write_memory(uint16_t address, uint8_t value) {
    cpu_.write_memory(address, value);
}

uint8_t StarWarsCPU::read_memory(uint16_t address) {
    return cpu_.read_memory(address);
}

uint16_t StarWarsCPU::read_memory_word(uint16_t address) {
    return cpu_.read_memory16(address);
}

void StarWarsCPU::set_pc_debug(uint16_t pc, const std::string& reason) {
    std::cout << "StarWarsCPU::set_pc_debug() - PC changed from 0x" << std::hex << state_.pc
              << " to 0x" << pc << " (" << reason << ")" << std::endl;
    cpu_.set_pc(pc);
}

void StarWarsCPU::write_memory16(uint16_t address, uint16_t value) {
    cpu_.write_memory16(address, value);
}

uint16_t StarWarsCPU::read_memory16(uint16_t address) {
    return cpu_.read_memory16(address);
}

// Condition code helpers
bool StarWarsCPU::zero_flag() const { return cpu_.get_zero_flag(); }
bool StarWarsCPU::carry_flag() const { return cpu_.get_carry_flag(); }
bool StarWarsCPU::negative_flag() const { return (state_.cc & 0x08) != 0; }
bool StarWarsCPU::overflow_flag() const { return (state_.cc & 0x02) != 0; }

// Function call handling
void StarWarsCPU::call_function(uint16_t address) {
    // Push return address and jump
    cpu_.push_word(state_.pc);
    state_.pc = address;
}

void StarWarsCPU::return_from_function() {
    // Pop return address
    state_.pc = cpu_.pop_word();
}

// Comparison helpers
void StarWarsCPU::compare_a(uint8_t value) {
    uint8_t result = state_.a - value;
    cpu_.set_zero_flag(result == 0);
    cpu_.set_carry_flag(state_.a < value);
}

void StarWarsCPU::compare_b(uint8_t value) {
    uint8_t result = state_.b - value;
    cpu_.set_zero_flag(result == 0);
    cpu_.set_carry_flag(state_.b < value);
}

void StarWarsCPU::compare_x(uint16_t value) {
    uint16_t result = state_.x - value;
    cpu_.set_zero_flag(result == 0);
    cpu_.set_carry_flag(state_.x < value);
}

// Forward declarations of generated routines
void routine_6005_impl(StarWarsCPU& cpu);
void routine_6036_impl(StarWarsCPU& cpu);
void routine_60be_impl(StarWarsCPU& cpu);
void routine_6112_impl(StarWarsCPU& cpu);
void routine_611e_impl(StarWarsCPU& cpu);
void routine_612f_impl(StarWarsCPU& cpu);
void routine_615a_impl(StarWarsCPU& cpu);
void routine_6161_impl(StarWarsCPU& cpu);
void routine_61b5_impl(StarWarsCPU& cpu);
void routine_61ec_impl(StarWarsCPU& cpu);
void routine_620f_impl(StarWarsCPU& cpu);
void routine_622d_impl(StarWarsCPU& cpu);
void routine_62d5_impl(StarWarsCPU& cpu);
void routine_6368_impl(StarWarsCPU& cpu);
void routine_63d5_impl(StarWarsCPU& cpu);
void routine_64cd_impl(StarWarsCPU& cpu);
void routine_670d_impl(StarWarsCPU& cpu);
void routine_6724_impl(StarWarsCPU& cpu);
void routine_6726_impl(StarWarsCPU& cpu);
void routine_6761_impl(StarWarsCPU& cpu);
void routine_6782_impl(StarWarsCPU& cpu);
void routine_67aa_impl(StarWarsCPU& cpu);
void routine_67d2_impl(StarWarsCPU& cpu);
void routine_67d4_impl(StarWarsCPU& cpu);
void routine_6819_impl(StarWarsCPU& cpu);
void routine_6864_impl(StarWarsCPU& cpu);
void routine_68c7_impl(StarWarsCPU& cpu);
void routine_692d_impl(StarWarsCPU& cpu);
void routine_6978_impl(StarWarsCPU& cpu);
void routine_6a0c_impl(StarWarsCPU& cpu);
void routine_6aa0_impl(StarWarsCPU& cpu);
void routine_6da5_impl(StarWarsCPU& cpu);
void routine_6db6_impl(StarWarsCPU& cpu);
void routine_6dc0_impl(StarWarsCPU& cpu);
void routine_6dca_impl(StarWarsCPU& cpu);
void routine_6dd2_impl(StarWarsCPU& cpu);
void routine_6dfa_impl(StarWarsCPU& cpu);
void routine_6e22_impl(StarWarsCPU& cpu);
void routine_6e70_impl(StarWarsCPU& cpu);
void routine_6ea1_impl(StarWarsCPU& cpu);
void routine_6ea2_impl(StarWarsCPU& cpu);
void routine_6ecb_impl(StarWarsCPU& cpu);
void routine_6ef7_impl(StarWarsCPU& cpu);
void routine_6f5f_impl(StarWarsCPU& cpu);
void routine_6f67_impl(StarWarsCPU& cpu);
void routine_6f6f_impl(StarWarsCPU& cpu);
void routine_6fe0_impl(StarWarsCPU& cpu);
void routine_6ff1_impl(StarWarsCPU& cpu);
void routine_703b_impl(StarWarsCPU& cpu);
void routine_70bd_impl(StarWarsCPU& cpu);
void routine_70cc_impl(StarWarsCPU& cpu);
void routine_70db_impl(StarWarsCPU& cpu);
void routine_70f0_impl(StarWarsCPU& cpu);
void routine_7100_impl(StarWarsCPU& cpu);
void routine_7111_impl(StarWarsCPU& cpu);
void routine_7160_impl(StarWarsCPU& cpu);
void routine_71c4_impl(StarWarsCPU& cpu);
void routine_72c7_impl(StarWarsCPU& cpu);
void routine_7315_impl(StarWarsCPU& cpu);
void routine_733c_impl(StarWarsCPU& cpu);
void routine_736f_impl(StarWarsCPU& cpu);
void routine_7390_impl(StarWarsCPU& cpu);
void routine_73ea_impl(StarWarsCPU& cpu);
void routine_7413_impl(StarWarsCPU& cpu);
void routine_743c_impl(StarWarsCPU& cpu);
void routine_7519_impl(StarWarsCPU& cpu);
void routine_761d_impl(StarWarsCPU& cpu);
void routine_768d_impl(StarWarsCPU& cpu);
void routine_76d3_impl(StarWarsCPU& cpu);
void routine_7707_impl(StarWarsCPU& cpu);
void routine_7720_impl(StarWarsCPU& cpu);
void routine_7765_impl(StarWarsCPU& cpu);
void routine_77a4_impl(StarWarsCPU& cpu);
void routine_77d4_impl(StarWarsCPU& cpu);
void routine_785b_impl(StarWarsCPU& cpu);
void routine_7863_impl(StarWarsCPU& cpu);
void routine_786a_impl(StarWarsCPU& cpu);
void routine_7881_impl(StarWarsCPU& cpu);
void routine_7a48_impl(StarWarsCPU& cpu);
void routine_7a5a_impl(StarWarsCPU& cpu);
void routine_7b9e_impl(StarWarsCPU& cpu);
void routine_7bbd_impl(StarWarsCPU& cpu);
void routine_7d9a_impl(StarWarsCPU& cpu);
void routine_7eaf_impl(StarWarsCPU& cpu);
void routine_8341_impl(StarWarsCPU& cpu);
void routine_83a4_impl(StarWarsCPU& cpu);
void routine_83ce_impl(StarWarsCPU& cpu);
void routine_8408_impl(StarWarsCPU& cpu);
void routine_8434_impl(StarWarsCPU& cpu);
void routine_8495_impl(StarWarsCPU& cpu);
void routine_84c6_impl(StarWarsCPU& cpu);
void routine_859b_impl(StarWarsCPU& cpu);
void routine_85f9_impl(StarWarsCPU& cpu);
void routine_868a_impl(StarWarsCPU& cpu);
void routine_86ae_impl(StarWarsCPU& cpu);
void routine_8735_impl(StarWarsCPU& cpu);
void routine_87cb_impl(StarWarsCPU& cpu);
void routine_87f5_impl(StarWarsCPU& cpu);
void routine_889f_impl(StarWarsCPU& cpu);
void routine_88f5_impl(StarWarsCPU& cpu);
void routine_8951_impl(StarWarsCPU& cpu);
void routine_8959_impl(StarWarsCPU& cpu);
void routine_8961_impl(StarWarsCPU& cpu);
void routine_8969_impl(StarWarsCPU& cpu);
void routine_8971_impl(StarWarsCPU& cpu);
void routine_8979_impl(StarWarsCPU& cpu);
void routine_8981_impl(StarWarsCPU& cpu);
void routine_8993_impl(StarWarsCPU& cpu);
void routine_89c8_impl(StarWarsCPU& cpu);
void routine_89d3_impl(StarWarsCPU& cpu);
void routine_89de_impl(StarWarsCPU& cpu);
void routine_89e9_impl(StarWarsCPU& cpu);
void routine_8a00_impl(StarWarsCPU& cpu);
void routine_8a05_impl(StarWarsCPU& cpu);
void routine_8a21_impl(StarWarsCPU& cpu);
void routine_8a3d_impl(StarWarsCPU& cpu);
void routine_8a59_impl(StarWarsCPU& cpu);
void routine_8a7e_impl(StarWarsCPU& cpu);
void routine_8ab6_impl(StarWarsCPU& cpu);
void routine_8acf_impl(StarWarsCPU& cpu);
void routine_8b6d_impl(StarWarsCPU& cpu);
void routine_8b86_impl(StarWarsCPU& cpu);
void routine_8be1_impl(StarWarsCPU& cpu);
void routine_8c44_impl(StarWarsCPU& cpu);
void routine_8d9d_impl(StarWarsCPU& cpu);
void routine_8de3_impl(StarWarsCPU& cpu);
void routine_8e1c_impl(StarWarsCPU& cpu);
void routine_8e23_impl(StarWarsCPU& cpu);
void routine_8e32_impl(StarWarsCPU& cpu);
void routine_8e3a_impl(StarWarsCPU& cpu);
void routine_8ed6_impl(StarWarsCPU& cpu);
void routine_8f34_impl(StarWarsCPU& cpu);
void routine_8f7b_impl(StarWarsCPU& cpu);
void routine_9500_impl(StarWarsCPU& cpu);
void routine_953b_impl(StarWarsCPU& cpu);
void routine_9558_impl(StarWarsCPU& cpu);
void routine_95a7_impl(StarWarsCPU& cpu);
void routine_9604_impl(StarWarsCPU& cpu);
void routine_960f_impl(StarWarsCPU& cpu);
void routine_962a_impl(StarWarsCPU& cpu);
void routine_96a1_impl(StarWarsCPU& cpu);
void routine_9722_impl(StarWarsCPU& cpu);
void routine_973a_impl(StarWarsCPU& cpu);
void routine_9775_impl(StarWarsCPU& cpu);
void routine_97ac_impl(StarWarsCPU& cpu);
void routine_97c2_impl(StarWarsCPU& cpu);
void routine_97e3_impl(StarWarsCPU& cpu);
void routine_97e8_impl(StarWarsCPU& cpu);
void routine_97ed_impl(StarWarsCPU& cpu);
void routine_97f2_impl(StarWarsCPU& cpu);
void routine_97f7_impl(StarWarsCPU& cpu);
void routine_97fc_impl(StarWarsCPU& cpu);
void routine_9801_impl(StarWarsCPU& cpu);
void routine_9806_impl(StarWarsCPU& cpu);
void routine_9810_impl(StarWarsCPU& cpu);
void routine_9874_impl(StarWarsCPU& cpu);
void routine_987f_impl(StarWarsCPU& cpu);
void routine_9886_impl(StarWarsCPU& cpu);
void routine_9890_impl(StarWarsCPU& cpu);
void routine_9898_impl(StarWarsCPU& cpu);
void routine_98b0_impl(StarWarsCPU& cpu);
void routine_a1ce_impl(StarWarsCPU& cpu);
void routine_a214_impl(StarWarsCPU& cpu);
void routine_a2f8_impl(StarWarsCPU& cpu);
void routine_a40a_impl(StarWarsCPU& cpu);
void routine_a459_impl(StarWarsCPU& cpu);
void routine_a54b_impl(StarWarsCPU& cpu);
void routine_a591_impl(StarWarsCPU& cpu);
void routine_a68b_impl(StarWarsCPU& cpu);
void routine_a6e0_impl(StarWarsCPU& cpu);
void routine_a6f4_impl(StarWarsCPU& cpu);
void routine_a705_impl(StarWarsCPU& cpu);
void routine_a728_impl(StarWarsCPU& cpu);
void routine_a7b6_impl(StarWarsCPU& cpu);
void routine_a7bf_impl(StarWarsCPU& cpu);
void routine_a7c8_impl(StarWarsCPU& cpu);
void routine_a7f7_impl(StarWarsCPU& cpu);
void routine_a80b_impl(StarWarsCPU& cpu);
void routine_a849_impl(StarWarsCPU& cpu);
void routine_a90c_impl(StarWarsCPU& cpu);
void routine_a920_impl(StarWarsCPU& cpu);
void routine_a933_impl(StarWarsCPU& cpu);
void routine_aa7d_impl(StarWarsCPU& cpu);
void routine_aae4_impl(StarWarsCPU& cpu);
void routine_ac34_impl(StarWarsCPU& cpu);
void routine_ac52_impl(StarWarsCPU& cpu);
void routine_acb1_impl(StarWarsCPU& cpu);
void routine_ace0_impl(StarWarsCPU& cpu);
void routine_ad20_impl(StarWarsCPU& cpu);
void routine_ad3e_impl(StarWarsCPU& cpu);
void routine_ad6c_impl(StarWarsCPU& cpu);
void routine_adaf_impl(StarWarsCPU& cpu);
void routine_adbd_impl(StarWarsCPU& cpu);
void routine_add4_impl(StarWarsCPU& cpu);
void routine_ae60_impl(StarWarsCPU& cpu);
void routine_aebd_impl(StarWarsCPU& cpu);
void routine_af87_impl(StarWarsCPU& cpu);
void routine_afef_impl(StarWarsCPU& cpu);
void routine_b000_impl(StarWarsCPU& cpu);
void routine_b071_impl(StarWarsCPU& cpu);
void routine_b095_impl(StarWarsCPU& cpu);
void routine_b261_impl(StarWarsCPU& cpu);
void routine_b29c_impl(StarWarsCPU& cpu);
void routine_b2d2_impl(StarWarsCPU& cpu);
void routine_b32b_impl(StarWarsCPU& cpu);
void routine_b3e4_impl(StarWarsCPU& cpu);
void routine_b43f_impl(StarWarsCPU& cpu);
void routine_b579_impl(StarWarsCPU& cpu);
void routine_b6b9_impl(StarWarsCPU& cpu);
void routine_b6c0_impl(StarWarsCPU& cpu);
void routine_b6c7_impl(StarWarsCPU& cpu);
void routine_b6cc_impl(StarWarsCPU& cpu);
void routine_b6d7_impl(StarWarsCPU& cpu);
void routine_b739_impl(StarWarsCPU& cpu);
void routine_b76c_impl(StarWarsCPU& cpu);
void routine_b83f_impl(StarWarsCPU& cpu);
void routine_b852_impl(StarWarsCPU& cpu);
void routine_b85e_impl(StarWarsCPU& cpu);
void routine_b939_impl(StarWarsCPU& cpu);
void routine_b948_impl(StarWarsCPU& cpu);
void routine_b95c_impl(StarWarsCPU& cpu);
void routine_b982_impl(StarWarsCPU& cpu);
void routine_b98b_impl(StarWarsCPU& cpu);
void routine_ba12_impl(StarWarsCPU& cpu);
void routine_ba32_impl(StarWarsCPU& cpu);
void routine_bb85_impl(StarWarsCPU& cpu);
void routine_bcae_impl(StarWarsCPU& cpu);
void routine_bcc8_impl(StarWarsCPU& cpu);
void routine_bce9_impl(StarWarsCPU& cpu);
void routine_bd00_impl(StarWarsCPU& cpu);
void routine_bd03_impl(StarWarsCPU& cpu);
void routine_bd08_impl(StarWarsCPU& cpu);
void routine_bd12_impl(StarWarsCPU& cpu);
void routine_bd17_impl(StarWarsCPU& cpu);
void routine_bd1c_impl(StarWarsCPU& cpu);
void routine_bd21_impl(StarWarsCPU& cpu);
void routine_bd2b_impl(StarWarsCPU& cpu);
void routine_bd30_impl(StarWarsCPU& cpu);
void routine_bd35_impl(StarWarsCPU& cpu);
void routine_bd3a_impl(StarWarsCPU& cpu);
void routine_bd3f_impl(StarWarsCPU& cpu);
void routine_bd44_impl(StarWarsCPU& cpu);
void routine_bd4e_impl(StarWarsCPU& cpu);
void routine_bd53_impl(StarWarsCPU& cpu);
void routine_bd58_impl(StarWarsCPU& cpu);
void routine_bd5d_impl(StarWarsCPU& cpu);
void routine_bd62_impl(StarWarsCPU& cpu);
void routine_bd67_impl(StarWarsCPU& cpu);
void routine_bd6c_impl(StarWarsCPU& cpu);
void routine_bd71_impl(StarWarsCPU& cpu);
void routine_bd76_impl(StarWarsCPU& cpu);
void routine_bd80_impl(StarWarsCPU& cpu);
void routine_bd85_impl(StarWarsCPU& cpu);
void routine_bd8a_impl(StarWarsCPU& cpu);
void routine_bd94_impl(StarWarsCPU& cpu);
void routine_bd99_impl(StarWarsCPU& cpu);
void routine_bd9e_impl(StarWarsCPU& cpu);
void routine_bda3_impl(StarWarsCPU& cpu);
void routine_bda8_impl(StarWarsCPU& cpu);
void routine_bdad_impl(StarWarsCPU& cpu);
void routine_bdb2_impl(StarWarsCPU& cpu);
void routine_bdb7_impl(StarWarsCPU& cpu);
void routine_bdbc_impl(StarWarsCPU& cpu);
void routine_bdc6_impl(StarWarsCPU& cpu);
void routine_bdcb_impl(StarWarsCPU& cpu);
void routine_bdd0_impl(StarWarsCPU& cpu);
void routine_bdd5_impl(StarWarsCPU& cpu);
void routine_bdda_impl(StarWarsCPU& cpu);
void routine_bddf_impl(StarWarsCPU& cpu);
void routine_bde4_impl(StarWarsCPU& cpu);
void routine_bde9_impl(StarWarsCPU& cpu);
void routine_bdee_impl(StarWarsCPU& cpu);
void routine_bdf3_impl(StarWarsCPU& cpu);
void routine_bdf8_impl(StarWarsCPU& cpu);
void routine_bdfd_impl(StarWarsCPU& cpu);
void routine_be00_impl(StarWarsCPU& cpu);
void routine_be02_impl(StarWarsCPU& cpu);
void routine_be07_impl(StarWarsCPU& cpu);
void routine_be0c_impl(StarWarsCPU& cpu);
void routine_be11_impl(StarWarsCPU& cpu);
void routine_be16_impl(StarWarsCPU& cpu);
void routine_be20_impl(StarWarsCPU& cpu);
void routine_c02f_impl(StarWarsCPU& cpu);
void routine_c087_impl(StarWarsCPU& cpu);
void routine_c200_impl(StarWarsCPU& cpu);
void routine_c20c_impl(StarWarsCPU& cpu);
void routine_c24e_impl(StarWarsCPU& cpu);
void routine_c2b3_impl(StarWarsCPU& cpu);
void routine_c2c3_impl(StarWarsCPU& cpu);
void routine_c306_impl(StarWarsCPU& cpu);
void routine_c369_impl(StarWarsCPU& cpu);
void routine_c3a7_impl(StarWarsCPU& cpu);
void routine_c3ee_impl(StarWarsCPU& cpu);
void routine_c413_impl(StarWarsCPU& cpu);
void routine_c450_impl(StarWarsCPU& cpu);
void routine_c4eb_impl(StarWarsCPU& cpu);
void routine_c5a4_impl(StarWarsCPU& cpu);
void routine_c5f2_impl(StarWarsCPU& cpu);
void routine_c600_impl(StarWarsCPU& cpu);
void routine_c641_impl(StarWarsCPU& cpu);
void routine_c65b_impl(StarWarsCPU& cpu);
void routine_c67a_impl(StarWarsCPU& cpu);
void routine_c688_impl(StarWarsCPU& cpu);
void routine_c690_impl(StarWarsCPU& cpu);
void routine_c6b8_impl(StarWarsCPU& cpu);
void routine_c6d4_impl(StarWarsCPU& cpu);
void routine_c6d7_impl(StarWarsCPU& cpu);
void routine_c6d9_impl(StarWarsCPU& cpu);
void routine_c6f4_impl(StarWarsCPU& cpu);
void routine_c6f7_impl(StarWarsCPU& cpu);
void routine_c6f9_impl(StarWarsCPU& cpu);
void routine_c70e_impl(StarWarsCPU& cpu);
void routine_c7fd_impl(StarWarsCPU& cpu);
void routine_caf3_impl(StarWarsCPU& cpu);
void routine_cc00_impl(StarWarsCPU& cpu);
void routine_cc18_impl(StarWarsCPU& cpu);
void routine_cc38_impl(StarWarsCPU& cpu);
void routine_cc5b_impl(StarWarsCPU& cpu);
void routine_ccc0_impl(StarWarsCPU& cpu);
void routine_cccc_impl(StarWarsCPU& cpu);
void routine_ccd8_impl(StarWarsCPU& cpu);
void routine_cce4_impl(StarWarsCPU& cpu);
void routine_ccf0_impl(StarWarsCPU& cpu);
void routine_ccfc_impl(StarWarsCPU& cpu);
void routine_cd00_impl(StarWarsCPU& cpu);
void routine_cd08_impl(StarWarsCPU& cpu);
void routine_cd14_impl(StarWarsCPU& cpu);
void routine_cd20_impl(StarWarsCPU& cpu);
void routine_cd2c_impl(StarWarsCPU& cpu);
void routine_cd38_impl(StarWarsCPU& cpu);
void routine_cd44_impl(StarWarsCPU& cpu);
void routine_cd50_impl(StarWarsCPU& cpu);
void routine_cd5c_impl(StarWarsCPU& cpu);
void routine_cd68_impl(StarWarsCPU& cpu);
void routine_cd74_impl(StarWarsCPU& cpu);
void routine_cd80_impl(StarWarsCPU& cpu);
void routine_cd8c_impl(StarWarsCPU& cpu);
void routine_cd9c_impl(StarWarsCPU& cpu);
void routine_cd9e_impl(StarWarsCPU& cpu);
void routine_cda0_impl(StarWarsCPU& cpu);
void routine_cda2_impl(StarWarsCPU& cpu);
void routine_cda9_impl(StarWarsCPU& cpu);
void routine_cdab_impl(StarWarsCPU& cpu);
void routine_cdb1_impl(StarWarsCPU& cpu);
void routine_cdb5_impl(StarWarsCPU& cpu);
void routine_cdba_impl(StarWarsCPU& cpu);
void routine_cdc3_impl(StarWarsCPU& cpu);
void routine_cde7_impl(StarWarsCPU& cpu);
void routine_ce0c_impl(StarWarsCPU& cpu);
void routine_ce18_impl(StarWarsCPU& cpu);
void routine_ce24_impl(StarWarsCPU& cpu);
void routine_ce2f_impl(StarWarsCPU& cpu);
void routine_ce3a_impl(StarWarsCPU& cpu);
void routine_ce45_impl(StarWarsCPU& cpu);
void routine_d800_impl(StarWarsCPU& cpu);
void routine_d882_impl(StarWarsCPU& cpu);
void routine_d883_impl(StarWarsCPU& cpu);
void routine_d8df_impl(StarWarsCPU& cpu);
void routine_d91a_impl(StarWarsCPU& cpu);
void routine_d923_impl(StarWarsCPU& cpu);
void routine_d942_impl(StarWarsCPU& cpu);
void routine_d95e_impl(StarWarsCPU& cpu);
void routine_d971_impl(StarWarsCPU& cpu);
void routine_d985_impl(StarWarsCPU& cpu);
void routine_d9dc_impl(StarWarsCPU& cpu);
void routine_d9fa_impl(StarWarsCPU& cpu);
void routine_e000_impl(StarWarsCPU& cpu);
void routine_e700_impl(StarWarsCPU& cpu);
void routine_e764_impl(StarWarsCPU& cpu);
void routine_e772_impl(StarWarsCPU& cpu);
void routine_e790_impl(StarWarsCPU& cpu);
void routine_e7ad_impl(StarWarsCPU& cpu);
void routine_e7c7_impl(StarWarsCPU& cpu);
void routine_e7d3_impl(StarWarsCPU& cpu);
void routine_e7dd_impl(StarWarsCPU& cpu);
void routine_e7fc_impl(StarWarsCPU& cpu);
void routine_e821_impl(StarWarsCPU& cpu);
void routine_f17f_impl(StarWarsCPU& cpu);
void routine_f182_impl(StarWarsCPU& cpu);
void routine_f1c6_impl(StarWarsCPU& cpu);
void routine_f1fd_impl(StarWarsCPU& cpu);
void routine_f261_impl(StarWarsCPU& cpu);
void routine_f36e_impl(StarWarsCPU& cpu);
void routine_f70d_impl(StarWarsCPU& cpu);
void routine_f714_impl(StarWarsCPU& cpu);
void routine_f720_impl(StarWarsCPU& cpu);
void routine_f86c_impl(StarWarsCPU& cpu);
void routine_fb38_impl(StarWarsCPU& cpu);
void routine_fb73_impl(StarWarsCPU& cpu);
void routine_fd00_impl(StarWarsCPU& cpu);
void routine_fd07_impl(StarWarsCPU& cpu);
void routine_feff_impl(StarWarsCPU& cpu);
void routine_ff24_impl(StarWarsCPU& cpu);



// Address to function mapping
static const std::map<uint16_t, std::function<void(StarWarsCPU&)>> routine_map = {
    {0x6005, routine_6005_impl},
    {0x6036, routine_6036_impl},
    {0x60BE, routine_60be_impl},
    {0x6112, routine_6112_impl},
    {0x611E, routine_611e_impl},
    {0x612F, routine_612f_impl},
    {0x615A, routine_615a_impl},
    {0x6161, routine_6161_impl},
    {0x61B5, routine_61b5_impl},
    {0x61EC, routine_61ec_impl},
    {0x620F, routine_620f_impl},
    {0x622D, routine_622d_impl},
    {0x62D5, routine_62d5_impl},
    {0x6368, routine_6368_impl},
    {0x63D5, routine_63d5_impl},
    {0x64CD, routine_64cd_impl},
    {0x670D, routine_670d_impl},
    {0x6724, routine_6724_impl},
    {0x6726, routine_6726_impl},
    {0x6761, routine_6761_impl},
    {0x6782, routine_6782_impl},
    {0x67AA, routine_67aa_impl},
    {0x67D2, routine_67d2_impl},
    {0x67D4, routine_67d4_impl},
    {0x6819, routine_6819_impl},
    {0x6864, routine_6864_impl},
    {0x68C7, routine_68c7_impl},
    {0x692D, routine_692d_impl},
    {0x6978, routine_6978_impl},
    {0x6A0C, routine_6a0c_impl},
    {0x6AA0, routine_6aa0_impl},
    {0x6DA5, routine_6da5_impl},
    {0x6DB6, routine_6db6_impl},
    {0x6DC0, routine_6dc0_impl},
    {0x6DCA, routine_6dca_impl},
    {0x6DD2, routine_6dd2_impl},
    {0x6DFA, routine_6dfa_impl},
    {0x6E22, routine_6e22_impl},
    {0x6E70, routine_6e70_impl},
    {0x6EA1, routine_6ea1_impl},
    {0x6EA2, routine_6ea2_impl},
    {0x6ECB, routine_6ecb_impl},
    {0x6EF7, routine_6ef7_impl},
    {0x6F5F, routine_6f5f_impl},
    {0x6F67, routine_6f67_impl},
    {0x6F6F, routine_6f6f_impl},
    {0x6FE0, routine_6fe0_impl},
    {0x6FF1, routine_6ff1_impl},
    {0x703B, routine_703b_impl},
    {0x70BD, routine_70bd_impl},
    {0x70CC, routine_70cc_impl},
    {0x70DB, routine_70db_impl},
    {0x70F0, routine_70f0_impl},
    {0x7100, routine_7100_impl},
    {0x7111, routine_7111_impl},
    {0x7160, routine_7160_impl},
    {0x71C4, routine_71c4_impl},
    {0x72C7, routine_72c7_impl},
    {0x7315, routine_7315_impl},
    {0x733C, routine_733c_impl},
    {0x736F, routine_736f_impl},
    {0x7390, routine_7390_impl},
    {0x73EA, routine_73ea_impl},
    {0x7413, routine_7413_impl},
    {0x743C, routine_743c_impl},
    {0x7519, routine_7519_impl},
    {0x761D, routine_761d_impl},
    {0x768D, routine_768d_impl},
    {0x76D3, routine_76d3_impl},
    {0x7707, routine_7707_impl},
    {0x7720, routine_7720_impl},
    {0x7765, routine_7765_impl},
    {0x77A4, routine_77a4_impl},
    {0x77D4, routine_77d4_impl},
    {0x785B, routine_785b_impl},
    {0x7863, routine_7863_impl},
    {0x786A, routine_786a_impl},
    {0x7881, routine_7881_impl},
    {0x7A48, routine_7a48_impl},
    {0x7A5A, routine_7a5a_impl},
    {0x7B9E, routine_7b9e_impl},
    {0x7BBD, routine_7bbd_impl},
    {0x7D9A, routine_7d9a_impl},
    {0x7EAF, routine_7eaf_impl},
    {0x8341, routine_8341_impl},
    {0x83A4, routine_83a4_impl},
    {0x83CE, routine_83ce_impl},
    {0x8408, routine_8408_impl},
    {0x8434, routine_8434_impl},
    {0x8495, routine_8495_impl},
    {0x84C6, routine_84c6_impl},
    {0x859B, routine_859b_impl},
    {0x85F9, routine_85f9_impl},
    {0x868A, routine_868a_impl},
    {0x86AE, routine_86ae_impl},
    {0x8735, routine_8735_impl},
    {0x87CB, routine_87cb_impl},
    {0x87F5, routine_87f5_impl},
    {0x889F, routine_889f_impl},
    {0x88F5, routine_88f5_impl},
    {0x8951, routine_8951_impl},
    {0x8959, routine_8959_impl},
    {0x8961, routine_8961_impl},
    {0x8969, routine_8969_impl},
    {0x8971, routine_8971_impl},
    {0x8979, routine_8979_impl},
    {0x8981, routine_8981_impl},
    {0x8993, routine_8993_impl},
    {0x89C8, routine_89c8_impl},
    {0x89D3, routine_89d3_impl},
    {0x89DE, routine_89de_impl},
    {0x89E9, routine_89e9_impl},
    {0x8A00, routine_8a00_impl},
    {0x8A05, routine_8a05_impl},
    {0x8A21, routine_8a21_impl},
    {0x8A3D, routine_8a3d_impl},
    {0x8A59, routine_8a59_impl},
    {0x8A7E, routine_8a7e_impl},
    {0x8AB6, routine_8ab6_impl},
    {0x8ACF, routine_8acf_impl},
    {0x8B6D, routine_8b6d_impl},
    {0x8B86, routine_8b86_impl},
    {0x8BE1, routine_8be1_impl},
    {0x8C44, routine_8c44_impl},
    {0x8D9D, routine_8d9d_impl},
    {0x8DE3, routine_8de3_impl},
    {0x8E1C, routine_8e1c_impl},
    {0x8E23, routine_8e23_impl},
    {0x8E32, routine_8e32_impl},
    {0x8E3A, routine_8e3a_impl},
    {0x8ED6, routine_8ed6_impl},
    {0x8F34, routine_8f34_impl},
    {0x8F7B, routine_8f7b_impl},
    {0x9500, routine_9500_impl},
    {0x953B, routine_953b_impl},
    {0x9558, routine_9558_impl},
    {0x95A7, routine_95a7_impl},
    {0x9604, routine_9604_impl},
    {0x960F, routine_960f_impl},
    {0x962A, routine_962a_impl},
    {0x96A1, routine_96a1_impl},
    {0x9722, routine_9722_impl},
    {0x973A, routine_973a_impl},
    {0x9775, routine_9775_impl},
    {0x97AC, routine_97ac_impl},
    {0x97C2, routine_97c2_impl},
    {0x97E3, routine_97e3_impl},
    {0x97E8, routine_97e8_impl},
    {0x97ED, routine_97ed_impl},
    {0x97F2, routine_97f2_impl},
    {0x97F7, routine_97f7_impl},
    {0x97FC, routine_97fc_impl},
    {0x9801, routine_9801_impl},
    {0x9806, routine_9806_impl},
    {0x9810, routine_9810_impl},
    {0x9874, routine_9874_impl},
    {0x987F, routine_987f_impl},
    {0x9886, routine_9886_impl},
    {0x9890, routine_9890_impl},
    {0x9898, routine_9898_impl},
    {0x98B0, routine_98b0_impl},
    {0xA1CE, routine_a1ce_impl},
    {0xA214, routine_a214_impl},
    {0xA2F8, routine_a2f8_impl},
    {0xA40A, routine_a40a_impl},
    {0xA459, routine_a459_impl},
    {0xA54B, routine_a54b_impl},
    {0xA591, routine_a591_impl},
    {0xA68B, routine_a68b_impl},
    {0xA6E0, routine_a6e0_impl},
    {0xA6F4, routine_a6f4_impl},
    {0xA705, routine_a705_impl},
    {0xA728, routine_a728_impl},
    {0xA7B6, routine_a7b6_impl},
    {0xA7BF, routine_a7bf_impl},
    {0xA7C8, routine_a7c8_impl},
    {0xA7F7, routine_a7f7_impl},
    {0xA80B, routine_a80b_impl},
    {0xA849, routine_a849_impl},
    {0xA90C, routine_a90c_impl},
    {0xA920, routine_a920_impl},
    {0xA933, routine_a933_impl},
    {0xAA7D, routine_aa7d_impl},
    {0xAAE4, routine_aae4_impl},
    {0xAC34, routine_ac34_impl},
    {0xAC52, routine_ac52_impl},
    {0xACB1, routine_acb1_impl},
    {0xACE0, routine_ace0_impl},
    {0xAD20, routine_ad20_impl},
    {0xAD3E, routine_ad3e_impl},
    {0xAD6C, routine_ad6c_impl},
    {0xADAF, routine_adaf_impl},
    {0xADBD, routine_adbd_impl},
    {0xADD4, routine_add4_impl},
    {0xAE60, routine_ae60_impl},
    {0xAEBD, routine_aebd_impl},
    {0xAF87, routine_af87_impl},
    {0xAFEF, routine_afef_impl},
    {0xB000, routine_b000_impl},
    {0xB071, routine_b071_impl},
    {0xB095, routine_b095_impl},
    {0xB261, routine_b261_impl},
    {0xB29C, routine_b29c_impl},
    {0xB2D2, routine_b2d2_impl},
    {0xB32B, routine_b32b_impl},
    {0xB3E4, routine_b3e4_impl},
    {0xB43F, routine_b43f_impl},
    {0xB579, routine_b579_impl},
    {0xB6B9, routine_b6b9_impl},
    {0xB6C0, routine_b6c0_impl},
    {0xB6C7, routine_b6c7_impl},
    {0xB6CC, routine_b6cc_impl},
    {0xB6D7, routine_b6d7_impl},
    {0xB739, routine_b739_impl},
    {0xB76C, routine_b76c_impl},
    {0xB83F, routine_b83f_impl},
    {0xB852, routine_b852_impl},
    {0xB85E, routine_b85e_impl},
    {0xB939, routine_b939_impl},
    {0xB948, routine_b948_impl},
    {0xB95C, routine_b95c_impl},
    {0xB982, routine_b982_impl},
    {0xB98B, routine_b98b_impl},
    {0xBA12, routine_ba12_impl},
    {0xBA32, routine_ba32_impl},
    {0xBB85, routine_bb85_impl},
    {0xBCAE, routine_bcae_impl},
    {0xBCC8, routine_bcc8_impl},
    {0xBCE9, routine_bce9_impl},
    {0xBD00, routine_bd00_impl},
    {0xBD03, routine_bd03_impl},
    {0xBD08, routine_bd08_impl},
    {0xBD12, routine_bd12_impl},
    {0xBD17, routine_bd17_impl},
    {0xBD1C, routine_bd1c_impl},
    {0xBD21, routine_bd21_impl},
    {0xBD2B, routine_bd2b_impl},
    {0xBD30, routine_bd30_impl},
    {0xBD35, routine_bd35_impl},
    {0xBD3A, routine_bd3a_impl},
    {0xBD3F, routine_bd3f_impl},
    {0xBD44, routine_bd44_impl},
    {0xBD4E, routine_bd4e_impl},
    {0xBD53, routine_bd53_impl},
    {0xBD58, routine_bd58_impl},
    {0xBD5D, routine_bd5d_impl},
    {0xBD62, routine_bd62_impl},
    {0xBD67, routine_bd67_impl},
    {0xBD6C, routine_bd6c_impl},
    {0xBD71, routine_bd71_impl},
    {0xBD76, routine_bd76_impl},
    {0xBD80, routine_bd80_impl},
    {0xBD85, routine_bd85_impl},
    {0xBD8A, routine_bd8a_impl},
    {0xBD94, routine_bd94_impl},
    {0xBD99, routine_bd99_impl},
    {0xBD9E, routine_bd9e_impl},
    {0xBDA3, routine_bda3_impl},
    {0xBDA8, routine_bda8_impl},
    {0xBDAD, routine_bdad_impl},
    {0xBDB2, routine_bdb2_impl},
    {0xBDB7, routine_bdb7_impl},
    {0xBDBC, routine_bdbc_impl},
    {0xBDC6, routine_bdc6_impl},
    {0xBDCB, routine_bdcb_impl},
    {0xBDD0, routine_bdd0_impl},
    {0xBDD5, routine_bdd5_impl},
    {0xBDDA, routine_bdda_impl},
    {0xBDDF, routine_bddf_impl},
    {0xBDE4, routine_bde4_impl},
    {0xBDE9, routine_bde9_impl},
    {0xBDEE, routine_bdee_impl},
    {0xBDF3, routine_bdf3_impl},
    {0xBDF8, routine_bdf8_impl},
    {0xBDFD, routine_bdfd_impl},
    {0xBE00, routine_be00_impl},
    {0xBE02, routine_be02_impl},
    {0xBE07, routine_be07_impl},
    {0xBE0C, routine_be0c_impl},
    {0xBE11, routine_be11_impl},
    {0xBE16, routine_be16_impl},
    {0xBE20, routine_be20_impl},
    {0xC02F, routine_c02f_impl},
    {0xC087, routine_c087_impl},
    {0xC200, routine_c200_impl},
    {0xC20C, routine_c20c_impl},
    {0xC24E, routine_c24e_impl},
    {0xC2B3, routine_c2b3_impl},
    {0xC2C3, routine_c2c3_impl},
    {0xC306, routine_c306_impl},
    {0xC369, routine_c369_impl},
    {0xC3A7, routine_c3a7_impl},
    {0xC3EE, routine_c3ee_impl},
    {0xC413, routine_c413_impl},
    {0xC450, routine_c450_impl},
    {0xC4EB, routine_c4eb_impl},
    {0xC5A4, routine_c5a4_impl},
    {0xC5F2, routine_c5f2_impl},
    {0xC600, routine_c600_impl},
    {0xC641, routine_c641_impl},
    {0xC65B, routine_c65b_impl},
    {0xC67A, routine_c67a_impl},
    {0xC688, routine_c688_impl},
    {0xC690, routine_c690_impl},
    {0xC6B8, routine_c6b8_impl},
    {0xC6D4, routine_c6d4_impl},
    {0xC6D7, routine_c6d7_impl},
    {0xC6D9, routine_c6d9_impl},
    {0xC6F4, routine_c6f4_impl},
    {0xC6F7, routine_c6f7_impl},
    {0xC6F9, routine_c6f9_impl},
    {0xC70E, routine_c70e_impl},
    {0xC7FD, routine_c7fd_impl},
    {0xCAF3, routine_caf3_impl},
    {0xCC00, routine_cc00_impl},
    {0xCC18, routine_cc18_impl},
    {0xCC38, routine_cc38_impl},
    {0xCC5B, routine_cc5b_impl},
    {0xCCC0, routine_ccc0_impl},
    {0xCCCC, routine_cccc_impl},
    {0xCCD8, routine_ccd8_impl},
    {0xCCE4, routine_cce4_impl},
    {0xCCF0, routine_ccf0_impl},
    {0xCCFC, routine_ccfc_impl},
    {0xCD00, routine_cd00_impl},
    {0xCD08, routine_cd08_impl},
    {0xCD14, routine_cd14_impl},
    {0xCD20, routine_cd20_impl},
    {0xCD2C, routine_cd2c_impl},
    {0xCD38, routine_cd38_impl},
    {0xCD44, routine_cd44_impl},
    {0xCD50, routine_cd50_impl},
    {0xCD5C, routine_cd5c_impl},
    {0xCD68, routine_cd68_impl},
    {0xCD74, routine_cd74_impl},
    {0xCD80, routine_cd80_impl},
    {0xCD8C, routine_cd8c_impl},
    {0xCD9C, routine_cd9c_impl},
    {0xCD9E, routine_cd9e_impl},
    {0xCDA0, routine_cda0_impl},
    {0xCDA2, routine_cda2_impl},
    {0xCDA9, routine_cda9_impl},
    {0xCDAB, routine_cdab_impl},
    {0xCDB1, routine_cdb1_impl},
    {0xCDB5, routine_cdb5_impl},
    {0xCDBA, routine_cdba_impl},
    {0xCDC3, routine_cdc3_impl},
    {0xCDE7, routine_cde7_impl},
    {0xCE0C, routine_ce0c_impl},
    {0xCE18, routine_ce18_impl},
    {0xCE24, routine_ce24_impl},
    {0xCE2F, routine_ce2f_impl},
    {0xCE3A, routine_ce3a_impl},
    {0xCE45, routine_ce45_impl},
    {0xD800, routine_d800_impl},
    {0xD882, routine_d882_impl},
    {0xD883, routine_d883_impl},
    {0xD8DF, routine_d8df_impl},
    {0xD91A, routine_d91a_impl},
    {0xD923, routine_d923_impl},
    {0xD942, routine_d942_impl},
    {0xD95E, routine_d95e_impl},
    {0xD971, routine_d971_impl},
    {0xD985, routine_d985_impl},
    {0xD9DC, routine_d9dc_impl},
    {0xD9FA, routine_d9fa_impl},
    {0xE000, routine_e000_impl},
    {0xE700, routine_e700_impl},
    {0xE764, routine_e764_impl},
    {0xE772, routine_e772_impl},
    {0xE790, routine_e790_impl},
    {0xE7AD, routine_e7ad_impl},
    {0xE7C7, routine_e7c7_impl},
    {0xE7D3, routine_e7d3_impl},
    {0xE7DD, routine_e7dd_impl},
    {0xE7FC, routine_e7fc_impl},
    {0xE821, routine_e821_impl},
    {0xF17F, routine_f17f_impl},
    {0xF182, routine_f182_impl},
    {0xF1C6, routine_f1c6_impl},
    {0xF1FD, routine_f1fd_impl},
    {0xF261, routine_f261_impl},
    {0xF36E, routine_f36e_impl},
    {0xF70D, routine_f70d_impl},
    {0xF714, routine_f714_impl},
    {0xF720, routine_f720_impl},
    {0xF86C, routine_f86c_impl},
    {0xFB38, routine_fb38_impl},
    {0xFB73, routine_fb73_impl},
    {0xFD00, routine_fd00_impl},
    {0xFD07, routine_fd07_impl},
    {0xFEFF, routine_feff_impl},
    {0xFF24, routine_ff24_impl},
};

// CPU6809 method implementations
bool CPU6809::execute_at_address(uint16_t address) {
    std::cout << "CPU6809::execute_at_address(0x" << std::hex << address << ") - PC=0x" << m_pc << std::endl;

    auto it = routine_map.find(address);
    if (it != routine_map.end()) {
        // Use native C++ implementation
        std::cout << "  -> Calling C++ routine for 0x" << std::hex << address << std::endl;
        StarWarsCPU wrapper(*this);
        it->second(wrapper);
        std::cout << "  -> Routine completed, new PC=0x" << std::hex << m_pc << std::endl;
        return true;
    } else {
        // Not a known routine
        std::cout << "  -> No C++ routine found for 0x" << std::hex << address << std::endl;
        return false;
    }
}

// Wrapper methods for each routine
void CPU6809::routine_6005() {
    StarWarsCPU wrapper(*this);
    routine_6005_impl(wrapper);
}

void CPU6809::routine_6036() {
    StarWarsCPU wrapper(*this);
    routine_6036_impl(wrapper);
}

void CPU6809::routine_60be() {
    StarWarsCPU wrapper(*this);
    routine_60be_impl(wrapper);
}

void CPU6809::routine_6112() {
    StarWarsCPU wrapper(*this);
    routine_6112_impl(wrapper);
}

void CPU6809::routine_611e() {
    StarWarsCPU wrapper(*this);
    routine_611e_impl(wrapper);
}

void CPU6809::routine_612f() {
    StarWarsCPU wrapper(*this);
    routine_612f_impl(wrapper);
}

void CPU6809::routine_615a() {
    StarWarsCPU wrapper(*this);
    routine_615a_impl(wrapper);
}

void CPU6809::routine_6161() {
    StarWarsCPU wrapper(*this);
    routine_6161_impl(wrapper);
}

void CPU6809::routine_61b5() {
    StarWarsCPU wrapper(*this);
    routine_61b5_impl(wrapper);
}

void CPU6809::routine_61ec() {
    StarWarsCPU wrapper(*this);
    routine_61ec_impl(wrapper);
}

void CPU6809::routine_620f() {
    StarWarsCPU wrapper(*this);
    routine_620f_impl(wrapper);
}

void CPU6809::routine_622d() {
    StarWarsCPU wrapper(*this);
    routine_622d_impl(wrapper);
}

void CPU6809::routine_62d5() {
    StarWarsCPU wrapper(*this);
    routine_62d5_impl(wrapper);
}

void CPU6809::routine_6368() {
    StarWarsCPU wrapper(*this);
    routine_6368_impl(wrapper);
}

void CPU6809::routine_63d5() {
    StarWarsCPU wrapper(*this);
    routine_63d5_impl(wrapper);
}

void CPU6809::routine_64cd() {
    StarWarsCPU wrapper(*this);
    routine_64cd_impl(wrapper);
}

void CPU6809::routine_670d() {
    StarWarsCPU wrapper(*this);
    routine_670d_impl(wrapper);
}

void CPU6809::routine_6724() {
    StarWarsCPU wrapper(*this);
    routine_6724_impl(wrapper);
}

void CPU6809::routine_6726() {
    StarWarsCPU wrapper(*this);
    routine_6726_impl(wrapper);
}

void CPU6809::routine_6761() {
    StarWarsCPU wrapper(*this);
    routine_6761_impl(wrapper);
}

void CPU6809::routine_6782() {
    StarWarsCPU wrapper(*this);
    routine_6782_impl(wrapper);
}

void CPU6809::routine_67aa() {
    StarWarsCPU wrapper(*this);
    routine_67aa_impl(wrapper);
}

void CPU6809::routine_67d2() {
    StarWarsCPU wrapper(*this);
    routine_67d2_impl(wrapper);
}

void CPU6809::routine_67d4() {
    StarWarsCPU wrapper(*this);
    routine_67d4_impl(wrapper);
}

void CPU6809::routine_6819() {
    StarWarsCPU wrapper(*this);
    routine_6819_impl(wrapper);
}

void CPU6809::routine_6864() {
    StarWarsCPU wrapper(*this);
    routine_6864_impl(wrapper);
}

void CPU6809::routine_68c7() {
    StarWarsCPU wrapper(*this);
    routine_68c7_impl(wrapper);
}

void CPU6809::routine_692d() {
    StarWarsCPU wrapper(*this);
    routine_692d_impl(wrapper);
}

void CPU6809::routine_6978() {
    StarWarsCPU wrapper(*this);
    routine_6978_impl(wrapper);
}

void CPU6809::routine_6a0c() {
    StarWarsCPU wrapper(*this);
    routine_6a0c_impl(wrapper);
}

void CPU6809::routine_6aa0() {
    StarWarsCPU wrapper(*this);
    routine_6aa0_impl(wrapper);
}

void CPU6809::routine_6da5() {
    StarWarsCPU wrapper(*this);
    routine_6da5_impl(wrapper);
}

void CPU6809::routine_6db6() {
    StarWarsCPU wrapper(*this);
    routine_6db6_impl(wrapper);
}

void CPU6809::routine_6dc0() {
    StarWarsCPU wrapper(*this);
    routine_6dc0_impl(wrapper);
}

void CPU6809::routine_6dca() {
    StarWarsCPU wrapper(*this);
    routine_6dca_impl(wrapper);
}

void CPU6809::routine_6dd2() {
    StarWarsCPU wrapper(*this);
    routine_6dd2_impl(wrapper);
}

void CPU6809::routine_6dfa() {
    StarWarsCPU wrapper(*this);
    routine_6dfa_impl(wrapper);
}

void CPU6809::routine_6e22() {
    StarWarsCPU wrapper(*this);
    routine_6e22_impl(wrapper);
}

void CPU6809::routine_6e70() {
    StarWarsCPU wrapper(*this);
    routine_6e70_impl(wrapper);
}

void CPU6809::routine_6ea1() {
    StarWarsCPU wrapper(*this);
    routine_6ea1_impl(wrapper);
}

void CPU6809::routine_6ea2() {
    StarWarsCPU wrapper(*this);
    routine_6ea2_impl(wrapper);
}

void CPU6809::routine_6ecb() {
    StarWarsCPU wrapper(*this);
    routine_6ecb_impl(wrapper);
}

void CPU6809::routine_6ef7() {
    StarWarsCPU wrapper(*this);
    routine_6ef7_impl(wrapper);
}

void CPU6809::routine_6f5f() {
    StarWarsCPU wrapper(*this);
    routine_6f5f_impl(wrapper);
}

void CPU6809::routine_6f67() {
    StarWarsCPU wrapper(*this);
    routine_6f67_impl(wrapper);
}

void CPU6809::routine_6f6f() {
    StarWarsCPU wrapper(*this);
    routine_6f6f_impl(wrapper);
}

void CPU6809::routine_6fe0() {
    StarWarsCPU wrapper(*this);
    routine_6fe0_impl(wrapper);
}

void CPU6809::routine_6ff1() {
    StarWarsCPU wrapper(*this);
    routine_6ff1_impl(wrapper);
}

void CPU6809::routine_703b() {
    StarWarsCPU wrapper(*this);
    routine_703b_impl(wrapper);
}

void CPU6809::routine_70bd() {
    StarWarsCPU wrapper(*this);
    routine_70bd_impl(wrapper);
}

void CPU6809::routine_70cc() {
    StarWarsCPU wrapper(*this);
    routine_70cc_impl(wrapper);
}

void CPU6809::routine_70db() {
    StarWarsCPU wrapper(*this);
    routine_70db_impl(wrapper);
}

void CPU6809::routine_70f0() {
    StarWarsCPU wrapper(*this);
    routine_70f0_impl(wrapper);
}

void CPU6809::routine_7100() {
    StarWarsCPU wrapper(*this);
    routine_7100_impl(wrapper);
}

void CPU6809::routine_7111() {
    StarWarsCPU wrapper(*this);
    routine_7111_impl(wrapper);
}

void CPU6809::routine_7160() {
    StarWarsCPU wrapper(*this);
    routine_7160_impl(wrapper);
}

void CPU6809::routine_71c4() {
    StarWarsCPU wrapper(*this);
    routine_71c4_impl(wrapper);
}

void CPU6809::routine_72c7() {
    StarWarsCPU wrapper(*this);
    routine_72c7_impl(wrapper);
}

void CPU6809::routine_7315() {
    StarWarsCPU wrapper(*this);
    routine_7315_impl(wrapper);
}

void CPU6809::routine_733c() {
    StarWarsCPU wrapper(*this);
    routine_733c_impl(wrapper);
}

void CPU6809::routine_736f() {
    StarWarsCPU wrapper(*this);
    routine_736f_impl(wrapper);
}

void CPU6809::routine_7390() {
    StarWarsCPU wrapper(*this);
    routine_7390_impl(wrapper);
}

void CPU6809::routine_73ea() {
    StarWarsCPU wrapper(*this);
    routine_73ea_impl(wrapper);
}

void CPU6809::routine_7413() {
    StarWarsCPU wrapper(*this);
    routine_7413_impl(wrapper);
}

void CPU6809::routine_743c() {
    StarWarsCPU wrapper(*this);
    routine_743c_impl(wrapper);
}

void CPU6809::routine_7519() {
    StarWarsCPU wrapper(*this);
    routine_7519_impl(wrapper);
}

void CPU6809::routine_761d() {
    StarWarsCPU wrapper(*this);
    routine_761d_impl(wrapper);
}

void CPU6809::routine_768d() {
    StarWarsCPU wrapper(*this);
    routine_768d_impl(wrapper);
}

void CPU6809::routine_76d3() {
    StarWarsCPU wrapper(*this);
    routine_76d3_impl(wrapper);
}

void CPU6809::routine_7707() {
    StarWarsCPU wrapper(*this);
    routine_7707_impl(wrapper);
}

void CPU6809::routine_7720() {
    StarWarsCPU wrapper(*this);
    routine_7720_impl(wrapper);
}

void CPU6809::routine_7765() {
    StarWarsCPU wrapper(*this);
    routine_7765_impl(wrapper);
}

void CPU6809::routine_77a4() {
    StarWarsCPU wrapper(*this);
    routine_77a4_impl(wrapper);
}

void CPU6809::routine_77d4() {
    StarWarsCPU wrapper(*this);
    routine_77d4_impl(wrapper);
}

void CPU6809::routine_785b() {
    StarWarsCPU wrapper(*this);
    routine_785b_impl(wrapper);
}

void CPU6809::routine_7863() {
    StarWarsCPU wrapper(*this);
    routine_7863_impl(wrapper);
}

void CPU6809::routine_786a() {
    StarWarsCPU wrapper(*this);
    routine_786a_impl(wrapper);
}

void CPU6809::routine_7881() {
    StarWarsCPU wrapper(*this);
    routine_7881_impl(wrapper);
}

void CPU6809::routine_7a48() {
    StarWarsCPU wrapper(*this);
    routine_7a48_impl(wrapper);
}

void CPU6809::routine_7a5a() {
    StarWarsCPU wrapper(*this);
    routine_7a5a_impl(wrapper);
}

void CPU6809::routine_7b9e() {
    StarWarsCPU wrapper(*this);
    routine_7b9e_impl(wrapper);
}

void CPU6809::routine_7bbd() {
    StarWarsCPU wrapper(*this);
    routine_7bbd_impl(wrapper);
}

void CPU6809::routine_7d9a() {
    StarWarsCPU wrapper(*this);
    routine_7d9a_impl(wrapper);
}

void CPU6809::routine_7eaf() {
    StarWarsCPU wrapper(*this);
    routine_7eaf_impl(wrapper);
}

void CPU6809::routine_8341() {
    StarWarsCPU wrapper(*this);
    routine_8341_impl(wrapper);
}

void CPU6809::routine_83a4() {
    StarWarsCPU wrapper(*this);
    routine_83a4_impl(wrapper);
}

void CPU6809::routine_83ce() {
    StarWarsCPU wrapper(*this);
    routine_83ce_impl(wrapper);
}

void CPU6809::routine_8408() {
    StarWarsCPU wrapper(*this);
    routine_8408_impl(wrapper);
}

void CPU6809::routine_8434() {
    StarWarsCPU wrapper(*this);
    routine_8434_impl(wrapper);
}

void CPU6809::routine_8495() {
    StarWarsCPU wrapper(*this);
    routine_8495_impl(wrapper);
}

void CPU6809::routine_84c6() {
    StarWarsCPU wrapper(*this);
    routine_84c6_impl(wrapper);
}

void CPU6809::routine_859b() {
    StarWarsCPU wrapper(*this);
    routine_859b_impl(wrapper);
}

void CPU6809::routine_85f9() {
    StarWarsCPU wrapper(*this);
    routine_85f9_impl(wrapper);
}

void CPU6809::routine_868a() {
    StarWarsCPU wrapper(*this);
    routine_868a_impl(wrapper);
}

void CPU6809::routine_86ae() {
    StarWarsCPU wrapper(*this);
    routine_86ae_impl(wrapper);
}

void CPU6809::routine_8735() {
    StarWarsCPU wrapper(*this);
    routine_8735_impl(wrapper);
}

void CPU6809::routine_87cb() {
    StarWarsCPU wrapper(*this);
    routine_87cb_impl(wrapper);
}

void CPU6809::routine_87f5() {
    StarWarsCPU wrapper(*this);
    routine_87f5_impl(wrapper);
}

void CPU6809::routine_889f() {
    StarWarsCPU wrapper(*this);
    routine_889f_impl(wrapper);
}

void CPU6809::routine_88f5() {
    StarWarsCPU wrapper(*this);
    routine_88f5_impl(wrapper);
}

void CPU6809::routine_8951() {
    StarWarsCPU wrapper(*this);
    routine_8951_impl(wrapper);
}

void CPU6809::routine_8959() {
    StarWarsCPU wrapper(*this);
    routine_8959_impl(wrapper);
}

void CPU6809::routine_8961() {
    StarWarsCPU wrapper(*this);
    routine_8961_impl(wrapper);
}

void CPU6809::routine_8969() {
    StarWarsCPU wrapper(*this);
    routine_8969_impl(wrapper);
}

void CPU6809::routine_8971() {
    StarWarsCPU wrapper(*this);
    routine_8971_impl(wrapper);
}

void CPU6809::routine_8979() {
    StarWarsCPU wrapper(*this);
    routine_8979_impl(wrapper);
}

void CPU6809::routine_8981() {
    StarWarsCPU wrapper(*this);
    routine_8981_impl(wrapper);
}

void CPU6809::routine_8993() {
    StarWarsCPU wrapper(*this);
    routine_8993_impl(wrapper);
}

void CPU6809::routine_89c8() {
    StarWarsCPU wrapper(*this);
    routine_89c8_impl(wrapper);
}

void CPU6809::routine_89d3() {
    StarWarsCPU wrapper(*this);
    routine_89d3_impl(wrapper);
}

void CPU6809::routine_89de() {
    StarWarsCPU wrapper(*this);
    routine_89de_impl(wrapper);
}

void CPU6809::routine_89e9() {
    StarWarsCPU wrapper(*this);
    routine_89e9_impl(wrapper);
}

void CPU6809::routine_8a00() {
    StarWarsCPU wrapper(*this);
    routine_8a00_impl(wrapper);
}

void CPU6809::routine_8a05() {
    StarWarsCPU wrapper(*this);
    routine_8a05_impl(wrapper);
}

void CPU6809::routine_8a21() {
    StarWarsCPU wrapper(*this);
    routine_8a21_impl(wrapper);
}

void CPU6809::routine_8a3d() {
    StarWarsCPU wrapper(*this);
    routine_8a3d_impl(wrapper);
}

void CPU6809::routine_8a59() {
    StarWarsCPU wrapper(*this);
    routine_8a59_impl(wrapper);
}

void CPU6809::routine_8a7e() {
    StarWarsCPU wrapper(*this);
    routine_8a7e_impl(wrapper);
}

void CPU6809::routine_8ab6() {
    StarWarsCPU wrapper(*this);
    routine_8ab6_impl(wrapper);
}

void CPU6809::routine_8acf() {
    StarWarsCPU wrapper(*this);
    routine_8acf_impl(wrapper);
}

void CPU6809::routine_8b6d() {
    StarWarsCPU wrapper(*this);
    routine_8b6d_impl(wrapper);
}

void CPU6809::routine_8b86() {
    StarWarsCPU wrapper(*this);
    routine_8b86_impl(wrapper);
}

void CPU6809::routine_8be1() {
    StarWarsCPU wrapper(*this);
    routine_8be1_impl(wrapper);
}

void CPU6809::routine_8c44() {
    StarWarsCPU wrapper(*this);
    routine_8c44_impl(wrapper);
}

void CPU6809::routine_8d9d() {
    StarWarsCPU wrapper(*this);
    routine_8d9d_impl(wrapper);
}

void CPU6809::routine_8de3() {
    StarWarsCPU wrapper(*this);
    routine_8de3_impl(wrapper);
}

void CPU6809::routine_8e1c() {
    StarWarsCPU wrapper(*this);
    routine_8e1c_impl(wrapper);
}

void CPU6809::routine_8e23() {
    StarWarsCPU wrapper(*this);
    routine_8e23_impl(wrapper);
}

void CPU6809::routine_8e32() {
    StarWarsCPU wrapper(*this);
    routine_8e32_impl(wrapper);
}

void CPU6809::routine_8e3a() {
    StarWarsCPU wrapper(*this);
    routine_8e3a_impl(wrapper);
}

void CPU6809::routine_8ed6() {
    StarWarsCPU wrapper(*this);
    routine_8ed6_impl(wrapper);
}

void CPU6809::routine_8f34() {
    StarWarsCPU wrapper(*this);
    routine_8f34_impl(wrapper);
}

void CPU6809::routine_8f7b() {
    StarWarsCPU wrapper(*this);
    routine_8f7b_impl(wrapper);
}

void CPU6809::routine_9500() {
    StarWarsCPU wrapper(*this);
    routine_9500_impl(wrapper);
}

void CPU6809::routine_953b() {
    StarWarsCPU wrapper(*this);
    routine_953b_impl(wrapper);
}

void CPU6809::routine_9558() {
    StarWarsCPU wrapper(*this);
    routine_9558_impl(wrapper);
}

void CPU6809::routine_95a7() {
    StarWarsCPU wrapper(*this);
    routine_95a7_impl(wrapper);
}

void CPU6809::routine_9604() {
    StarWarsCPU wrapper(*this);
    routine_9604_impl(wrapper);
}

void CPU6809::routine_960f() {
    StarWarsCPU wrapper(*this);
    routine_960f_impl(wrapper);
}

void CPU6809::routine_962a() {
    StarWarsCPU wrapper(*this);
    routine_962a_impl(wrapper);
}

void CPU6809::routine_96a1() {
    StarWarsCPU wrapper(*this);
    routine_96a1_impl(wrapper);
}

void CPU6809::routine_9722() {
    StarWarsCPU wrapper(*this);
    routine_9722_impl(wrapper);
}

void CPU6809::routine_973a() {
    StarWarsCPU wrapper(*this);
    routine_973a_impl(wrapper);
}

void CPU6809::routine_9775() {
    StarWarsCPU wrapper(*this);
    routine_9775_impl(wrapper);
}

void CPU6809::routine_97ac() {
    StarWarsCPU wrapper(*this);
    routine_97ac_impl(wrapper);
}

void CPU6809::routine_97c2() {
    StarWarsCPU wrapper(*this);
    routine_97c2_impl(wrapper);
}

void CPU6809::routine_97e3() {
    StarWarsCPU wrapper(*this);
    routine_97e3_impl(wrapper);
}

void CPU6809::routine_97e8() {
    StarWarsCPU wrapper(*this);
    routine_97e8_impl(wrapper);
}

void CPU6809::routine_97ed() {
    StarWarsCPU wrapper(*this);
    routine_97ed_impl(wrapper);
}

void CPU6809::routine_97f2() {
    StarWarsCPU wrapper(*this);
    routine_97f2_impl(wrapper);
}

void CPU6809::routine_97f7() {
    StarWarsCPU wrapper(*this);
    routine_97f7_impl(wrapper);
}

void CPU6809::routine_97fc() {
    StarWarsCPU wrapper(*this);
    routine_97fc_impl(wrapper);
}

void CPU6809::routine_9801() {
    StarWarsCPU wrapper(*this);
    routine_9801_impl(wrapper);
}

void CPU6809::routine_9806() {
    StarWarsCPU wrapper(*this);
    routine_9806_impl(wrapper);
}

void CPU6809::routine_9810() {
    StarWarsCPU wrapper(*this);
    routine_9810_impl(wrapper);
}

void CPU6809::routine_9874() {
    StarWarsCPU wrapper(*this);
    routine_9874_impl(wrapper);
}

void CPU6809::routine_987f() {
    StarWarsCPU wrapper(*this);
    routine_987f_impl(wrapper);
}

void CPU6809::routine_9886() {
    StarWarsCPU wrapper(*this);
    routine_9886_impl(wrapper);
}

void CPU6809::routine_9890() {
    StarWarsCPU wrapper(*this);
    routine_9890_impl(wrapper);
}

void CPU6809::routine_9898() {
    StarWarsCPU wrapper(*this);
    routine_9898_impl(wrapper);
}

void CPU6809::routine_98b0() {
    StarWarsCPU wrapper(*this);
    routine_98b0_impl(wrapper);
}

void CPU6809::routine_a1ce() {
    StarWarsCPU wrapper(*this);
    routine_a1ce_impl(wrapper);
}

void CPU6809::routine_a214() {
    StarWarsCPU wrapper(*this);
    routine_a214_impl(wrapper);
}

void CPU6809::routine_a2f8() {
    StarWarsCPU wrapper(*this);
    routine_a2f8_impl(wrapper);
}

void CPU6809::routine_a40a() {
    StarWarsCPU wrapper(*this);
    routine_a40a_impl(wrapper);
}

void CPU6809::routine_a459() {
    StarWarsCPU wrapper(*this);
    routine_a459_impl(wrapper);
}

void CPU6809::routine_a54b() {
    StarWarsCPU wrapper(*this);
    routine_a54b_impl(wrapper);
}

void CPU6809::routine_a591() {
    StarWarsCPU wrapper(*this);
    routine_a591_impl(wrapper);
}

void CPU6809::routine_a68b() {
    StarWarsCPU wrapper(*this);
    routine_a68b_impl(wrapper);
}

void CPU6809::routine_a6e0() {
    StarWarsCPU wrapper(*this);
    routine_a6e0_impl(wrapper);
}

void CPU6809::routine_a6f4() {
    StarWarsCPU wrapper(*this);
    routine_a6f4_impl(wrapper);
}

void CPU6809::routine_a705() {
    StarWarsCPU wrapper(*this);
    routine_a705_impl(wrapper);
}

void CPU6809::routine_a728() {
    StarWarsCPU wrapper(*this);
    routine_a728_impl(wrapper);
}

void CPU6809::routine_a7b6() {
    StarWarsCPU wrapper(*this);
    routine_a7b6_impl(wrapper);
}

void CPU6809::routine_a7bf() {
    StarWarsCPU wrapper(*this);
    routine_a7bf_impl(wrapper);
}

void CPU6809::routine_a7c8() {
    StarWarsCPU wrapper(*this);
    routine_a7c8_impl(wrapper);
}

void CPU6809::routine_a7f7() {
    StarWarsCPU wrapper(*this);
    routine_a7f7_impl(wrapper);
}

void CPU6809::routine_a80b() {
    StarWarsCPU wrapper(*this);
    routine_a80b_impl(wrapper);
}

void CPU6809::routine_a849() {
    StarWarsCPU wrapper(*this);
    routine_a849_impl(wrapper);
}

void CPU6809::routine_a90c() {
    StarWarsCPU wrapper(*this);
    routine_a90c_impl(wrapper);
}

void CPU6809::routine_a920() {
    StarWarsCPU wrapper(*this);
    routine_a920_impl(wrapper);
}

void CPU6809::routine_a933() {
    StarWarsCPU wrapper(*this);
    routine_a933_impl(wrapper);
}

void CPU6809::routine_aa7d() {
    StarWarsCPU wrapper(*this);
    routine_aa7d_impl(wrapper);
}

void CPU6809::routine_aae4() {
    StarWarsCPU wrapper(*this);
    routine_aae4_impl(wrapper);
}

void CPU6809::routine_ac34() {
    StarWarsCPU wrapper(*this);
    routine_ac34_impl(wrapper);
}

void CPU6809::routine_ac52() {
    StarWarsCPU wrapper(*this);
    routine_ac52_impl(wrapper);
}

void CPU6809::routine_acb1() {
    StarWarsCPU wrapper(*this);
    routine_acb1_impl(wrapper);
}

void CPU6809::routine_ace0() {
    StarWarsCPU wrapper(*this);
    routine_ace0_impl(wrapper);
}

void CPU6809::routine_ad20() {
    StarWarsCPU wrapper(*this);
    routine_ad20_impl(wrapper);
}

void CPU6809::routine_ad3e() {
    StarWarsCPU wrapper(*this);
    routine_ad3e_impl(wrapper);
}

void CPU6809::routine_ad6c() {
    StarWarsCPU wrapper(*this);
    routine_ad6c_impl(wrapper);
}

void CPU6809::routine_adaf() {
    StarWarsCPU wrapper(*this);
    routine_adaf_impl(wrapper);
}

void CPU6809::routine_adbd() {
    StarWarsCPU wrapper(*this);
    routine_adbd_impl(wrapper);
}

void CPU6809::routine_add4() {
    StarWarsCPU wrapper(*this);
    routine_add4_impl(wrapper);
}

void CPU6809::routine_ae60() {
    StarWarsCPU wrapper(*this);
    routine_ae60_impl(wrapper);
}

void CPU6809::routine_aebd() {
    StarWarsCPU wrapper(*this);
    routine_aebd_impl(wrapper);
}

void CPU6809::routine_af87() {
    StarWarsCPU wrapper(*this);
    routine_af87_impl(wrapper);
}

void CPU6809::routine_afef() {
    StarWarsCPU wrapper(*this);
    routine_afef_impl(wrapper);
}

void CPU6809::routine_b000() {
    StarWarsCPU wrapper(*this);
    routine_b000_impl(wrapper);
}

void CPU6809::routine_b071() {
    StarWarsCPU wrapper(*this);
    routine_b071_impl(wrapper);
}

void CPU6809::routine_b095() {
    StarWarsCPU wrapper(*this);
    routine_b095_impl(wrapper);
}

void CPU6809::routine_b261() {
    StarWarsCPU wrapper(*this);
    routine_b261_impl(wrapper);
}

void CPU6809::routine_b29c() {
    StarWarsCPU wrapper(*this);
    routine_b29c_impl(wrapper);
}

void CPU6809::routine_b2d2() {
    StarWarsCPU wrapper(*this);
    routine_b2d2_impl(wrapper);
}

void CPU6809::routine_b32b() {
    StarWarsCPU wrapper(*this);
    routine_b32b_impl(wrapper);
}

void CPU6809::routine_b3e4() {
    StarWarsCPU wrapper(*this);
    routine_b3e4_impl(wrapper);
}

void CPU6809::routine_b43f() {
    StarWarsCPU wrapper(*this);
    routine_b43f_impl(wrapper);
}

void CPU6809::routine_b579() {
    StarWarsCPU wrapper(*this);
    routine_b579_impl(wrapper);
}

void CPU6809::routine_b6b9() {
    StarWarsCPU wrapper(*this);
    routine_b6b9_impl(wrapper);
}

void CPU6809::routine_b6c0() {
    StarWarsCPU wrapper(*this);
    routine_b6c0_impl(wrapper);
}

void CPU6809::routine_b6c7() {
    StarWarsCPU wrapper(*this);
    routine_b6c7_impl(wrapper);
}

void CPU6809::routine_b6cc() {
    StarWarsCPU wrapper(*this);
    routine_b6cc_impl(wrapper);
}

void CPU6809::routine_b6d7() {
    StarWarsCPU wrapper(*this);
    routine_b6d7_impl(wrapper);
}

void CPU6809::routine_b739() {
    StarWarsCPU wrapper(*this);
    routine_b739_impl(wrapper);
}

void CPU6809::routine_b76c() {
    StarWarsCPU wrapper(*this);
    routine_b76c_impl(wrapper);
}

void CPU6809::routine_b83f() {
    StarWarsCPU wrapper(*this);
    routine_b83f_impl(wrapper);
}

void CPU6809::routine_b852() {
    StarWarsCPU wrapper(*this);
    routine_b852_impl(wrapper);
}

void CPU6809::routine_b85e() {
    StarWarsCPU wrapper(*this);
    routine_b85e_impl(wrapper);
}

void CPU6809::routine_b939() {
    StarWarsCPU wrapper(*this);
    routine_b939_impl(wrapper);
}

void CPU6809::routine_b948() {
    StarWarsCPU wrapper(*this);
    routine_b948_impl(wrapper);
}

void CPU6809::routine_b95c() {
    StarWarsCPU wrapper(*this);
    routine_b95c_impl(wrapper);
}

void CPU6809::routine_b982() {
    StarWarsCPU wrapper(*this);
    routine_b982_impl(wrapper);
}

void CPU6809::routine_b98b() {
    StarWarsCPU wrapper(*this);
    routine_b98b_impl(wrapper);
}

void CPU6809::routine_ba12() {
    StarWarsCPU wrapper(*this);
    routine_ba12_impl(wrapper);
}

void CPU6809::routine_ba32() {
    StarWarsCPU wrapper(*this);
    routine_ba32_impl(wrapper);
}

void CPU6809::routine_bb85() {
    StarWarsCPU wrapper(*this);
    routine_bb85_impl(wrapper);
}

void CPU6809::routine_bcae() {
    StarWarsCPU wrapper(*this);
    routine_bcae_impl(wrapper);
}

void CPU6809::routine_bcc8() {
    StarWarsCPU wrapper(*this);
    routine_bcc8_impl(wrapper);
}

void CPU6809::routine_bce9() {
    StarWarsCPU wrapper(*this);
    routine_bce9_impl(wrapper);
}

void CPU6809::routine_bd00() {
    StarWarsCPU wrapper(*this);
    routine_bd00_impl(wrapper);
}

void CPU6809::routine_bd03() {
    StarWarsCPU wrapper(*this);
    routine_bd03_impl(wrapper);
}

void CPU6809::routine_bd08() {
    StarWarsCPU wrapper(*this);
    routine_bd08_impl(wrapper);
}

void CPU6809::routine_bd12() {
    StarWarsCPU wrapper(*this);
    routine_bd12_impl(wrapper);
}

void CPU6809::routine_bd17() {
    StarWarsCPU wrapper(*this);
    routine_bd17_impl(wrapper);
}

void CPU6809::routine_bd1c() {
    StarWarsCPU wrapper(*this);
    routine_bd1c_impl(wrapper);
}

void CPU6809::routine_bd21() {
    StarWarsCPU wrapper(*this);
    routine_bd21_impl(wrapper);
}

void CPU6809::routine_bd2b() {
    StarWarsCPU wrapper(*this);
    routine_bd2b_impl(wrapper);
}

void CPU6809::routine_bd30() {
    StarWarsCPU wrapper(*this);
    routine_bd30_impl(wrapper);
}

void CPU6809::routine_bd35() {
    StarWarsCPU wrapper(*this);
    routine_bd35_impl(wrapper);
}

void CPU6809::routine_bd3a() {
    StarWarsCPU wrapper(*this);
    routine_bd3a_impl(wrapper);
}

void CPU6809::routine_bd3f() {
    StarWarsCPU wrapper(*this);
    routine_bd3f_impl(wrapper);
}

void CPU6809::routine_bd44() {
    StarWarsCPU wrapper(*this);
    routine_bd44_impl(wrapper);
}

void CPU6809::routine_bd4e() {
    StarWarsCPU wrapper(*this);
    routine_bd4e_impl(wrapper);
}

void CPU6809::routine_bd53() {
    StarWarsCPU wrapper(*this);
    routine_bd53_impl(wrapper);
}

void CPU6809::routine_bd58() {
    StarWarsCPU wrapper(*this);
    routine_bd58_impl(wrapper);
}

void CPU6809::routine_bd5d() {
    StarWarsCPU wrapper(*this);
    routine_bd5d_impl(wrapper);
}

void CPU6809::routine_bd62() {
    StarWarsCPU wrapper(*this);
    routine_bd62_impl(wrapper);
}

void CPU6809::routine_bd67() {
    StarWarsCPU wrapper(*this);
    routine_bd67_impl(wrapper);
}

void CPU6809::routine_bd6c() {
    StarWarsCPU wrapper(*this);
    routine_bd6c_impl(wrapper);
}

void CPU6809::routine_bd71() {
    StarWarsCPU wrapper(*this);
    routine_bd71_impl(wrapper);
}

void CPU6809::routine_bd76() {
    StarWarsCPU wrapper(*this);
    routine_bd76_impl(wrapper);
}

void CPU6809::routine_bd80() {
    StarWarsCPU wrapper(*this);
    routine_bd80_impl(wrapper);
}

void CPU6809::routine_bd85() {
    StarWarsCPU wrapper(*this);
    routine_bd85_impl(wrapper);
}

void CPU6809::routine_bd8a() {
    StarWarsCPU wrapper(*this);
    routine_bd8a_impl(wrapper);
}

void CPU6809::routine_bd94() {
    StarWarsCPU wrapper(*this);
    routine_bd94_impl(wrapper);
}

void CPU6809::routine_bd99() {
    StarWarsCPU wrapper(*this);
    routine_bd99_impl(wrapper);
}

void CPU6809::routine_bd9e() {
    StarWarsCPU wrapper(*this);
    routine_bd9e_impl(wrapper);
}

void CPU6809::routine_bda3() {
    StarWarsCPU wrapper(*this);
    routine_bda3_impl(wrapper);
}

void CPU6809::routine_bda8() {
    StarWarsCPU wrapper(*this);
    routine_bda8_impl(wrapper);
}

void CPU6809::routine_bdad() {
    StarWarsCPU wrapper(*this);
    routine_bdad_impl(wrapper);
}

void CPU6809::routine_bdb2() {
    StarWarsCPU wrapper(*this);
    routine_bdb2_impl(wrapper);
}

void CPU6809::routine_bdb7() {
    StarWarsCPU wrapper(*this);
    routine_bdb7_impl(wrapper);
}

void CPU6809::routine_bdbc() {
    StarWarsCPU wrapper(*this);
    routine_bdbc_impl(wrapper);
}

void CPU6809::routine_bdc6() {
    StarWarsCPU wrapper(*this);
    routine_bdc6_impl(wrapper);
}

void CPU6809::routine_bdcb() {
    StarWarsCPU wrapper(*this);
    routine_bdcb_impl(wrapper);
}

void CPU6809::routine_bdd0() {
    StarWarsCPU wrapper(*this);
    routine_bdd0_impl(wrapper);
}

void CPU6809::routine_bdd5() {
    StarWarsCPU wrapper(*this);
    routine_bdd5_impl(wrapper);
}

void CPU6809::routine_bdda() {
    StarWarsCPU wrapper(*this);
    routine_bdda_impl(wrapper);
}

void CPU6809::routine_bddf() {
    StarWarsCPU wrapper(*this);
    routine_bddf_impl(wrapper);
}

void CPU6809::routine_bde4() {
    StarWarsCPU wrapper(*this);
    routine_bde4_impl(wrapper);
}

void CPU6809::routine_bde9() {
    StarWarsCPU wrapper(*this);
    routine_bde9_impl(wrapper);
}

void CPU6809::routine_bdee() {
    StarWarsCPU wrapper(*this);
    routine_bdee_impl(wrapper);
}

void CPU6809::routine_bdf3() {
    StarWarsCPU wrapper(*this);
    routine_bdf3_impl(wrapper);
}

void CPU6809::routine_bdf8() {
    StarWarsCPU wrapper(*this);
    routine_bdf8_impl(wrapper);
}

void CPU6809::routine_bdfd() {
    StarWarsCPU wrapper(*this);
    routine_bdfd_impl(wrapper);
}

void CPU6809::routine_be00() {
    StarWarsCPU wrapper(*this);
    routine_be00_impl(wrapper);
}

void CPU6809::routine_be02() {
    StarWarsCPU wrapper(*this);
    routine_be02_impl(wrapper);
}

void CPU6809::routine_be07() {
    StarWarsCPU wrapper(*this);
    routine_be07_impl(wrapper);
}

void CPU6809::routine_be0c() {
    StarWarsCPU wrapper(*this);
    routine_be0c_impl(wrapper);
}

void CPU6809::routine_be11() {
    StarWarsCPU wrapper(*this);
    routine_be11_impl(wrapper);
}

void CPU6809::routine_be16() {
    StarWarsCPU wrapper(*this);
    routine_be16_impl(wrapper);
}

void CPU6809::routine_be20() {
    StarWarsCPU wrapper(*this);
    routine_be20_impl(wrapper);
}

void CPU6809::routine_c02f() {
    StarWarsCPU wrapper(*this);
    routine_c02f_impl(wrapper);
}

void CPU6809::routine_c087() {
    StarWarsCPU wrapper(*this);
    routine_c087_impl(wrapper);
}

void CPU6809::routine_c200() {
    StarWarsCPU wrapper(*this);
    routine_c200_impl(wrapper);
}

void CPU6809::routine_c20c() {
    StarWarsCPU wrapper(*this);
    routine_c20c_impl(wrapper);
}

void CPU6809::routine_c24e() {
    StarWarsCPU wrapper(*this);
    routine_c24e_impl(wrapper);
}

void CPU6809::routine_c2b3() {
    StarWarsCPU wrapper(*this);
    routine_c2b3_impl(wrapper);
}

void CPU6809::routine_c2c3() {
    StarWarsCPU wrapper(*this);
    routine_c2c3_impl(wrapper);
}

void CPU6809::routine_c306() {
    StarWarsCPU wrapper(*this);
    routine_c306_impl(wrapper);
}

void CPU6809::routine_c369() {
    StarWarsCPU wrapper(*this);
    routine_c369_impl(wrapper);
}

void CPU6809::routine_c3a7() {
    StarWarsCPU wrapper(*this);
    routine_c3a7_impl(wrapper);
}

void CPU6809::routine_c3ee() {
    StarWarsCPU wrapper(*this);
    routine_c3ee_impl(wrapper);
}

void CPU6809::routine_c413() {
    StarWarsCPU wrapper(*this);
    routine_c413_impl(wrapper);
}

void CPU6809::routine_c450() {
    StarWarsCPU wrapper(*this);
    routine_c450_impl(wrapper);
}

void CPU6809::routine_c4eb() {
    StarWarsCPU wrapper(*this);
    routine_c4eb_impl(wrapper);
}

void CPU6809::routine_c5a4() {
    StarWarsCPU wrapper(*this);
    routine_c5a4_impl(wrapper);
}

void CPU6809::routine_c5f2() {
    StarWarsCPU wrapper(*this);
    routine_c5f2_impl(wrapper);
}

void CPU6809::routine_c600() {
    StarWarsCPU wrapper(*this);
    routine_c600_impl(wrapper);
}

void CPU6809::routine_c641() {
    StarWarsCPU wrapper(*this);
    routine_c641_impl(wrapper);
}

void CPU6809::routine_c65b() {
    StarWarsCPU wrapper(*this);
    routine_c65b_impl(wrapper);
}

void CPU6809::routine_c67a() {
    StarWarsCPU wrapper(*this);
    routine_c67a_impl(wrapper);
}

void CPU6809::routine_c688() {
    StarWarsCPU wrapper(*this);
    routine_c688_impl(wrapper);
}

void CPU6809::routine_c690() {
    StarWarsCPU wrapper(*this);
    routine_c690_impl(wrapper);
}

void CPU6809::routine_c6b8() {
    StarWarsCPU wrapper(*this);
    routine_c6b8_impl(wrapper);
}

void CPU6809::routine_c6d4() {
    StarWarsCPU wrapper(*this);
    routine_c6d4_impl(wrapper);
}

void CPU6809::routine_c6d7() {
    StarWarsCPU wrapper(*this);
    routine_c6d7_impl(wrapper);
}

void CPU6809::routine_c6d9() {
    StarWarsCPU wrapper(*this);
    routine_c6d9_impl(wrapper);
}

void CPU6809::routine_c6f4() {
    StarWarsCPU wrapper(*this);
    routine_c6f4_impl(wrapper);
}

void CPU6809::routine_c6f7() {
    StarWarsCPU wrapper(*this);
    routine_c6f7_impl(wrapper);
}

void CPU6809::routine_c6f9() {
    StarWarsCPU wrapper(*this);
    routine_c6f9_impl(wrapper);
}

void CPU6809::routine_c70e() {
    StarWarsCPU wrapper(*this);
    routine_c70e_impl(wrapper);
}

void CPU6809::routine_c7fd() {
    StarWarsCPU wrapper(*this);
    routine_c7fd_impl(wrapper);
}

void CPU6809::routine_caf3() {
    StarWarsCPU wrapper(*this);
    routine_caf3_impl(wrapper);
}

void CPU6809::routine_cc00() {
    StarWarsCPU wrapper(*this);
    routine_cc00_impl(wrapper);
}

void CPU6809::routine_cc18() {
    StarWarsCPU wrapper(*this);
    routine_cc18_impl(wrapper);
}

void CPU6809::routine_cc38() {
    StarWarsCPU wrapper(*this);
    routine_cc38_impl(wrapper);
}

void CPU6809::routine_cc5b() {
    StarWarsCPU wrapper(*this);
    routine_cc5b_impl(wrapper);
}

void CPU6809::routine_ccc0() {
    StarWarsCPU wrapper(*this);
    routine_ccc0_impl(wrapper);
}

void CPU6809::routine_cccc() {
    StarWarsCPU wrapper(*this);
    routine_cccc_impl(wrapper);
}

void CPU6809::routine_ccd8() {
    StarWarsCPU wrapper(*this);
    routine_ccd8_impl(wrapper);
}

void CPU6809::routine_cce4() {
    StarWarsCPU wrapper(*this);
    routine_cce4_impl(wrapper);
}

void CPU6809::routine_ccf0() {
    StarWarsCPU wrapper(*this);
    routine_ccf0_impl(wrapper);
}

void CPU6809::routine_ccfc() {
    StarWarsCPU wrapper(*this);
    routine_ccfc_impl(wrapper);
}

void CPU6809::routine_cd00() {
    StarWarsCPU wrapper(*this);
    routine_cd00_impl(wrapper);
}

void CPU6809::routine_cd08() {
    StarWarsCPU wrapper(*this);
    routine_cd08_impl(wrapper);
}

void CPU6809::routine_cd14() {
    StarWarsCPU wrapper(*this);
    routine_cd14_impl(wrapper);
}

void CPU6809::routine_cd20() {
    StarWarsCPU wrapper(*this);
    routine_cd20_impl(wrapper);
}

void CPU6809::routine_cd2c() {
    StarWarsCPU wrapper(*this);
    routine_cd2c_impl(wrapper);
}

void CPU6809::routine_cd38() {
    StarWarsCPU wrapper(*this);
    routine_cd38_impl(wrapper);
}

void CPU6809::routine_cd44() {
    StarWarsCPU wrapper(*this);
    routine_cd44_impl(wrapper);
}

void CPU6809::routine_cd50() {
    StarWarsCPU wrapper(*this);
    routine_cd50_impl(wrapper);
}

void CPU6809::routine_cd5c() {
    StarWarsCPU wrapper(*this);
    routine_cd5c_impl(wrapper);
}

void CPU6809::routine_cd68() {
    StarWarsCPU wrapper(*this);
    routine_cd68_impl(wrapper);
}

void CPU6809::routine_cd74() {
    StarWarsCPU wrapper(*this);
    routine_cd74_impl(wrapper);
}

void CPU6809::routine_cd80() {
    StarWarsCPU wrapper(*this);
    routine_cd80_impl(wrapper);
}

void CPU6809::routine_cd8c() {
    StarWarsCPU wrapper(*this);
    routine_cd8c_impl(wrapper);
}

void CPU6809::routine_cd9c() {
    StarWarsCPU wrapper(*this);
    routine_cd9c_impl(wrapper);
}

void CPU6809::routine_cd9e() {
    StarWarsCPU wrapper(*this);
    routine_cd9e_impl(wrapper);
}

void CPU6809::routine_cda0() {
    StarWarsCPU wrapper(*this);
    routine_cda0_impl(wrapper);
}

void CPU6809::routine_cda2() {
    StarWarsCPU wrapper(*this);
    routine_cda2_impl(wrapper);
}

void CPU6809::routine_cda9() {
    StarWarsCPU wrapper(*this);
    routine_cda9_impl(wrapper);
}

void CPU6809::routine_cdab() {
    StarWarsCPU wrapper(*this);
    routine_cdab_impl(wrapper);
}

void CPU6809::routine_cdb1() {
    StarWarsCPU wrapper(*this);
    routine_cdb1_impl(wrapper);
}

void CPU6809::routine_cdb5() {
    StarWarsCPU wrapper(*this);
    routine_cdb5_impl(wrapper);
}

void CPU6809::routine_cdba() {
    StarWarsCPU wrapper(*this);
    routine_cdba_impl(wrapper);
}

void CPU6809::routine_cdc3() {
    StarWarsCPU wrapper(*this);
    routine_cdc3_impl(wrapper);
}

void CPU6809::routine_cde7() {
    StarWarsCPU wrapper(*this);
    routine_cde7_impl(wrapper);
}

void CPU6809::routine_ce0c() {
    StarWarsCPU wrapper(*this);
    routine_ce0c_impl(wrapper);
}

void CPU6809::routine_ce18() {
    StarWarsCPU wrapper(*this);
    routine_ce18_impl(wrapper);
}

void CPU6809::routine_ce24() {
    StarWarsCPU wrapper(*this);
    routine_ce24_impl(wrapper);
}

void CPU6809::routine_ce2f() {
    StarWarsCPU wrapper(*this);
    routine_ce2f_impl(wrapper);
}

void CPU6809::routine_ce3a() {
    StarWarsCPU wrapper(*this);
    routine_ce3a_impl(wrapper);
}

void CPU6809::routine_ce45() {
    StarWarsCPU wrapper(*this);
    routine_ce45_impl(wrapper);
}

void CPU6809::routine_d800() {
    StarWarsCPU wrapper(*this);
    routine_d800_impl(wrapper);
}

void CPU6809::routine_d882() {
    StarWarsCPU wrapper(*this);
    routine_d882_impl(wrapper);
}

void CPU6809::routine_d883() {
    StarWarsCPU wrapper(*this);
    routine_d883_impl(wrapper);
}

void CPU6809::routine_d8df() {
    StarWarsCPU wrapper(*this);
    routine_d8df_impl(wrapper);
}

void CPU6809::routine_d91a() {
    StarWarsCPU wrapper(*this);
    routine_d91a_impl(wrapper);
}

void CPU6809::routine_d923() {
    StarWarsCPU wrapper(*this);
    routine_d923_impl(wrapper);
}

void CPU6809::routine_d942() {
    StarWarsCPU wrapper(*this);
    routine_d942_impl(wrapper);
}

void CPU6809::routine_d95e() {
    StarWarsCPU wrapper(*this);
    routine_d95e_impl(wrapper);
}

void CPU6809::routine_d971() {
    StarWarsCPU wrapper(*this);
    routine_d971_impl(wrapper);
}

void CPU6809::routine_d985() {
    StarWarsCPU wrapper(*this);
    routine_d985_impl(wrapper);
}

void CPU6809::routine_d9dc() {
    StarWarsCPU wrapper(*this);
    routine_d9dc_impl(wrapper);
}

void CPU6809::routine_d9fa() {
    StarWarsCPU wrapper(*this);
    routine_d9fa_impl(wrapper);
}

void CPU6809::routine_e000() {
    StarWarsCPU wrapper(*this);
    routine_e000_impl(wrapper);
}

void CPU6809::routine_e700() {
    StarWarsCPU wrapper(*this);
    routine_e700_impl(wrapper);
}

void CPU6809::routine_e764() {
    StarWarsCPU wrapper(*this);
    routine_e764_impl(wrapper);
}

void CPU6809::routine_e772() {
    StarWarsCPU wrapper(*this);
    routine_e772_impl(wrapper);
}

void CPU6809::routine_e790() {
    StarWarsCPU wrapper(*this);
    routine_e790_impl(wrapper);
}

void CPU6809::routine_e7ad() {
    StarWarsCPU wrapper(*this);
    routine_e7ad_impl(wrapper);
}

void CPU6809::routine_e7c7() {
    StarWarsCPU wrapper(*this);
    routine_e7c7_impl(wrapper);
}

void CPU6809::routine_e7d3() {
    StarWarsCPU wrapper(*this);
    routine_e7d3_impl(wrapper);
}

void CPU6809::routine_e7dd() {
    StarWarsCPU wrapper(*this);
    routine_e7dd_impl(wrapper);
}

void CPU6809::routine_e7fc() {
    StarWarsCPU wrapper(*this);
    routine_e7fc_impl(wrapper);
}

void CPU6809::routine_e821() {
    StarWarsCPU wrapper(*this);
    routine_e821_impl(wrapper);
}

void CPU6809::routine_f17f() {
    StarWarsCPU wrapper(*this);
    routine_f17f_impl(wrapper);
}

void CPU6809::routine_f182() {
    StarWarsCPU wrapper(*this);
    routine_f182_impl(wrapper);
}

void CPU6809::routine_f1c6() {
    StarWarsCPU wrapper(*this);
    routine_f1c6_impl(wrapper);
}

void CPU6809::routine_f1fd() {
    StarWarsCPU wrapper(*this);
    routine_f1fd_impl(wrapper);
}

void CPU6809::routine_f261() {
    StarWarsCPU wrapper(*this);
    routine_f261_impl(wrapper);
}

void CPU6809::routine_f36e() {
    StarWarsCPU wrapper(*this);
    routine_f36e_impl(wrapper);
}

void CPU6809::routine_f70d() {
    StarWarsCPU wrapper(*this);
    routine_f70d_impl(wrapper);
}

void CPU6809::routine_f714() {
    StarWarsCPU wrapper(*this);
    routine_f714_impl(wrapper);
}

void CPU6809::routine_f720() {
    StarWarsCPU wrapper(*this);
    routine_f720_impl(wrapper);
}

void CPU6809::routine_f86c() {
    StarWarsCPU wrapper(*this);
    routine_f86c_impl(wrapper);
}

void CPU6809::routine_fb38() {
    StarWarsCPU wrapper(*this);
    routine_fb38_impl(wrapper);
}

void CPU6809::routine_fb73() {
    StarWarsCPU wrapper(*this);
    routine_fb73_impl(wrapper);
}

void CPU6809::routine_fd00() {
    StarWarsCPU wrapper(*this);
    routine_fd00_impl(wrapper);
}

void CPU6809::routine_fd07() {
    StarWarsCPU wrapper(*this);
    routine_fd07_impl(wrapper);
}

void CPU6809::routine_feff() {
    StarWarsCPU wrapper(*this);
    routine_feff_impl(wrapper);
}

void CPU6809::routine_ff24() {
    StarWarsCPU wrapper(*this);
    routine_ff24_impl(wrapper);
}


} // namespace StarWars
