cmake_minimum_required(VERSION 3.16)
project(StarWarsCPP VERSION 2.0.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set build type if not specified
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Compiler flags
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3 -DNDEBUG")
endif()

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# Source files
set(SOURCES
    src/main.cpp
    src/starwars_hardware.cpp
    src/cpu_6809.cpp
    src/rom_routines_wrapper.cpp
    # Generated ROM routines
    src/routine_6005_6036.cpp
    src/routine_6036_6067.cpp
    src/routine_60be_60ca.cpp
    src/routine_60ca_60f4.cpp
    src/routine_60f4_623c.cpp
    src/routine_623c_624b.cpp
    src/routine_624b_640e.cpp
    src/routine_640e_6458.cpp
    src/routine_64a6_64c9.cpp
    src/routine_64c9_6512.cpp
    src/routine_6512_655d.cpp
    src/routine_655d_656b.cpp
    src/routine_656b_6586.cpp
    src/routine_6586_6592.cpp
    src/routine_65bd_666f.cpp
    src/routine_66ce_66e3.cpp
    src/routine_66e3_681e.cpp
    src/routine_681e_6837.cpp
    src/routine_6857_6865.cpp
    src/routine_6864_68cf.cpp
    src/routine_6901_6911.cpp
    src/routine_6911_692a.cpp
    src/routine_692a_692d.cpp
    src/routine_692d_70db.cpp
    src/routine_70db_70ef.cpp
    src/routine_70f5_7105.cpp
    src/routine_7105_72c7.cpp
    src/routine_72c7_761d.cpp
    src/routine_761d_7a48.cpp
    src/routine_7a48_7a7a.cpp
    src/routine_7b27_7b34.cpp
    src/routine_7b34_7b49.cpp
    src/routine_7b49_7bbd.cpp
    src/routine_7bbd_7d9a.cpp
    src/routine_7d9a_83a3.cpp
    src/routine_83a4_83ce.cpp
    src/routine_83ce_868b.cpp
    src/routine_868a_8695.cpp
    src/routine_86cd_86d0.cpp
    src/routine_86d0_882f.cpp
    src/routine_882f_8b6d.cpp
    src/routine_8b6d_8ed6.cpp
    src/routine_8ed6_8f33.cpp
    src/routine_8f34_8f7b.cpp
    src/routine_8f7b_9558.cpp
    src/routine_9558_9890.cpp
    src/routine_9890_9898.cpp
    src/routine_9898_98af.cpp
    src/routine_98b0_98ca.cpp
    src/routine_98f3_98fd.cpp
    src/routine_98fc_997b.cpp
    src/routine_9991_9d32.cpp
    src/routine_9d32_9f00.cpp
    src/routine_9f00_9fb8.cpp
    src/routine_9fb8_a1ce.cpp
    src/routine_a1ce_a849.cpp
    src/routine_a849_adbd.cpp
    src/routine_adbd_add3.cpp
    src/routine_add4_adeb.cpp
    src/routine_adeb_ae03.cpp
    src/routine_ae03_ae11.cpp
    src/routine_ae11_ae3e.cpp
    src/routine_ae3e_ae48.cpp
    src/routine_ae48_ae5f.cpp
    src/routine_ae60_ae6e.cpp
    src/routine_ae6e_aeb2.cpp
    src/routine_aeb2_b1a6.cpp
    src/routine_b1a6_b307.cpp
    src/routine_b307_b6c0.cpp
    src/routine_b6c0_b6cc.cpp
    src/routine_b6cc_bd03.cpp
    src/routine_bd03_bd12.cpp
    src/routine_bd12_c24e.cpp
    src/routine_c24e_c2c3.cpp
    src/routine_c2c3_c306.cpp
    src/routine_c306_c3ed.cpp
    src/routine_c3ee_c409.cpp
    src/routine_c409_c421.cpp
    src/routine_c421_c434.cpp
    src/routine_c434_c542.cpp
    src/routine_c542_c65b.cpp
    src/routine_c65b_c8a5.cpp
    src/routine_c8a5_ca63.cpp
    src/routine_ca8f_ca9d.cpp
    src/routine_ca9d_cac5.cpp
    src/routine_cac5_caf2.cpp
    src/routine_caf3_cb08.cpp
    src/routine_cb08_cba3.cpp
    src/routine_cbcc_cbd1.cpp
    src/routine_cbd0_cbd9.cpp
    src/routine_cbd8_cc1b.cpp
    src/routine_cc18_cc79.cpp
    src/routine_ccc0_cccc.cpp
    src/routine_cccc_ccd7.cpp
    src/routine_cce4_ccfb.cpp
    src/routine_ccf9_cea5.cpp
    src/routine_cea3_ceb8.cpp
    src/routine_ceb7_d005.cpp
    src/routine_d004_d3e1.cpp
    src/routine_d3e4_d3ed.cpp
    src/routine_d3ec_d433.cpp
    src/routine_d432_d487.cpp
    src/routine_d486_d800.cpp
    src/routine_d800_d883.cpp
    src/routine_d882_d8df.cpp
    src/routine_d8df_d8f6.cpp
    src/routine_d8fa_d912.cpp
    src/routine_d912_d95d.cpp
    src/routine_d95d_dad3.cpp
    src/routine_dad3_de52.cpp
    src/routine_de52_ded1.cpp
    src/routine_dedc_dee1.cpp
    src/routine_dee0_df19.cpp
    src/routine_df18_df30.cpp
    src/routine_df30_df47.cpp
    src/routine_df47_dfc6.cpp
    src/routine_dfdd_dfe5.cpp
    src/routine_dfe5_dff3.cpp
    src/routine_dff3_dffa.cpp
    src/routine_dffa_e00f.cpp
    src/routine_e00f_e08f.cpp
    src/routine_e08f_e0d8.cpp
    src/routine_e0d8_e765.cpp
    src/routine_e764_e790.cpp
    src/routine_e790_e7c7.cpp
    src/routine_e7c7_e7d2.cpp
    src/routine_e7d3_e7dc.cpp
    src/routine_e7dc_e811.cpp
    src/routine_e811_e82b.cpp
    src/routine_e82b_ef7f.cpp
    src/routine_ef7f_f261.cpp
    src/routine_f261_f883.cpp
    src/routine_f89b_fa19.cpp
    src/routine_fa19_ffe7.cpp
)

# Create executable
add_executable(starwars_cpp ${SOURCES})

# Set output directory
set_target_properties(starwars_cpp PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# Create ROMs directory if it doesn't exist
file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/roms)

# Copy ROM files (if they exist)
if(EXISTS ${CMAKE_SOURCE_DIR}/../roms)
    file(COPY ${CMAKE_SOURCE_DIR}/../roms DESTINATION ${CMAKE_BINARY_DIR})
    message(STATUS "ROM files copied to build directory")
else()
    message(WARNING "ROM files not found! Please ensure ROM files are in the roms/ directory")
endif()

# Installation
install(TARGETS starwars_cpp
    RUNTIME DESTINATION bin
)

install(DIRECTORY ${CMAKE_SOURCE_DIR}/../roms
    DESTINATION share/starwars_cpp
    FILES_MATCHING PATTERN "*.bin"
)

# Print configuration summary
message(STATUS "Star Wars C++ Configuration:")
message(STATUS "  Build type: ${CMAKE_BUILD_TYPE}")
message(STATUS "  C++ standard: ${CMAKE_CXX_STANDARD}")
message(STATUS "  Compiler: ${CMAKE_CXX_COMPILER_ID}")
message(STATUS "  Install prefix: ${CMAKE_INSTALL_PREFIX}")
