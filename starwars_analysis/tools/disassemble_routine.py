#!/usr/bin/env python3
"""
Automated Routine Disassembly Tool

This tool automates the process of disassembling ROM routines with proper
boundary detection and validation to avoid common mistakes.

Usage: python3 disassemble_routine.py <rom_file> <start_address> [options]
"""

import sys
import re
import subprocess
import argparse
import os
from typing import List, Tuple, Optional

def run_unidasm(rom_file: str, start_addr: str, end_addr: Optional[str] = None) -> List[str]:
    """Run unidasm and return disassembly lines"""
    cmd = ["unidasm", "-arch", "m6809", rom_file]
    
    try:
        result = subprocess.run(cmd, capture_output=True, text=True, check=True)
        lines = result.stdout.split('\n')
        
        # Filter lines for the specified address range
        filtered_lines = []
        in_range = False
        
        for line in lines:
            line = line.strip()
            if not line:
                continue
                
            # Check if we're in the target range
            addr_match = re.match(r'^([0-9a-f]+):', line, re.IGNORECASE)
            if addr_match:
                current_addr = addr_match.group(1).lower()
                start_addr_lower = start_addr.lower()
                
                if current_addr == start_addr_lower:
                    in_range = True
                    filtered_lines.append(line)
                elif end_addr and current_addr >= end_addr.lower():
                    break
                elif in_range:
                    filtered_lines.append(line)
                    
        return filtered_lines
        
    except subprocess.CalledProcessError as e:
        print(f"Error running unidasm: {e}")
        return []
    except FileNotFoundError:
        print("Error: unidasm not found. Please install unidasm.")
        return []

def find_routine_end(lines: List[str], start_addr: str, max_lines: int = 100) -> int:
    """Find the end of a routine by looking for boundary instructions"""
    boundary_instructions = ['RTS', 'JMP', 'RTI', 'SWI']
    
    for i, line in enumerate(lines[:max_lines]):
        line_upper = line.upper()
        for instruction in boundary_instructions:
            if instruction in line_upper:
                return i + 1  # Include the boundary instruction
                
    return min(len(lines), max_lines)  # Return max_lines if no boundary found

def validate_routine(lines: List[str], routine_name: str) -> bool:
    """Validate a routine using the validation tool"""
    # Write temporary file
    temp_file = f"temp_{routine_name}.md"
    with open(temp_file, 'w') as f:
        f.write('\n'.join(lines))
    
    # Run validation
    try:
        result = subprocess.run([
            sys.executable, 
            "validate_disassembly.py", 
            temp_file
        ], capture_output=True, text=True, check=True)
        
        # Check if validation passed
        if "is valid" in result.stdout and "✗" not in result.stdout:
            print(f"✓ {routine_name} validation passed")
            return True
        else:
            print(f"✗ {routine_name} validation failed:")
            print(result.stdout)
            return False
            
    except subprocess.CalledProcessError as e:
        print(f"Validation error: {e}")
        return False
    finally:
        # Clean up temp file
        if os.path.exists(temp_file):
            os.remove(temp_file)

def disassemble_routine(rom_file: str, start_addr: str, routine_name: str, 
                       max_lines: int = 100, validate: bool = True) -> bool:
    """Disassemble a routine with proper boundary detection"""
    
    print(f"Disassembling routine {routine_name} starting at {start_addr}...")
    
    # Get disassembly lines
    lines = run_unidasm(rom_file, start_addr)
    if not lines:
        print(f"Error: No disassembly found for address {start_addr}")
        return False
        
    print(f"Found {len(lines)} lines of disassembly")
    
    # Find routine end
    end_line = find_routine_end(lines, start_addr, max_lines)
    routine_lines = lines[:end_line]
    
    print(f"Routine ends at line {end_line} (found boundary instruction)")
    
    # Create output file
    output_file = f"rom_disasm_{routine_name}_unidasm.md"
    with open(output_file, 'w') as f:
        f.write('\n'.join(routine_lines))
    
    print(f"Saved routine to {output_file}")
    
    # Validate if requested
    if validate:
        print("Validating routine...")
        if not validate_routine(routine_lines, routine_name):
            print("Warning: Routine validation failed. Please review manually.")
            return False
    
    print(f"✓ Successfully disassembled {routine_name}")
    return True

def main():
    parser = argparse.ArgumentParser(description="Automated ROM routine disassembly")
    parser.add_argument("rom_file", help="ROM file to disassemble")
    parser.add_argument("start_addr", help="Start address (hex, e.g., 611e)")
    parser.add_argument("routine_name", help="Name for the routine (e.g., 611e)")
    parser.add_argument("--max-lines", "-m", type=int, default=100, 
                       help="Maximum lines to disassemble (default: 100)")
    parser.add_argument("--no-validate", action="store_true", 
                       help="Skip validation step")
    
    args = parser.parse_args()
    
    # Validate inputs
    if not os.path.exists(args.rom_file):
        print(f"Error: ROM file {args.rom_file} not found")
        return 1
        
    if not re.match(r'^[0-9a-f]+$', args.start_addr, re.IGNORECASE):
        print(f"Error: Invalid start address {args.start_addr}")
        return 1
    
    # Disassemble routine
    success = disassemble_routine(
        args.rom_file, 
        args.start_addr, 
        args.routine_name,
        args.max_lines,
        not args.no_validate
    )
    
    return 0 if success else 1

if __name__ == "__main__":
    sys.exit(main())
