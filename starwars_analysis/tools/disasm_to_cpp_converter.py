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
    'ORCC': 'cpu.m_cc |= {operand}',
    'CLR': 'cpu.write_memory({operand}, 0)',
    'LDA': 'cpu.m_a = cpu.read_memory({operand})',
    'STA': 'cpu.write_memory({operand}, cpu.m_a)',
    'LDB': 'cpu.m_b = cpu.read_memory({operand})',
    'STB': 'cpu.write_memory({operand}, cpu.m_b)',
    'LDD': 'cpu.m_d = cpu.read_memory16({operand})',
    'STD': 'cpu.write_memory16({operand}, cpu.m_d)',
    'LDX': 'cpu.m_x = cpu.read_memory16({operand})',
    'STX': 'cpu.write_memory16({operand}, cpu.m_x)',
    'LDY': 'cpu.m_y = cpu.read_memory16({operand})',
    'STY': 'cpu.write_memory16({operand}, cpu.m_y)',
    'LDU': 'cpu.m_u = cpu.read_memory16({operand})',
    'STU': 'cpu.write_memory16({operand}, cpu.m_u)',
    'LDS': 'cpu.m_sp = cpu.read_memory16({operand})',
    'STS': 'cpu.write_memory16({operand}, cpu.m_sp)',
    'TFR': 'cpu.m_{dest} = cpu.m_{src}',
    'LEAX': 'cpu.m_x += {operand}',
    'LEAY': 'cpu.m_y += {operand}',
    'LEAS': 'cpu.m_sp += {operand}',
    'LEAU': 'cpu.m_u += {operand}',
    'JMP': 'cpu.m_pc = {operand}',
    'JSR': 'cpu.call_function({operand})',
    'RTS': 'cpu.return_from_function()',
    'BRA': 'cpu.m_pc = {operand}',
    'BNE': 'if (!cpu.zero_flag()) cpu.m_pc = {operand}',
    'BEQ': 'if (cpu.zero_flag()) cpu.m_pc = {operand}',
    'BCS': 'if (cpu.carry_flag()) cpu.m_pc = {operand}',
    'BCC': 'if (!cpu.carry_flag()) cpu.m_pc = {operand}',
    'BMI': 'if (cpu.negative_flag()) cpu.m_pc = {operand}',
    'BPL': 'if (!cpu.negative_flag()) cpu.m_pc = {operand}',
    'BLE': 'if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = {operand}',
    'BGT': 'if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = {operand}',
    'BGE': 'if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = {operand}',
    'BLT': 'if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = {operand}',
    'CMPA': 'cpu.compare_a(cpu.read_memory({operand}))',
    'CMPB': 'cpu.compare_b(cpu.read_memory({operand}))',
    'CMPX': 'cpu.compare_x(cpu.read_memory16({operand}))',
    'ANDA': 'cpu.m_a &= {operand}',
    'ANDB': 'cpu.m_b &= {operand}',
    'ORA': 'cpu.m_a |= {operand}',
    'ORB': 'cpu.m_b |= {operand}',
    'EORA': 'cpu.m_a ^= {operand}',
    'EORB': 'cpu.m_b ^= {operand}',
    'ADDA': 'cpu.m_a += {operand}',
    'ADDB': 'cpu.m_b += {operand}',
    'ADDD': 'cpu.m_d += {operand}',
    'SUBA': 'cpu.m_a -= {operand}',
    'SUBB': 'cpu.m_b -= {operand}',
    'SUBD': 'cpu.m_d -= {operand}',
    'INCA': 'cpu.m_a++',
    'INCB': 'cpu.m_b++',
    'DECA': 'cpu.m_a--',
    'DECB': 'cpu.m_b--',
    'LSRA': 'cpu.m_a >>= 1',
    'LSRB': 'cpu.m_b >>= 1',
    'ASLA': 'cpu.m_a <<= 1',
    'ASLB': 'cpu.m_b <<= 1',
    'ROLA': 'cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0)',
    'ROLB': 'cpu.m_b = (cpu.m_b << 1) | (cpu.carry_flag() ? 1 : 0)',
    'RORA': 'cpu.m_a = (cpu.m_a >> 1) | (cpu.carry_flag() ? 0x80 : 0)',
    'RORB': 'cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0)',
    'COMA': 'cpu.m_a = ~cpu.m_a',
    'COMB': 'cpu.m_b = ~cpu.m_b',
    'NEGA': 'cpu.m_a = -cpu.m_a',
    'NEGB': 'cpu.m_b = -cpu.m_b',
    'TSTA': 'cpu.test_a()',
    'TSTB': 'cpu.test_b()',
    'CLRA': 'cpu.m_a = 0',
    'CLRB': 'cpu.m_b = 0',
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
                return f"cpu.m_{reg1.lower()},cpu.m_{reg2.lower()}"
            
            # Handle indexed addressing with offset
            if reg1.startswith('$') and reg2 in ['X', 'Y', 'U', 'S']:
                offset = reg1[1:]  # Remove $ prefix
                if reg2 == 'S':
                    return f"0x{offset.upper()},cpu.m_sp"
                return f"0x{offset.upper()},cpu.m_{reg2.lower()}"
            
            # Handle negative offsets
            if reg1.startswith('-$') and reg2 in ['X', 'Y', 'U', 'S']:
                offset = reg1[2:]  # Remove -$ prefix
                if reg2 == 'S':
                    return f"-0x{offset.upper()},cpu.m_sp"
                return f"-0x{offset.upper()},cpu.m_{reg2.lower()}"
            
            # Handle post-increment
            if reg2.endswith('++') or reg2.endswith('--'):
                reg = reg2[:-2]
                if reg in ['X', 'Y', 'U', 'S']:
                    if reg == 'S':
                        return f"cpu.m_sp{reg2[-2:]}"
                    return f"cpu.m_{reg.lower()}{reg2[-2:]}"
            
            # Handle pre-increment
            if reg1.endswith('++') or reg1.endswith('--'):
                reg = reg1[:-2]
                if reg in ['X', 'Y', 'U', 'S']:
                    if reg == 'S':
                        return f"cpu.m_sp{reg1[-2:]}"
                    return f"cpu.m_{reg.lower()}{reg1[-2:]}"
        
        # For complex cases, return TODO
        return f"// TODO: Complex indexed addressing: {operands}"
    
    # Handle register names
    if operands in ['A', 'B', 'D', 'X', 'Y', 'U', 'S', 'PC', 'CC', 'DP']:
        if operands == 'S':
            return "cpu.m_sp"  # S is the same as SP
        elif operands == 'DP':
            return "cpu.m_dp"  # DP is direct page register
        return f"cpu.m_{operands.lower()}"
    
    # Handle numeric values
    if operands.isdigit() or (operands.startswith('0x') and all(c in '0123456789ABCDEFabcdef' for c in operands[2:])):
        return operands
    
    # Handle post-increment/decrement
    if operands.endswith('++') or operands.endswith('--'):
        reg = operands[:-2]
        if reg in ['X', 'Y', 'U', 'S']:
            if reg == 'S':
                return f"cpu.m_sp{operands[-2:]}"
            return f"cpu.m_{reg.lower()}{operands[-2:]}"
    
    # For unrecognized cases, return TODO
    return f"// TODO: Unrecognized operand: {operands}"

def extract_branch_offset_from_line(disassembly_line):
    """Extract the actual byte offset from a disassembly line like 'ffe5: 20 31 BRA $0119'"""
    # Look for the pattern: address: opcode byte1 byte2 mnemonic target
    # Example: 'ffe5: 20 31 BRA $0119'
    import re
    match = re.match(r'^([0-9a-f]+):\s+([0-9a-f]{2})\s+([0-9a-f]{2})', disassembly_line, re.IGNORECASE)
    if match:
        # The second byte is the relative offset
        offset_hex = match.group(3)
        try:
            offset_unsigned = int(offset_hex, 16)
            # Convert to signed 8-bit value for 6809 branch instructions
            if offset_unsigned > 0x7F:
                offset = offset_unsigned - 0x100  # Convert to negative
            else:
                offset = offset_unsigned
            return offset
        except ValueError:
            return None
    return None

def parse_branch_operand(operands):
    """Parse branch operand as fallback when we can't extract from disassembly line"""
    # Parse the relative offset (e.g., "$0012" -> 0x12)
    if operands.startswith('$'):
        offset_str = operands[1:]  # Remove $ prefix
        try:
            # Parse as unsigned first
            offset_unsigned = int(offset_str, 16)
            # Convert to signed 8-bit value for 6809 branch instructions
            # Take only the low 8 bits and convert to signed
            offset_8bit = offset_unsigned & 0xFF
            if offset_8bit > 0x7F:
                offset = offset_8bit - 0x100  # Convert to negative
            else:
                offset = offset_8bit
            return offset
        except ValueError:
            return None
    return None

def convert_branch_instruction(mnemonic, operands, current_address, disassembly_line=None):
    """Convert branch instruction with relative offset to absolute address"""
    
    # Check if operands already contain an absolute address (e.g., "$0018", "$002D")
    if operands.startswith('$'):
        target_str = operands[1:]  # Remove $ prefix
        try:
            # If it's a valid hex address, use it directly
            target_address = int(target_str, 16)
            # Validate that it's within 16-bit range
            if target_address <= 0xFFFF:
                # Generate the appropriate branch code with the target address
                if mnemonic == 'BRA':
                    return f"    cpu.m_pc = 0x{target_address:04X};"
                elif mnemonic == 'BNE':
                    return f"    if (!cpu.zero_flag()) cpu.m_pc = 0x{target_address:04X};"
                elif mnemonic == 'BEQ':
                    return f"    if (cpu.zero_flag()) cpu.m_pc = 0x{target_address:04X};"
                elif mnemonic == 'BCS':
                    return f"    if (cpu.carry_flag()) cpu.m_pc = 0x{target_address:04X};"
                elif mnemonic == 'BCC':
                    return f"    if (!cpu.carry_flag()) cpu.m_pc = 0x{target_address:04X};"
                elif mnemonic == 'BMI':
                    return f"    if (cpu.negative_flag()) cpu.m_pc = 0x{target_address:04X};"
                elif mnemonic == 'BPL':
                    return f"    if (!cpu.negative_flag()) cpu.m_pc = 0x{target_address:04X};"
                elif mnemonic == 'BLE':
                    return f"    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x{target_address:04X};"
                elif mnemonic == 'BGT':
                    return f"    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x{target_address:04X};"
                elif mnemonic == 'BGE':
                    return f"    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x{target_address:04X};"
                elif mnemonic == 'BLT':
                    return f"    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x{target_address:04X};"
                else:
                    return f"    // TODO: Unsupported branch instruction: {mnemonic}"
            else:
                return f"    // TODO: Target address {target_address:04X} exceeds 16-bit range: {operands}"
        except ValueError:
            # If it's not a valid hex number, fall through to relative offset calculation
            pass
    
    # Try to extract the actual byte offset from the disassembly line first
    if disassembly_line:
        actual_offset = extract_branch_offset_from_line(disassembly_line)
        if actual_offset is not None:
            # Use the actual byte offset from the ROM
            offset = actual_offset
        else:
            # Fallback to parsing operands
            offset = parse_branch_operand(operands)
    else:
        # Fallback to parsing operands
        offset = parse_branch_operand(operands)
    
    if offset is None:
        return f"    // TODO: Invalid branch offset: {operands}"
    
    # Convert current_address from hex string to integer
    if isinstance(current_address, str):
        try:
            current_addr_int = int(current_address, 16)
        except ValueError:
            return f"    // TODO: Invalid address: {current_address}"
    else:
        current_addr_int = current_address
    
    # Calculate target address: current_address + offset + 2 (for the instruction size)
    # For 6809, branch instructions are 2 bytes, so we add 2 to get the address after the instruction
    target_address = current_addr_int + offset + 2
    
    # Generate the appropriate branch code
    if mnemonic == 'BRA':
        return f"    cpu.m_pc = 0x{target_address:04X};"
    elif mnemonic == 'BNE':
        return f"    if (!cpu.zero_flag()) cpu.m_pc = 0x{target_address:04X};"
    elif mnemonic == 'BEQ':
        return f"    if (cpu.zero_flag()) cpu.m_pc = 0x{target_address:04X};"
    elif mnemonic == 'BCS':
        return f"    if (cpu.carry_flag()) cpu.m_pc = 0x{target_address:04X};"
    elif mnemonic == 'BCC':
        return f"    if (!cpu.carry_flag()) cpu.m_pc = 0x{target_address:04X};"
    elif mnemonic == 'BMI':
        return f"    if (cpu.negative_flag()) cpu.m_pc = 0x{target_address:04X};"
    elif mnemonic == 'BPL':
        return f"    if (!cpu.negative_flag()) cpu.m_pc = 0x{target_address:04X};"
    elif mnemonic == 'BLE':
        return f"    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x{target_address:04X};"
    elif mnemonic == 'BGT':
        return f"    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x{target_address:04X};"
    elif mnemonic == 'BGE':
        return f"    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x{target_address:04X};"
    elif mnemonic == 'BLT':
        return f"    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x{target_address:04X};"
    else:
        return f"    // TODO: Unsupported branch instruction: {mnemonic}"

def convert_instruction(parsed, original_line=None):
    """Convert a parsed instruction to C++ code with robust handling"""
    mnemonic = parsed['mnemonic']
    operands = parsed['operands']
    address = parsed.get('address', 0)
    
    if mnemonic not in INSTRUCTION_MAP:
        return f"    // TODO: Convert {mnemonic} {operands}"
    
    # Handle branch instructions specially - convert relative offsets to absolute addresses
    branch_instructions = ['BRA', 'BNE', 'BEQ', 'BCS', 'BCC', 'BMI', 'BPL', 'BLE', 'BGT', 'BGE', 'BLT']
    if mnemonic in branch_instructions:
        return convert_branch_instruction(mnemonic, operands, address, original_line)
    
    # Handle immediate values differently from memory addressing
    is_immediate = operands.startswith('#')
    
    # For immediate values, use direct assignment
    if is_immediate and mnemonic in ['LDA', 'LDB', 'LDD', 'LDX', 'LDY', 'LDU', 'LDS', 'CMPA', 'CMPB', 'CMPX']:
        cpp_operand = convert_operand(operands, mnemonic)
        if mnemonic in ['LDA', 'LDB']:
            return f"    cpu.m_{mnemonic[2].lower()} = {cpp_operand};"
        elif mnemonic == 'LDS':
            return f"    cpu.m_sp = {cpp_operand};"  # S register maps to sp
        elif mnemonic in ['CMPA', 'CMPB']:
            return f"    cpu.compare_{mnemonic[3].lower()}({cpp_operand});"
        elif mnemonic == 'CMPX':
            return f"    cpu.compare_x({cpp_operand});"
        else:  # LDD, LDX, LDY, LDU
            return f"    cpu.m_{mnemonic[2:].lower()} = {cpp_operand};"
    
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
        return f"    cpu.m_{dest.lower()} = cpu.m_{src.lower()};"
    
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
    cpp_lines.append(f'void {function_name}_impl(CPU6809& cpu) {{')
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
        cpp_code = convert_instruction(parsed, line)
        cpp_lines.append(cpp_code)
        cpp_lines.append('')
    
    cpp_lines.append('}')
    cpp_lines.append('')
    cpp_lines.append('} // namespace StarWars')
    
    # Generate new content
    new_content = '\n'.join(cpp_lines)
    
    # Check if file exists and read existing content
    existing_content = None
    if output_file.exists():
        with open(output_file, 'r') as f:
            existing_content = f.read()
    
    # Only write if content has changed
    if existing_content != new_content:
        with open(output_file, 'w') as f:
            f.write(new_content)
        print(f"✓ Updated {input_file} -> {output_file}")
        return True  # File was updated
    else:
        print(f"⏭️  Skipped {input_file} -> {output_file} (no changes)")
        return False  # File was not updated

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
