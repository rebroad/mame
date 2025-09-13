#!/usr/bin/env python3
"""
Regenerate all routine files using the improved converter and update build files
"""

import subprocess
import os
import time
import argparse
import re
from pathlib import Path
from build_updater import update_build_files, get_existing_routine_files, cleanup_stale_files
from disasm_to_cpp_converter import parse_disassembly_line, convert_instruction

def collect_all_goto_targets(disasm_dir):
    """Collect all goto targets from all disassembly files"""
    all_targets = set()

    print("🔍 First pass: Collecting all goto targets...")

    for disasm_file in disasm_dir.glob("rom_disasm_*.md"):
        with open(disasm_file, 'r', encoding='utf-8') as f:
            content = f.read()

        # Find all BRA and JMP instructions with absolute addresses
        # Use simple string search instead of regex
        lines = content.split('\n')
        for line in lines:
            if 'BRA' in line and '$' in line and '<' not in line:
                # Extract address after $ (absolute addressing only)
                dollar_pos = line.find('$')
                if dollar_pos != -1:
                    addr_part = line[dollar_pos+1:].split()[0]
                    try:
                        target_addr = int(addr_part, 16)
                        # Filter out obviously invalid low addresses
                        if target_addr >= 0x1000:  # Only addresses >= 4KB
                            all_targets.add(target_addr)
                    except ValueError:
                        pass
            elif 'JMP' in line and '$' in line and '<' not in line:
                # Extract address after $ (absolute addressing only)
                dollar_pos = line.find('$')
                if dollar_pos != -1:
                    addr_part = line[dollar_pos+1:].split()[0]
                    try:
                        target_addr = int(addr_part, 16)
                        # Filter out obviously invalid low addresses
                        if target_addr >= 0x1000:  # Only addresses >= 4KB
                            all_targets.add(target_addr)
                    except ValueError:
                        pass
    
    print(f"  Found {len(all_targets)} unique goto targets")
    return sorted(all_targets)

def collect_all_instructions(disasm_dir):
    """Collect all instructions from all disassembly files, sorted by address"""
    all_instructions = []
    
    print("🔍 Collecting all instructions from disassembly files...")
    
    for disasm_file in sorted(disasm_dir.glob("rom_disasm_*.md")):
        with open(disasm_file, 'r', encoding='utf-8') as f:
            lines = f.readlines()
        
        for line in lines:
            parsed = parse_disassembly_line(line.strip())
            if parsed:
                all_instructions.append(parsed)
    
    # Sort by address
    all_instructions.sort(key=lambda x: int(x['address'], 16))
    
    print(f"  Found {len(all_instructions)} instructions")
    return all_instructions

def generate_global_routine(instructions, goto_targets, output_file):
    """Generate a single global routine function with all instructions and labels"""
    
    print(f"📝 Generating global routine: {output_file}")
    
    # Create set of all instruction addresses for validation
    instruction_addresses = set(int(inst['address'], 16) for inst in instructions)
    
    # Filter goto targets to only include addresses that exist in our instructions
    valid_goto_targets = set(target for target in goto_targets if target in instruction_addresses)
    external_targets = set(target for target in goto_targets if target not in instruction_addresses)
    
    if external_targets:
        print(f"⚠️  Found {len(external_targets)} external goto targets (will be skipped): {[hex(t) for t in sorted(external_targets)]}")
    
    cpp_lines = []
    
    # Header
    cpp_lines.append('#include "cpu_6809.h"')
    cpp_lines.append('')
    cpp_lines.append('namespace StarWars {')
    cpp_lines.append('')
    cpp_lines.append('void global_routine_impl(CPU6809& cpu) {')
    cpp_lines.append('')
    
    # Process all instructions
    for instruction in instructions:
        current_address = instruction['address']
        current_address_int = int(current_address, 16)
        
        # Add label if this address is a valid goto target
        if current_address_int in valid_goto_targets:
            cpp_lines.append(f'    label_{current_address_int:04X}:')
        
        # Add comment with original assembly
        cpp_lines.append(f'    // {current_address}: {instruction["mnemonic"]} {instruction["operands"]}')
        
        # Add C++ conversion
        cpp_code = convert_instruction(instruction, f'{current_address}: {instruction["mnemonic"]} {instruction["operands"]}', instruction_addresses)
        cpp_lines.append(cpp_code)
        cpp_lines.append('')
    
    # Footer
    cpp_lines.append('}')
    cpp_lines.append('')
    cpp_lines.append('} // namespace StarWars')
    
    # Write to file
    with open(output_file, 'w') as f:
        f.write('\n'.join(cpp_lines))
    
    print(f"✓ Generated global routine with {len(instructions)} instructions")

def regenerate_all_routines(build_files_only=False):
    """Regenerate all routine files with improved converter and update build files"""

    script_dir = Path(__file__).parent
    project_root = script_dir.parent
    disasm_dir = project_root / "disassembly"
    output_dir = project_root / "starwars_cpp_v2" / "src"
    converter = script_dir / "disasm_to_cpp_converter.py"
    log_file = project_root / "regeneration.log"

    # Ensure output directory exists
    output_dir.mkdir(parents=True, exist_ok=True)

    if build_files_only:
        print("🔧 Build files only mode - skipping C++ file regeneration")

        # Find existing routine files instead of disassembly files
        existing_routines = get_existing_routine_files(output_dir)
        all_routine_names = set(existing_routines)

        print(f"Found {len(existing_routines)} existing routine files")

    else:
        # Find all rom_disasm_*.md files
        disasm_files = list(disasm_dir.glob("rom_disasm_*.md"))

        if not disasm_files:
            print("No rom_disasm_*.md files found")
            return False

        print(f"Found {len(disasm_files)} disassembly files to convert")
        print(f"📝 Detailed log: {log_file}")

        # GLOBAL ROUTINE MODE: Generate single function with all code
        print("🌐 Generating global routine with all code")
        
        # Collect all instructions
        all_instructions = collect_all_instructions(disasm_dir)
        
        # Collect all goto targets
        all_goto_targets = collect_all_goto_targets(disasm_dir)
        
        # Generate global routine
        global_output_file = output_dir / "global_routine.cpp"
        generate_global_routine(all_instructions, all_goto_targets, global_output_file)
        
        print("🎉 Global routine generation complete!")
        return True

def main():
    """Main function with command line argument parsing"""
    parser = argparse.ArgumentParser(description="Regenerate all routine files and update build files")
    parser.add_argument("--build-files-only", action="store_true",
                       help="Only update build files, skip C++ file regeneration")

    args = parser.parse_args()

    return regenerate_all_routines(build_files_only=args.build_files_only)

if __name__ == "__main__":
    exit(main())