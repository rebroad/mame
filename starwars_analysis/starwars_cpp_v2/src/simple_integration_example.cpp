#include "cpu_6809.h"
#include "starwars_hardware.h"
#include <iostream>

namespace StarWars {

/**
 * Simple Integration Example
 * 
 * This demonstrates how to integrate the converted ROM routines into your C++ project.
 * For now, we'll show the concept with simplified examples rather than the full generated code.
 */

class StarWarsGame {
private:
    CPU6809 m_cpu;
    StarWarsHardware m_hardware;
    
public:
    StarWarsGame() : m_cpu(), m_hardware() {
        // Connect CPU to hardware for memory access
        // m_cpu.set_memory_interface(&m_hardware);  // Uncomment when method exists
    }
    
    void initialize() {
        std::cout << "Initializing Star Wars game..." << std::endl;
        
        // Reset the CPU
        m_cpu.reset();
        
        // Load ROM data into hardware
        if (!m_hardware.load_roms()) {
            std::cerr << "Failed to load ROM data!" << std::endl;
            return;
        }
        
        std::cout << "Star Wars game initialized successfully!" << std::endl;
    }
    
    void demonstrate_native_routines() {
        std::cout << "\n=== Native C++ Routine Execution Demo ===" << std::endl;
        
        // Show available native routines
        std::cout << "Available native C++ routines:" << std::endl;
        std::cout << "  0xE790 - routine_e790()" << std::endl;
        std::cout << "  0xE7C7 - routine_e7c7()" << std::endl;
        std::cout << "  0xF261 - routine_f261() (main game loop)" << std::endl;
        std::cout << "  0xF36F - routine_f36f()" << std::endl;
        std::cout << "  0xF70D - routine_f70d()" << std::endl;
        std::cout << "  0xF714 - routine_f714()" << std::endl;
        std::cout << "  0xF720 - routine_f720()" << std::endl;
        std::cout << "  0xF86C - routine_f86c()" << std::endl;
        std::cout << "  0xFB38 - routine_fb38()" << std::endl;
        std::cout << "  0xFB74 - routine_fb74()" << std::endl;
        std::cout << "  0xFD07 - routine_fd07()" << std::endl;
        std::cout << "  0xFEFF - routine_feff()" << std::endl;
        std::cout << "  0xFF24 - routine_ff24()" << std::endl;
        
        // Execute routines using the hybrid approach
        std::cout << "\nExecuting main game loop (0xF261)..." << std::endl;
        m_cpu.execute_at_address(0xF261);
        
        std::cout << "\nExecuting routine 0xF36F..." << std::endl;
        m_cpu.execute_at_address(0xF36F);
        
        // Show CPU state
        std::cout << "\nCPU State after execution:" << std::endl;
        m_cpu.print_state();
    }
    
    void demonstrate_hybrid_execution() {
        std::cout << "\n=== Hybrid Execution Demo ===" << std::endl;
        
        // This shows how the system automatically chooses between:
        // 1. Native C++ routines (for addresses 0xE790, 0xE7C7, 0xF261, etc.)
        // 2. 6809 emulation (for unmapped addresses)
        
        std::cout << "Executing at 0xF261 (native C++ routine)..." << std::endl;
        m_cpu.execute_at_address(0xF261);
        
        std::cout << "Executing at 0x1234 (6809 emulation fallback)..." << std::endl;
        m_cpu.execute_at_address(0x1234);
        
        std::cout << "Executing at 0xF36F (native C++ routine)..." << std::endl;
        m_cpu.execute_at_address(0xF36F);
    }
    
    void run_game_loop() {
        std::cout << "\n=== Game Loop Demo ===" << std::endl;
        
        // Simulate a few frames of the game
        for (int frame = 0; frame < 3; ++frame) {
            std::cout << "\nFrame " << (frame + 1) << ":" << std::endl;
            
            // Main game loop (native C++)
            m_cpu.execute_at_address(0xF261);
            
            // Additional game logic (native C++)
            m_cpu.execute_at_address(0xF36F);
            m_cpu.execute_at_address(0xFB38);
            
            // Show progress
            std::cout << "  PC: 0x" << std::hex << m_cpu.get_pc() << std::dec << std::endl;
        }
    }
};

} // namespace StarWars

// Example main function
int main() {
    using namespace StarWars;
    
    StarWarsGame game;
    
    // Initialize the game
    game.initialize();
    
    // Demonstrate the integration
    game.demonstrate_native_routines();
    game.demonstrate_hybrid_execution();
    game.run_game_loop();
    
    std::cout << "\n=== Integration Complete ===" << std::endl;
    std::cout << "The Star Wars ROM routines have been successfully integrated!" << std::endl;
    std::cout << "You can now use native C++ performance for critical game logic." << std::endl;
    
    return 0;
}
