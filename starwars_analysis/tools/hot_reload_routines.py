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

        # Automatically update CMakeLists.txt
        update_cmake_lists(project_path, new_routines)

        # Automatically update routine_map
        update_routine_map(project_path, new_routines)

        print(f"\n✅ All files updated automatically!")
        print(f"Ready to rebuild the simulator with new routines.")

    # Clear the unknown addresses file
    unknown_file.unlink()
    print(f"\nCleared unknown_addresses.txt")

def update_cmake_lists(project_path, new_routines):
    """Update CMakeLists.txt to include new routine source files"""
    cmake_file = project_path / "starwars_cpp_v2" / "CMakeLists.txt"

    if not cmake_file.exists():
        print("    ❌ CMakeLists.txt not found")
        return

    with open(cmake_file, 'r') as f:
        content = f.read()

    # Find the SOURCES section
    lines = content.split('\n')
    in_sources = False
    sources_end = -1

    for i, line in enumerate(lines):
        if 'set(SOURCES' in line:
            in_sources = True
        elif in_sources and line.strip() == ')':
            sources_end = i
            break

    if sources_end == -1:
        print("    ❌ Could not find SOURCES section in CMakeLists.txt")
        return

    # Add new source files before the closing parenthesis
    for routine in new_routines:
        new_line = f"    src/routine_{routine}.cpp"
        if new_line not in content:
            lines.insert(sources_end, new_line)
            print(f"    ✅ Added {new_line} to CMakeLists.txt")

    with open(cmake_file, 'w') as f:
        f.write('\n'.join(lines))

def update_routine_map(project_path, new_routines):
    """Update rom_routines_wrapper.cpp to add new routines to routine_map"""
    wrapper_file = project_path / "starwars_cpp_v2" / "src" / "rom_routines_wrapper.cpp"

    if not wrapper_file.exists():
        print("    ❌ rom_routines_wrapper.cpp not found")
        return

    with open(wrapper_file, 'r') as f:
        content = f.read()

    # Find the routine_map definition
    lines = content.split('\n')
    map_end = -1

    for i, line in enumerate(lines):
        if '};' in line and 'routine_map' in content[max(0, content.rfind('routine_map', 0, content.find(line))):content.find(line)]:
            map_end = i
            break

    if map_end == -1:
        print("    ❌ Could not find routine_map in rom_routines_wrapper.cpp")
        return

    # Add new routine entries before the closing brace
    for routine in new_routines:
        addr = int(routine, 16)
        new_entry = f"    {{0x{addr:04X}, routine_{routine}_impl}},"
        if new_entry not in content:
            lines.insert(map_end, new_entry)
            print(f"    ✅ Added {new_entry} to routine_map")

    with open(wrapper_file, 'w') as f:
        f.write('\n'.join(lines))

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
