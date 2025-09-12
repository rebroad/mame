#!/usr/bin/env python3
"""
Hot Reload Routines Tool

This tool automatically processes unknown addresses and regenerates the routine map
so the simulator can be restarted with new routines without manual intervention.
"""

import os
import sys
import time
import subprocess
from pathlib import Path
from build_updater import update_build_files

def process_unknown_addresses(project_root):
    """Process all unknown addresses and generate new routines"""
    project_path = Path(project_root)
    unknown_file = project_path / "unknown_addresses.txt"

    if not unknown_file.exists():
        print("No unknown_addresses.txt found")
        return

    # Read unknown addresses
    unknown_addresses = []
    with open(unknown_file, 'r') as f:
        for line in f:
            line = line.strip()
            if line.startswith('0x'):
                addr = int(line, 16)
                unknown_addresses.append(addr)

    if not unknown_addresses:
        print("No unknown addresses to process")
        return

    print(f"Processing {len(unknown_addresses)} unknown addresses...")

    # Process each address
    new_routines = []
    for addr in unknown_addresses:
        addr_str = f"{addr:04X}".lower()
        print(f"Processing 0x{addr:04X}...")

        # Check if routine already exists
        routine_file = project_path / "starwars_cpp_v2" / "src" / f"routine_{addr_str}.cpp"
        if routine_file.exists():
            print(f"  Routine already exists, skipping")
            continue

        # Disassemble
        print(f"  Disassembling...")
        disasm_cmd = [
            sys.executable, "tools/automated_disassembler.py",
            "--input", "complete_memory_map.bin",
            "--output-dir", "disassembly",
            "--addr", f"0x{addr:04X}",
            "--name", addr_str
        ]

        result = subprocess.run(disasm_cmd, cwd=project_path,
                              capture_output=True, text=True)
        if result.returncode != 0:
            print(f"    ❌ Disassembly failed: {result.stderr}")
            continue

        # Convert to C++ directly into src directory
        print(f"  Converting to C++...")
        disasm_file = project_path / "disassembly" / f"rom_disasm_{addr_str}.md"
        cpp_file = project_path / "starwars_cpp_v2" / "src" / f"routine_{addr_str}.cpp"
        function_name = f"routine_{addr_str}_impl"
        convert_cmd = [
            sys.executable, "tools/disasm_to_cpp_converter.py",
            str(disasm_file),
            str(cpp_file),
            function_name
        ]

        result = subprocess.run(convert_cmd, cwd=project_path,
                              capture_output=True, text=True)
        if result.returncode != 0:
            print(f"    ❌ C++ conversion failed: {result.stderr}")
            continue

        if cpp_file.exists():
            print(f"    ✅ Routine created: {cpp_file}")
            new_routines.append(addr_str)
        else:
            print(f"    ❌ C++ file not created")

    if new_routines:
        print(f"\nGenerated {len(new_routines)} new routines:")
        for routine in new_routines:
            print(f"  - routine_{routine}.cpp")

        # Update build files using shared function
        update_build_files(project_path, new_routines)

        print(f"\n✅ All files updated automatically!")
        print(f"Ready to rebuild the simulator with new routines.")

    # Clear the unknown addresses file
    unknown_file.unlink()
    print(f"\nCleared unknown_addresses.txt")

# Build update functions moved to shared build_updater.py module

def main():
    # Auto-detect project root by looking for starwars_cpp_v2 directory
    script_dir = Path(__file__).parent
    project_root = script_dir.parent  # Go up one level from tools/ to starwars_analysis/

    # Verify we found the right directory
    if not (project_root / "starwars_cpp_v2").exists():
        print(f"Error: Could not find starwars_cpp_v2 directory in {project_root}")
        print("Please run this script from the tools/ directory")
        sys.exit(1)

    print(f"Using project root: {project_root}")
    process_unknown_addresses(project_root)

if __name__ == "__main__":
    main()
