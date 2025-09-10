#pragma once

#include "starwars.h"
#include <emscripten.h>
#include <emscripten/html5.h>

namespace StarWars {

// Browser interface for WebAssembly
class BrowserInterface {
public:
    BrowserInterface();
    ~BrowserInterface();
    
    // Initialization
    bool init();
    void shutdown();
    
    // Graphics interface
    void init_canvas(int width, int height);
    void render_vectors(const std::vector<Vector>& vectors);
    void present_frame();
    void clear_screen();
    
    // Audio interface
    void init_audio();
    void play_sound(int channel, float frequency, float volume);
    void stop_sound(int channel);
    void play_speech(const std::vector<uint8_t>& speech_data);
    
    // Input interface
    void handle_keyboard(int key, bool pressed);
    void handle_mouse(int x, int y, bool pressed);
    void handle_gamepad(int button, bool pressed);
    
    // Storage interface
    void save_data(const std::string& key, const std::vector<uint8_t>& data);
    std::vector<uint8_t> load_data(const std::string& key);
    
    // ROM loading interface
    void load_rom(const std::string& filename, const std::vector<uint8_t>& data);
    void load_embedded_roms();
    
    // Game state interface
    void set_score(uint32_t score);
    void set_shields(uint8_t shields);
    void set_wave(uint8_t wave);
    void set_lives(uint8_t lives);
    
    // Getters for JavaScript
    uint32_t get_score() const { return m_score; }
    uint8_t get_shields() const { return m_shields; }
    uint8_t get_wave() const { return m_wave; }
    uint8_t get_lives() const { return m_lives; }
    
private:
    // Canvas and WebGL
    EMSCRIPTEN_WEBGL_CONTEXT_HANDLE m_webgl_context;
    int m_canvas_width;
    int m_canvas_height;
    
    // Audio system
    void* m_audio_context;
    void* m_gain_node;
    std::vector<void*> m_oscillators;
    
    // Input state
    std::array<bool, 256> m_keyboard_state;
    std::array<bool, 8> m_mouse_state;
    std::array<bool, 16> m_gamepad_state;
    
    // Game state
    uint32_t m_score;
    uint8_t m_shields;
    uint8_t m_wave;
    uint8_t m_lives;
    
    // Storage
    std::string m_storage_prefix;
    
    // Internal methods
    void setup_webgl();
    void setup_audio();
    void setup_input_handlers();
    void setup_storage();
    
    // WebGL rendering
    void render_vector_webgl(const Vector& v);
    void set_webgl_color(uint8_t color, uint8_t intensity);
    
    // Audio processing
    void create_oscillator(int channel, float frequency, float volume);
    void destroy_oscillator(int channel);
};

// Global browser interface instance
extern BrowserInterface* g_browser_interface;

// C-style functions for JavaScript interface
extern "C" {
    // Game control
    void init_game(int width, int height);
    void update_game();
    void render_frame();
    void handle_key(int key_code, int pressed);
    void handle_mouse(int x, int y, int pressed);
    
    // Game state getters
    uint32_t get_score();
    uint8_t get_shields();
    uint8_t get_wave();
    uint8_t get_lives();
    
    // Vector data getters
    int get_vector_count();
    int get_vector_x(int index);
    int get_vector_y(int index);
    uint8_t get_vector_color(int index);
    uint8_t get_vector_intensity(int index);
    
    // ROM loading
    void load_rom_data(const char* filename, const uint8_t* data, int size);
    
    // Storage
    void save_game_data(const char* key, const uint8_t* data, int size);
    int load_game_data(const char* key, uint8_t* data, int max_size);
}

} // namespace StarWars
