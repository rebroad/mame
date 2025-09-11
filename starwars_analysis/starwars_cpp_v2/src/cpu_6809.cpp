#include "cpu_6809.h"
#include <iostream>
#include <iomanip>

namespace StarWars {

CPU6809::CPU6809()
    : m_pc(0)
    , m_sp(0x3000)  // Stack at top of RAM
    , m_u(0x3000)
    , m_x(0)
    , m_y(0)
    , m_d(0)
    , m_a(0)
    , m_b(0)
    , m_dp(0)
    , m_cc(0x50)    // Default condition codes
    , m_running(false)
    , m_initialized(false)
{
}

void CPU6809::reset() {
    std::cout << "Resetting 6809 CPU..." << std::endl;
    
    // Reset registers to default values
    m_pc = 0;
    m_sp = 0x3000;  // Stack at top of RAM
    m_u = 0x3000;
    m_x = 0;
    m_y = 0;
    m_d = 0;
    m_a = 0;
    m_b = 0;
    m_dp = 0;
    m_cc = 0x50;    // Default condition codes
    
    m_running = true;
    m_initialized = true;
    
    std::cout << "6809 CPU reset complete" << std::endl;
}

void CPU6809::step() {
    if (!m_running) {
        return;
    }
    
    execute_instruction();
}

void CPU6809::execute_instruction() {
    // Fetch and decode instruction
    uint8_t opcode = fetch_byte();
    
    // Simple instruction decoder for our validated routines
    switch (opcode) {
        case 0x7E: // JMP extended
            {
                uint16_t address = fetch_word();
                execute_jmp(address);
            }
            break;
            
        case 0xEF: // STU indexed
            {
                uint8_t offset = fetch_byte();
                execute_stu_indexed(offset);
            }
            break;
            
        case 0x8E: // LDX immediate
            {
                uint16_t value = fetch_word();
                execute_ldx_immediate(value);
            }
            break;
            
        case 0xCC: // LDD immediate
            {
                uint16_t value = fetch_word();
                execute_ldd_immediate(value);
            }
            break;
            
        case 0x86: // LDA immediate
            {
                uint8_t value = fetch_byte();
                execute_lda_immediate(value);
            }
            break;
            
        case 0x1F: // TFR
            {
                uint8_t regs = fetch_byte();
                if ((regs & 0xF0) == 0x80 && (regs & 0x0F) == 0x0B) {
                    // TFR A,DP
                    execute_tfr_a_dp();
                }
            }
            break;
            
        case 0x04: // LSR direct
            {
                uint8_t address = fetch_byte();
                execute_lsr_direct(address);
            }
            break;
            
        case 0x24: // BCC
            {
                uint8_t offset = fetch_byte();
                execute_bcc(m_pc + static_cast<int8_t>(offset));
            }
            break;
            
        case 0x11: // CMPS immediate
            {
                uint16_t value = fetch_word();
                execute_cmps_immediate(value);
            }
            break;
            
        case 0x27: // BEQ
            {
                uint8_t offset = fetch_byte();
                execute_beq(m_pc + static_cast<int8_t>(offset));
            }
            break;
            
        case 0x39: // RTS
            execute_rts();
            break;
            
        default:
            std::cout << "Unknown opcode: 0x" << std::hex << std::setw(2) << std::setfill('0') 
                      << static_cast<int>(opcode) << " at PC=0x" << std::setw(4) << (m_pc - 1) << std::endl;
            m_running = false;
            break;
    }
}

uint8_t CPU6809::fetch_byte() {
    uint8_t value = read_memory(m_pc);
    m_pc++;
    return value;
}

uint16_t CPU6809::fetch_word() {
    uint8_t low = fetch_byte();
    uint8_t high = fetch_byte();
    return (static_cast<uint16_t>(high) << 8) | low;
}

void CPU6809::execute_jmp(uint16_t address) {
    std::cout << "JMP 0x" << std::hex << std::setw(4) << std::setfill('0') << address << std::endl;
    m_pc = address;
}

void CPU6809::execute_jsr(uint16_t address) {
    std::cout << "JSR 0x" << std::hex << std::setw(4) << std::setfill('0') << address << std::endl;
    push_word(m_pc);
    m_pc = address;
}

void CPU6809::execute_rts() {
    std::cout << "RTS" << std::endl;
    m_pc = pop_word();
}

void CPU6809::execute_ldx_immediate(uint16_t value) {
    std::cout << "LDX #0x" << std::hex << std::setw(4) << std::setfill('0') << value << std::endl;
    m_x = value;
}

void CPU6809::execute_ldd_immediate(uint16_t value) {
    std::cout << "LDD #0x" << std::hex << std::setw(4) << std::setfill('0') << value << std::endl;
    m_d = value;
    m_a = (value >> 8) & 0xFF;
    m_b = value & 0xFF;
}

void CPU6809::execute_lda_immediate(uint8_t value) {
    std::cout << "LDA #0x" << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(value) << std::endl;
    m_a = value;
}

void CPU6809::execute_tfr_a_dp() {
    std::cout << "TFR A,DP" << std::endl;
    m_dp = m_a;
}

void CPU6809::execute_lsr_direct(uint8_t address) {
    std::cout << "LSR <0x" << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(address) << std::endl;
    uint8_t value = get_direct_byte(address);
    bool carry = (value & 0x01) != 0;
    value >>= 1;
    set_direct_byte(address, value);
    set_carry_flag(carry);
    set_zero_flag(value == 0);
}

void CPU6809::execute_bcc(uint16_t address) {
    std::cout << "BCC 0x" << std::hex << std::setw(4) << std::setfill('0') << address << std::endl;
    if (!get_carry_flag()) {
        m_pc = address;
    }
}

void CPU6809::execute_cmps_immediate(uint16_t value) {
    std::cout << "CMPS #0x" << std::hex << std::setw(4) << std::setfill('0') << value << std::endl;
    uint16_t result = m_sp - value;
    set_zero_flag(result == 0);
    set_carry_flag(m_sp < value);
}

void CPU6809::execute_beq(uint16_t address) {
    std::cout << "BEQ 0x" << std::hex << std::setw(4) << std::setfill('0') << address << std::endl;
    if (get_zero_flag()) {
        m_pc = address;
    }
}

void CPU6809::execute_stu_indexed(int8_t offset) {
    std::cout << "STU " << static_cast<int>(offset) << ",U" << std::endl;
    uint16_t address = m_u + offset;
    write_memory16(address, m_u);
}

void CPU6809::push_byte(uint8_t value) {
    m_sp--;
    write_memory(m_sp, value);
}

uint8_t CPU6809::pop_byte() {
    uint8_t value = read_memory(m_sp);
    m_sp++;
    return value;
}

void CPU6809::push_word(uint16_t value) {
    push_byte((value >> 8) & 0xFF);
    push_byte(value & 0xFF);
}

uint16_t CPU6809::pop_word() {
    uint8_t low = pop_byte();
    uint8_t high = pop_byte();
    return (static_cast<uint16_t>(high) << 8) | low;
}

uint16_t CPU6809::get_immediate_word() {
    return fetch_word();
}

uint8_t CPU6809::get_immediate_byte() {
    return fetch_byte();
}

uint8_t CPU6809::get_direct_byte(uint8_t address) {
    uint16_t full_address = (static_cast<uint16_t>(m_dp) << 8) | address;
    return read_memory(full_address);
}

void CPU6809::set_direct_byte(uint8_t address, uint8_t value) {
    uint16_t full_address = (static_cast<uint16_t>(m_dp) << 8) | address;
    write_memory(full_address, value);
}

void CPU6809::set_zero_flag(bool zero) {
    if (zero) {
        m_cc |= 0x04;  // Z flag
    } else {
        m_cc &= ~0x04;
    }
}

void CPU6809::set_carry_flag(bool carry) {
    if (carry) {
        m_cc |= 0x01;  // C flag
    } else {
        m_cc &= ~0x01;
    }
}

bool CPU6809::get_zero_flag() const {
    return (m_cc & 0x04) != 0;
}

bool CPU6809::get_carry_flag() const {
    return (m_cc & 0x01) != 0;
}

void CPU6809::print_state() const {
    std::cout << "CPU State:" << std::endl;
    std::cout << "  PC=0x" << std::hex << std::setw(4) << std::setfill('0') << m_pc << std::endl;
    std::cout << "  SP=0x" << std::hex << std::setw(4) << std::setfill('0') << m_sp << std::endl;
    std::cout << "  DP=0x" << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(m_dp) << std::endl;
    std::cout << "  CC=0x" << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(m_cc) << std::endl;
    std::cout << "  A=0x" << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(m_a) << std::endl;
    std::cout << "  B=0x" << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(m_b) << std::endl;
    std::cout << "  X=0x" << std::hex << std::setw(4) << std::setfill('0') << m_x << std::endl;
    std::cout << "  Y=0x" << std::hex << std::setw(4) << std::setfill('0') << m_y << std::endl;
}

void CPU6809::print_instruction(uint16_t address) const {
    std::cout << "Instruction at 0x" << std::hex << std::setw(4) << std::setfill('0') << address << ": ";
    // TODO: Implement instruction disassembly
}

} // namespace StarWars
