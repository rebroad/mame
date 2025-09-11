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
