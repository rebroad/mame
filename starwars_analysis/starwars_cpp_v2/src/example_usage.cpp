#include "cpu_6809.h"
#include "starwars_hardware.h"
#include <iostream>

namespace StarWars {

/**
 * Example usage of the integrated Star Wars C++ system
 * 
 * This demonstrates how to use the native C++ routines alongside
 * the 6809 emulation for a hybrid approach.
 */
class StarWarsGame {
private:
    CPU6809 m_cpu;
    StarWarsHardware m_hardware;
    
public:
    StarWarsGame() : m_cpu(), m_hardware() {
        // Connect CPU to hardware for memory access
        m_cpu.set_memory_interface(&m_hardware);
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
    
    void run_main_loop() {
        std::cout << "Starting main game loop..." << std::endl;
        
        // Execute the main game loop using native C++ implementation
        // This calls routine_f261() which is the main game loop
        m_cpu.execute_at_address(0xF261);
        
        std::cout << "Main game loop completed." << std::endl;
    }
    
    void run_specific_routine(uint16_t address) {
        std::cout << "Executing routine at address 0x" << std::hex << address << std::dec << std::endl;
        
        // This will use native C++ if available, otherwise fall back to 6809 emulation
        m_cpu.execute_at_address(address);
        
        std::cout << "Routine execution completed." << std::endl;
    }
    
    void demonstrate_hybrid_execution() {
        std::cout << "\n=== Hybrid Execution Demo ===" << std::endl;
        
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
        
        // Execute a few routines
        std::cout << "\nExecuting main game loop (0xF261)..." << std::endl;
        m_cpu.execute_at_address(0xF261);
        
        std::cout << "\nExecuting routine 0xF36F..." << std::endl;
        m_cpu.execute_at_address(0xF36F);
        
        // Show CPU state
        std::cout << "\nCPU State after execution:" << std::endl;
        m_cpu.print_state();
    }
};

} // namespace StarWars

// Example main function
int main() {
    using namespace StarWars;
    
    StarWarsGame game;
    
    // Initialize the game
    game.initialize();
    
    // Demonstrate hybrid execution
    game.demonstrate_hybrid_execution();
    
    return 0;
}
