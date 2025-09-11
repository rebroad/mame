#pragma once

#include "starwars.h"

namespace StarWars {

// Input system class
class InputSystem {
public:
    InputSystem();
    ~InputSystem();
    
    InputState get_input_state();
    void update();
    
private:
    InputState current_state;
};

} // namespace StarWars
