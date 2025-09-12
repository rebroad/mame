#!/usr/bin/env python3
"""
Disassembly to C++ Converter

This tool converts rom_disasm_auto_*.md files to C++ function implementations,
maintaining address-perfect mapping and preserving the original game logic.
"""

import argparse
import re
from pathlib import Path

# 6809 instruction to C++ mapping
INSTRUCTION_MAP = {
    'ORCC': 'state_.cc |= {operand}',
    'CLR': 'write_memory({operand}, 0)',
    'LDA': 'state_.a = {operand}',
    'STA': 'write_memory({operand}, state_.a)',
    'LDB': 'state_.b = {operand}',
    'STB': 'write_memory({operand}, state_.b)',
    'LDD': 'state_.d = {operand}',
    'STD': 'write_memory({operand}, state_.d)',
    'LDX': 'state_.x = {operand}',
    'STX': 'write_memory({operand}, state_.x)',
    'LDY': 'state_.y = {operand}',
    'STY': 'write_memory({operand}, state_.y)',
    'LDU': 'state_.u = {operand}',
    'STU': 'write_memory({operand}, state_.u)',
    'LDS': 'state_.sp = {operand}',
    'STS': 'write_memory({operand}, state_.sp)',
    'TFR': 'state_.{dest} = state_.{src}',
    'LEAX': 'state_.x += {operand}',
    'LEAY': 'state_.y += {operand}',
    'LEAS': 'state_.sp += {operand}',
    'LEAU': 'state_.u += {operand}',
    'JMP': 'state_.pc = {operand}',
    'JSR': 'call_function({operand})',
    'RTS': 'return_from_function()',
    'BRA': 'state_.pc += {operand}',
    'BNE': 'if (!zero_flag()) state_.pc += {operand}',
    'BEQ': 'if (zero_flag()) state_.pc += {operand}',
    'BCS': 'if (carry_flag()) state_.pc += {operand}',
    'BCC': 'if (!carry_flag()) state_.pc += {operand}',
    'BMI': 'if (negative_flag()) state_.pc += {operand}',
    'BPL': 'if (!negative_flag()) state_.pc += {operand}',
    'CMPA': 'compare_a({operand})',
    'CMPB': 'compare_b({operand})',
    'CMPX': 'compare_x({operand})',
    'ANDA': 'state_.a &= {operand}',
    'ANDB': 'state_.b &= {operand}',
    'ORA': 'state_.a |= {operand}',
    'ORB': 'state_.b |= {operand}',
    'EORA': 'state_.a ^= {operand}',
    'EORB': 'state_.b ^= {operand}',
    'ADDA': 'state_.a += {operand}',
    'ADDB': 'state_.b += {operand}',
    'ADDD': 'state_.d += {operand}',
    'SUBA': 'state_.a -= {operand}',
    'SUBB': 'state_.b -= {operand}',
    'SUBD': 'state_.d -= {operand}',
    'INCA': 'state_.a++',
    'INCB': 'state_.b++',
    'DECA': 'state_.a--',
    'DECB': 'state_.b--',
    'LSRA': 'state_.a >>= 1',
    'LSRB': 'state_.b >>= 1',
    'ASLA': 'state_.a <<= 1',
    'ASLB': 'state_.b <<= 1',
    'ROLA': 'state_.a = (state_.a << 1) | (carry_flag() ? 1 : 0)',
    'ROLB': 'state_.b = (state_.b << 1) | (carry_flag() ? 1 : 0)',
    'RORA': 'state_.a = (state_.a >> 1) | (carry_flag() ? 0x80 : 0)',
    'RORB': 'state_.b = (state_.b >> 1) | (carry_flag() ? 0x80 : 0)',
    'COMA': 'state_.a = ~state_.a',
    'COMB': 'state_.b = ~state_.b',
    'NEGA': 'state_.a = -state_.a',
    'NEGB': 'state_.b = -state_.b',
    'TSTA': 'test_a()',
    'TSTB': 'test_b()',
    'CLRA': 'state_.a = 0',
    'CLRB': 'state_.b = 0',
    'NOP': '// NOP',
}

def parse_disassembly_line(line):
    """Parse a disassembly line and extract instruction info"""
    # Format: "f261: 1a 10           ORCC   #$10"
    match = re.match(r'^([0-9a-fA-F]{4}):\s+([0-9a-fA-F\s]+)\s+(\w+)\s+(.*)$', line)
    if not match:
        return None
    
    addr = match.group(1).upper()
    bytes_str = match.group(2).strip()
    mnemonic = match.group(3).upper()
    operands = match.group(4).strip()
    
    return {
        'address': addr,
        'bytes': bytes_str,
        'mnemonic': mnemonic,
        'operands': operands
    }

def convert_operand(operands, mnemonic):
    """Convert 6809 operand to C++ expression"""
    if not operands:
        return ""
    
    # Handle immediate values
    if operands.startswith('#$'):
        return operands[2:]  # Remove #$ prefix
    
    # Handle direct page addressing
    if operands.startswith('<'):
        return operands[1:]  # Remove < prefix
    
    # Handle extended addressing
    if operands.startswith('>'):
        return operands[1:]  # Remove > prefix
    
    # Handle indexed addressing
    if ',' in operands:
        # TODO: Handle complex indexed addressing
        return operands
    
    # Handle relative addressing
    if operands.startswith('$'):
        return operands[1:]  # Remove $ prefix
    
    return operands

def convert_instruction(parsed):
    """Convert a parsed instruction to C++ code"""
    mnemonic = parsed['mnemonic']
    operands = parsed['operands']
    
    if mnemonic not in INSTRUCTION_MAP:
        return f"    // TODO: Convert {mnemonic} {operands}"
    
    cpp_template = INSTRUCTION_MAP[mnemonic]
    cpp_operand = convert_operand(operands, mnemonic)
    
    # Handle special cases
    if mnemonic == 'TFR' and ',' in operands:
        src, dest = operands.split(',')
        return f"    state_.{dest.strip()} = state_.{src.strip()};"
    
    # Replace operand placeholder
    cpp_code = cpp_template.format(operand=cpp_operand)
    
    return f"    {cpp_code};"

def convert_disassembly_file(input_file, output_file, function_name):
    """Convert a disassembly file to C++ function"""
    
    with open(input_file, 'r') as f:
        lines = f.readlines()
    
    cpp_lines = []
    cpp_lines.append(f"void StarWarsCPU::{function_name}() {{")
    cpp_lines.append(f"    // Converted from {input_file.name}")
    cpp_lines.append(f"    // Address: 0x{function_name.upper()}")
    cpp_lines.append("")
    
    for line in lines:
        line = line.strip()
        if not line:
            continue
        
        parsed = parse_disassembly_line(line)
        if not parsed:
            continue
        
        # Add comment with original assembly
        cpp_lines.append(f"    // {parsed['address']}: {parsed['mnemonic']} {parsed['operands']}")
        
        # Add C++ conversion
        cpp_code = convert_instruction(parsed)
        cpp_lines.append(cpp_code)
        cpp_lines.append("")
    
    cpp_lines.append("}")
    
    with open(output_file, 'w') as f:
        f.write('\n'.join(cpp_lines))
    
    print(f"✓ Converted {input_file} -> {output_file}")

def main():
    parser = argparse.ArgumentParser(description="Convert disassembly files to C++ functions")
    parser.add_argument("input_file", help="Input disassembly file (rom_disasm_auto_*.md)")
    parser.add_argument("output_file", help="Output C++ file")
    parser.add_argument("function_name", help="C++ function name")
    
    args = parser.parse_args()
    
    input_path = Path(args.input_file)
    output_path = Path(args.output_file)
    
    if not input_path.exists():
        print(f"ERROR: Input file not found: {input_path}")
        return 1
    
    convert_disassembly_file(input_path, output_path, args.function_name)
    return 0

if __name__ == "__main__":
    exit(main())
