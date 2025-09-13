#!/usr/bin/env python3
"""
Advanced 6809 Disassembler for Star Wars ROM Analysis
"""

import struct
import sys

# 6809 instruction set with addressing modes
INSTRUCTIONS = {
    # Page 0 instructions
    0x00: ('NEG', 'DIRECT'),
    0x01: ('???', 'UNKNOWN'),
    0x02: ('???', 'UNKNOWN'),
    0x03: ('COM', 'DIRECT'),
    0x04: ('LSR', 'DIRECT'),
    0x05: ('???', 'UNKNOWN'),
    0x06: ('ROR', 'DIRECT'),
    0x07: ('ASR', 'DIRECT'),
    0x08: ('ASL', 'DIRECT'),
    0x09: ('ROL', 'DIRECT'),
    0x0a: ('DEC', 'DIRECT'),
    0x0b: ('???', 'UNKNOWN'),
    0x0c: ('INC', 'DIRECT'),
    0x0d: ('TST', 'DIRECT'),
    0x0e: ('JMP', 'DIRECT'),
    0x0f: ('CLR', 'DIRECT'),
    
    # Page 1 instructions
    0x10: ('???', 'UNKNOWN'),
    0x11: ('???', 'UNKNOWN'),
    0x12: ('NOP', 'INHERENT'),
    0x13: ('SYNC', 'INHERENT'),
    0x14: ('???', 'UNKNOWN'),
    0x15: ('???', 'UNKNOWN'),
    0x16: ('LBRA', 'RELATIVE'),
    0x17: ('LBSR', 'RELATIVE'),
    0x18: ('???', 'UNKNOWN'),
    0x19: ('DAA', 'INHERENT'),
    0x1a: ('ORCC', 'IMMEDIATE'),
    0x1b: ('???', 'UNKNOWN'),
    0x1c: ('ANDCC', 'IMMEDIATE'),
    0x1d: ('SEX', 'INHERENT'),
    0x1e: ('EXG', 'IMMEDIATE'),
    0x1f: ('TFR', 'IMMEDIATE'),
    
    # Branch instructions
    0x20: ('BRA', 'RELATIVE'),
    0x21: ('BRN', 'RELATIVE'),
    0x22: ('BHI', 'RELATIVE'),
    0x23: ('BLS', 'RELATIVE'),
    0x24: ('BCC', 'RELATIVE'),
    0x25: ('BCS', 'RELATIVE'),
    0x26: ('BNE', 'RELATIVE'),
    0x27: ('BEQ', 'RELATIVE'),
    0x28: ('BVC', 'RELATIVE'),
    0x29: ('BVS', 'RELATIVE'),
    0x2a: ('BPL', 'RELATIVE'),
    0x2b: ('BMI', 'RELATIVE'),
    0x2c: ('BGE', 'RELATIVE'),
    0x2d: ('BLT', 'RELATIVE'),
    0x2e: ('BGT', 'RELATIVE'),
    0x2f: ('BLE', 'RELATIVE'),
    
    # LEA instructions
    0x30: ('LEAX', 'INDEXED'),
    0x31: ('LEAY', 'INDEXED'),
    0x32: ('LEAS', 'INDEXED'),
    0x33: ('LEAU', 'INDEXED'),
    0x34: ('PSHS', 'IMMEDIATE'),
    0x35: ('PULS', 'IMMEDIATE'),
    0x36: ('PSHU', 'IMMEDIATE'),
    0x37: ('PULU', 'IMMEDIATE'),
    0x38: ('???', 'UNKNOWN'),
    0x39: ('RTS', 'INHERENT'),
    0x3a: ('ABX', 'INHERENT'),
    0x3b: ('RTI', 'INHERENT'),
    0x3c: ('CWAI', 'IMMEDIATE'),
    0x3d: ('MUL', 'INHERENT'),
    0x3e: ('???', 'UNKNOWN'),
    0x3f: ('SWI', 'INHERENT'),
    
    # Register A instructions
    0x40: ('NEGA', 'INHERENT'),
    0x41: ('???', 'UNKNOWN'),
    0x42: ('???', 'UNKNOWN'),
    0x43: ('COMA', 'INHERENT'),
    0x44: ('LSRA', 'INHERENT'),
    0x45: ('???', 'UNKNOWN'),
    0x46: ('RORA', 'INHERENT'),
    0x47: ('ASRA', 'INHERENT'),
    0x48: ('ASLA', 'INHERENT'),
    0x49: ('ROLA', 'INHERENT'),
    0x4a: ('DECA', 'INHERENT'),
    0x4b: ('???', 'UNKNOWN'),
    0x4c: ('INCA', 'INHERENT'),
    0x4d: ('TSTA', 'INHERENT'),
    0x4e: ('???', 'UNKNOWN'),
    0x4f: ('CLRA', 'INHERENT'),
    
    # Register B instructions
    0x50: ('NEGB', 'INHERENT'),
    0x51: ('???', 'UNKNOWN'),
    0x52: ('???', 'UNKNOWN'),
    0x53: ('COMB', 'INHERENT'),
    0x54: ('LSRB', 'INHERENT'),
    0x55: ('???', 'UNKNOWN'),
    0x56: ('RORB', 'INHERENT'),
    0x57: ('ASRB', 'INHERENT'),
    0x58: ('ASLB', 'INHERENT'),
    0x59: ('ROLB', 'INHERENT'),
    0x5a: ('DECB', 'INHERENT'),
    0x5b: ('???', 'UNKNOWN'),
    0x5c: ('INCB', 'INHERENT'),
    0x5d: ('TSTB', 'INHERENT'),
    0x5e: ('???', 'UNKNOWN'),
    0x5f: ('CLRB', 'INHERENT'),
    
    # Memory instructions (indexed)
    0x60: ('NEG', 'INDEXED'),
    0x61: ('???', 'UNKNOWN'),
    0x62: ('???', 'UNKNOWN'),
    0x63: ('COM', 'INDEXED'),
    0x64: ('LSR', 'INDEXED'),
    0x65: ('???', 'UNKNOWN'),
    0x66: ('ROR', 'INDEXED'),
    0x67: ('ASR', 'INDEXED'),
    0x68: ('ASL', 'INDEXED'),
    0x69: ('ROL', 'INDEXED'),
    0x6a: ('DEC', 'INDEXED'),
    0x6b: ('???', 'UNKNOWN'),
    0x6c: ('INC', 'INDEXED'),
    0x6d: ('TST', 'INDEXED'),
    0x6e: ('JMP', 'INDEXED'),
    0x6f: ('CLR', 'INDEXED'),
    
    # Memory instructions (extended)
    0x70: ('NEG', 'EXTENDED'),
    0x71: ('???', 'UNKNOWN'),
    0x72: ('???', 'UNKNOWN'),
    0x73: ('COM', 'EXTENDED'),
    0x74: ('LSR', 'EXTENDED'),
    0x75: ('???', 'UNKNOWN'),
    0x76: ('ROR', 'EXTENDED'),
    0x77: ('ASR', 'EXTENDED'),
    0x78: ('ASL', 'EXTENDED'),
    0x79: ('ROL', 'EXTENDED'),
    0x7a: ('DEC', 'EXTENDED'),
    0x7b: ('???', 'UNKNOWN'),
    0x7c: ('INC', 'EXTENDED'),
    0x7d: ('TST', 'EXTENDED'),
    0x7e: ('JMP', 'EXTENDED'),
    0x7f: ('CLR', 'EXTENDED'),
    
    # 8-bit arithmetic (immediate)
    0x80: ('SUBA', 'IMMEDIATE'),
    0x81: ('CMPA', 'IMMEDIATE'),
    0x82: ('SBCA', 'IMMEDIATE'),
    0x83: ('SUBD', 'IMMEDIATE'),
    0x84: ('ANDA', 'IMMEDIATE'),
    0x85: ('BITA', 'IMMEDIATE'),
    0x86: ('LDA', 'IMMEDIATE'),
    0x87: ('STA', 'IMMEDIATE'),
    0x88: ('EORA', 'IMMEDIATE'),
    0x89: ('ADCA', 'IMMEDIATE'),
    0x8a: ('ORA', 'IMMEDIATE'),
    0x8b: ('ADDA', 'IMMEDIATE'),
    0x8c: ('CMPX', 'IMMEDIATE'),
    0x8d: ('BSR', 'RELATIVE'),
    0x8e: ('LDX', 'IMMEDIATE'),
    0x8f: ('STX', 'IMMEDIATE'),
    
    # 8-bit arithmetic (direct)
    0x90: ('SUBA', 'DIRECT'),
    0x91: ('CMPA', 'DIRECT'),
    0x92: ('SBCA', 'DIRECT'),
    0x93: ('SUBD', 'DIRECT'),
    0x94: ('ANDA', 'DIRECT'),
    0x95: ('BITA', 'DIRECT'),
    0x96: ('LDA', 'DIRECT'),
    0x97: ('STA', 'DIRECT'),
    0x98: ('EORA', 'DIRECT'),
    0x99: ('ADCA', 'DIRECT'),
    0x9a: ('ORA', 'DIRECT'),
    0x9b: ('ADDA', 'DIRECT'),
    0x9c: ('CMPX', 'DIRECT'),
    0x9d: ('JSR', 'DIRECT'),
    0x9e: ('LDX', 'DIRECT'),
    0x9f: ('STX', 'DIRECT'),
    
    # 8-bit arithmetic (indexed)
    0xa0: ('SUBA', 'INDEXED'),
    0xa1: ('CMPA', 'INDEXED'),
    0xa2: ('SBCA', 'INDEXED'),
    0xa3: ('SUBD', 'INDEXED'),
    0xa4: ('ANDA', 'INDEXED'),
    0xa5: ('BITA', 'INDEXED'),
    0xa6: ('LDA', 'INDEXED'),
    0xa7: ('STA', 'INDEXED'),
    0xa8: ('EORA', 'INDEXED'),
    0xa9: ('ADCA', 'INDEXED'),
    0xaa: ('ORA', 'INDEXED'),
    0xab: ('ADDA', 'INDEXED'),
    0xac: ('CMPX', 'INDEXED'),
    0xad: ('JSR', 'INDEXED'),
    0xae: ('LDX', 'INDEXED'),
    0xaf: ('STX', 'INDEXED'),
    
    # 8-bit arithmetic (extended)
    0xb0: ('SUBA', 'EXTENDED'),
    0xb1: ('CMPA', 'EXTENDED'),
    0xb2: ('SBCA', 'EXTENDED'),
    0xb3: ('SUBD', 'EXTENDED'),
    0xb4: ('ANDA', 'EXTENDED'),
    0xb5: ('BITA', 'EXTENDED'),
    0xb6: ('LDA', 'EXTENDED'),
    0xb7: ('STA', 'EXTENDED'),
    0xb8: ('EORA', 'EXTENDED'),
    0xb9: ('ADCA', 'EXTENDED'),
    0xba: ('ORA', 'EXTENDED'),
    0xbb: ('ADDA', 'EXTENDED'),
    0xbc: ('CMPX', 'EXTENDED'),
    0xbd: ('JSR', 'EXTENDED'),
    0xbe: ('LDX', 'EXTENDED'),
    0xbf: ('STX', 'EXTENDED'),
    
    # 8-bit arithmetic (immediate)
    0xc0: ('SUBB', 'IMMEDIATE'),
    0xc1: ('CMPB', 'IMMEDIATE'),
    0xc2: ('SBCB', 'IMMEDIATE'),
    0xc3: ('ADDD', 'IMMEDIATE'),
    0xc4: ('ANDB', 'IMMEDIATE'),
    0xc5: ('BITB', 'IMMEDIATE'),
    0xc6: ('LDB', 'IMMEDIATE'),
    0xc7: ('STB', 'IMMEDIATE'),
    0xc8: ('EORB', 'IMMEDIATE'),
    0xc9: ('ADCB', 'IMMEDIATE'),
    0xca: ('ORB', 'IMMEDIATE'),
    0xcb: ('ADDB', 'IMMEDIATE'),
    0xcc: ('LDD', 'IMMEDIATE'),
    0xcd: ('STD', 'IMMEDIATE'),
    0xce: ('LDU', 'IMMEDIATE'),
    0xcf: ('STU', 'IMMEDIATE'),
    
    # 8-bit arithmetic (direct)
    0xd0: ('SUBB', 'DIRECT'),
    0xd1: ('CMPB', 'DIRECT'),
    0xd2: ('SBCB', 'DIRECT'),
    0xd3: ('ADDD', 'DIRECT'),
    0xd4: ('ANDB', 'DIRECT'),
    0xd5: ('BITB', 'DIRECT'),
    0xd6: ('LDB', 'DIRECT'),
    0xd7: ('STB', 'DIRECT'),
    0xd8: ('EORB', 'DIRECT'),
    0xd9: ('ADCB', 'DIRECT'),
    0xda: ('ORB', 'DIRECT'),
    0xdb: ('ADDB', 'DIRECT'),
    0xdc: ('LDD', 'DIRECT'),
    0xdd: ('STD', 'DIRECT'),
    0xde: ('LDU', 'DIRECT'),
    0xdf: ('STU', 'DIRECT'),
    
    # 8-bit arithmetic (indexed)
    0xe0: ('SUBB', 'INDEXED'),
    0xe1: ('CMPB', 'INDEXED'),
    0xe2: ('SBCB', 'INDEXED'),
    0xe3: ('ADDD', 'INDEXED'),
    0xe4: ('ANDB', 'INDEXED'),
    0xe5: ('BITB', 'INDEXED'),
    0xe6: ('LDB', 'INDEXED'),
    0xe7: ('STB', 'INDEXED'),
    0xe8: ('EORB', 'INDEXED'),
    0xe9: ('ADCB', 'INDEXED'),
    0xea: ('ORB', 'INDEXED'),
    0xeb: ('ADDB', 'INDEXED'),
    0xec: ('LDD', 'INDEXED'),
    0xed: ('STD', 'INDEXED'),
    0xee: ('LDU', 'INDEXED'),
    0xef: ('STU', 'INDEXED'),
    
    # 8-bit arithmetic (extended)
    0xf0: ('SUBB', 'EXTENDED'),
    0xf1: ('CMPB', 'EXTENDED'),
    0xf2: ('SBCB', 'EXTENDED'),
    0xf3: ('ADDD', 'EXTENDED'),
    0xf4: ('ANDB', 'EXTENDED'),
    0xf5: ('BITB', 'EXTENDED'),
    0xf6: ('LDB', 'EXTENDED'),
    0xf7: ('STB', 'EXTENDED'),
    0xf8: ('EORB', 'EXTENDED'),
    0xf9: ('ADCB', 'EXTENDED'),
    0xfa: ('ORB', 'EXTENDED'),
    0xfb: ('ADDB', 'EXTENDED'),
    0xfc: ('LDD', 'EXTENDED'),
    0xfd: ('STD', 'EXTENDED'),
    0xfe: ('LDU', 'EXTENDED'),
    0xff: ('STU', 'EXTENDED')
}

def disassemble_instruction(data, pc):
    """Disassemble a single 6809 instruction"""
    if pc >= len(data):
        return None, 0
    
    opcode = data[pc]
    
    if opcode not in INSTRUCTIONS:
        return f"${opcode:02x}        ???", 1
    
    mnemonic, mode = INSTRUCTIONS[opcode]
    
    if mode == 'INHERENT':
        return f"${opcode:02x}        {mnemonic}", 1
    
    elif mode == 'IMMEDIATE':
        if pc + 1 >= len(data):
            return f"${opcode:02x}        {mnemonic} #??", 1
        operand = data[pc + 1]
        return f"${opcode:02x} {operand:02x}     {mnemonic} #${operand:02x}", 2
    
    elif mode == 'DIRECT':
        if pc + 1 >= len(data):
            return f"${opcode:02x}        {mnemonic} <??", 1
        operand = data[pc + 1]
        return f"${opcode:02x} {operand:02x}     {mnemonic} <${operand:02x}", 2
    
    elif mode == 'EXTENDED':
        if pc + 2 >= len(data):
            return f"${opcode:02x}        {mnemonic} >????", 1
        operand = struct.unpack('>H', data[pc+1:pc+3])[0]
        return f"${opcode:02x} {data[pc+1]:02x} {data[pc+2]:02x} {mnemonic} >${operand:04x}", 3
    
    elif mode == 'RELATIVE':
        if pc + 1 >= len(data):
            return f"${opcode:02x}        {mnemonic} ?", 1
        offset = data[pc + 1]
        if offset >= 0x80:
            target = pc + 2 - (0x100 - offset)
        else:
            target = pc + 2 + offset
        return f"${opcode:02x} {offset:02x}     {mnemonic} ${target:04x}", 2
    
    else:
        return f"${opcode:02x}        {mnemonic} ({mode})", 1

def disassemble_file(filename, start_addr=0, max_instructions=200):
    """Disassemble a ROM file"""
    print(f"Disassembling {filename}")
    print("=" * 60)
    
    with open(filename, 'rb') as f:
        data = f.read()
    
    pc = start_addr
    instruction_count = 0
    
    while pc < len(data) and instruction_count < max_instructions:
        instruction, length = disassemble_instruction(data, pc)
        if instruction is None:
            break
        
        print(f"{pc:04x}: {instruction}")
        pc += length
        instruction_count += 1

def main():
    if len(sys.argv) < 2:
        print("Usage: python3 advanced_disassembler.py <rom_file> [start_addr] [max_instructions]")
        sys.exit(1)
    
    filename = sys.argv[1]
    start_addr = int(sys.argv[2], 16) if len(sys.argv) > 2 else 0
    max_instructions = int(sys.argv[3]) if len(sys.argv) > 3 else 200
    
    disassemble_file(filename, start_addr, max_instructions)

if __name__ == "__main__":
    main()
