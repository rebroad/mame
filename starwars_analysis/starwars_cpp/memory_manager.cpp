#include "memory_manager.h"
#include "starwars.h"

namespace StarWars {

MemoryManager::MemoryManager(StarWarsHardware* hw) : hardware(hw) {
}

MemoryManager::~MemoryManager() {
}

uint8_t MemoryManager::read_byte(uint16_t address) {
    uint8_t* ptr = get_memory_pointer(address);
    if (ptr) {
        return *ptr;
    }
    return 0xFF;
}

void MemoryManager::write_byte(uint16_t address, uint8_t data) {
    uint8_t* ptr = get_memory_pointer(address);
    if (ptr) {
        *ptr = data;
    }
}

uint16_t MemoryManager::read_word(uint16_t address) {
    uint8_t low = read_byte(address);
    uint8_t high = read_byte(address + 1);
    return (high << 8) | low;
}

void MemoryManager::write_word(uint16_t address, uint16_t data) {
    write_byte(address, data & 0xFF);
    write_byte(address + 1, (data >> 8) & 0xFF);
}

uint8_t* MemoryManager::get_memory_pointer(uint16_t address) {
    if (hardware) {
        return hardware->get_memory_pointer(address);
    }
    return nullptr;
}

} // namespace StarWars
