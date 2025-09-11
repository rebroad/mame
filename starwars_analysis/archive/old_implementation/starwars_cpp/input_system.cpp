#include "input_system.h"

namespace StarWars {

InputSystem::InputSystem() {
    // Initialize input state
    current_state = InputState();
}

InputSystem::~InputSystem() {
}

InputState InputSystem::get_input_state() {
    return current_state;
}

void InputSystem::update() {
    // In a real implementation, this would read from actual input devices
    // For now, we'll just maintain the current state
}

} // namespace StarWars
