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
    src/routine_e790.cpp
    src/routine_e7c7.cpp
    src/routine_f261.cpp
    src/routine_f70d.cpp
    src/routine_f714.cpp
    src/routine_f720.cpp
    src/routine_f86c.cpp
    src/routine_fb38.cpp
    src/routine_fd07.cpp
    src/routine_feff.cpp
    src/routine_ff24.cpp
    src/routine_f36e.cpp
    src/routine_fd00.cpp
    src/routine_fb73.cpp
    src/routine_f1fd.cpp
    src/routine_f1c6.cpp
    src/routine_f182.cpp
    src/routine_f17f.cpp
    src/routine_e821.cpp
    src/routine_e7fc.cpp
    src/routine_e7dd.cpp
    src/routine_e7d3.cpp
    src/routine_e7ad.cpp
    src/routine_e772.cpp
    src/routine_e764.cpp
    src/routine_e700.cpp
    src/routine_e000.cpp
    src/routine_d9fa.cpp
    src/routine_d9dc.cpp
    src/routine_d985.cpp
    src/routine_d971.cpp
    src/routine_d95e.cpp
    src/routine_d942.cpp
    src/routine_d923.cpp
    src/routine_d91a.cpp
    src/routine_d8df.cpp
    src/routine_d883.cpp
    src/routine_d882.cpp
    src/routine_d800.cpp
    src/routine_ce45.cpp
    src/routine_ce3a.cpp
    src/routine_ce2f.cpp
    src/routine_ce24.cpp
    src/routine_ce18.cpp
    src/routine_ce0c.cpp
    src/routine_cde7.cpp
    src/routine_cdc3.cpp
    src/routine_cdba.cpp
    src/routine_cdb5.cpp
    src/routine_cdb1.cpp
    src/routine_cdab.cpp
    src/routine_cda9.cpp
    src/routine_cda2.cpp
    src/routine_cda0.cpp
    src/routine_cd9e.cpp
    src/routine_cd9c.cpp
    src/routine_cd8c.cpp
    src/routine_cd80.cpp
    src/routine_cd74.cpp
    src/routine_cd68.cpp
    src/routine_cd5c.cpp
    src/routine_cd50.cpp
    src/routine_cd44.cpp
    src/routine_cd38.cpp
    src/routine_cd2c.cpp
    src/routine_cd20.cpp
    src/routine_cd14.cpp
    src/routine_cd08.cpp
    src/routine_cd00.cpp
    src/routine_ccfc.cpp
    src/routine_ccf0.cpp
    src/routine_cce4.cpp
    src/routine_ccd8.cpp
    src/routine_cccc.cpp
    src/routine_ccc0.cpp
    src/routine_cc5b.cpp
    src/routine_cc38.cpp
    src/routine_cc18.cpp
    src/routine_cc00.cpp
    src/routine_caf3.cpp
    src/routine_c7fd.cpp
    src/routine_c70e.cpp
    src/routine_c6f9.cpp
    src/routine_c6f7.cpp
    src/routine_c6f4.cpp
    src/routine_c6d9.cpp
    src/routine_c6d7.cpp
    src/routine_c6d4.cpp
    src/routine_c6b8.cpp
    src/routine_c690.cpp
    src/routine_c688.cpp
    src/routine_c67a.cpp
    src/routine_c65b.cpp
    src/routine_c641.cpp
    src/routine_c600.cpp
    src/routine_c5f2.cpp
    src/routine_c5a4.cpp
    src/routine_c4eb.cpp
    src/routine_c450.cpp
    src/routine_c413.cpp
    src/routine_c3ee.cpp
    src/routine_c3a7.cpp
    src/routine_c369.cpp
    src/routine_c306.cpp
    src/routine_c2c3.cpp
    src/routine_c2b3.cpp
    src/routine_c24e.cpp
    src/routine_c20c.cpp
    src/routine_c200.cpp
    src/routine_c087.cpp
    src/routine_c02f.cpp
    src/routine_be20.cpp
    src/routine_be16.cpp
    src/routine_be11.cpp
    src/routine_be0c.cpp
    src/routine_be07.cpp
    src/routine_be02.cpp
    src/routine_be00.cpp
    src/routine_bdfd.cpp
    src/routine_bdf8.cpp
    src/routine_bdf3.cpp
    src/routine_bdee.cpp
    src/routine_bde9.cpp
    src/routine_bde4.cpp
    src/routine_bddf.cpp
    src/routine_bdda.cpp
    src/routine_bdd5.cpp
    src/routine_bdd0.cpp
    src/routine_bdcb.cpp
    src/routine_bdc6.cpp
    src/routine_bdbc.cpp
    src/routine_bdb7.cpp
    src/routine_bdb2.cpp
    src/routine_bdad.cpp
    src/routine_bda8.cpp
    src/routine_bda3.cpp
    src/routine_bd9e.cpp
    src/routine_bd99.cpp
    src/routine_bd94.cpp
    src/routine_bd8a.cpp
    src/routine_bd85.cpp
    src/routine_bd80.cpp
    src/routine_bd76.cpp
    src/routine_bd71.cpp
    src/routine_bd6c.cpp
    src/routine_bd67.cpp
    src/routine_bd62.cpp
    src/routine_bd5d.cpp
    src/routine_bd58.cpp
    src/routine_bd53.cpp
    src/routine_bd4e.cpp
    src/routine_bd44.cpp
    src/routine_bd3f.cpp
    src/routine_bd3a.cpp
    src/routine_bd35.cpp
    src/routine_bd30.cpp
    src/routine_bd2b.cpp
    src/routine_bd21.cpp
    src/routine_bd1c.cpp
    src/routine_bd17.cpp
    src/routine_bd12.cpp
    src/routine_bd08.cpp
    src/routine_bd03.cpp
    src/routine_bd00.cpp
    src/routine_bce9.cpp
    src/routine_bcc8.cpp
    src/routine_bcae.cpp
    src/routine_bb85.cpp
    src/routine_ba32.cpp
    src/routine_ba12.cpp
    src/routine_b98b.cpp
    src/routine_b982.cpp
    src/routine_b95c.cpp
    src/routine_b948.cpp
    src/routine_b939.cpp
    src/routine_b85e.cpp
    src/routine_b852.cpp
    src/routine_b83f.cpp
    src/routine_b76c.cpp
    src/routine_b739.cpp
    src/routine_b6d7.cpp
    src/routine_b6cc.cpp
    src/routine_b6c7.cpp
    src/routine_b6c0.cpp
    src/routine_b6b9.cpp
    src/routine_b579.cpp
    src/routine_b43f.cpp
    src/routine_b3e4.cpp
    src/routine_b32b.cpp
    src/routine_b2d2.cpp
    src/routine_b29c.cpp
    src/routine_b261.cpp
    src/routine_b095.cpp
    src/routine_b071.cpp
    src/routine_b000.cpp
    src/routine_afef.cpp
    src/routine_af87.cpp
    src/routine_aebd.cpp
    src/routine_ae60.cpp
    src/routine_add4.cpp
    src/routine_adbd.cpp
    src/routine_adaf.cpp
    src/routine_ad6c.cpp
    src/routine_ad3e.cpp
    src/routine_ad20.cpp
    src/routine_ace0.cpp
    src/routine_acb1.cpp
    src/routine_ac52.cpp
    src/routine_ac34.cpp
    src/routine_aae4.cpp
    src/routine_aa7d.cpp
    src/routine_a933.cpp
    src/routine_a920.cpp
    src/routine_a90c.cpp
    src/routine_a849.cpp
    src/routine_a80b.cpp
    src/routine_a7f7.cpp
    src/routine_a7c8.cpp
    src/routine_a7bf.cpp
    src/routine_a7b6.cpp
    src/routine_a728.cpp
    src/routine_a705.cpp
    src/routine_a6f4.cpp
    src/routine_a6e0.cpp
    src/routine_a68b.cpp
    src/routine_a591.cpp
    src/routine_a54b.cpp
    src/routine_a459.cpp
    src/routine_a40a.cpp
    src/routine_a2f8.cpp
    src/routine_a214.cpp
    src/routine_a1ce.cpp
    src/routine_98b0.cpp
    src/routine_9898.cpp
    src/routine_9890.cpp
    src/routine_9886.cpp
    src/routine_987f.cpp
    src/routine_9874.cpp
    src/routine_9810.cpp
    src/routine_9806.cpp
    src/routine_9801.cpp
    src/routine_97fc.cpp
    src/routine_97f7.cpp
    src/routine_97f2.cpp
    src/routine_97ed.cpp
    src/routine_97e8.cpp
    src/routine_97e3.cpp
    src/routine_97c2.cpp
    src/routine_97ac.cpp
    src/routine_9775.cpp
    src/routine_973a.cpp
    src/routine_9722.cpp
    src/routine_96a1.cpp
    src/routine_962a.cpp
    src/routine_960f.cpp
    src/routine_9604.cpp
    src/routine_95a7.cpp
    src/routine_9558.cpp
    src/routine_953b.cpp
    src/routine_9500.cpp
    src/routine_8f7b.cpp
    src/routine_8f34.cpp
    src/routine_8ed6.cpp
    src/routine_8e3a.cpp
    src/routine_8e32.cpp
    src/routine_8e23.cpp
    src/routine_8e1c.cpp
    src/routine_8de3.cpp
    src/routine_8d9d.cpp
    src/routine_8c44.cpp
    src/routine_8be1.cpp
    src/routine_8b86.cpp
    src/routine_8b6d.cpp
    src/routine_8acf.cpp
    src/routine_8ab6.cpp
    src/routine_8a7e.cpp
    src/routine_8a59.cpp
    src/routine_8a3d.cpp
    src/routine_8a21.cpp
    src/routine_8a05.cpp
    src/routine_8a00.cpp
    src/routine_89e9.cpp
    src/routine_89de.cpp
    src/routine_89d3.cpp
    src/routine_89c8.cpp
    src/routine_8993.cpp
    src/routine_8981.cpp
    src/routine_8979.cpp
    src/routine_8971.cpp
    src/routine_8969.cpp
    src/routine_8961.cpp
    src/routine_8959.cpp
    src/routine_8951.cpp
    src/routine_88f5.cpp
    src/routine_889f.cpp
    src/routine_87f5.cpp
    src/routine_87cb.cpp
    src/routine_8735.cpp
    src/routine_86ae.cpp
    src/routine_868a.cpp
    src/routine_85f9.cpp
    src/routine_859b.cpp
    src/routine_84c6.cpp
    src/routine_8495.cpp
    src/routine_8434.cpp
    src/routine_8408.cpp
    src/routine_83ce.cpp
    src/routine_83a4.cpp
    src/routine_8341.cpp
    src/routine_7eaf.cpp
    src/routine_7d9a.cpp
    src/routine_7bbd.cpp
    src/routine_7b9e.cpp
    src/routine_7a5a.cpp
    src/routine_7a48.cpp
    src/routine_7881.cpp
    src/routine_786a.cpp
    src/routine_7863.cpp
    src/routine_785b.cpp
    src/routine_77d4.cpp
    src/routine_77a4.cpp
    src/routine_7765.cpp
    src/routine_7720.cpp
    src/routine_7707.cpp
    src/routine_76d3.cpp
    src/routine_768d.cpp
    src/routine_761d.cpp
    src/routine_7519.cpp
    src/routine_743c.cpp
    src/routine_7413.cpp
    src/routine_73ea.cpp
    src/routine_7390.cpp
    src/routine_736f.cpp
    src/routine_733c.cpp
    src/routine_7315.cpp
    src/routine_72c7.cpp
    src/routine_71c4.cpp
    src/routine_7160.cpp
    src/routine_7111.cpp
    src/routine_7100.cpp
    src/routine_70f0.cpp
    src/routine_70db.cpp
    src/routine_70cc.cpp
    src/routine_70bd.cpp
    src/routine_703b.cpp
    src/routine_6ff1.cpp
    src/routine_6fe0.cpp
    src/routine_6f6f.cpp
    src/routine_6f67.cpp
    src/routine_6f5f.cpp
    src/routine_6ef7.cpp
    src/routine_6ecb.cpp
    src/routine_6ea2.cpp
    src/routine_6ea1.cpp
    src/routine_6e70.cpp
    src/routine_6e22.cpp
    src/routine_6dfa.cpp
    src/routine_6dd2.cpp
    src/routine_6dca.cpp
    src/routine_6dc0.cpp
    src/routine_6db6.cpp
    src/routine_6da5.cpp
    src/routine_6aa0.cpp
    src/routine_6a0c.cpp
    src/routine_6978.cpp
    src/routine_692d.cpp
    src/routine_68c7.cpp
    src/routine_6864.cpp
    src/routine_6819.cpp
    src/routine_67d4.cpp
    src/routine_67d2.cpp
    src/routine_67aa.cpp
    src/routine_6782.cpp
    src/routine_6761.cpp
    src/routine_6726.cpp
    src/routine_6724.cpp
    src/routine_670d.cpp
    src/routine_64cd.cpp
    src/routine_63d5.cpp
    src/routine_6368.cpp
    src/routine_62d5.cpp
    src/routine_622d.cpp
    src/routine_620f.cpp
    src/routine_61ec.cpp
    src/routine_61b5.cpp
    src/routine_6161.cpp
    src/routine_615a.cpp
    src/routine_612f.cpp
    src/routine_611e.cpp
    src/routine_6112.cpp
    src/routine_60be.cpp
    src/routine_6036.cpp
    src/routine_6005.cpp
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
