#pragma once

#include <cstdint>

namespace StarWars {

// Forward declaration
class StarWarsHardware;

// Memory manager class
class MemoryManager {
public:
    MemoryManager(StarWarsHardware* hw);
    ~MemoryManager();
    
    uint8_t read_byte(uint16_t address);
    void write_byte(uint16_t address, uint8_t data);
    uint16_t read_word(uint16_t address);
    void write_word(uint16_t address, uint16_t data);
    
private:
    StarWarsHardware* hardware;
    uint8_t* get_memory_pointer(uint16_t address);
};

} // namespace StarWars
