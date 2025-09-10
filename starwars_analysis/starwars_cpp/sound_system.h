#pragma once

#include "starwars.h"

namespace StarWars {

// Sound system class
class SoundSystem {
public:
    SoundSystem();
    ~SoundSystem();
    
    void init();
    void reset();
    void update();
    
private:
    bool initialized = false;
};

} // namespace StarWars
