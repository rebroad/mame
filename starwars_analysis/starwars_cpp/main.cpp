#include "starwars.h"
#include "starwars_game.h"
#include <iostream>
#include <memory>

int main() {
    std::cout << "=== Star Wars ROM to C++ Conversion ===" << std::endl;
    std::cout << "Based on MAME analysis and ROM disassembly" << std::endl;
    std::cout << "=========================================" << std::endl;
    
    try {
        // Create game instance (converted logic skeleton)
        StarWars::StarWarsGame game;
        game.init();

        std::cout << "\nGame initialized successfully!" << std::endl;
        std::cout << "Starting main loop... (press Ctrl+C to exit)" << std::endl;

        // Simple fixed-iteration loop with periodic test harness
        // TODO: Replace with frame-timed loop once AVG interpreter is integrated
        for (int i = 0; i < 10000; ++i) {
            game.update();
            if ((i % 50) == 0) {
                game.run_vector_test_d91a();
            }
            game.render();
        }

        std::cout << "\nMain loop completed." << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    std::cout << "\nStar Wars conversion test completed successfully!" << std::endl;
    return 0;
}
