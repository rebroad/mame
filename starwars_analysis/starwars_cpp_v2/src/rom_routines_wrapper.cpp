#include "cpu_6809.h"
#include <iostream>
#include <map>
#include <functional>

namespace StarWars {

// Function declarations

void routine_6005_6036_impl(CPU6809& cpu);
void routine_6036_6067_impl(CPU6809& cpu);
void routine_60be_60ca_impl(CPU6809& cpu);
void routine_60ca_60f4_impl(CPU6809& cpu);
void routine_60f4_623c_impl(CPU6809& cpu);
void routine_623c_624b_impl(CPU6809& cpu);
void routine_624b_640e_impl(CPU6809& cpu);
void routine_640e_6458_impl(CPU6809& cpu);
void routine_64a6_64c9_impl(CPU6809& cpu);
void routine_64c9_6512_impl(CPU6809& cpu);
void routine_6512_655d_impl(CPU6809& cpu);
void routine_655d_656b_impl(CPU6809& cpu);
void routine_656b_6586_impl(CPU6809& cpu);
void routine_6586_6592_impl(CPU6809& cpu);
void routine_65bd_666f_impl(CPU6809& cpu);
void routine_66ce_66e3_impl(CPU6809& cpu);
void routine_66e3_681e_impl(CPU6809& cpu);
void routine_681e_6837_impl(CPU6809& cpu);
void routine_6857_6865_impl(CPU6809& cpu);
void routine_6864_68cf_impl(CPU6809& cpu);
void routine_6901_6911_impl(CPU6809& cpu);
void routine_6911_692a_impl(CPU6809& cpu);
void routine_692a_692d_impl(CPU6809& cpu);
void routine_692d_70db_impl(CPU6809& cpu);
void routine_70db_70ef_impl(CPU6809& cpu);
void routine_70f5_7105_impl(CPU6809& cpu);
void routine_7105_72c7_impl(CPU6809& cpu);
void routine_72c7_761d_impl(CPU6809& cpu);
void routine_761d_7a48_impl(CPU6809& cpu);
void routine_7a48_7a7a_impl(CPU6809& cpu);
void routine_7b27_7b34_impl(CPU6809& cpu);
void routine_7b34_7b49_impl(CPU6809& cpu);
void routine_7b49_7bbd_impl(CPU6809& cpu);
void routine_7bbd_7d9a_impl(CPU6809& cpu);
void routine_7d9a_83a3_impl(CPU6809& cpu);
void routine_83a4_83ce_impl(CPU6809& cpu);
void routine_83ce_868b_impl(CPU6809& cpu);
void routine_868a_8695_impl(CPU6809& cpu);
void routine_86cd_86d0_impl(CPU6809& cpu);
void routine_86d0_882f_impl(CPU6809& cpu);
void routine_882f_8b6d_impl(CPU6809& cpu);
void routine_8b6d_8ed6_impl(CPU6809& cpu);
void routine_8ed6_8f33_impl(CPU6809& cpu);
void routine_8f34_8f7b_impl(CPU6809& cpu);
void routine_8f7b_9558_impl(CPU6809& cpu);
void routine_9558_9890_impl(CPU6809& cpu);
void routine_9890_9898_impl(CPU6809& cpu);
void routine_9898_98af_impl(CPU6809& cpu);
void routine_98b0_98ca_impl(CPU6809& cpu);
void routine_98f3_98fd_impl(CPU6809& cpu);
void routine_98fc_997b_impl(CPU6809& cpu);
void routine_9991_9d32_impl(CPU6809& cpu);
void routine_9d32_9f00_impl(CPU6809& cpu);
void routine_9f00_9fb8_impl(CPU6809& cpu);
void routine_9fb8_a1ce_impl(CPU6809& cpu);
void routine_a1ce_a849_impl(CPU6809& cpu);
void routine_a849_adbd_impl(CPU6809& cpu);
void routine_adbd_add3_impl(CPU6809& cpu);
void routine_add4_adeb_impl(CPU6809& cpu);
void routine_adeb_ae03_impl(CPU6809& cpu);
void routine_ae03_ae11_impl(CPU6809& cpu);
void routine_ae11_ae3e_impl(CPU6809& cpu);
void routine_ae3e_ae48_impl(CPU6809& cpu);
void routine_ae48_ae5f_impl(CPU6809& cpu);
void routine_ae60_ae6e_impl(CPU6809& cpu);
void routine_ae6e_aeb2_impl(CPU6809& cpu);
void routine_aeb2_b1a6_impl(CPU6809& cpu);
void routine_b1a6_b307_impl(CPU6809& cpu);
void routine_b307_b6c0_impl(CPU6809& cpu);
void routine_b6c0_b6cc_impl(CPU6809& cpu);
void routine_b6cc_bd03_impl(CPU6809& cpu);
void routine_bd03_bd12_impl(CPU6809& cpu);
void routine_bd12_c24e_impl(CPU6809& cpu);
void routine_c24e_c2c3_impl(CPU6809& cpu);
void routine_c2c3_c306_impl(CPU6809& cpu);
void routine_c306_c3ed_impl(CPU6809& cpu);
void routine_c3ee_c409_impl(CPU6809& cpu);
void routine_c409_c421_impl(CPU6809& cpu);
void routine_c421_c434_impl(CPU6809& cpu);
void routine_c434_c542_impl(CPU6809& cpu);
void routine_c542_c65b_impl(CPU6809& cpu);
void routine_c65b_c8a5_impl(CPU6809& cpu);
void routine_c8a5_ca63_impl(CPU6809& cpu);
void routine_ca8f_ca9d_impl(CPU6809& cpu);
void routine_ca9d_cac5_impl(CPU6809& cpu);
void routine_cac5_caf2_impl(CPU6809& cpu);
void routine_caf3_cb08_impl(CPU6809& cpu);
void routine_cb08_cba3_impl(CPU6809& cpu);
void routine_cbcc_cbd1_impl(CPU6809& cpu);
void routine_cbd0_cbd9_impl(CPU6809& cpu);
void routine_cbd8_cc1b_impl(CPU6809& cpu);
void routine_cc18_cc79_impl(CPU6809& cpu);
void routine_ccc0_cccc_impl(CPU6809& cpu);
void routine_cccc_ccd7_impl(CPU6809& cpu);
void routine_cce4_ccfb_impl(CPU6809& cpu);
void routine_ccf9_cea5_impl(CPU6809& cpu);
void routine_cea3_ceb8_impl(CPU6809& cpu);
void routine_ceb7_d005_impl(CPU6809& cpu);
void routine_d004_d3e1_impl(CPU6809& cpu);
void routine_d3e4_d3ed_impl(CPU6809& cpu);
void routine_d3ec_d433_impl(CPU6809& cpu);
void routine_d432_d487_impl(CPU6809& cpu);
void routine_d486_d800_impl(CPU6809& cpu);
void routine_d800_d883_impl(CPU6809& cpu);
void routine_d882_d8df_impl(CPU6809& cpu);
void routine_d8df_d8f6_impl(CPU6809& cpu);
void routine_d8fa_d912_impl(CPU6809& cpu);
void routine_d912_d95d_impl(CPU6809& cpu);
void routine_d95d_dad3_impl(CPU6809& cpu);
void routine_dad3_de52_impl(CPU6809& cpu);
void routine_de52_ded1_impl(CPU6809& cpu);
void routine_dedc_dee1_impl(CPU6809& cpu);
void routine_dee0_df19_impl(CPU6809& cpu);
void routine_df18_df30_impl(CPU6809& cpu);
void routine_df30_df47_impl(CPU6809& cpu);
void routine_df47_dfc6_impl(CPU6809& cpu);
void routine_dfdd_dfe5_impl(CPU6809& cpu);
void routine_dfe5_dff3_impl(CPU6809& cpu);
void routine_dff3_dffa_impl(CPU6809& cpu);
void routine_dffa_e00f_impl(CPU6809& cpu);
void routine_e00f_e08f_impl(CPU6809& cpu);
void routine_e08f_e0d8_impl(CPU6809& cpu);
void routine_e0d8_e765_impl(CPU6809& cpu);
void routine_e764_e790_impl(CPU6809& cpu);
void routine_e790_e7c7_impl(CPU6809& cpu);
void routine_e7c7_e7d2_impl(CPU6809& cpu);
void routine_e7d3_e7dc_impl(CPU6809& cpu);
void routine_e7dc_e811_impl(CPU6809& cpu);
void routine_e811_e82b_impl(CPU6809& cpu);
void routine_e82b_ef7f_impl(CPU6809& cpu);
void routine_ef7f_f261_impl(CPU6809& cpu);
void routine_f261_f883_impl(CPU6809& cpu);
void routine_f89b_fa19_impl(CPU6809& cpu);
void routine_fa19_ffe7_impl(CPU6809& cpu);

static const std::map<uint16_t, std::function<void(CPU6809&)>> routine_map = {
    {0x60056036, routine_6005_6036_impl},
    {0x60366067, routine_6036_6067_impl},
    {0x60BE60CA, routine_60be_60ca_impl},
    {0x60CA60F4, routine_60ca_60f4_impl},
    {0x60F4623C, routine_60f4_623c_impl},
    {0x623C624B, routine_623c_624b_impl},
    {0x624B640E, routine_624b_640e_impl},
    {0x640E6458, routine_640e_6458_impl},
    {0x64A664C9, routine_64a6_64c9_impl},
    {0x64C96512, routine_64c9_6512_impl},
    {0x6512655D, routine_6512_655d_impl},
    {0x655D656B, routine_655d_656b_impl},
    {0x656B6586, routine_656b_6586_impl},
    {0x65866592, routine_6586_6592_impl},
    {0x65BD666F, routine_65bd_666f_impl},
    {0x66CE66E3, routine_66ce_66e3_impl},
    {0x66E3681E, routine_66e3_681e_impl},
    {0x681E6837, routine_681e_6837_impl},
    {0x68576865, routine_6857_6865_impl},
    {0x686468CF, routine_6864_68cf_impl},
    {0x69016911, routine_6901_6911_impl},
    {0x6911692A, routine_6911_692a_impl},
    {0x692A692D, routine_692a_692d_impl},
    {0x692D70DB, routine_692d_70db_impl},
    {0x70DB70EF, routine_70db_70ef_impl},
    {0x70F57105, routine_70f5_7105_impl},
    {0x710572C7, routine_7105_72c7_impl},
    {0x72C7761D, routine_72c7_761d_impl},
    {0x761D7A48, routine_761d_7a48_impl},
    {0x7A487A7A, routine_7a48_7a7a_impl},
    {0x7B277B34, routine_7b27_7b34_impl},
    {0x7B347B49, routine_7b34_7b49_impl},
    {0x7B497BBD, routine_7b49_7bbd_impl},
    {0x7BBD7D9A, routine_7bbd_7d9a_impl},
    {0x7D9A83A3, routine_7d9a_83a3_impl},
    {0x83A483CE, routine_83a4_83ce_impl},
    {0x83CE868B, routine_83ce_868b_impl},
    {0x868A8695, routine_868a_8695_impl},
    {0x86CD86D0, routine_86cd_86d0_impl},
    {0x86D0882F, routine_86d0_882f_impl},
    {0x882F8B6D, routine_882f_8b6d_impl},
    {0x8B6D8ED6, routine_8b6d_8ed6_impl},
    {0x8ED68F33, routine_8ed6_8f33_impl},
    {0x8F348F7B, routine_8f34_8f7b_impl},
    {0x8F7B9558, routine_8f7b_9558_impl},
    {0x95589890, routine_9558_9890_impl},
    {0x98909898, routine_9890_9898_impl},
    {0x989898AF, routine_9898_98af_impl},
    {0x98B098CA, routine_98b0_98ca_impl},
    {0x98F398FD, routine_98f3_98fd_impl},
    {0x98FC997B, routine_98fc_997b_impl},
    {0x99919D32, routine_9991_9d32_impl},
    {0x9D329F00, routine_9d32_9f00_impl},
    {0x9F009FB8, routine_9f00_9fb8_impl},
    {0x9FB8A1CE, routine_9fb8_a1ce_impl},
    {0xA1CEA849, routine_a1ce_a849_impl},
    {0xA849ADBD, routine_a849_adbd_impl},
    {0xADBDADD3, routine_adbd_add3_impl},
    {0xADD4ADEB, routine_add4_adeb_impl},
    {0xADEBAE03, routine_adeb_ae03_impl},
    {0xAE03AE11, routine_ae03_ae11_impl},
    {0xAE11AE3E, routine_ae11_ae3e_impl},
    {0xAE3EAE48, routine_ae3e_ae48_impl},
    {0xAE48AE5F, routine_ae48_ae5f_impl},
    {0xAE60AE6E, routine_ae60_ae6e_impl},
    {0xAE6EAEB2, routine_ae6e_aeb2_impl},
    {0xAEB2B1A6, routine_aeb2_b1a6_impl},
    {0xB1A6B307, routine_b1a6_b307_impl},
    {0xB307B6C0, routine_b307_b6c0_impl},
    {0xB6C0B6CC, routine_b6c0_b6cc_impl},
    {0xB6CCBD03, routine_b6cc_bd03_impl},
    {0xBD03BD12, routine_bd03_bd12_impl},
    {0xBD12C24E, routine_bd12_c24e_impl},
    {0xC24EC2C3, routine_c24e_c2c3_impl},
    {0xC2C3C306, routine_c2c3_c306_impl},
    {0xC306C3ED, routine_c306_c3ed_impl},
    {0xC3EEC409, routine_c3ee_c409_impl},
    {0xC409C421, routine_c409_c421_impl},
    {0xC421C434, routine_c421_c434_impl},
    {0xC434C542, routine_c434_c542_impl},
    {0xC542C65B, routine_c542_c65b_impl},
    {0xC65BC8A5, routine_c65b_c8a5_impl},
    {0xC8A5CA63, routine_c8a5_ca63_impl},
    {0xCA8FCA9D, routine_ca8f_ca9d_impl},
    {0xCA9DCAC5, routine_ca9d_cac5_impl},
    {0xCAC5CAF2, routine_cac5_caf2_impl},
    {0xCAF3CB08, routine_caf3_cb08_impl},
    {0xCB08CBA3, routine_cb08_cba3_impl},
    {0xCBCCCBD1, routine_cbcc_cbd1_impl},
    {0xCBD0CBD9, routine_cbd0_cbd9_impl},
    {0xCBD8CC1B, routine_cbd8_cc1b_impl},
    {0xCC18CC79, routine_cc18_cc79_impl},
    {0xCCC0CCCC, routine_ccc0_cccc_impl},
    {0xCCCCCCD7, routine_cccc_ccd7_impl},
    {0xCCE4CCFB, routine_cce4_ccfb_impl},
    {0xCCF9CEA5, routine_ccf9_cea5_impl},
    {0xCEA3CEB8, routine_cea3_ceb8_impl},
    {0xCEB7D005, routine_ceb7_d005_impl},
    {0xD004D3E1, routine_d004_d3e1_impl},
    {0xD3E4D3ED, routine_d3e4_d3ed_impl},
    {0xD3ECD433, routine_d3ec_d433_impl},
    {0xD432D487, routine_d432_d487_impl},
    {0xD486D800, routine_d486_d800_impl},
    {0xD800D883, routine_d800_d883_impl},
    {0xD882D8DF, routine_d882_d8df_impl},
    {0xD8DFD8F6, routine_d8df_d8f6_impl},
    {0xD8FAD912, routine_d8fa_d912_impl},
    {0xD912D95D, routine_d912_d95d_impl},
    {0xD95DDAD3, routine_d95d_dad3_impl},
    {0xDAD3DE52, routine_dad3_de52_impl},
    {0xDE52DED1, routine_de52_ded1_impl},
    {0xDEDCDEE1, routine_dedc_dee1_impl},
    {0xDEE0DF19, routine_dee0_df19_impl},
    {0xDF18DF30, routine_df18_df30_impl},
    {0xDF30DF47, routine_df30_df47_impl},
    {0xDF47DFC6, routine_df47_dfc6_impl},
    {0xDFDDDFE5, routine_dfdd_dfe5_impl},
    {0xDFE5DFF3, routine_dfe5_dff3_impl},
    {0xDFF3DFFA, routine_dff3_dffa_impl},
    {0xDFFAE00F, routine_dffa_e00f_impl},
    {0xE00FE08F, routine_e00f_e08f_impl},
    {0xE08FE0D8, routine_e08f_e0d8_impl},
    {0xE0D8E765, routine_e0d8_e765_impl},
    {0xE764E790, routine_e764_e790_impl},
    {0xE790E7C7, routine_e790_e7c7_impl},
    {0xE7C7E7D2, routine_e7c7_e7d2_impl},
    {0xE7D3E7DC, routine_e7d3_e7dc_impl},
    {0xE7DCE811, routine_e7dc_e811_impl},
    {0xE811E82B, routine_e811_e82b_impl},
    {0xE82BEF7F, routine_e82b_ef7f_impl},
    {0xEF7FF261, routine_ef7f_f261_impl},
    {0xF261F883, routine_f261_f883_impl},
    {0xF89BFA19, routine_f89b_fa19_impl},
    {0xFA19FFE7, routine_fa19_ffe7_impl},
};

// CPU6809 method implementations

bool CPU6809::execute_at_address(uint16_t address) {
    std::cout << "CPU6809::execute_at_address(0x" << std::hex << address << ") - PC=0x" << m_pc << std::endl;

    auto it = routine_map.find(address);
    if (it != routine_map.end()) {
        std::cout << "Found routine for address 0x" << std::hex << address << std::endl;
        it->second(*this);
        return true;
    }

    std::cout << "No routine found for address 0x" << std::hex << address << ", tracking as unknown" << std::endl;
    track_unknown_address(address);
    return false;
}

} // namespace StarWars