#include "cpu_6809_hardware.h"
#include "starwars_hardware.h"
#include <stdexcept>

namespace StarWars {

CPU6809Hardware::CPU6809Hardware(StarWarsHardware* hardware)
    : m_hardware(hardware)
{
    if (!m_hardware) {
        throw std::invalid_argument("Hardware pointer cannot be null");
    }
}

uint8_t CPU6809Hardware::read_memory(uint16_t address) {
    return m_hardware->read_memory(address);
}

void CPU6809Hardware::write_memory(uint16_t address, uint8_t value) {
    m_hardware->write_memory(address, value);
}

uint16_t CPU6809Hardware::read_memory16(uint16_t address) {
    return m_hardware->read_memory16(address);
}

void CPU6809Hardware::write_memory16(uint16_t address, uint16_t value) {
    m_hardware->write_memory16(address, value);
}

} // namespace StarWars
