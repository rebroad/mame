#!/usr/bin/env python3
"""
Convert generated routine files to work with the CPU6809 integration
"""

import os
import re
from pathlib import Path

def convert_routine_file(input_file, output_file):
    """Convert a routine file to work with the wrapper"""
    
    with open(input_file, 'r') as f:
        content = f.read()
    
    # Extract function name from filename
    func_name = Path(input_file).stem.replace('routine_', '')
    
    # Convert the function signature and body
    new_content = f"""#include "cpu_6809.h"

namespace StarWars {{

void routine_{func_name}_impl(StarWarsCPU& cpu) {{
    // Converted from rom_disasm_auto_{func_name}.md
    // Address: 0x{func_name.upper()}

"""
    
    # Process the original content
    lines = content.split('\n')
    in_function = False
    
    for line in lines:
        if 'void StarWarsCPU::routine_' in line:
            in_function = True
            continue
        elif in_function and line.strip() == '}':
            break
        elif in_function and line.strip():
            # Convert state_ references to cpu.state_
            line = line.replace('state_.', 'cpu.state_.')
            # Convert function calls
            line = line.replace('write_memory(', 'cpu.write_memory(')
            line = line.replace('read_memory(', 'cpu.read_memory(')
            line = line.replace('write_memory16(', 'cpu.write_memory16(')
            line = line.replace('read_memory16(', 'cpu.read_memory16(')
            line = line.replace('zero_flag()', 'cpu.zero_flag()')
            line = line.replace('carry_flag()', 'cpu.carry_flag()')
            line = line.replace('negative_flag()', 'cpu.negative_flag()')
            line = line.replace('call_function(', 'cpu.call_function(')
            line = line.replace('return_from_function()', 'cpu.return_from_function()')
            line = line.replace('compare_a(', 'cpu.compare_a(')
            line = line.replace('compare_b(', 'cpu.compare_b(')
            line = line.replace('compare_x(', 'cpu.compare_x(')
            
            new_content += line + '\n'
    
    new_content += """}

} // namespace StarWars
"""
    
    with open(output_file, 'w') as f:
        f.write(new_content)

def main():
    """Convert all routine files"""
    
    src_dir = Path("/home/rebroad/src/mame/starwars_analysis/starwars_cpp_v2/src")
    
    # Find all routine_*.cpp files
    routine_files = list(src_dir.glob("routine_*.cpp"))
    
    print(f"Found {len(routine_files)} routine files to convert")
    
    for routine_file in routine_files:
        if routine_file.name == "rom_routines_wrapper.cpp":
            continue
            
        print(f"Converting {routine_file.name}")
        convert_routine_file(routine_file, routine_file)
    
    print("Conversion complete!")

if __name__ == "__main__":
    main()
