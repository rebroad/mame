#!/usr/bin/env python3
"""
Regenerate all routine files using the improved converter
"""

import subprocess
import os
from pathlib import Path

def regenerate_all_routines():
    """Regenerate all routine files with improved converter"""
    
    script_dir = Path(__file__).parent
    project_root = script_dir.parent
    disasm_dir = project_root / "disassembly"
    output_dir = project_root / "starwars_cpp_v2" / "src"
    converter = script_dir / "disasm_to_cpp_converter.py"
    
    # Find all rom_disasm_*.md files
    disasm_files = list(disasm_dir.glob("rom_disasm_*.md"))
    
    if not disasm_files:
        print("No rom_disasm_*.md files found")
        return False
    
    print(f"Found {len(disasm_files)} disassembly files to convert")
    
    # Convert each file
    for disasm_file in disasm_files:
        # Extract address from filename (e.g., rom_disasm_f261.md -> f261)
        addr = disasm_file.stem.replace('rom_disasm_', '')
        
        # Create function name (e.g., f261 -> routine_f261)
        function_name = f"routine_{addr}"
        
        # Create output C++ file
        cpp_file = output_dir / f"{function_name}.cpp"
        
        print(f"Converting {disasm_file.name} -> {cpp_file.name}")
        
        # Run the improved converter
        cmd = [
            "python3", 
            str(converter),
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
    
    print(f"\nRegeneration complete! C++ files saved to {output_dir}")
    return True

if __name__ == "__main__":
    regenerate_all_routines()
