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
                uint8_t postbyte = fetch_byte();
                execute_tfr(postbyte);
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

        case 0x54: // LSRB
            execute_lsrb();
            break;

        case 0xA6: // LDA indexed
            {
                uint8_t postbyte = fetch_byte();
                execute_lda_indexed(postbyte);
            }
            break;

        case 0xA7: // STA indexed
            {
                uint8_t postbyte = fetch_byte();
                execute_sta_indexed(postbyte);
            }
            break;

        case 0xed: // STD indexed
            {
                uint8_t postbyte = fetch_byte();
                execute_std_indexed(postbyte);
            }
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

void CPU6809::execute_std_indexed(uint8_t postbyte) {
    std::cout << "STD indexed (postbyte=0x" << std::hex << std::setw(2) << std::setfill('0')
              << static_cast<int>(postbyte) << ")" << std::endl;

    // Decode indexed addressing mode from postbyte
    uint8_t mode = (postbyte >> 5) & 0x07;  // Bits 5-7: addressing mode
    uint8_t reg = postbyte & 0x1F;          // Bits 0-4: register and additional info

    uint16_t address = 0;

    switch (mode) {
        case 0x00: // ,R (no offset)
            switch (reg & 0x1F) {
                case 0x00: address = m_x; break;
                case 0x01: address = m_y; break;
                case 0x02: address = m_u; break;
                case 0x03: address = m_sp; break;
                default:
                    std::cout << "  -> Unsupported register in STD indexed mode" << std::endl;
                    return;
            }
            break;

        case 0x01: // ,R+ (post-increment)
            switch (reg & 0x1F) {
                case 0x00: address = m_x; m_x++; break;
                case 0x01: address = m_y; m_y++; break;
                case 0x02: address = m_u; m_u++; break;
                case 0x03: address = m_sp; m_sp++; break;
                default:
                    std::cout << "  -> Unsupported register in STD indexed mode" << std::endl;
                    return;
            }
            break;

        case 0x02: // ,R++ (post-increment by 2)
            switch (reg & 0x1F) {
                case 0x00: address = m_x; m_x += 2; break;
                case 0x01: address = m_y; m_y += 2; break;
                case 0x02: address = m_u; m_u += 2; break;
                case 0x03: address = m_sp; m_sp += 2; break;
                default:
                    std::cout << "  -> Unsupported register in STD indexed mode" << std::endl;
                    return;
            }
            break;

        case 0x03: // ,-R (pre-decrement)
            switch (reg & 0x1F) {
                case 0x00: m_x--; address = m_x; break;
                case 0x01: m_y--; address = m_y; break;
                case 0x02: m_u--; address = m_u; break;
                case 0x03: m_sp--; address = m_sp; break;
                default:
                    std::cout << "  -> Unsupported register in STD indexed mode" << std::endl;
                    return;
            }
            break;

        case 0x04: // ,--R (pre-decrement by 2)
            switch (reg & 0x1F) {
                case 0x00: m_x -= 2; address = m_x; break;
                case 0x01: m_y -= 2; address = m_y; break;
                case 0x02: m_u -= 2; address = m_u; break;
                case 0x03: m_sp -= 2; address = m_sp; break;
                default:
                    std::cout << "  -> Unsupported register in STD indexed mode" << std::endl;
                    return;
            }
            break;

        case 0x05: // ,R (5-bit offset)
            {
                int8_t offset = static_cast<int8_t>(reg);
                switch ((postbyte >> 5) & 0x03) {
                    case 0x00: address = m_x + offset; break;
                    case 0x01: address = m_y + offset; break;
                    case 0x02: address = m_u + offset; break;
                    case 0x03: address = m_sp + offset; break;
                }
            }
            break;

        case 0x06: // ,R (8-bit offset)
            {
                int8_t offset = fetch_byte();
                switch (reg & 0x1F) {
                    case 0x00: address = m_x + offset; break;
                    case 0x01: address = m_y + offset; break;
                    case 0x02: address = m_u + offset; break;
                    case 0x03: address = m_sp + offset; break;
                    default:
                        std::cout << "  -> Unsupported register in STD indexed mode" << std::endl;
                        return;
                }
            }
            break;

        case 0x07: // ,R (16-bit offset)
            {
                uint16_t offset = fetch_word();
                switch (reg & 0x1F) {
                    case 0x00: address = m_x + offset; break;
                    case 0x01: address = m_y + offset; break;
                    case 0x02: address = m_u + offset; break;
                    case 0x03: address = m_sp + offset; break;
                    default:
                        std::cout << "  -> Unsupported register in STD indexed mode" << std::endl;
                        return;
                }
            }
            break;

        default:
            std::cout << "  -> Unsupported STD indexed addressing mode" << std::endl;
            return;
    }

    // Store the D register (A:B) at the calculated address
    write_memory16(address, m_d);
}

void CPU6809::execute_tfr(uint8_t postbyte) {
    uint8_t src_reg = (postbyte >> 4) & 0x0F;  // Source register (upper 4 bits)
    uint8_t dst_reg = postbyte & 0x0F;         // Destination register (lower 4 bits)

    std::cout << "TFR ";

    // Decode and execute the transfer based on register codes
    uint16_t src_value = 0;
    bool is_16bit = false;

    // Read source register value
    switch (src_reg) {
        case 0x00: src_value = m_d; is_16bit = true; std::cout << "D,"; break;
        case 0x01: src_value = m_x; is_16bit = true; std::cout << "X,"; break;
        case 0x02: src_value = m_y; is_16bit = true; std::cout << "Y,"; break;
        case 0x03: src_value = m_u; is_16bit = true; std::cout << "U,"; break;
        case 0x04: src_value = m_sp; is_16bit = true; std::cout << "S,"; break;
        case 0x05: src_value = m_pc; is_16bit = true; std::cout << "PC,"; break;
        case 0x08: src_value = m_a; is_16bit = false; std::cout << "A,"; break;
        case 0x09: src_value = m_b; is_16bit = false; std::cout << "B,"; break;
        case 0x0A: src_value = m_cc; is_16bit = false; std::cout << "CC,"; break;
        case 0x0B: src_value = m_dp; is_16bit = false; std::cout << "DP,"; break;
        default:
            std::cout << "??,";
            std::cout << " -> Unsupported source register in TFR" << std::endl;
            return;
    }

    // Write to destination register
    switch (dst_reg) {
        case 0x00:
            m_d = src_value;
            m_a = (m_d >> 8) & 0xFF;
            m_b = m_d & 0xFF;
            std::cout << "D";
            break;
        case 0x01: m_x = src_value; std::cout << "X"; break;
        case 0x02: m_y = src_value; std::cout << "Y"; break;
        case 0x03: m_u = src_value; std::cout << "U"; break;
        case 0x04: m_sp = src_value; std::cout << "S"; break;
        case 0x05: m_pc = src_value; std::cout << "PC"; break;
        case 0x08:
            if (is_16bit) {
                m_a = src_value & 0xFF;  // Only transfer low byte for 16->8 bit transfer
            } else {
                m_a = src_value;
            }
            std::cout << "A";
            break;
        case 0x09:
            if (is_16bit) {
                m_b = src_value & 0xFF;  // Only transfer low byte for 16->8 bit transfer
            } else {
                m_b = src_value;
            }
            std::cout << "B";
            break;
        case 0x0A:
            if (is_16bit) {
                m_cc = src_value & 0xFF;  // Only transfer low byte for 16->8 bit transfer
            } else {
                m_cc = src_value;
            }
            std::cout << "CC";
            break;
        case 0x0B:
            if (is_16bit) {
                m_dp = src_value & 0xFF;  // Only transfer low byte for 16->8 bit transfer
            } else {
                m_dp = src_value;
            }
            std::cout << "DP";
            break;
        default:
            std::cout << "??";
            std::cout << " -> Unsupported destination register in TFR" << std::endl;
            return;
    }

    std::cout << std::endl;
}

void CPU6809::execute_lda_indexed(uint8_t postbyte) {
    uint16_t address = 0;

    // Decode indexed addressing mode from postbyte
    switch (postbyte & 0xE0) {
        case 0x00: // No offset
            if ((postbyte & 0x1F) == 0x04) { // ,X
                address = m_x;
                std::cout << "LDA ,X" << std::endl;
            } else if ((postbyte & 0x1F) == 0x05) { // ,Y
                address = m_y;
                std::cout << "LDA ,Y" << std::endl;
            } else if ((postbyte & 0x1F) == 0x06) { // ,U
                address = m_u;
                std::cout << "LDA ,U" << std::endl;
            } else if ((postbyte & 0x1F) == 0x07) { // ,S
                address = m_sp;
                std::cout << "LDA ,S" << std::endl;
            } else {
                std::cout << "LDA (unsupported indexed mode)" << std::endl;
                return;
            }
            break;

        case 0x20: // 5-bit offset
            {
                int8_t offset = postbyte & 0x1F;
                if (offset > 15) offset -= 32; // Convert to signed

                if ((postbyte & 0x1F) == 0x04) { // 5-bit offset,X
                    address = m_x + offset;
                    std::cout << "LDA " << (offset < 0 ? "-" : "") << "$" << std::hex << (offset < 0 ? -offset : offset) << ",X" << std::endl;
                } else {
                    std::cout << "LDA (unsupported 5-bit indexed mode)" << std::endl;
                    return;
                }
            }
            break;

        case 0x40: // 8-bit offset
            {
                int8_t offset = fetch_byte();
                if ((postbyte & 0x1F) == 0x04) { // 8-bit offset,X
                    address = m_x + offset;
                    std::cout << "LDA $" << std::hex << (int)(uint8_t)offset << ",X" << std::endl;
                } else {
                    std::cout << "LDA (unsupported 8-bit indexed mode)" << std::endl;
                    return;
                }
            }
            break;

        case 0x60: // 16-bit offset
            {
                int16_t offset = fetch_word();
                if ((postbyte & 0x1F) == 0x04) { // 16-bit offset,X
                    address = m_x + offset;
                    std::cout << "LDA $" << std::hex << offset << ",X" << std::endl;
                } else {
                    std::cout << "LDA (unsupported 16-bit indexed mode)" << std::endl;
                    return;
                }
            }
            break;

        case 0x80: // Post-increment
            if ((postbyte & 0x1F) == 0x04) { // ,X+
                address = m_x++;
                std::cout << "LDA ,X+" << std::endl;
            } else if ((postbyte & 0x1F) == 0x05) { // ,Y+
                address = m_y++;
                std::cout << "LDA ,Y+" << std::endl;
            } else if ((postbyte & 0x1F) == 0x06) { // ,U+
                address = m_u++;
                std::cout << "LDA ,U+" << std::endl;
            } else if ((postbyte & 0x1F) == 0x07) { // ,S+
                address = m_sp++;
                std::cout << "LDA ,S+" << std::endl;
            } else {
                std::cout << "LDA (unsupported post-increment mode)" << std::endl;
                return;
            }
            break;

        case 0xA0: // Pre-decrement
            if ((postbyte & 0x1F) == 0x04) { // ,-X
                address = --m_x;
                std::cout << "LDA ,-X" << std::endl;
            } else if ((postbyte & 0x1F) == 0x05) { // ,-Y
                address = --m_y;
                std::cout << "LDA ,-Y" << std::endl;
            } else if ((postbyte & 0x1F) == 0x06) { // ,-U
                address = --m_u;
                std::cout << "LDA ,-U" << std::endl;
            } else if ((postbyte & 0x1F) == 0x07) { // ,-S
                address = --m_sp;
                std::cout << "LDA ,-S" << std::endl;
            } else {
                std::cout << "LDA (unsupported pre-decrement mode)" << std::endl;
                return;
            }
            break;

        default:
            std::cout << "LDA (unsupported indexed addressing mode)" << std::endl;
            return;
    }

    // Load the A register from the calculated address
    m_a = read_memory(address);
}

void CPU6809::execute_sta_indexed(uint8_t postbyte) {
    uint16_t address = 0;

    // Decode indexed addressing mode from postbyte (same logic as LDA)
    switch (postbyte & 0xE0) {
        case 0x00: // No offset
            if ((postbyte & 0x1F) == 0x04) { // ,X
                address = m_x;
                std::cout << "STA ,X" << std::endl;
            } else if ((postbyte & 0x1F) == 0x05) { // ,Y
                address = m_y;
                std::cout << "STA ,Y" << std::endl;
            } else if ((postbyte & 0x1F) == 0x06) { // ,U
                address = m_u;
                std::cout << "STA ,U" << std::endl;
            } else if ((postbyte & 0x1F) == 0x07) { // ,S
                address = m_sp;
                std::cout << "STA ,S" << std::endl;
            } else {
                std::cout << "STA (unsupported indexed mode)" << std::endl;
                return;
            }
            break;

        case 0x20: // 5-bit offset
            {
                int8_t offset = postbyte & 0x1F;
                if (offset > 15) offset -= 32; // Convert to signed

                if ((postbyte & 0x1F) == 0x04) { // 5-bit offset,X
                    address = m_x + offset;
                    std::cout << "STA " << (offset < 0 ? "-" : "") << "$" << std::hex << (offset < 0 ? -offset : offset) << ",X" << std::endl;
                } else {
                    std::cout << "STA (unsupported 5-bit indexed mode)" << std::endl;
                    return;
                }
            }
            break;

        case 0x40: // 8-bit offset
            {
                int8_t offset = fetch_byte();
                if ((postbyte & 0x1F) == 0x04) { // 8-bit offset,X
                    address = m_x + offset;
                    std::cout << "STA $" << std::hex << (int)(uint8_t)offset << ",X" << std::endl;
                } else {
                    std::cout << "STA (unsupported 8-bit indexed mode)" << std::endl;
                    return;
                }
            }
            break;

        case 0x60: // 16-bit offset
            {
                int16_t offset = fetch_word();
                if ((postbyte & 0x1F) == 0x04) { // 16-bit offset,X
                    address = m_x + offset;
                    std::cout << "STA $" << std::hex << offset << ",X" << std::endl;
                } else {
                    std::cout << "STA (unsupported 16-bit indexed mode)" << std::endl;
                    return;
                }
            }
            break;

        case 0x80: // Post-increment
            if ((postbyte & 0x1F) == 0x04) { // ,X+
                address = m_x++;
                std::cout << "STA ,X+" << std::endl;
            } else if ((postbyte & 0x1F) == 0x05) { // ,Y+
                address = m_y++;
                std::cout << "STA ,Y+" << std::endl;
            } else if ((postbyte & 0x1F) == 0x06) { // ,U+
                address = m_u++;
                std::cout << "STA ,U+" << std::endl;
            } else if ((postbyte & 0x1F) == 0x07) { // ,S+
                address = m_sp++;
                std::cout << "STA ,S+" << std::endl;
            } else {
                std::cout << "STA (unsupported post-increment mode)" << std::endl;
                return;
            }
            break;

        case 0xA0: // Pre-decrement
            if ((postbyte & 0x1F) == 0x04) { // ,-X
                address = --m_x;
                std::cout << "STA ,-X" << std::endl;
            } else if ((postbyte & 0x1F) == 0x05) { // ,-Y
                address = --m_y;
                std::cout << "STA ,-Y" << std::endl;
            } else if ((postbyte & 0x1F) == 0x06) { // ,-U
                address = --m_u;
                std::cout << "STA ,-U" << std::endl;
            } else if ((postbyte & 0x1F) == 0x07) { // ,-S
                address = --m_sp;
                std::cout << "STA ,-S" << std::endl;
            } else {
                std::cout << "STA (unsupported pre-decrement mode)" << std::endl;
                return;
            }
            break;

        default:
            std::cout << "STA (unsupported indexed addressing mode)" << std::endl;
            return;
    }

    // Store the A register to the calculated address
    write_memory(address, m_a);
}

void CPU6809::execute_lsrb() {
    std::cout << "LSRB" << std::endl;
    bool carry = (m_b & 0x01) != 0;
    m_b >>= 1;
    set_carry_flag(carry);
    set_zero_flag(m_b == 0);
    set_negative_flag(false); // LSR always clears N flag
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

void CPU6809::set_negative_flag(bool negative) {
    if (negative) {
        m_cc |= 0x08;   // Set N flag
    } else {
        m_cc &= ~0x08;  // Clear N flag
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

void CPU6809::test_a() {
    // TSTA - Test A register and set condition codes without modifying A
    // Set zero flag if A is zero
    set_zero_flag(m_a == 0);

    // Set negative flag if bit 7 of A is set
    set_negative_flag((m_a & 0x80) != 0);

    // Clear carry flag (TSTA doesn't affect carry)
    set_carry_flag(false);
}

void CPU6809::test_b() {
    // TSTB - Test B register and set condition codes without modifying B
    // Set zero flag if B is zero
    set_zero_flag(m_b == 0);

    // Set negative flag if bit 7 of B is set
    set_negative_flag((m_b & 0x80) != 0);

    // Clear carry flag (TSTB doesn't affect carry)
    set_carry_flag(false);
}

void CPU6809::add_a(uint8_t value) {
    // ADDA - Add value to A register
    uint16_t result = m_a + value;
    m_a = static_cast<uint8_t>(result);

    // Set condition codes
    set_zero_flag(m_a == 0);
    set_negative_flag((m_a & 0x80) != 0);
    set_carry_flag(result > 0xFF);
    // V flag for overflow (simplified)
    if (((m_a ^ value) & (m_a ^ result)) & 0x80) {
        m_cc |= 0x02; // Set V flag
    } else {
        m_cc &= ~0x02; // Clear V flag
    }
}

void CPU6809::add_b(uint8_t value) {
    // ADDB - Add value to B register
    uint16_t result = m_b + value;
    m_b = static_cast<uint8_t>(result);

    // Set condition codes
    set_zero_flag(m_b == 0);
    set_negative_flag((m_b & 0x80) != 0);
    set_carry_flag(result > 0xFF);
    // V flag for overflow (simplified)
    if (((m_b ^ value) & (m_b ^ result)) & 0x80) {
        m_cc |= 0x02; // Set V flag
    } else {
        m_cc &= ~0x02; // Clear V flag
    }
}

void CPU6809::add_a_with_carry(uint8_t value) {
    // ADCA - Add value to A register with carry
    uint16_t carry = (m_cc & 0x01) ? 1 : 0; // Get carry flag
    uint16_t result = m_a + value + carry;
    m_a = static_cast<uint8_t>(result);

    // Set condition codes
    set_zero_flag(m_a == 0);
    set_negative_flag((m_a & 0x80) != 0);
    set_carry_flag(result > 0xFF);
    // V flag for overflow (simplified)
    if (((m_a ^ value) & (m_a ^ result)) & 0x80) {
        m_cc |= 0x02; // Set V flag
    } else {
        m_cc &= ~0x02; // Clear V flag
    }
}

void CPU6809::add_b_with_carry(uint8_t value) {
    // ADCB - Add value to B register with carry
    uint16_t carry = (m_cc & 0x01) ? 1 : 0; // Get carry flag
    uint16_t result = m_b + value + carry;
    m_b = static_cast<uint8_t>(result);

    // Set condition codes
    set_zero_flag(m_b == 0);
    set_negative_flag((m_b & 0x80) != 0);
    set_carry_flag(result > 0xFF);
    // V flag for overflow (simplified)
    if (((m_b ^ value) & (m_b ^ result)) & 0x80) {
        m_cc |= 0x02; // Set V flag
    } else {
        m_cc &= ~0x02; // Clear V flag
    }
}

void CPU6809::sub_a(uint8_t value) {
    // SUBA - Subtract value from A register
    uint16_t result = m_a - value;
    m_a = static_cast<uint8_t>(result);

    // Set condition codes
    set_zero_flag(m_a == 0);
    set_negative_flag((m_a & 0x80) != 0);
    set_carry_flag(m_a < value); // Borrow occurred
    // V flag for overflow (simplified)
    if (((m_a ^ value) & (m_a ^ result)) & 0x80) {
        m_cc |= 0x02; // Set V flag
    } else {
        m_cc &= ~0x02; // Clear V flag
    }
}

void CPU6809::sub_b(uint8_t value) {
    // SUBB - Subtract value from B register
    uint16_t result = m_b - value;
    m_b = static_cast<uint8_t>(result);

    // Set condition codes
    set_zero_flag(m_b == 0);
    set_negative_flag((m_b & 0x80) != 0);
    set_carry_flag(m_b < value); // Borrow occurred
    // V flag for overflow (simplified)
    if (((m_b ^ value) & (m_b ^ result)) & 0x80) {
        m_cc |= 0x02; // Set V flag
    } else {
        m_cc &= ~0x02; // Clear V flag
    }
}

void CPU6809::sub_a_with_carry(uint8_t value) {
    // SBCA - Subtract value from A register with carry
    uint16_t carry = (m_cc & 0x01) ? 1 : 0; // Get carry flag
    uint16_t result = m_a - value - carry;
    m_a = static_cast<uint8_t>(result);

    // Set condition codes
    set_zero_flag(m_a == 0);
    set_negative_flag((m_a & 0x80) != 0);
    set_carry_flag(m_a < (value + carry)); // Borrow occurred
    // V flag for overflow (simplified)
    if (((m_a ^ value) & (m_a ^ result)) & 0x80) {
        m_cc |= 0x02; // Set V flag
    } else {
        m_cc &= ~0x02; // Clear V flag
    }
}

void CPU6809::sub_b_with_carry(uint8_t value) {
    // SBCB - Subtract value from B register with carry
    uint16_t carry = (m_cc & 0x01) ? 1 : 0; // Get carry flag
    uint16_t result = m_b - value - carry;
    m_b = static_cast<uint8_t>(result);

    // Set condition codes
    set_zero_flag(m_b == 0);
    set_negative_flag((m_b & 0x80) != 0);
    set_carry_flag(m_b < (value + carry)); // Borrow occurred
    // V flag for overflow (simplified)
    if (((m_b ^ value) & (m_b ^ result)) & 0x80) {
        m_cc |= 0x02; // Set V flag
    } else {
        m_cc &= ~0x02; // Clear V flag
    }
}

void CPU6809::increment_memory(uint16_t address) {
    // INC - Increment memory location
    uint8_t value = read_memory(address);
    value++;
    write_memory(address, value);

    // Set condition codes
    set_zero_flag(value == 0);
    set_negative_flag((value & 0x80) != 0);
    // V flag for overflow (simplified)
    if (value == 0x80) { // Overflow from 0x7F to 0x80
        m_cc |= 0x02; // Set V flag
    } else {
        m_cc &= ~0x02; // Clear V flag
    }
}

void CPU6809::decrement_memory(uint16_t address) {
    // DEC - Decrement memory location
    uint8_t value = read_memory(address);
    value--;
    write_memory(address, value);

    // Set condition codes
    set_zero_flag(value == 0);
    set_negative_flag((value & 0x80) != 0);
    // V flag for overflow (simplified)
    if (value == 0x7F) { // Overflow from 0x80 to 0x7F
        m_cc |= 0x02; // Set V flag
    } else {
        m_cc &= ~0x02; // Clear V flag
    }
}

void CPU6809::arithmetic_shift_left(uint16_t address) {
    // ASL - Arithmetic shift left (multiply by 2)
    uint8_t value = read_memory(address);
    uint8_t old_value = value;

    // Shift left, bit 7 goes to carry, bit 0 becomes 0
    uint8_t carry_out = (value & 0x80) ? 1 : 0;
    value = (value << 1) & 0xFF;
    write_memory(address, value);

    // Set condition codes
    set_zero_flag(value == 0);
    set_negative_flag((value & 0x80) != 0);
    set_carry_flag(carry_out);
    // V flag for overflow (bit 6 XOR bit 7 of result)
    if (((old_value ^ value) & 0x80) != 0) {
        m_cc |= 0x02; // Set V flag
    } else {
        m_cc &= ~0x02; // Clear V flag
    }
}

void CPU6809::rotate_left(uint16_t address) {
    // ROL - Rotate left through carry
    uint8_t value = read_memory(address);
    uint8_t old_value = value;
    uint8_t carry_in = (m_cc & 0x01) ? 1 : 0; // Get current carry flag

    // Shift left, bit 7 goes to carry, bit 0 becomes old carry
    uint8_t carry_out = (value & 0x80) ? 1 : 0;
    value = ((value << 1) | carry_in) & 0xFF;
    write_memory(address, value);

    // Set condition codes
    set_zero_flag(value == 0);
    set_negative_flag((value & 0x80) != 0);
    set_carry_flag(carry_out);
    // V flag for overflow (bit 6 XOR bit 7 of result)
    if (((old_value ^ value) & 0x80) != 0) {
        m_cc |= 0x02; // Set V flag
    } else {
        m_cc &= ~0x02; // Clear V flag
    }
}

bool CPU6809::execute_at_address(uint16_t address) {
    // TODO: Implement address-based execution
    // For now, just set PC and return true
    m_pc = address;
    return true;
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

void CPU6809::return_from_function() {
    // RTS instruction - return from subroutine
    // Pop return address from stack
    uint16_t return_addr = (m_hardware->read_memory(m_sp) << 8) | m_hardware->read_memory(m_sp + 1);
    m_sp += 2;
    m_pc = return_addr;
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
