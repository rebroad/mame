#include "cpu_6809.h"
#include "starwars_hardware.h"
#include <iostream>
#include <iomanip>
#include <fstream>

// Routine implementations are compiled separately

namespace StarWars {

CPU6809::CPU6809(StarWarsHardware* hardware)
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
    , m_inv(0)      // Invalid register
    , m_running(false)
    , m_initialized(false)
    , m_execution_mode(INSTRUCTION_MODE)
    , m_routine_start_pc(0)
    , m_hardware(hardware)
{
}

CPU6809::~CPU6809() {
    // Write unknown addresses before cleanup
    write_unknown_addresses_to_file();
}

uint8_t CPU6809::read_memory(uint16_t address) {
    uint8_t value = m_hardware->read_memory(address);
    std::cout << "CPU6809::read_memory(" << std::hex << address << ") = 0x" << (int)value << std::endl;
    return value;
}

void CPU6809::write_memory(uint16_t address, uint8_t value) {
    m_hardware->write_memory(address, value);
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

    uint16_t old_pc = m_pc;
    std::cout << "CPU6809::step() - PC=0x" << std::hex << m_pc << std::endl;

    // Validate PC before executing
    validate_pc();

    // Check execution mode
    if (m_execution_mode == ROUTINE_MODE) {
        // We're in routine mode - check for termination
        check_routine_termination();
        
        if (m_execution_mode == ROUTINE_MODE) {
            // Still in routine mode - execute instruction by instruction within the routine
            std::cout << "  -> Executing within routine at 0x" << std::hex << m_pc << std::endl;
            execute_instruction();
            return;
        }
        // Fall through to check for new routine entry point
    }

    // Check if we're at a known routine entry point
    if (execute_at_address(m_pc)) {
        std::cout << "  -> Routine executed, PC changed from 0x" << std::hex << old_pc << " to 0x" << m_pc << std::endl;
        return; // Routine was executed successfully
    }

    // Track unknown address and fall back to normal instruction execution
    std::cout << "  -> Falling back to instruction execution at 0x" << std::hex << m_pc << std::endl;
    track_unknown_address(m_pc);
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
            std::cout << "CPU simulation stopped due to unknown instruction." << std::endl;
            m_running = false;
            write_unknown_addresses_to_file();
            break;
    }
}

uint8_t CPU6809::fetch_byte() {
    uint8_t value = read_memory(m_pc);
    std::cout << "Fetch byte at PC=0x" << std::hex << std::setw(4) << std::setfill('0')
              << m_pc << " = 0x" << std::setw(2) << static_cast<int>(value) << std::endl;
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

void CPU6809::track_unknown_address(uint16_t address) {
    if (m_unknown_addresses.find(address) == m_unknown_addresses.end()) {
        m_unknown_addresses.insert(address);
        std::cout << "Unknown routine at address 0x" << std::hex << address
                  << " - needs disassembly! (Total unknown: " << m_unknown_addresses.size() << ")" << std::endl;
    }
}

void CPU6809::write_unknown_addresses_to_file() {
    if (m_unknown_addresses.empty()) {
        return;
    }

    std::ofstream file("/home/rebroad/src/mame/starwars_analysis/unknown_addresses.txt");
    if (file.is_open()) {
        file << "# Unknown addresses discovered during execution\n";
        file << "# These should be added to entry_points.txt for disassembly\n\n";

        for (uint16_t addr : m_unknown_addresses) {
            file << "0x" << std::hex << std::uppercase << addr << "\n";
        }

        file.close();
        std::cout << "Wrote " << m_unknown_addresses.size()
                  << " unknown addresses to unknown_addresses.txt" << std::endl;
    } else {
        std::cerr << "Failed to write unknown_addresses.txt" << std::endl;
    }
}

bool CPU6809::is_potentially_valid_code_address(uint16_t address) {
    // This function checks if an address might contain executable code vs data
    // It's used for debugging to detect when PC points to obvious data
    
    // RAM addresses (0x0000-0x2FFF) are typically data, not code
    if (address < 0x3000) {
        return false;
    }
    
    // I/O port addresses (0x4300-0x47FF) are definitely not code
    if (address >= 0x4300 && address < 0x4800) {
        return false;
    }
    
    // For ROM addresses, check if it looks like obvious data vs potentially code
    if (address >= 0x6000) {
        uint8_t byte = read_memory(address);
        
        // Specific check for 0xF36E case: LDA $4320 (data pattern)
        if (address == 0xF36E && byte == 0xB6) {
            uint8_t next_byte = read_memory(address + 1);
            if (next_byte == 0x43) {  // LDA $43xx - looks like data
                return false;
            }
        }
        
        // If we get here, assume it's potentially valid code
        return true;
    }
    
    return false;
}

void CPU6809::validate_pc() {
    // Check for known problematic addresses
    if (m_pc == 0xF36E) {
        std::cout << "⚠️  WARNING: PC=0x" << std::hex << m_pc 
                  << " - This is a DATA address, not code!" << std::endl;
        
        uint8_t byte = read_memory(m_pc);
        uint8_t next_byte = read_memory(m_pc + 1);
        std::cout << "    Bytes at PC: 0x" << std::hex << (int)byte << " 0x" << (int)next_byte << std::endl;
        std::cout << "    This is LDA $43xx - data pattern!" << std::endl;
        std::cout << "    PC corruption detected - check routine execution!" << std::endl;
    }
    
    // Check if PC is in obviously invalid regions
    if (!is_potentially_valid_code_address(m_pc)) {
        std::cout << "⚠️  WARNING: PC=0x" << std::hex << m_pc 
                  << " - PC is in invalid code region!" << std::endl;
    }
}

void CPU6809::compare_a(uint8_t value) {
    // CMPA instruction - compare accumulator A with value
    uint8_t result = m_a - value;
    // Update condition codes based on result
    m_cc &= ~0x0F; // Clear N, Z, V, C flags
    if (result == 0) m_cc |= 0x04; // Set Z flag
    if (result & 0x80) m_cc |= 0x08; // Set N flag
    if (m_a < value) m_cc |= 0x01; // Set C flag (borrow)
    // V flag for overflow (simplified)
    if (((m_a ^ value) & (m_a ^ result)) & 0x80) m_cc |= 0x02;
}

void CPU6809::compare_b(uint8_t value) {
    // CMPB instruction - compare accumulator B with value
    uint8_t result = m_b - value;
    // Update condition codes based on result
    m_cc &= ~0x0F; // Clear N, Z, V, C flags
    if (result == 0) m_cc |= 0x04; // Set Z flag
    if (result & 0x80) m_cc |= 0x08; // Set N flag
    if (m_b < value) m_cc |= 0x01; // Set C flag (borrow)
    // V flag for overflow (simplified)
    if (((m_b ^ value) & (m_b ^ result)) & 0x80) m_cc |= 0x02;
}

void CPU6809::compare_x(uint16_t value) {
    // CMPX instruction - compare index register X with value
    uint16_t result = m_x - value;
    // Update condition codes based on result
    m_cc &= ~0x0F; // Clear N, Z, V, C flags
    if (result == 0) m_cc |= 0x04; // Set Z flag
    if (result & 0x8000) m_cc |= 0x08; // Set N flag
    if (m_x < value) m_cc |= 0x01; // Set C flag (borrow)
    // V flag for overflow (simplified)
    if (((m_x ^ value) & (m_x ^ result)) & 0x8000) m_cc |= 0x02;
}

void CPU6809::call_function(uint16_t address) {
    // JSR instruction - jump to subroutine
    // Push return address onto stack
    m_sp -= 2;
    m_hardware->write_memory(m_sp, m_pc >> 8);
    m_hardware->write_memory(m_sp + 1, m_pc & 0xFF);
    // Jump to address
    m_pc = address;
}

void CPU6809::set_routine_mode(uint16_t start_pc) {
    m_execution_mode = ROUTINE_MODE;
    m_routine_start_pc = start_pc;
    std::cout << "CPU6809::set_routine_mode(0x" << std::hex << start_pc << ")" << std::endl;
}

void CPU6809::set_instruction_mode() {
    m_execution_mode = INSTRUCTION_MODE;
    m_routine_start_pc = 0;
    std::cout << "CPU6809::set_instruction_mode()" << std::endl;
}

void CPU6809::check_routine_termination() {
    // Check if we've hit a termination condition
    // For now, we'll use a simple approach: check if PC is outside the routine
    // In a more sophisticated implementation, we'd detect RTS, JMP, etc.
    
    // If PC has changed significantly from the routine start, we might have hit a jump/branch
    // For now, let's assume routines are relatively short and check if we've moved too far
    uint16_t pc_delta = (m_pc > m_routine_start_pc) ? 
                       (m_pc - m_routine_start_pc) : 
                       (m_routine_start_pc - m_pc);
    
    // If we've moved more than 512 bytes from the start, assume we've hit a jump/branch
    if (pc_delta > 512) {
        std::cout << "CPU6809::check_routine_termination() - PC moved too far from routine start" << std::endl;
        set_instruction_mode();
    }
}

} // namespace StarWars
