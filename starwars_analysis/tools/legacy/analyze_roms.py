#!/usr/bin/env python3
"""
Star Wars ROM Analysis Tool
Analyzes the extracted ROM files and provides insights into their structure
"""

import struct
import os
from collections import defaultdict

# 6809 instruction opcodes (partial set)
OPCODES = {
    0x00: 'NEG', 0x01: '???', 0x02: '???', 0x03: 'COM', 0x04: 'LSR', 0x05: '???',
    0x06: 'ROR', 0x07: 'ASR', 0x08: 'ASL', 0x09: 'ROL', 0x0a: 'DEC', 0x0b: '???',
    0x0c: 'INC', 0x0d: 'TST', 0x0e: 'JMP', 0x0f: 'CLR',
    0x10: '???', 0x11: '???', 0x12: 'NOP', 0x13: 'SYNC', 0x14: '???', 0x15: '???',
    0x16: 'LBRA', 0x17: 'LBSR', 0x18: '???', 0x19: 'DAA', 0x1a: 'ORCC', 0x1b: '???',
    0x1c: 'ANDCC', 0x1d: 'SEX', 0x1e: 'EXG', 0x1f: 'TFR',
    0x20: 'BRA', 0x21: 'BRN', 0x22: 'BHI', 0x23: 'BLS', 0x24: 'BCC', 0x25: 'BCS',
    0x26: 'BNE', 0x27: 'BEQ', 0x28: 'BVC', 0x29: 'BVS', 0x2a: 'BPL', 0x2b: 'BMI',
    0x2c: 'BGE', 0x2d: 'BLT', 0x2e: 'BGT', 0x2f: 'BLE',
    0x30: 'LEAX', 0x31: 'LEAY', 0x32: 'LEAS', 0x33: 'LEAU', 0x34: 'PSHS', 0x35: 'PULS',
    0x36: 'PSHU', 0x37: 'PULU', 0x38: '???', 0x39: 'RTS', 0x3a: 'ABX', 0x3b: 'RTI',
    0x3c: 'CWAI', 0x3d: 'MUL', 0x3e: '???', 0x3f: 'SWI',
    0x40: 'NEGA', 0x41: '???', 0x42: '???', 0x43: 'COMA', 0x44: 'LSRA', 0x45: '???',
    0x46: 'RORA', 0x47: 'ASRA', 0x48: 'ASLA', 0x49: 'ROLA', 0x4a: 'DECA', 0x4b: '???',
    0x4c: 'INCA', 0x4d: 'TSTA', 0x4e: '???', 0x4f: 'CLRA',
    0x50: 'NEGB', 0x51: '???', 0x52: '???', 0x53: 'COMB', 0x54: 'LSRB', 0x55: '???',
    0x56: 'RORB', 0x57: 'ASRB', 0x58: 'ASLB', 0x59: 'ROLB', 0x5a: 'DECB', 0x5b: '???',
    0x5c: 'INCB', 0x5d: 'TSTB', 0x5e: '???', 0x5f: 'CLRB',
    0x60: 'NEG', 0x61: '???', 0x62: '???', 0x63: 'COM', 0x64: 'LSR', 0x65: '???',
    0x66: 'ROR', 0x67: 'ASR', 0x68: 'ASL', 0x69: 'ROL', 0x6a: 'DEC', 0x6b: '???',
    0x6c: 'INC', 0x6d: 'TST', 0x6e: 'JMP', 0x6f: 'CLR',
    0x70: 'NEG', 0x71: '???', 0x72: '???', 0x73: 'COM', 0x74: 'LSR', 0x75: '???',
    0x76: 'ROR', 0x77: 'ASR', 0x78: 'ASL', 0x79: 'ROL', 0x7a: 'DEC', 0x7b: '???',
    0x7c: 'INC', 0x7d: 'TST', 0x7e: 'JMP', 0x7f: 'CLR',
    0x80: 'SUBA', 0x81: 'CMPA', 0x82: 'SBCA', 0x83: 'SUBD', 0x84: 'ANDA', 0x85: 'BITA',
    0x86: 'LDA', 0x87: 'STA', 0x88: 'EORA', 0x89: 'ADCA', 0x8a: 'ORA', 0x8b: 'ADDA',
    0x8c: 'CMPX', 0x8d: 'BSR', 0x8e: 'LDX', 0x8f: 'STX',
    0x90: 'SUBA', 0x91: 'CMPA', 0x92: 'SBCA', 0x93: 'SUBD', 0x94: 'ANDA', 0x95: 'BITA',
    0x96: 'LDA', 0x97: 'STA', 0x98: 'EORA', 0x99: 'ADCA', 0x9a: 'ORA', 0x9b: 'ADDA',
    0x9c: 'CMPX', 0x9d: 'JSR', 0x9e: 'LDX', 0x9f: 'STX',
    0xa0: 'SUBA', 0xa1: 'CMPA', 0xa2: 'SBCA', 0xa3: 'SUBD', 0xa4: 'ANDA', 0xa5: 'BITA',
    0xa6: 'LDA', 0xa7: 'STA', 0xa8: 'EORA', 0xa9: 'ADCA', 0xaa: 'ORA', 0xab: 'ADDA',
    0xac: 'CMPX', 0xad: 'JSR', 0xae: 'LDX', 0xaf: 'STX',
    0xb0: 'SUBA', 0xb1: 'CMPA', 0xb2: 'SBCA', 0xb3: 'SUBD', 0xb4: 'ANDA', 0xb5: 'BITA',
    0xb6: 'LDA', 0xb7: 'STA', 0xb8: 'EORA', 0xb9: 'ADCA', 0xba: 'ORA', 0xbb: 'ADDA',
    0xbc: 'CMPX', 0xbd: 'JSR', 0xbe: 'LDX', 0xbf: 'STX',
    0xc0: 'SUBB', 0xc1: 'CMPB', 0xc2: 'SBCB', 0xc3: 'ADDD', 0xc4: 'ANDB', 0xc5: 'BITB',
    0xc6: 'LDB', 0xc7: 'STB', 0xc8: 'EORB', 0xc9: 'ADCB', 0xca: 'ORB', 0xcb: 'ADDB',
    0xcc: 'LDD', 0xcd: 'STD', 0xce: 'LDU', 0xcf: 'STU',
    0xd0: 'SUBB', 0xd1: 'CMPB', 0xd2: 'SBCB', 0xd3: 'ADDD', 0xd4: 'ANDB', 0xd5: 'BITB',
    0xd6: 'LDB', 0xd7: 'STB', 0xd8: 'EORB', 0xd9: 'ADCB', 0xda: 'ORB', 0xdb: 'ADDB',
    0xdc: 'LDD', 0xdd: 'STD', 0xde: 'LDU', 0xdf: 'STU',
    0xe0: 'SUBB', 0xe1: 'CMPB', 0xe2: 'SBCB', 0xe3: 'ADDD', 0xe4: 'ANDB', 0xe5: 'BITB',
    0xe6: 'LDB', 0xe7: 'STB', 0xe8: 'EORB', 0xe9: 'ADCB', 0xea: 'ORB', 0xeb: 'ADDB',
    0xec: 'LDD', 0xed: 'STD', 0xee: 'LDU', 0xef: 'STU',
    0xf0: 'SUBB', 0xf1: 'CMPB', 0xf2: 'SBCB', 0xf3: 'ADDD', 0xf4: 'ANDB', 0xf5: 'BITB',
    0xf6: 'LDB', 0xf7: 'STB', 0xf8: 'EORB', 0xf9: 'ADCB', 0xfa: 'ORB', 0xfb: 'ADDB',
    0xfc: 'LDD', 0xfd: 'STD', 0xfe: 'LDU', 0xff: 'STU'
}

def analyze_file(filename):
    """Analyze a ROM file and provide insights"""
    print(f"\n=== Analyzing {filename} ===")
    
    if not os.path.exists(filename):
        print(f"File {filename} not found")
        return
    
    with open(filename, 'rb') as f:
        data = f.read()
    
    size = len(data)
    print(f"Size: {size} bytes ({size/1024:.1f} KB)")
    
    # Basic statistics
    byte_counts = defaultdict(int)
    for byte in data:
        byte_counts[byte] += 1
    
    print(f"Unique bytes: {len(byte_counts)}")
    print(f"Most common bytes: {sorted(byte_counts.items(), key=lambda x: x[1], reverse=True)[:5]}")
    
    # Look for patterns
    if size >= 4:
        # Check for common 6809 patterns
        jmp_count = data.count(b'\x7e')  # JMP instruction
        jsr_count = data.count(b'\xbd')  # JSR instruction
        rts_count = data.count(b'\x39')  # RTS instruction
        
        print(f"JMP instructions: {jmp_count}")
        print(f"JSR instructions: {jsr_count}")
        print(f"RTS instructions: {rts_count}")
        
        # Look for potential strings (printable ASCII)
        ascii_count = sum(1 for b in data if 32 <= b <= 126)
        print(f"Printable ASCII bytes: {ascii_count} ({ascii_count/size*100:.1f}%)")
        
        # Look for potential data vs code
        if size > 100:
            # Sample first 100 bytes for instruction analysis
            sample = data[:100]
            valid_instructions = sum(1 for b in sample if b in OPCODES)
            print(f"Valid 6809 instructions in first 100 bytes: {valid_instructions}/100")
    
    # Show first 32 bytes in hex
    print("First 32 bytes:")
    for i in range(0, min(32, len(data)), 16):
        hex_str = ' '.join(f'{b:02x}' for b in data[i:i+16])
        ascii_str = ''.join(chr(b) if 32 <= b <= 126 else '.' for b in data[i:i+16])
        print(f"{i:04x}: {hex_str:<48} {ascii_str}")

def disassemble_section(data, start_addr=0, max_bytes=100):
    """Simple disassembler for 6809 code"""
    print(f"\nDisassembly starting at ${start_addr:04x}:")
    
    i = 0
    while i < min(max_bytes, len(data)):
        addr = start_addr + i
        opcode = data[i]
        
        if opcode in OPCODES:
            instruction = OPCODES[opcode]
            if instruction == 'JMP' and i + 2 < len(data):
                # JMP instruction with 16-bit address
                target = struct.unpack('>H', data[i+1:i+3])[0]
                print(f"{addr:04x}: {opcode:02x} {data[i+1]:02x} {data[i+2]:02x} {instruction} ${target:04x}")
                i += 3
            elif instruction == 'JSR' and i + 2 < len(data):
                # JSR instruction with 16-bit address
                target = struct.unpack('>H', data[i+1:i+3])[0]
                print(f"{addr:04x}: {opcode:02x} {data[i+1]:02x} {data[i+2]:02x} {instruction} ${target:04x}")
                i += 3
            elif instruction in ['LDA', 'LDB', 'LDX', 'LDY', 'LDU', 'LDS'] and i + 1 < len(data):
                # Load instructions with immediate or direct addressing
                operand = data[i+1]
                print(f"{addr:04x}: {opcode:02x} {operand:02x}     {instruction} #${operand:02x}")
                i += 2
            else:
                print(f"{addr:04x}: {opcode:02x}        {instruction}")
                i += 1
        else:
            print(f"{addr:04x}: {opcode:02x}        ???")
            i += 1

def main():
    print("Star Wars ROM Analysis Tool")
    print("=" * 50)
    
    # Analyze all ROM files
    rom_files = [
        '136021.114.1f',    # Main CPU ROM (16KB)
        '136021.214.1f',    # Main CPU ROM (16KB) 
        '136021.102.1hj',   # 8KB ROM
        '136021.104.1kl',   # 8KB ROM
        '136021.203.1jk',   # 8KB ROM
        '136021.206.1m',    # 8KB ROM
        '136021.208',       # 8KB ROM
        '136021.105',       # 4KB ROM
        '136021.107',       # 8KB ROM
        '136021.110',       # 1KB (likely mathbox PROM)
        '136021.111',       # 1KB (likely mathbox PROM)
        '136021.112',       # 1KB (likely mathbox PROM)
        '136021.113',       # 1KB (likely mathbox PROM)
        '136021-105.1l'     # 256 bytes (likely AVG PROM)
    ]
    
    for rom_file in rom_files:
        analyze_file(rom_file)
    
    # Detailed disassembly of main ROM
    print("\n" + "="*60)
    print("DETAILED DISASSEMBLY OF MAIN ROM (136021.114.1f)")
    print("="*60)
    
    with open('136021.114.1f', 'rb') as f:
        main_rom = f.read()
    
    disassemble_section(main_rom, 0x0000, 200)
    
    # Look for interesting patterns
    print("\n" + "="*60)
    print("SEARCHING FOR INTERESTING PATTERNS")
    print("="*60)
    
    # Look for potential jump tables
    print("\nPotential jump table entries (JMP instructions):")
    for i in range(0, len(main_rom) - 2, 2):
        if main_rom[i] == 0x7e:  # JMP
            target = struct.unpack('>H', main_rom[i+1:i+3])[0]
            print(f"  ${i:04x}: JMP ${target:04x}")

if __name__ == "__main__":
    main()
