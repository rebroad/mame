cmake_minimum_required(VERSION 3.16)
project(StarWarsCPP VERSION 1.0.0 LANGUAGES CXX)

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
    set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -DDEBUG")
    set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")
endif()

# Include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Source files
set(SOURCES
    main.cpp
    starwars.cpp
    mathbox.cpp
)

# Header files
set(HEADERS
    starwars.h
    mathbox.h
)

# Create executable
add_executable(starwars_cpp ${SOURCES} ${HEADERS})

# Link libraries
target_link_libraries(starwars_cpp)

# Set output directory
set_target_properties(starwars_cpp PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# Install target
install(TARGETS starwars_cpp
    RUNTIME DESTINATION bin
)

# Print configuration info
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
message(STATUS "C++ standard: ${CMAKE_CXX_STANDARD}")
message(STATUS "Compiler: ${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}")

# Optional: Add OpenGL support for graphics
option(ENABLE_OPENGL "Enable OpenGL support for graphics" OFF)
if(ENABLE_OPENGL)
    find_package(OpenGL REQUIRED)
    target_link_libraries(starwars_cpp OpenGL::GL)
    target_compile_definitions(starwars_cpp PRIVATE ENABLE_OPENGL)
endif()

# Optional: Add SDL2 support for windowing
option(ENABLE_SDL2 "Enable SDL2 support for windowing" OFF)
if(ENABLE_SDL2)
    find_package(SDL2 REQUIRED)
    target_link_libraries(starwars_cpp SDL2::SDL2)
    target_compile_definitions(starwars_cpp PRIVATE ENABLE_SDL2)
endif()

# Optional: Add threading support
option(ENABLE_THREADING "Enable threading support" ON)
if(ENABLE_THREADING)
    find_package(Threads REQUIRED)
    target_link_libraries(starwars_cpp Threads::Threads)
    target_compile_definitions(starwars_cpp PRIVATE ENABLE_THREADING)
endif()
