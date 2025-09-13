#!/usr/bin/env python3
"""
Comprehensive Star Wars ROM Analyzer
Command-line tool for detailed ROM analysis and function identification
"""

import struct
import sys
import os
from collections import defaultdict
import capstone

# 6809 instruction set with detailed information
INSTRUCTIONS = {
    0x00: ('NEG', 'DIRECT', 2, 'Negate memory (direct)'),
    0x01: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x02: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x03: ('COM', 'DIRECT', 2, 'Complement memory (direct)'),
    0x04: ('LSR', 'DIRECT', 2, 'Logical shift right (direct)'),
    0x05: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x06: ('ROR', 'DIRECT', 2, 'Rotate right (direct)'),
    0x07: ('ASR', 'DIRECT', 2, 'Arithmetic shift right (direct)'),
    0x08: ('ASL', 'DIRECT', 2, 'Arithmetic shift left (direct)'),
    0x09: ('ROL', 'DIRECT', 2, 'Rotate left (direct)'),
    0x0a: ('DEC', 'DIRECT', 2, 'Decrement memory (direct)'),
    0x0b: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x0c: ('INC', 'DIRECT', 2, 'Increment memory (direct)'),
    0x0d: ('TST', 'DIRECT', 2, 'Test memory (direct)'),
    0x0e: ('JMP', 'DIRECT', 2, 'Jump (direct)'),
    0x0f: ('CLR', 'DIRECT', 2, 'Clear memory (direct)'),
    
    0x10: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x11: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x12: ('NOP', 'INHERENT', 1, 'No operation'),
    0x13: ('SYNC', 'INHERENT', 1, 'Synchronize'),
    0x14: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x15: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x16: ('LBRA', 'RELATIVE', 3, 'Long branch always'),
    0x17: ('LBSR', 'RELATIVE', 3, 'Long branch to subroutine'),
    0x18: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x19: ('DAA', 'INHERENT', 1, 'Decimal adjust accumulator A'),
    0x1a: ('ORCC', 'IMMEDIATE', 2, 'OR condition codes (immediate)'),
    0x1b: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x1c: ('ANDCC', 'IMMEDIATE', 2, 'AND condition codes (immediate)'),
    0x1d: ('SEX', 'INHERENT', 1, 'Sign extend B to D'),
    0x1e: ('EXG', 'IMMEDIATE', 2, 'Exchange registers'),
    0x1f: ('TFR', 'IMMEDIATE', 2, 'Transfer registers'),
    
    # Branch instructions
    0x20: ('BRA', 'RELATIVE', 2, 'Branch always'),
    0x21: ('BRN', 'RELATIVE', 2, 'Branch never'),
    0x22: ('BHI', 'RELATIVE', 2, 'Branch if higher'),
    0x23: ('BLS', 'RELATIVE', 2, 'Branch if lower or same'),
    0x24: ('BCC', 'RELATIVE', 2, 'Branch if carry clear'),
    0x25: ('BCS', 'RELATIVE', 2, 'Branch if carry set'),
    0x26: ('BNE', 'RELATIVE', 2, 'Branch if not equal'),
    0x27: ('BEQ', 'RELATIVE', 2, 'Branch if equal'),
    0x28: ('BVC', 'RELATIVE', 2, 'Branch if overflow clear'),
    0x29: ('BVS', 'RELATIVE', 2, 'Branch if overflow set'),
    0x2a: ('BPL', 'RELATIVE', 2, 'Branch if plus'),
    0x2b: ('BMI', 'RELATIVE', 2, 'Branch if minus'),
    0x2c: ('BGE', 'RELATIVE', 2, 'Branch if greater or equal'),
    0x2d: ('BLT', 'RELATIVE', 2, 'Branch if less than'),
    0x2e: ('BGT', 'RELATIVE', 2, 'Branch if greater than'),
    0x2f: ('BLE', 'RELATIVE', 2, 'Branch if less or equal'),
    
    # LEA instructions
    0x30: ('LEAX', 'INDEXED', 2, 'Load effective address into X'),
    0x31: ('LEAY', 'INDEXED', 2, 'Load effective address into Y'),
    0x32: ('LEAS', 'INDEXED', 2, 'Load effective address into S'),
    0x33: ('LEAU', 'INDEXED', 2, 'Load effective address into U'),
    0x34: ('PSHS', 'IMMEDIATE', 2, 'Push registers onto hardware stack'),
    0x35: ('PULS', 'IMMEDIATE', 2, 'Pull registers from hardware stack'),
    0x36: ('PSHU', 'IMMEDIATE', 2, 'Push registers onto user stack'),
    0x37: ('PULU', 'IMMEDIATE', 2, 'Pull registers from user stack'),
    0x38: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x39: ('RTS', 'INHERENT', 1, 'Return from subroutine'),
    0x3a: ('ABX', 'INHERENT', 1, 'Add B to X'),
    0x3b: ('RTI', 'INHERENT', 1, 'Return from interrupt'),
    0x3c: ('CWAI', 'IMMEDIATE', 2, 'Clear wait for interrupt'),
    0x3d: ('MUL', 'INHERENT', 1, 'Multiply A by B'),
    0x3e: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x3f: ('SWI', 'INHERENT', 1, 'Software interrupt'),
    
    # Register A instructions
    0x40: ('NEGA', 'INHERENT', 1, 'Negate accumulator A'),
    0x41: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x42: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x43: ('COMA', 'INHERENT', 1, 'Complement accumulator A'),
    0x44: ('LSRA', 'INHERENT', 1, 'Logical shift right A'),
    0x45: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x46: ('RORA', 'INHERENT', 1, 'Rotate right A'),
    0x47: ('ASRA', 'INHERENT', 1, 'Arithmetic shift right A'),
    0x48: ('ASLA', 'INHERENT', 1, 'Arithmetic shift left A'),
    0x49: ('ROLA', 'INHERENT', 1, 'Rotate left A'),
    0x4a: ('DECA', 'INHERENT', 1, 'Decrement A'),
    0x4b: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x4c: ('INCA', 'INHERENT', 1, 'Increment A'),
    0x4d: ('TSTA', 'INHERENT', 1, 'Test A'),
    0x4e: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x4f: ('CLRA', 'INHERENT', 1, 'Clear A'),
    
    # Register B instructions
    0x50: ('NEGB', 'INHERENT', 1, 'Negate accumulator B'),
    0x51: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x52: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x53: ('COMB', 'INHERENT', 1, 'Complement accumulator B'),
    0x54: ('LSRB', 'INHERENT', 1, 'Logical shift right B'),
    0x55: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x56: ('RORB', 'INHERENT', 1, 'Rotate right B'),
    0x57: ('ASRB', 'INHERENT', 1, 'Arithmetic shift right B'),
    0x58: ('ASLB', 'INHERENT', 1, 'Arithmetic shift left B'),
    0x59: ('ROLB', 'INHERENT', 1, 'Rotate left B'),
    0x5a: ('DECB', 'INHERENT', 1, 'Decrement B'),
    0x5b: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x5c: ('INCB', 'INHERENT', 1, 'Increment B'),
    0x5d: ('TSTB', 'INHERENT', 1, 'Test B'),
    0x5e: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x5f: ('CLRB', 'INHERENT', 1, 'Clear B'),
    
    # Memory instructions (indexed)
    0x60: ('NEG', 'INDEXED', 2, 'Negate memory (indexed)'),
    0x61: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x62: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x63: ('COM', 'INDEXED', 2, 'Complement memory (indexed)'),
    0x64: ('LSR', 'INDEXED', 2, 'Logical shift right (indexed)'),
    0x65: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x66: ('ROR', 'INDEXED', 2, 'Rotate right (indexed)'),
    0x67: ('ASR', 'INDEXED', 2, 'Arithmetic shift right (indexed)'),
    0x68: ('ASL', 'INDEXED', 2, 'Arithmetic shift left (indexed)'),
    0x69: ('ROL', 'INDEXED', 2, 'Rotate left (indexed)'),
    0x6a: ('DEC', 'INDEXED', 2, 'Decrement memory (indexed)'),
    0x6b: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x6c: ('INC', 'INDEXED', 2, 'Increment memory (indexed)'),
    0x6d: ('TST', 'INDEXED', 2, 'Test memory (indexed)'),
    0x6e: ('JMP', 'INDEXED', 2, 'Jump (indexed)'),
    0x6f: ('CLR', 'INDEXED', 2, 'Clear memory (indexed)'),
    
    # Memory instructions (extended)
    0x70: ('NEG', 'EXTENDED', 3, 'Negate memory (extended)'),
    0x71: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x72: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x73: ('COM', 'EXTENDED', 3, 'Complement memory (extended)'),
    0x74: ('LSR', 'EXTENDED', 3, 'Logical shift right (extended)'),
    0x75: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x76: ('ROR', 'EXTENDED', 3, 'Rotate right (extended)'),
    0x77: ('ASR', 'EXTENDED', 3, 'Arithmetic shift right (extended)'),
    0x78: ('ASL', 'EXTENDED', 3, 'Arithmetic shift left (extended)'),
    0x79: ('ROL', 'EXTENDED', 3, 'Rotate left (extended)'),
    0x7a: ('DEC', 'EXTENDED', 3, 'Decrement memory (extended)'),
    0x7b: ('???', 'UNKNOWN', 1, 'Unknown instruction'),
    0x7c: ('INC', 'EXTENDED', 3, 'Increment memory (extended)'),
    0x7d: ('TST', 'EXTENDED', 3, 'Test memory (extended)'),
    0x7e: ('JMP', 'EXTENDED', 3, 'Jump (extended)'),
    0x7f: ('CLR', 'EXTENDED', 3, 'Clear memory (extended)'),
    
    # 8-bit arithmetic (immediate)
    0x80: ('SUBA', 'IMMEDIATE', 2, 'Subtract from A (immediate)'),
    0x81: ('CMPA', 'IMMEDIATE', 2, 'Compare with A (immediate)'),
    0x82: ('SBCA', 'IMMEDIATE', 2, 'Subtract with carry A (immediate)'),
    0x83: ('SUBD', 'IMMEDIATE', 3, 'Subtract from D (immediate)'),
    0x84: ('ANDA', 'IMMEDIATE', 2, 'AND with A (immediate)'),
    0x85: ('BITA', 'IMMEDIATE', 2, 'Bit test A (immediate)'),
    0x86: ('LDA', 'IMMEDIATE', 2, 'Load A (immediate)'),
    0x87: ('STA', 'IMMEDIATE', 2, 'Store A (immediate)'),
    0x88: ('EORA', 'IMMEDIATE', 2, 'Exclusive OR A (immediate)'),
    0x89: ('ADCA', 'IMMEDIATE', 2, 'Add with carry A (immediate)'),
    0x8a: ('ORA', 'IMMEDIATE', 2, 'OR with A (immediate)'),
    0x8b: ('ADDA', 'IMMEDIATE', 2, 'Add to A (immediate)'),
    0x8c: ('CMPX', 'IMMEDIATE', 3, 'Compare with X (immediate)'),
    0x8d: ('BSR', 'RELATIVE', 2, 'Branch to subroutine'),
    0x8e: ('LDX', 'IMMEDIATE', 3, 'Load X (immediate)'),
    0x8f: ('STX', 'IMMEDIATE', 3, 'Store X (immediate)'),
    
    # 8-bit arithmetic (direct)
    0x90: ('SUBA', 'DIRECT', 2, 'Subtract from A (direct)'),
    0x91: ('CMPA', 'DIRECT', 2, 'Compare with A (direct)'),
    0x92: ('SBCA', 'DIRECT', 2, 'Subtract with carry A (direct)'),
    0x93: ('SUBD', 'DIRECT', 2, 'Subtract from D (direct)'),
    0x94: ('ANDA', 'DIRECT', 2, 'AND with A (direct)'),
    0x95: ('BITA', 'DIRECT', 2, 'Bit test A (direct)'),
    0x96: ('LDA', 'DIRECT', 2, 'Load A (direct)'),
    0x97: ('STA', 'DIRECT', 2, 'Store A (direct)'),
    0x98: ('EORA', 'DIRECT', 2, 'Exclusive OR A (direct)'),
    0x99: ('ADCA', 'DIRECT', 2, 'Add with carry A (direct)'),
    0x9a: ('ORA', 'DIRECT', 2, 'OR with A (direct)'),
    0x9b: ('ADDA', 'DIRECT', 2, 'Add to A (direct)'),
    0x9c: ('CMPX', 'DIRECT', 2, 'Compare with X (direct)'),
    0x9d: ('JSR', 'DIRECT', 2, 'Jump to subroutine (direct)'),
    0x9e: ('LDX', 'DIRECT', 2, 'Load X (direct)'),
    0x9f: ('STX', 'DIRECT', 2, 'Store X (direct)'),
    
    # 8-bit arithmetic (indexed)
    0xa0: ('SUBA', 'INDEXED', 2, 'Subtract from A (indexed)'),
    0xa1: ('CMPA', 'INDEXED', 2, 'Compare with A (indexed)'),
    0xa2: ('SBCA', 'INDEXED', 2, 'Subtract with carry A (indexed)'),
    0xa3: ('SUBD', 'INDEXED', 2, 'Subtract from D (indexed)'),
    0xa4: ('ANDA', 'INDEXED', 2, 'AND with A (indexed)'),
    0xa5: ('BITA', 'INDEXED', 2, 'Bit test A (indexed)'),
    0xa6: ('LDA', 'INDEXED', 2, 'Load A (indexed)'),
    0xa7: ('STA', 'INDEXED', 2, 'Store A (indexed)'),
    0xa8: ('EORA', 'INDEXED', 2, 'Exclusive OR A (indexed)'),
    0xa9: ('ADCA', 'INDEXED', 2, 'Add with carry A (indexed)'),
    0xaa: ('ORA', 'INDEXED', 2, 'OR with A (indexed)'),
    0xab: ('ADDA', 'INDEXED', 2, 'Add to A (indexed)'),
    0xac: ('CMPX', 'INDEXED', 2, 'Compare with X (indexed)'),
    0xad: ('JSR', 'INDEXED', 2, 'Jump to subroutine (indexed)'),
    0xae: ('LDX', 'INDEXED', 2, 'Load X (indexed)'),
    0xaf: ('STX', 'INDEXED', 2, 'Store X (indexed)'),
    
    # 8-bit arithmetic (extended)
    0xb0: ('SUBA', 'EXTENDED', 3, 'Subtract from A (extended)'),
    0xb1: ('CMPA', 'EXTENDED', 3, 'Compare with A (extended)'),
    0xb2: ('SBCA', 'EXTENDED', 3, 'Subtract with carry A (extended)'),
    0xb3: ('SUBD', 'EXTENDED', 3, 'Subtract from D (extended)'),
    0xb4: ('ANDA', 'EXTENDED', 3, 'AND with A (extended)'),
    0xb5: ('BITA', 'EXTENDED', 3, 'Bit test A (extended)'),
    0xb6: ('LDA', 'EXTENDED', 3, 'Load A (extended)'),
    0xb7: ('STA', 'EXTENDED', 3, 'Store A (extended)'),
    0xb8: ('EORA', 'EXTENDED', 3, 'Exclusive OR A (extended)'),
    0xb9: ('ADCA', 'EXTENDED', 3, 'Add with carry A (extended)'),
    0xba: ('ORA', 'EXTENDED', 3, 'OR with A (extended)'),
    0xbb: ('ADDA', 'EXTENDED', 3, 'Add to A (extended)'),
    0xbc: ('CMPX', 'EXTENDED', 3, 'Compare with X (extended)'),
    0xbd: ('JSR', 'EXTENDED', 3, 'Jump to subroutine (extended)'),
    0xbe: ('LDX', 'EXTENDED', 3, 'Load X (extended)'),
    0xbf: ('STX', 'EXTENDED', 3, 'Store X (extended)'),
    
    # 8-bit arithmetic (immediate)
    0xc0: ('SUBB', 'IMMEDIATE', 2, 'Subtract from B (immediate)'),
    0xc1: ('CMPB', 'IMMEDIATE', 2, 'Compare with B (immediate)'),
    0xc2: ('SBCB', 'IMMEDIATE', 2, 'Subtract with carry B (immediate)'),
    0xc3: ('ADDD', 'IMMEDIATE', 3, 'Add to D (immediate)'),
    0xc4: ('ANDB', 'IMMEDIATE', 2, 'AND with B (immediate)'),
    0xc5: ('BITB', 'IMMEDIATE', 2, 'Bit test B (immediate)'),
    0xc6: ('LDB', 'IMMEDIATE', 2, 'Load B (immediate)'),
    0xc7: ('STB', 'IMMEDIATE', 2, 'Store B (immediate)'),
    0xc8: ('EORB', 'IMMEDIATE', 2, 'Exclusive OR B (immediate)'),
    0xc9: ('ADCB', 'IMMEDIATE', 2, 'Add with carry B (immediate)'),
    0xca: ('ORB', 'IMMEDIATE', 2, 'OR with B (immediate)'),
    0xcb: ('ADDB', 'IMMEDIATE', 2, 'Add to B (immediate)'),
    0xcc: ('LDD', 'IMMEDIATE', 3, 'Load D (immediate)'),
    0xcd: ('STD', 'IMMEDIATE', 3, 'Store D (immediate)'),
    0xce: ('LDU', 'IMMEDIATE', 3, 'Load U (immediate)'),
    0xcf: ('STU', 'IMMEDIATE', 3, 'Store U (immediate)'),
    
    # 8-bit arithmetic (direct)
    0xd0: ('SUBB', 'DIRECT', 2, 'Subtract from B (direct)'),
    0xd1: ('CMPB', 'DIRECT', 2, 'Compare with B (direct)'),
    0xd2: ('SBCB', 'DIRECT', 2, 'Subtract with carry B (direct)'),
    0xd3: ('ADDD', 'DIRECT', 2, 'Add to D (direct)'),
    0xd4: ('ANDB', 'DIRECT', 2, 'AND with B (direct)'),
    0xd5: ('BITB', 'DIRECT', 2, 'Bit test B (direct)'),
    0xd6: ('LDB', 'DIRECT', 2, 'Load B (direct)'),
    0xd7: ('STB', 'DIRECT', 2, 'Store B (direct)'),
    0xd8: ('EORB', 'DIRECT', 2, 'Exclusive OR B (direct)'),
    0xd9: ('ADCB', 'DIRECT', 2, 'Add with carry B (direct)'),
    0xda: ('ORB', 'DIRECT', 2, 'OR with B (direct)'),
    0xdb: ('ADDB', 'DIRECT', 2, 'Add to B (direct)'),
    0xdc: ('LDD', 'DIRECT', 2, 'Load D (direct)'),
    0xdd: ('STD', 'DIRECT', 2, 'Store D (direct)'),
    0xde: ('LDU', 'DIRECT', 2, 'Load U (direct)'),
    0xdf: ('STU', 'DIRECT', 2, 'Store U (direct)'),
    
    # 8-bit arithmetic (indexed)
    0xe0: ('SUBB', 'INDEXED', 2, 'Subtract from B (indexed)'),
    0xe1: ('CMPB', 'INDEXED', 2, 'Compare with B (indexed)'),
    0xe2: ('SBCB', 'INDEXED', 2, 'Subtract with carry B (indexed)'),
    0xe3: ('ADDD', 'INDEXED', 2, 'Add to D (indexed)'),
    0xe4: ('ANDB', 'INDEXED', 2, 'AND with B (indexed)'),
    0xe5: ('BITB', 'INDEXED', 2, 'Bit test B (indexed)'),
    0xe6: ('LDB', 'INDEXED', 2, 'Load B (indexed)'),
    0xe7: ('STB', 'INDEXED', 2, 'Store B (indexed)'),
    0xe8: ('EORB', 'INDEXED', 2, 'Exclusive OR B (indexed)'),
    0xe9: ('ADCB', 'INDEXED', 2, 'Add with carry B (indexed)'),
    0xea: ('ORB', 'INDEXED', 2, 'OR with B (indexed)'),
    0xeb: ('ADDB', 'INDEXED', 2, 'Add to B (indexed)'),
    0xec: ('LDD', 'INDEXED', 2, 'Load D (indexed)'),
    0xed: ('STD', 'INDEXED', 2, 'Store D (indexed)'),
    0xee: ('LDU', 'INDEXED', 2, 'Load U (indexed)'),
    0xef: ('STU', 'INDEXED', 2, 'Store U (indexed)'),
    
    # 8-bit arithmetic (extended)
    0xf0: ('SUBB', 'EXTENDED', 3, 'Subtract from B (extended)'),
    0xf1: ('CMPB', 'EXTENDED', 3, 'Compare with B (extended)'),
    0xf2: ('SBCB', 'EXTENDED', 3, 'Subtract with carry B (extended)'),
    0xf3: ('ADDD', 'EXTENDED', 3, 'Add to D (extended)'),
    0xf4: ('ANDB', 'EXTENDED', 3, 'AND with B (extended)'),
    0xf5: ('BITB', 'EXTENDED', 3, 'Bit test B (extended)'),
    0xf6: ('LDB', 'EXTENDED', 3, 'Load B (extended)'),
    0xf7: ('STB', 'EXTENDED', 3, 'Store B (extended)'),
    0xf8: ('EORB', 'EXTENDED', 3, 'Exclusive OR B (extended)'),
    0xf9: ('ADCB', 'EXTENDED', 3, 'Add with carry B (extended)'),
    0xfa: ('ORB', 'EXTENDED', 3, 'OR with B (extended)'),
    0xfb: ('ADDB', 'EXTENDED', 3, 'Add to B (extended)'),
    0xfc: ('LDD', 'EXTENDED', 3, 'Load D (extended)'),
    0xfd: ('STD', 'EXTENDED', 3, 'Store D (extended)'),
    0xfe: ('LDU', 'EXTENDED', 3, 'Load U (extended)'),
    0xff: ('STU', 'EXTENDED', 3, 'Store U (extended)')
}

class Function:
    def __init__(self, address, name="", size=0):
        self.address = address
        self.name = name
        self.size = size
        self.instructions = []
        self.calls = []  # Functions this calls
        self.called_by = []  # Functions that call this
        self.comment = ""
    
    def add_instruction(self, instruction):
        self.instructions.append(instruction)
    
    def add_call(self, target_addr):
        if target_addr not in self.calls:
            self.calls.append(target_addr)
    
    def add_caller(self, caller_addr):
        if caller_addr not in self.called_by:
            self.called_by.append(caller_addr)

class ROMAnalyzer:
    def __init__(self, filename):
        self.filename = filename
        with open(filename, 'rb') as f:
            self.data = f.read()
        self.functions = {}
        self.jump_table = []
        self.subroutines = []
        self.strings = []
        
    def disassemble_instruction(self, pc, base_addr=0):
        """Disassemble a single 6809 instruction"""
        if pc >= len(self.data):
            return None, 0, ""
        
        opcode = self.data[pc]
        
        if opcode not in INSTRUCTIONS:
            return f"${opcode:02x}        ???", 1, "Unknown instruction"
        
        mnemonic, mode, length, description = INSTRUCTIONS[opcode]
        
        if mode == 'INHERENT':
            return f"${opcode:02x}        {mnemonic}", 1, description
        
        elif mode == 'IMMEDIATE':
            if pc + 1 >= len(self.data):
                return f"${opcode:02x}        {mnemonic} #??", 1, description
            operand = self.data[pc + 1]
            return f"${opcode:02x} {operand:02x}     {mnemonic} #${operand:02x}", 2, description
        
        elif mode == 'DIRECT':
            if pc + 1 >= len(self.data):
                return f"${opcode:02x}        {mnemonic} <??", 1, description
            operand = self.data[pc + 1]
            return f"${opcode:02x} {operand:02x}     {mnemonic} <${operand:02x}", 2, description
        
        elif mode == 'EXTENDED':
            if pc + 2 >= len(self.data):
                return f"${opcode:02x}        {mnemonic} >????", 1, description
            operand = struct.unpack('>H', self.data[pc+1:pc+3])[0]
            return f"${opcode:02x} {self.data[pc+1]:02x} {self.data[pc+2]:02x} {mnemonic} >${operand:04x}", 3, description
        
        elif mode == 'RELATIVE':
            if pc + 1 >= len(self.data):
                return f"${opcode:02x}        {mnemonic} ?", 1, description
            offset = self.data[pc + 1]
            if offset >= 0x80:
                target = pc + 2 - (0x100 - offset)
            else:
                target = pc + 2 + offset
            return f"${opcode:02x} {offset:02x}     {mnemonic} ${target:04x}", 2, description
        
        else:
            return f"${opcode:02x}        {mnemonic} ({mode})", 1, description
    
    def find_jump_table(self):
        """Find all JMP instructions (jump table entries)"""
        print("=== JUMP TABLE ANALYSIS ===")
        
        for i in range(0, len(self.data) - 2, 2):
            if self.data[i] == 0x7e:  # JMP instruction
                target = struct.unpack('>H', self.data[i+1:i+3])[0]
                self.jump_table.append((i, target))
                print(f"  ${i:04x}: JMP ${target:04x}")
        
        print(f"\nFound {len(self.jump_table)} jump table entries")
        return self.jump_table
    
    def find_subroutines(self):
        """Find all JSR instructions (subroutine calls)"""
        print("\n=== SUBROUTINE ANALYSIS ===")
        
        for i in range(0, len(self.data) - 2, 2):
            if self.data[i] == 0xbd:  # JSR instruction
                target = struct.unpack('>H', self.data[i+1:i+3])[0]
                self.subroutines.append((i, target))
                if len(self.subroutines) <= 20:  # Show first 20
                    print(f"  ${i:04x}: JSR ${target:04x}")
        
        print(f"\nFound {len(self.subroutines)} subroutine calls")
        return self.subroutines
    
    def analyze_function(self, start_addr, max_instructions=50):
        """Analyze a function starting at the given address"""
        print(f"\n=== FUNCTION ANALYSIS: ${start_addr:04x} ===")
        
        if start_addr not in self.functions:
            self.functions[start_addr] = Function(start_addr)
        
        func = self.functions[start_addr]
        pc = start_addr
        instruction_count = 0
        
        while pc < len(self.data) and instruction_count < max_instructions:
            instruction, length, description = self.disassemble_instruction(pc)
            if instruction is None:
                break
            
            func.add_instruction(instruction)
            print(f"  ${pc:04x}: {instruction}")
            
            # Check for subroutine calls
            if self.data[pc] == 0xbd:  # JSR
                target = struct.unpack('>H', self.data[pc+1:pc+3])[0]
                func.add_call(target)
                print(f"    -> Calls ${target:04x}")
            
            # Check for returns
            if self.data[pc] == 0x39:  # RTS
                print(f"    -> Returns")
                break
            
            pc += length
            instruction_count += 1
        
        func.size = pc - start_addr
        print(f"Function size: {func.size} bytes")
        return func
    
    def find_strings(self):
        """Find ASCII strings in the ROM"""
        print("\n=== STRING ANALYSIS ===")
        
        current_string = ""
        start_addr = 0
        
        for i, byte in enumerate(self.data):
            if 32 <= byte <= 126:  # Printable ASCII
                if not current_string:
                    start_addr = i
                current_string += chr(byte)
            else:
                if len(current_string) >= 4:  # Minimum string length
                    self.strings.append((start_addr, current_string))
                    print(f"  ${start_addr:04x}: \"{current_string}\"")
                current_string = ""
        
        print(f"\nFound {len(self.strings)} strings")
        return self.strings
    
    def create_function_map(self):
        """Create a map of all identified functions"""
        print("\n=== FUNCTION MAP ===")
        
        # Analyze main entry point
        if 0x0000 in [addr for addr, _ in self.jump_table]:
            print("Main entry point found at 0x0000")
            self.analyze_function(0x0000, 20)
        
        # Analyze jump targets
        for addr, target in self.jump_table[:10]:  # First 10
            if target not in self.functions:
                print(f"\nAnalyzing jump target ${target:04x}")
                self.analyze_function(target, 30)
        
        # Analyze subroutine targets
        for addr, target in self.subroutines[:10]:  # First 10
            if target not in self.functions:
                print(f"\nAnalyzing subroutine ${target:04x}")
                self.analyze_function(target, 30)
    
    def generate_cpp_stubs(self):
        """Generate C++ function stubs for identified functions"""
        print("\n=== C++ FUNCTION STUBS ===")
        
        for addr, func in self.functions.items():
            print(f"\n// Function at ${addr:04x}")
            print(f"void function_{addr:04x}() {{")
            print(f"    // {func.size} bytes")
            if func.calls:
                print(f"    // Calls: {', '.join(f'${call:04x}' for call in func.calls)}")
            print("    // TODO: Implement")
            print("}")
    
    def full_analysis(self):
        """Perform complete ROM analysis"""
        print(f"=== COMPREHENSIVE ANALYSIS: {self.filename} ===")
        print(f"File size: {len(self.data)} bytes")
        
        self.find_jump_table()
        self.find_subroutines()
        self.find_strings()
        self.create_function_map()
        self.generate_cpp_stubs()

def main():
    if len(sys.argv) < 2:
        print("Usage: python3 comprehensive_analyzer.py <rom_file>")
        sys.exit(1)
    
    filename = sys.argv[1]
    analyzer = ROMAnalyzer(filename)
    analyzer.full_analysis()

if __name__ == "__main__":
    main()
