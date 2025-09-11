#include "starwars_hardware.h"
#include <iostream>
#include <memory>
#include <exception>

/**
 * Star Wars Arcade Game - Native C++ Implementation
 * 
 * This is a native conversion of the classic Atari Star Wars arcade game
 * from 6809 assembly to modern C++, based on comprehensive analysis of:
 * - Original ROM files (disassembled and validated)
 * - MAME emulation source code
 * - Hardware I/O traces and memory mapping
 * - Custom hardware components (Mathbox, AVG, POKEY, TMS5220)
 * 
 * The goal is to create a high-performance, maintainable version that
 * runs natively on modern hardware while preserving the original game's
 * behavior and feel.
 */

int main(int /* argc */, char* /* argv */[]) {
    std::cout << "========================================" << std::endl;
    std::cout << "    Star Wars Arcade - Native C++      " << std::endl;
    std::cout << "    Version 2.0 - Fresh Implementation " << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << std::endl;
    
    try {
        // Create hardware instance
        auto starwars = std::make_unique<StarWars::StarWarsHardware>();
        
        // Initialize hardware
        if (!starwars->initialize()) {
            std::cerr << "Failed to initialize Star Wars hardware!" << std::endl;
            return 1;
        }
        
        // Run the game
        starwars->run();
        
        // Shutdown
        starwars->shutdown();
        
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
        return 1;
    } catch (...) {
        std::cerr << "Unknown exception occurred!" << std::endl;
        return 1;
    }
    
    std::cout << "Star Wars game completed successfully!" << std::endl;
    return 0;
}
