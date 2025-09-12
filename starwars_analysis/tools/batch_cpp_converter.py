#!/usr/bin/env python3
"""
Batch C++ Converter for Star Wars Disassembly

Converts all rom_disasm_auto_*.md files to C++ functions in one go.
"""

import subprocess
import os
from pathlib import Path

def convert_all_disassembly(input_dir, output_dir):
    """Convert all disassembly files to C++"""
    
    input_path = Path(input_dir)
    output_path = Path(output_dir)
    output_path.mkdir(exist_ok=True)
    
    # Find all rom_disasm_auto_*.md files
    disasm_files = list(input_path.glob("rom_disasm_auto_*.md"))
    
    if not disasm_files:
        print(f"No rom_disasm_auto_*.md files found in {input_dir}")
        return False
    
    print(f"Found {len(disasm_files)} disassembly files to convert")
    
    # Convert each file
    for disasm_file in disasm_files:
        # Extract address from filename (e.g., rom_disasm_auto_f261.md -> f261)
        addr = disasm_file.stem.replace('rom_disasm_auto_', '')
        
        # Create function name (e.g., f261 -> routine_f261)
        function_name = f"routine_{addr}"
        
        # Create output C++ file
        cpp_file = output_path / f"{function_name}.cpp"
        
        print(f"Converting {disasm_file.name} -> {cpp_file.name}")
        
        # Run the converter
        cmd = [
            "python3", 
            "/home/rebroad/src/mame/starwars_analysis/tools/disasm_to_cpp_converter.py",
            str(disasm_file),
            str(cpp_file),
            function_name
        ]
        
        try:
            result = subprocess.run(cmd, capture_output=True, text=True, check=True)
            print(f"  ✓ Success")
        except subprocess.CalledProcessError as e:
            print(f"  ✗ Error: {e}")
            print(f"  stderr: {e.stderr}")
    
    # Create a main header file that includes all functions
    create_main_header(output_path, disasm_files)
    
    print(f"\nConversion complete! C++ files saved to {output_path}")
    return True

def create_main_header(output_path, disasm_files):
    """Create a main header file that includes all converted functions"""
    
    header_file = output_path / "starwars_routines.h"
    
    with open(header_file, 'w') as f:
        f.write("#ifndef STARWARS_ROUTINES_H\n")
        f.write("#define STARWARS_ROUTINES_H\n\n")
        f.write("// Star Wars ROM Routines - Generated from Disassembly\n")
        f.write("// Address-perfect C++ implementations\n\n")
        
        for disasm_file in disasm_files:
            addr = disasm_file.stem.replace('rom_disasm_auto_', '')
            function_name = f"routine_{addr}"
            f.write(f"void {function_name}();  // Address 0x{addr.upper()}\n")
        
        f.write("\n#endif // STARWARS_ROUTINES_H\n")
    
    print(f"Created {header_file}")

if __name__ == "__main__":
    import sys
    
    if len(sys.argv) != 3:
        print("Usage: python3 batch_cpp_converter.py <input_dir> <output_dir>")
        sys.exit(1)
    
    input_dir = sys.argv[1]
    output_dir = sys.argv[2]
    
    success = convert_all_disassembly(input_dir, output_dir)
    sys.exit(0 if success else 1)
