#pragma once

#include "starwars.h"
#include <cstdint>
#include <array>
#include <memory>

namespace StarWars {

// Mathbox operation constants (from MAME)
namespace MathboxOps {
    constexpr uint8_t NOP = 0x00;
    constexpr uint8_t LAC = 0x01;
    constexpr uint8_t READ_ACC = 0x02;
    constexpr uint8_t M_HALT = 0x04;
    constexpr uint8_t INC_BIC = 0x08;
    constexpr uint8_t CLEAR_ACC = 0x10;
    constexpr uint8_t LDC = 0x20;
    constexpr uint8_t LDB = 0x40;
    constexpr uint8_t LDA = 0x80;
}

// Mathbox class - converts MAME's matrix processor to modern C++
class Mathbox {
public:
    Mathbox();
    ~Mathbox();
    
    // Initialization
    bool init();
    void reset();
    void shutdown();
    
    // Main operations
    void write(uint8_t offset, uint8_t data);
    uint8_t read(uint8_t offset);
    
    // 3D math operations
    Vector3D transform_vector(const Vector3D& v, const Matrix3D& m);
    Matrix3D multiply_matrices(const Matrix3D& a, const Matrix3D& b);
    float divide(uint16_t dividend, uint16_t divisor);
    
    // Matrix operations
    Matrix3D rotation_x(float angle);
    Matrix3D rotation_y(float angle);
    Matrix3D rotation_z(float angle);
    Matrix3D identity();
    
    // Vector operations
    Vector3D add_vectors(const Vector3D& a, const Vector3D& b);
    Vector3D subtract_vectors(const Vector3D& a, const Vector3D& b);
    Vector3D scale_vector(const Vector3D& v, float scale);
    float dot_product(const Vector3D& a, const Vector3D& b);
    Vector3D cross_product(const Vector3D& a, const Vector3D& b);
    
    // Getters
    bool is_running() const { return math_run; }
    uint16_t get_mpa() const { return MPA; }
    uint16_t get_bic() const { return BIC; }
    
private:
    // PROM microcode (from MAME)
    std::array<uint8_t, 1024> prom_str;
    std::array<uint8_t, 1024> prom_mas;
    std::array<uint8_t, 1024> prom_am;
    
    // Registers (from MAME)
    int16_t A = 0;
    int16_t B = 0;
    int16_t C = 0;
    int32_t ACC = 0;
    uint16_t MPA = 0;
    uint16_t BIC = 0;
    
    // Math RAM (2KB)
    std::array<uint16_t, 1024> math_ram;
    
    // Division registers
    uint16_t dvd_shift = 0;
    uint16_t quotient_shift = 0;
    uint16_t divisor = 0;
    uint16_t dividend = 0;
    
    // State
    bool math_run = false;
    bool initialized = false;
    
    // Internal methods
    void run_microcode(uint8_t mpa);
    void execute_instruction(uint8_t strobe, uint8_t am, uint8_t mas);
    void load_prom_data();
    void perform_division();
    
    // Helper methods
    uint16_t read_math_ram(uint16_t address);
    void write_math_ram(uint16_t address, uint16_t data);
    uint16_t construct_ram_address(uint8_t am, uint8_t mas);
};

} // namespace StarWars
