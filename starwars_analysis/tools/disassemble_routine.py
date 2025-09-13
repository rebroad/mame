#!/usr/bin/env python3
"""
Automated Routine Disassembly Tool

This tool automates the process of disassembling ROM routines with proper
boundary detection and validation to avoid common mistakes.

Usage: python3 disassemble_routine.py <rom_file> <start_address> [options]
"""

import sys
import argparse
import os
from typing import List, Tuple, Optional
from pathlib import Path
from unidasm_wrapper import run_unidasm, find_routine_end

def disassemble_routine(rom_file: str, start_addr: str, end_addr: Optional[str] = None, 
                       output_file: Optional[str] = None) -> bool:
    """
    Disassemble a single routine and optionally save to file.
    
    Args:
        rom_file: Path to the ROM file
        start_addr: Start address (hex string)
        end_addr: Optional end address (hex string)
        output_file: Optional output file path
    
    Returns:
        True if successful, False otherwise
    """
    try:
        # Get disassembly
        lines = run_unidasm(rom_file, start_addr, end_addr)
        
        if not lines:
            print(f"No disassembly found for address {start_addr}")
            return False
        
        # Prepare output
        output_lines = [
            f"# Disassembly of routine at {start_addr}",
            f"# ROM file: {rom_file}",
            f"# Start address: {start_addr}",
            f"# End address: {end_addr or 'auto-detected'}",
            "",
            "```assembly",
        ]
        
        # Add disassembly lines
        for line in lines:
            output_lines.append(line)
        
        output_lines.append("```")
        
        # Output to file or stdout
        if output_file:
            with open(output_file, 'w') as f:
                f.write('\n'.join(output_lines))
            print(f"Disassembly saved to {output_file}")
        else:
            print('\n'.join(output_lines))
        
        return True
        
    except Exception as e:
        print(f"Error disassembling routine: {e}")
        return False

def main():
    parser = argparse.ArgumentParser(description="Disassemble a ROM routine")
    parser.add_argument("rom_file", help="Path to ROM file")
    parser.add_argument("start_addr", help="Start address (hex, e.g., 0xf448)")
    parser.add_argument("--end", help="End address (hex)")
    parser.add_argument("--output", "-o", help="Output file path")
    parser.add_argument("--find-end", action="store_true", help="Auto-detect routine end")
    
    args = parser.parse_args()
    
    # Validate ROM file
    if not os.path.exists(args.rom_file):
        print(f"Error: ROM file '{args.rom_file}' not found")
        return 1
    
    # Clean up address format
    start_addr = args.start_addr.replace("0x", "").replace("0X", "")
    if not start_addr.startswith("0x"):
        start_addr = "0x" + start_addr
    
    end_addr = None
    if args.end:
        end_addr = args.end.replace("0x", "").replace("0X", "")
        if not end_addr.startswith("0x"):
            end_addr = "0x" + end_addr
    elif args.find_end:
        # Auto-detect routine end
        end_addr = find_routine_end(args.rom_file, start_addr)
        if end_addr:
            print(f"Auto-detected routine end: {end_addr}")
        else:
            print("Could not auto-detect routine end")
    
    # Disassemble
    success = disassemble_routine(args.rom_file, start_addr, end_addr, args.output)
    return 0 if success else 1

if __name__ == "__main__":
    sys.exit(main())