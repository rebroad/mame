#pragma once

#include "starwars.h"

namespace StarWars {

// Vector graphics class
class VectorGraphics {
public:
    VectorGraphics();
    ~VectorGraphics();
    
    void init();
    void reset();
    void go();
    void update();
    void render_frame();
    
private:
    bool initialized = false;
};

} // namespace StarWars
