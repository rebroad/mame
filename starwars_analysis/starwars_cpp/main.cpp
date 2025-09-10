#include "starwars.h"
#include <iostream>
#include <memory>

int main() {
    std::cout << "=== Star Wars ROM to C++ Conversion ===" << std::endl;
    std::cout << "Based on MAME analysis and ROM disassembly" << std::endl;
    std::cout << "=========================================" << std::endl;
    
    try {
        // Create Star Wars hardware instance
        auto starwars = std::make_unique<StarWars::StarWarsHardware>();
        
        // Initialize hardware
        if (!starwars->init()) {
            std::cerr << "Failed to initialize Star Wars hardware!" << std::endl;
            return 1;
        }
        
        std::cout << "\nHardware initialized successfully!" << std::endl;
        std::cout << "Starting main loop..." << std::endl;
        
        // Run the main loop
        starwars->run();
        
        std::cout << "\nMain loop completed." << std::endl;
        std::cout << "Total frames processed: " << starwars->get_frame_count() << std::endl;
        
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    std::cout << "\nStar Wars conversion test completed successfully!" << std::endl;
    return 0;
}
