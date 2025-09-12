#include "cpu_6809.h"
#include <functional>
#include <map>

namespace StarWars {

// Wrapper class to adapt generated routines to existing CPU6809 class
class StarWarsCPU {
public:
    // CPU state (adapted from existing CPU6809 members)
    struct State {
        uint8_t& a;
        uint8_t& b;
        uint16_t& d;
        uint16_t& x;
        uint16_t& y;
        uint16_t& u;
        uint16_t& sp;
        uint8_t& cc;
        uint16_t& pc;
        
        State(CPU6809& cpu) 
            : a(cpu.m_a), b(cpu.m_b), d(cpu.m_d), x(cpu.m_x), y(cpu.m_y),
              u(cpu.m_u), sp(cpu.m_sp), cc(cpu.m_cc), pc(cpu.m_pc) {}
    };
    
    State state_;
    CPU6809& cpu_;
    
    StarWarsCPU(CPU6809& cpu) : state_(cpu), cpu_(cpu) {}
    
    // Memory access methods
    void write_memory(uint16_t address, uint8_t value) {
        cpu_.write_memory(address, value);
    }
    
    uint8_t read_memory(uint16_t address) {
        return cpu_.read_memory(address);
    }
    
    void write_memory16(uint16_t address, uint16_t value) {
        cpu_.write_memory16(address, value);
    }
    
    uint16_t read_memory16(uint16_t address) {
        return cpu_.read_memory16(address);
    }
    
    // Condition code helpers
    bool zero_flag() const { return cpu_.get_zero_flag(); }
    bool carry_flag() const { return cpu_.get_carry_flag(); }
    bool negative_flag() const { return (state_.cc & 0x08) != 0; }
    
    // Function call handling
    void call_function(uint16_t address) {
        // Push return address and jump
        cpu_.push_word(state_.pc);
        state_.pc = address;
    }
    
    void return_from_function() {
        // Pop return address
        state_.pc = cpu_.pop_word();
    }
    
    // Comparison helpers
    void compare_a(uint8_t value) {
        uint8_t result = state_.a - value;
        cpu_.set_zero_flag(result == 0);
        cpu_.set_carry_flag(state_.a < value);
    }
    
    void compare_b(uint8_t value) {
        uint8_t result = state_.b - value;
        cpu_.set_zero_flag(result == 0);
        cpu_.set_carry_flag(state_.b < value);
    }
    
    void compare_x(uint16_t value) {
        uint16_t result = state_.x - value;
        cpu_.set_zero_flag(result == 0);
        cpu_.set_carry_flag(state_.x < value);
    }
};

// Forward declarations of generated routines
void routine_e790_impl(StarWarsCPU& cpu);
void routine_e7c7_impl(StarWarsCPU& cpu);
void routine_f261_impl(StarWarsCPU& cpu);
void routine_f36f_impl(StarWarsCPU& cpu);
void routine_f70d_impl(StarWarsCPU& cpu);
void routine_f714_impl(StarWarsCPU& cpu);
void routine_f720_impl(StarWarsCPU& cpu);
void routine_f86c_impl(StarWarsCPU& cpu);
void routine_fb38_impl(StarWarsCPU& cpu);
void routine_fb74_impl(StarWarsCPU& cpu);
void routine_fd07_impl(StarWarsCPU& cpu);
void routine_feff_impl(StarWarsCPU& cpu);
void routine_ff24_impl(StarWarsCPU& cpu);

// Address to function mapping
static const std::map<uint16_t, std::function<void(StarWarsCPU&)>> routine_map = {
    {0xE790, routine_e790_impl},
    {0xE7C7, routine_e7c7_impl},
    {0xF261, routine_f261_impl},
    {0xF36F, routine_f36f_impl},
    {0xF70D, routine_f70d_impl},
    {0xF714, routine_f714_impl},
    {0xF720, routine_f720_impl},
    {0xF86C, routine_f86c_impl},
    {0xFB38, routine_fb38_impl},
    {0xFB74, routine_fb74_impl},
    {0xFD07, routine_fd07_impl},
    {0xFEFF, routine_feff_impl},
    {0xFF24, routine_ff24_impl},
};

// CPU6809 method implementations
void CPU6809::execute_at_address(uint16_t address) {
    auto it = routine_map.find(address);
    if (it != routine_map.end()) {
        // Use native C++ implementation
        StarWarsCPU wrapper(*this);
        it->second(wrapper);
    } else {
        // Fall back to 6809 emulation
        m_pc = address;
        execute_instruction();
    }
}

// Wrapper methods for each routine
void CPU6809::routine_e790() {
    StarWarsCPU wrapper(*this);
    routine_e790_impl(wrapper);
}

void CPU6809::routine_e7c7() {
    StarWarsCPU wrapper(*this);
    routine_e7c7_impl(wrapper);
}

void CPU6809::routine_f261() {
    StarWarsCPU wrapper(*this);
    routine_f261_impl(wrapper);
}

void CPU6809::routine_f36f() {
    StarWarsCPU wrapper(*this);
    routine_f36f_impl(wrapper);
}

void CPU6809::routine_f70d() {
    StarWarsCPU wrapper(*this);
    routine_f70d_impl(wrapper);
}

void CPU6809::routine_f714() {
    StarWarsCPU wrapper(*this);
    routine_f714_impl(wrapper);
}

void CPU6809::routine_f720() {
    StarWarsCPU wrapper(*this);
    routine_f720_impl(wrapper);
}

void CPU6809::routine_f86c() {
    StarWarsCPU wrapper(*this);
    routine_f86c_impl(wrapper);
}

void CPU6809::routine_fb38() {
    StarWarsCPU wrapper(*this);
    routine_fb38_impl(wrapper);
}

void CPU6809::routine_fb74() {
    StarWarsCPU wrapper(*this);
    routine_fb74_impl(wrapper);
}

void CPU6809::routine_fd07() {
    StarWarsCPU wrapper(*this);
    routine_fd07_impl(wrapper);
}

void CPU6809::routine_feff() {
    StarWarsCPU wrapper(*this);
    routine_feff_impl(wrapper);
}

void CPU6809::routine_ff24() {
    StarWarsCPU wrapper(*this);
    routine_ff24_impl(wrapper);
}

} // namespace StarWars
