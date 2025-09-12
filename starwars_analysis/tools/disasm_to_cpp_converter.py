#!/usr/bin/env python3
"""
Robust Disassembly to C++ Converter

This tool converts rom_disasm_auto_*.md files to C++ function implementations,
handling complex 6809 addressing modes and generating proper C++ syntax.
"""

import argparse
import re
from pathlib import Path

# 6809 instruction to C++ mapping (robust)
INSTRUCTION_MAP = {
    'ORCC': 'cpu.state_.cc |= {operand}',
    'CLR': 'cpu.write_memory({operand}, 0)',
    'LDA': 'cpu.state_.a = cpu.read_memory({operand})',
    'STA': 'cpu.write_memory({operand}, cpu.state_.a)',
    'LDB': 'cpu.state_.b = cpu.read_memory({operand})',
    'STB': 'cpu.write_memory({operand}, cpu.state_.b)',
    'LDD': 'cpu.state_.d = cpu.read_memory_word({operand})',
    'STD': 'cpu.write_memory({operand}, cpu.state_.d)',
    'LDX': 'cpu.state_.x = cpu.read_memory_word({operand})',
    'STX': 'cpu.write_memory({operand}, cpu.state_.x)',
    'LDY': 'cpu.state_.y = cpu.read_memory_word({operand})',
    'STY': 'cpu.write_memory({operand}, cpu.state_.y)',
    'LDU': 'cpu.state_.u = cpu.read_memory_word({operand})',
    'STU': 'cpu.write_memory({operand}, cpu.state_.u)',
    'LDS': 'cpu.state_.sp = cpu.read_memory_word({operand})',
    'STS': 'cpu.write_memory({operand}, cpu.state_.sp)',
    'TFR': 'cpu.state_.{dest} = cpu.state_.{src}',
    'LEAX': 'cpu.state_.x += {operand}',
    'LEAY': 'cpu.state_.y += {operand}',
    'LEAS': 'cpu.state_.sp += {operand}',
    'LEAU': 'cpu.state_.u += {operand}',
    'JMP': 'cpu.state_.pc = {operand}',
    'JSR': 'cpu.call_function({operand})',
    'RTS': 'cpu.return_from_function()',
    'BRA': 'cpu.state_.pc += {operand}',
    'BNE': 'if (!cpu.zero_flag()) cpu.state_.pc += {operand}',
    'BEQ': 'if (cpu.zero_flag()) cpu.state_.pc += {operand}',
    'BCS': 'if (cpu.carry_flag()) cpu.state_.pc += {operand}',
    'BCC': 'if (!cpu.carry_flag()) cpu.state_.pc += {operand}',
    'BMI': 'if (cpu.negative_flag()) cpu.state_.pc += {operand}',
    'BPL': 'if (!cpu.negative_flag()) cpu.state_.pc += {operand}',
    'CMPA': 'cpu.compare_a(cpu.read_memory({operand}))',
    'CMPB': 'cpu.compare_b(cpu.read_memory({operand}))',
    'CMPX': 'cpu.compare_x(cpu.read_memory_word({operand}))',
    'ANDA': 'cpu.state_.a &= {operand}',
    'ANDB': 'cpu.state_.b &= {operand}',
    'ORA': 'cpu.state_.a |= {operand}',
    'ORB': 'cpu.state_.b |= {operand}',
    'EORA': 'cpu.state_.a ^= {operand}',
    'EORB': 'cpu.state_.b ^= {operand}',
    'ADDA': 'cpu.state_.a += {operand}',
    'ADDB': 'cpu.state_.b += {operand}',
    'ADDD': 'cpu.state_.d += {operand}',
    'SUBA': 'cpu.state_.a -= {operand}',
    'SUBB': 'cpu.state_.b -= {operand}',
    'SUBD': 'cpu.state_.d -= {operand}',
    'INCA': 'cpu.state_.a++',
    'INCB': 'cpu.state_.b++',
    'DECA': 'cpu.state_.a--',
    'DECB': 'cpu.state_.b--',
    'LSRA': 'cpu.state_.a >>= 1',
    'LSRB': 'cpu.state_.b >>= 1',
    'ASLA': 'cpu.state_.a <<= 1',
    'ASLB': 'cpu.state_.b <<= 1',
    'ROLA': 'cpu.state_.a = (cpu.state_.a << 1) | (cpu.carry_flag() ? 1 : 0)',
    'ROLB': 'cpu.state_.b = (cpu.state_.b << 1) | (cpu.carry_flag() ? 1 : 0)',
    'RORA': 'cpu.state_.a = (cpu.state_.a >> 1) | (cpu.carry_flag() ? 0x80 : 0)',
    'RORB': 'cpu.state_.b = (cpu.state_.b >> 1) | (cpu.carry_flag() ? 0x80 : 0)',
    'COMA': 'cpu.state_.a = ~cpu.state_.a',
    'COMB': 'cpu.state_.b = ~cpu.state_.b',
    'NEGA': 'cpu.state_.a = -cpu.state_.a',
    'NEGB': 'cpu.state_.b = -cpu.state_.b',
    'TSTA': 'cpu.test_a()',
    'TSTB': 'cpu.test_b()',
    'CLRA': 'cpu.state_.a = 0',
    'CLRB': 'cpu.state_.b = 0',
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
    """Convert 6809 operand to C++ expression with robust handling"""
    if not operands:
        return ""
    
    # Handle immediate values
    if operands.startswith('#$'):
        value = operands[2:]  # Remove #$ prefix
        return f"0x{value.upper()}"
    
    # Handle direct page addressing
    if operands.startswith('<'):
        value = operands[1:]  # Remove < prefix
        # Handle cases like <$AD -> 0xAD
        if value.startswith('$'):
            value = value[1:]  # Remove $ prefix
        return f"0x{value.upper()}"
    
    # Handle extended addressing
    if operands.startswith('>'):
        value = operands[1:]  # Remove > prefix
        # Handle cases like >$4706 -> 0x4706
        if value.startswith('$'):
            value = value[1:]  # Remove $ prefix
        return f"0x{value.upper()}"
    
    # Handle simple $ prefix
    if operands.startswith('$') and not operands.startswith('$x'):
        value = operands[1:]  # Remove $ prefix
        # Handle cases like $AD -> 0xAD
        if value.startswith('$'):
            value = value[1:]  # Remove second $ if present
        return f"0x{value.upper()}"
    
    # Handle indexed addressing - complex cases
    if ',' in operands:
        # Handle simple indexed addressing like "A,X" or "B,Y"
        parts = operands.split(',')
        if len(parts) == 2:
            reg1, reg2 = parts[0].strip(), parts[1].strip()
            
            # Handle register-to-register transfers
            if reg1 in ['A', 'B', 'D', 'X', 'Y', 'U', 'S'] and reg2 in ['A', 'B', 'D', 'X', 'Y', 'U', 'S']:
                return f"cpu.state_.{reg1.lower()},cpu.state_.{reg2.lower()}"
            
            # Handle indexed addressing with offset
            if reg1.startswith('$') and reg2 in ['X', 'Y', 'U', 'S']:
                offset = reg1[1:]  # Remove $ prefix
                if reg2 == 'S':
                    return f"0x{offset.upper()},cpu.state_.sp"
                return f"0x{offset.upper()},cpu.state_.{reg2.lower()}"
            
            # Handle negative offsets
            if reg1.startswith('-$') and reg2 in ['X', 'Y', 'U', 'S']:
                offset = reg1[2:]  # Remove -$ prefix
                if reg2 == 'S':
                    return f"-0x{offset.upper()},cpu.state_.sp"
                return f"-0x{offset.upper()},cpu.state_.{reg2.lower()}"
            
            # Handle post-increment
            if reg2.endswith('++') or reg2.endswith('--'):
                reg = reg2[:-2]
                if reg in ['X', 'Y', 'U', 'S']:
                    return f"cpu.state_.{reg.lower()}{reg2[-2:]}"
            
            # Handle pre-increment
            if reg1.endswith('++') or reg1.endswith('--'):
                reg = reg1[:-2]
                if reg in ['X', 'Y', 'U', 'S']:
                    return f"cpu.state_.{reg.lower()}{reg1[-2:]}"
        
        # For complex cases, return TODO
        return f"// TODO: Complex indexed addressing: {operands}"
    
    # Handle register names
    if operands in ['A', 'B', 'D', 'X', 'Y', 'U', 'S', 'PC', 'CC', 'DP']:
        if operands == 'S':
            return "cpu.state_.sp"  # S is the same as SP
        elif operands == 'DP':
            return "cpu.state_.dp"  # DP is direct page register
        return f"cpu.state_.{operands.lower()}"
    
    # Handle numeric values
    if operands.isdigit() or (operands.startswith('0x') and all(c in '0123456789ABCDEFabcdef' for c in operands[2:])):
        return operands
    
    # Handle post-increment/decrement
    if operands.endswith('++') or operands.endswith('--'):
        reg = operands[:-2]
        if reg in ['X', 'Y', 'U', 'S']:
            return f"cpu.state_.{reg.lower()}{operands[-2:]}"
    
    # For unrecognized cases, return TODO
    return f"// TODO: Unrecognized operand: {operands}"

def convert_instruction(parsed):
    """Convert a parsed instruction to C++ code with robust handling"""
    mnemonic = parsed['mnemonic']
    operands = parsed['operands']
    
    if mnemonic not in INSTRUCTION_MAP:
        return f"    // TODO: Convert {mnemonic} {operands}"
    
    # Handle immediate values differently from memory addressing
    is_immediate = operands.startswith('#')
    
    # For immediate values, use direct assignment
    if is_immediate and mnemonic in ['LDA', 'LDB', 'LDD', 'LDX', 'LDY', 'LDU', 'LDS', 'CMPA', 'CMPB', 'CMPX']:
        cpp_operand = convert_operand(operands, mnemonic)
        if mnemonic in ['LDA', 'LDB']:
            return f"    cpu.state_.{mnemonic[2].lower()} = {cpp_operand};"
        elif mnemonic == 'LDS':
            return f"    cpu.state_.sp = {cpp_operand};"  # S register maps to sp
        elif mnemonic in ['CMPA', 'CMPB']:
            return f"    cpu.compare_{mnemonic[3].lower()}({cpp_operand});"
        elif mnemonic == 'CMPX':
            return f"    cpu.compare_x({cpp_operand});"
        else:  # LDD, LDX, LDY, LDU
            return f"    cpu.state_.{mnemonic[2:].lower()} = {cpp_operand};"
    
    cpp_template = INSTRUCTION_MAP[mnemonic]
    cpp_operand = convert_operand(operands, mnemonic)
    
    # Handle special cases
    if mnemonic == 'TFR' and ',' in operands:
        src, dest = operands.split(',')
        src = src.strip()
        dest = dest.strip()
        # Handle S register mapping
        if src == 'S':
            src = 'sp'
        if dest == 'S':
            dest = 'sp'
        return f"    cpu.state_.{dest.lower()} = cpu.state_.{src.lower()};"
    
    # Handle indexed addressing for memory operations
    if ',' in cpp_operand and mnemonic in ['STA', 'STB', 'STD', 'STX', 'STY', 'STU', 'STS']:
        # For now, simplify indexed addressing
        return f"    // TODO: Handle indexed addressing: {mnemonic} {operands}"
    
    # Handle comma operator issues (e.g., "cpu.state_.u += -0x1,cpu.state_.u")
    if ',' in cpp_operand and not cpp_operand.startswith('// TODO:'):
        # This is likely a malformed expression, convert to TODO
        return f"    // TODO: Fix comma operator: {mnemonic} {operands}"
    
    # Handle complex addressing modes
    if cpp_operand.startswith('// TODO:'):
        return f"    {cpp_operand}"
    
    # Replace operand placeholder
    cpp_code = cpp_template.format(operand=cpp_operand)
    
    return f"    {cpp_code};"

def convert_disassembly_file(input_file, output_file, function_name):
    """Convert a disassembly file to C++ function"""
    
    with open(input_file, 'r') as f:
        lines = f.readlines()
    
    cpp_lines = []
    cpp_lines.append('#include "cpu_6809.h"')
    cpp_lines.append('')
    cpp_lines.append('namespace StarWars {')
    cpp_lines.append('')
    cpp_lines.append(f'void {function_name}_impl(StarWarsCPU& cpu) {{')
    cpp_lines.append(f'    // Converted from {input_file.name}')
    cpp_lines.append(f'    // Address: 0x{function_name.upper().replace("ROUTINE_", "")}')
    cpp_lines.append('')
    
    for line in lines:
        line = line.strip()
        if not line:
            continue
        
        parsed = parse_disassembly_line(line)
        if not parsed:
            continue
        
        # Add comment with original assembly
        cpp_lines.append(f'    // {parsed["address"]}: {parsed["mnemonic"]} {parsed["operands"]}')
        
        # Add C++ conversion
        cpp_code = convert_instruction(parsed)
        cpp_lines.append(cpp_code)
        cpp_lines.append('')
    
    cpp_lines.append('}')
    cpp_lines.append('')
    cpp_lines.append('} // namespace StarWars')
    
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
