#pragma once

#include "cpu_6809.h"

namespace StarWars {

// Forward declaration
class StarWarsHardware;

/**
 * Hardware-connected 6809 CPU implementation
 * 
 * This class connects the CPU simulation to the actual hardware
 * memory system, allowing the CPU to read/write memory through
 * the hardware abstraction layer.
 */
class CPU6809Hardware : public CPU6809 {
public:
    // Constructor
    explicit CPU6809Hardware(StarWarsHardware* hardware);
    
    // Memory access implementation
    uint8_t read_memory(uint16_t address) override;
    void write_memory(uint16_t address, uint8_t value) override;
    uint16_t read_memory16(uint16_t address) override;
    void write_memory16(uint16_t address, uint16_t value) override;

private:
    StarWarsHardware* m_hardware;
};

} // namespace StarWars
