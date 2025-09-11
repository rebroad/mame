#include "mathbox.h"
#include "starwars.h"
#include <iostream>
#include <cmath>
#include <fstream>

namespace StarWars {

Mathbox::Mathbox() {
    // Initialize arrays
    prom_str.fill(0);
    prom_mas.fill(0);
    prom_am.fill(0);
    math_ram.fill(0);

    // Initialize registers
    A = B = C = 0;
    ACC = 0;
    MPA = BIC = 0;
    dvd_shift = quotient_shift = 0;
    divisor = dividend = 0;

    math_run = false;
    initialized = false;
}

Mathbox::~Mathbox() {
    shutdown();
}

bool Mathbox::init() {
    std::cout << "Initializing Mathbox..." << std::endl;

    try {
        // Load PROM data (in real implementation, this would load from ROM files)
        load_prom_data();

        // Reset state
        reset();

        initialized = true;
        std::cout << "Mathbox initialized successfully!" << std::endl;
        return true;

    } catch (const std::exception& e) {
        std::cerr << "Failed to initialize Mathbox: " << e.what() << std::endl;
        return false;
    }
}

void Mathbox::reset() {
    MPA = BIC = 0;
    A = B = C = 0;
    ACC = 0;
    math_run = false;
    dvd_shift = quotient_shift = 0;
    divisor = dividend = 0;
}

void Mathbox::shutdown() {
    initialized = false;
}

void Mathbox::write(uint8_t offset, uint8_t data) {
    data &= 0xFF; // Ensure we only get bytes

    switch (offset) {
        case 0: // mw0 - Set starting PROM address and run
            MPA = data << 2;
            run_microcode(MPA);
            break;

        case 1: // mw1 - Set BIC high byte
            BIC = (BIC & 0x00FF) | ((data & 0x01) << 8);
            break;

        case 2: // mw2 - Set BIC low byte
            BIC = (BIC & 0x0100) | data;
            break;

        case 4: // dvsrh - Divisor high byte
            divisor = (divisor & 0x00FF) | (data << 8);
            dvd_shift = dividend;
            quotient_shift = 0;
            break;

        case 5: // dvsrl - Divisor low byte (triggers division)
            divisor = (divisor & 0xFF00) | data;
            perform_division();
            break;

        case 6: // dvddh - Dividend high byte
            dividend = (dividend & 0x00FF) | (data << 8);
            break;

        case 7: // dvddl - Dividend low byte
            dividend = (dividend & 0xFF00) | data;
            break;

        default:
            break;
    }
}

uint8_t Mathbox::read(uint8_t offset) {
    switch (offset) {
        case 0: // Read quotient high byte
            return (quotient_shift & 0xFF00) >> 8;

        case 1: // Read quotient low byte
            return quotient_shift & 0x00FF;

        case 3: // Read pseudo-random number
            // Simple LFSR implementation
            static uint32_t lfsr = 0x12345678;
            lfsr = (lfsr >> 1) ^ (-(lfsr & 1) & 0x80200004);
            return (lfsr >> 8) & 0xFF;

        default:
            return 0;
    }
}

void Mathbox::run_microcode(uint8_t mpa) {
    const int MAX_INSTRUCTIONS = 100000; // Safety limit
    int instruction_count = 0;

    math_run = true;
    MPA = mpa;

    while (math_run && instruction_count < MAX_INSTRUCTIONS) {
        // Fetch instruction data from PROMs
        uint8_t strobe = prom_str[MPA];
        uint8_t am = prom_am[MPA];
        uint8_t mas = prom_mas[MPA];

        // Execute instruction
        execute_instruction(strobe, am, mas);

        // Update MPA (wrap around within page)
        MPA = (MPA & 0x0300) | ((MPA + 1) & 0x00FF);

        instruction_count++;
    }

    math_run = false;
}

void Mathbox::execute_instruction(uint8_t strobe, uint8_t am, uint8_t mas) {
    // Construct RAM address
    uint16_t ram_addr = construct_ram_address(am, mas);
    uint16_t ram_word = read_math_ram(ram_addr);

    // Execute operations based on strobe bits
    if (strobe & MathboxOps::CLEAR_ACC) {
        ACC = 0;
    }

    if (strobe & MathboxOps::LAC) {
        ACC = static_cast<int32_t>(ram_word) << 16;
    }

    if (strobe & MathboxOps::READ_ACC) {
        write_math_ram(ram_addr, (ACC >> 16) & 0xFFFF);
    }

    if (strobe & MathboxOps::M_HALT) {
        math_run = false;
    }

    if (strobe & MathboxOps::INC_BIC) {
        BIC = (BIC + 1) & 0x1FF; // 9-bit counter
    }

    if (strobe & MathboxOps::LDC) {
        C = ram_word;

        // Perform multiply-add operation: ACC = ACC + (A - B) * C
        ACC += (((int32_t)(A - B) << 1) * C) << 1;

        // Sign extend A and B
        A = (A & 0x8000) ? 0xFFFF : 0;
        B = (B & 0x8000) ? 0xFFFF : 0;
    }

    if (strobe & MathboxOps::LDB) {
        B = ram_word;
    }

    if (strobe & MathboxOps::LDA) {
        A = ram_word;
    }
}

void Mathbox::load_prom_data() {
    // FROM DISASSEMBLY/MAME: Load actual PROM data from mathbox_prom_*.bin files
    // These are the actual microcode PROMs from the Star Wars arcade machine
    std::cout << "Loading Mathbox PROM data from actual ROM files..." << std::endl;

    try {
        // Load PROM data from the actual Star Wars ROM files
        // prom_str = mathbox_prom_0.bin (136021.110) - Strobe bits (IP15-8)
        // prom_mas = mathbox_prom_1.bin (136021.111) - Memory address select (IP6-0)
        // prom_am = mathbox_prom_2.bin (136021.112) - Address mode (IP7)

        std::ifstream prom0_file("../mathbox_prom_0.bin", std::ios::binary);
        std::ifstream prom1_file("../mathbox_prom_1.bin", std::ios::binary);
        std::ifstream prom2_file("../mathbox_prom_2.bin", std::ios::binary);

        if (!prom0_file || !prom1_file || !prom2_file) {
            throw std::runtime_error("Failed to open Mathbox PROM files");
        }

        // Read PROM data (each PROM is 256 bytes)
        prom0_file.read(reinterpret_cast<char*>(prom_str.data()), 256);
        prom1_file.read(reinterpret_cast<char*>(prom_mas.data()), 256);
        prom2_file.read(reinterpret_cast<char*>(prom_am.data()), 256);

        prom0_file.close();
        prom1_file.close();
        prom2_file.close();

        std::cout << "Mathbox PROM data loaded successfully!" << std::endl;
        std::cout << "PROM_STR[0] = 0x" << std::hex << static_cast<int>(prom_str[0]) << std::endl;
        std::cout << "PROM_MAS[0] = 0x" << std::hex << static_cast<int>(prom_mas[0]) << std::endl;
        std::cout << "PROM_AM[0] = 0x" << std::hex << static_cast<int>(prom_am[0]) << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Failed to load Mathbox PROM data: " << e.what() << std::endl;
        std::cerr << "Using fallback placeholder data..." << std::endl;

        // Fallback: use placeholder data if files can't be loaded
        for (int i = 0; i < 1024; i++) {
            prom_str[i] = (i % 256) & 0xFF;
            prom_mas[i] = i & 0x7F;
            prom_am[i] = (i >> 7) & 0x01;
        }
    }
}

// FROM DISASSEMBLY/MAME: Math RAM access methods
uint16_t Mathbox::read_math_ram(uint16_t address) {
    // FROM DISASSEMBLY: Read 16-bit word from Math RAM
    // Math RAM is 1K x 16-bit, but accessed as 2K x 8-bit by main CPU
    if (address < 1024) {
        return math_ram[address];
    }
    return 0;
}

void Mathbox::write_math_ram(uint16_t address, uint16_t data) {
    // FROM DISASSEMBLY: Write 16-bit word to Math RAM
    if (address < 1024) {
        math_ram[address] = data;
    }
}

void Mathbox::perform_division() {
    // Simple restoring division algorithm (from MAME)
    for (int i = 1; i < 16; i++) {
        quotient_shift <<= 1;
        if (((int32_t)dvd_shift + (divisor ^ 0xFFFF) + 1) & 0x10000) {
            quotient_shift |= 1;
            dvd_shift = (dvd_shift + (divisor ^ 0xFFFF) + 1) << 1;
        } else {
            dvd_shift <<= 1;
        }
    }
}

uint16_t Mathbox::read_math_ram(uint16_t address) {
    if (address < math_ram.size()) {
        return math_ram[address];
    }
    return 0;
}

void Mathbox::write_math_ram(uint16_t address, uint16_t data) {
    if (address < math_ram.size()) {
        math_ram[address] = data;
    }
}

uint16_t Mathbox::construct_ram_address(uint8_t am, uint8_t mas) {
    if (am == 0) {
        // Use BIC for addressing
        return (mas & 3) | ((BIC & 0x01FF) << 2);
    } else {
        // Direct addressing
        return mas;
    }
}

// 3D Math operations
Vector3D Mathbox::transform_vector(const Vector3D& v, const Matrix3D& m) {
    return m.transform(v);
}

Matrix3D Mathbox::multiply_matrices(const Matrix3D& a, const Matrix3D& b) {
    Matrix3D result;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result.m[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result.m[i][j] += a.m[i][k] * b.m[k][j];
            }
        }
    }

    return result;
}

float Mathbox::divide(uint16_t dividend, uint16_t divisor) {
    if (divisor == 0) return 0.0f;
    return static_cast<float>(dividend) / static_cast<float>(divisor);
}

Matrix3D Mathbox::rotation_x(float angle) {
    Matrix3D m;
    float c = std::cos(angle);
    float s = std::sin(angle);

    m.m[1][1] = c; m.m[1][2] = -s;
    m.m[2][1] = s; m.m[2][2] = c;

    return m;
}

Matrix3D Mathbox::rotation_y(float angle) {
    Matrix3D m;
    float c = std::cos(angle);
    float s = std::sin(angle);

    m.m[0][0] = c; m.m[0][2] = s;
    m.m[2][0] = -s; m.m[2][2] = c;

    return m;
}

Matrix3D Mathbox::rotation_z(float angle) {
    Matrix3D m;
    float c = std::cos(angle);
    float s = std::sin(angle);

    m.m[0][0] = c; m.m[0][1] = -s;
    m.m[1][0] = s; m.m[1][1] = c;

    return m;
}

Matrix3D Mathbox::identity() {
    Matrix3D m;
    // Already initialized to identity in constructor
    return m;
}

Vector3D Mathbox::add_vectors(const Vector3D& a, const Vector3D& b) {
    return a + b;
}

Vector3D Mathbox::subtract_vectors(const Vector3D& a, const Vector3D& b) {
    return a - b;
}

Vector3D Mathbox::scale_vector(const Vector3D& v, float scale) {
    return v * scale;
}

float Mathbox::dot_product(const Vector3D& a, const Vector3D& b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

Vector3D Mathbox::cross_product(const Vector3D& a, const Vector3D& b) {
    return Vector3D(
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    );
}

} // namespace StarWars
