#!/usr/bin/env python3
"""
Fix generated routine files to have proper C++ syntax
"""

import os
import re
from pathlib import Path

def fix_routine_file(file_path):
    """Fix a single routine file"""
    
    with open(file_path, 'r') as f:
        content = f.read()
    
    # Fix common assembly syntax issues
    fixes = [
        # Fix register names (A, B, X, Y, U, S, D, PC, CC, DP)
        (r'\bA\b', 'cpu.state_.a'),
        (r'\bB\b', 'cpu.state_.b'),
        (r'\bX\b', 'cpu.state_.x'),
        (r'\bY\b', 'cpu.state_.y'),
        (r'\bU\b', 'cpu.state_.u'),
        (r'\bS\b', 'cpu.state_.sp'),
        (r'\bD\b', 'cpu.state_.d'),
        (r'\bPC\b', 'cpu.state_.pc'),
        (r'\bCC\b', 'cpu.state_.cc'),
        (r'\bDP\b', 'cpu.state_.dp'),
        
        # Fix addressing modes
        (r'\$([0-9A-Fa-f]+)', r'0x\1'),  # $1234 -> 0x1234
        (r'#\$([0-9A-Fa-f]+)', r'0x\1'),  # #$12 -> 0x12
        (r'#([0-9]+)', r'\1'),  # #123 -> 123
        
        # Fix indexed addressing
        (r'([A-Z]),([A-Z])\+\+', r'\1,\2++'),  # A,Y++ -> A,Y++
        (r'([A-Z]),([A-Z])--', r'\1,\2--'),    # A,Y-- -> A,Y--
        (r'([A-Z]),([A-Z])', r'\1,\2'),        # A,Y -> A,Y
        
        # Fix branch targets (convert labels to relative addresses)
        (r'([A-Fa-f0-9]{4})', lambda m: f'0x{m.group(1).upper()}'),
        
        # Fix memory addressing
        (r'write_memory\(([^,]+),([^)]+)\)', r'cpu.write_memory(\1, \2)'),
        (r'read_memory\(([^)]+)\)', r'cpu.read_memory(\1)'),
        
        # Fix function calls
        (r'call_function\(([^)]+)\)', r'cpu.call_function(\1)'),
        (r'return_from_function\(\)', r'cpu.return_from_function()'),
        
        # Fix condition checks
        (r'zero_flag\(\)', r'cpu.zero_flag()'),
        (r'carry_flag\(\)', r'cpu.carry_flag()'),
        (r'negative_flag\(\)', r'cpu.negative_flag()'),
        
        # Fix comparisons
        (r'compare_a\(([^)]+)\)', r'cpu.compare_a(\1)'),
        (r'compare_b\(([^)]+)\)', r'cpu.compare_b(\1)'),
        (r'compare_x\(([^)]+)\)', r'cpu.compare_x(\1)'),
        
        # Fix arithmetic operations
        (r'([A-Za-z_]+)\s*\+=\s*([^;]+)', r'\1 += \2'),
        (r'([A-Za-z_]+)\s*-=\s*([^;]+)', r'\1 -= \2'),
        (r'([A-Za-z_]+)\s*&=\s*([^;]+)', r'\1 &= \2'),
        (r'([A-Za-z_]+)\s*\|=\s*([^;]+)', r'\1 |= \2'),
        (r'([A-Za-z_]+)\s*=\s*([^;]+)', r'\1 = \2'),
        
        # Fix syntax errors
        (r'cpu\.state_\.([A-Z])', r'cpu.state_.\1'),  # Fix case
        (r'([A-Za-z_]+)\s*=\s*([A-Za-z_]+),([A-Za-z_]+)', r'\1 = \2,\3'),  # Fix comma syntax
        (r'write_memory\(,([^,]+),([^)]+)\)', r'cpu.write_memory(0, \1, \2)'),  # Fix empty address
    ]
    
    # Apply fixes
    for pattern, replacement in fixes:
        if callable(replacement):
            content = re.sub(pattern, replacement, content)
        else:
            content = re.sub(pattern, replacement, content)
    
    # Fix specific syntax issues
    content = content.replace('cpu.state_.B', 'cpu.state_.b')
    content = content.replace('cpu.state_.A', 'cpu.state_.a')
    content = content.replace('cpu.state_.X', 'cpu.state_.x')
    content = content.replace('cpu.state_.Y', 'cpu.state_.y')
    content = content.replace('cpu.state_.U', 'cpu.state_.u')
    content = content.replace('cpu.state_.S', 'cpu.state_.sp')
    content = content.replace('cpu.state_.D', 'cpu.state_.d')
    content = content.replace('cpu.state_.PC', 'cpu.state_.pc')
    content = content.replace('cpu.state_.CC', 'cpu.state_.cc')
    content = content.replace('cpu.state_.DP', 'cpu.state_.dp')
    
    # Fix branch targets (convert to relative addresses)
    content = re.sub(r'cpu\.state_\.pc \+= ([A-Fa-f0-9]{4})', r'cpu.state_.pc += 0x\1', content)
    content = re.sub(r'cpu\.state_\.pc = ([A-Fa-f0-9]{4})', r'cpu.state_.pc = 0x\1', content)
    
    # Fix memory addresses
    content = re.sub(r'write_memory\(([A-Fa-f0-9]{4})', r'write_memory(0x\1', content)
    content = re.sub(r'read_memory\(([A-Fa-f0-9]{4})', r'read_memory(0x\1', content)
    
    # Fix immediate values
    content = re.sub(r'= ([A-Fa-f0-9]{2})', r'= 0x\1', content)
    content = re.sub(r'= ([A-Fa-f0-9]{4})', r'= 0x\1', content)
    
    # Fix TODO comments
    content = re.sub(r'// TODO: Convert ([^\\n]+)', r'// TODO: Convert \1', content)
    
    with open(file_path, 'w') as f:
        f.write(content)

def main():
    """Fix all routine files"""
    
    src_dir = Path("/home/rebroad/src/mame/starwars_analysis/starwars_cpp_v2/src")
    
    # Find all routine_*.cpp files
    routine_files = list(src_dir.glob("routine_*.cpp"))
    
    print(f"Found {len(routine_files)} routine files to fix")
    
    for routine_file in routine_files:
        if routine_file.name == "rom_routines_wrapper.cpp":
            continue
            
        print(f"Fixing {routine_file.name}")
        fix_routine_file(routine_file)
    
    print("Fixing complete!")

if __name__ == "__main__":
    main()
