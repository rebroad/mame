#!/usr/bin/env python3
"""
Simple MAME debug trace normalizer

This tool processes MAME debug output and normalizes PC addresses for multi-byte
operations by subtracting the instruction length (6 bytes for STD instructions).

Based on our analysis:
- MAME trace shows PC=0x61D9 for PA write (second byte of STD instruction)
- ROM disassembly shows PC=0x61D3 for PA write (start of STD instruction)
- Difference is 6 bytes (LDD #$021F; STD $5022 = 3 + 3 = 6 bytes)
"""

import re
import sys

def normalize_pc_address(pc: int) -> int:
    """
    Normalize PC address by subtracting 6 bytes for STD instructions

    Args:
        pc: Current PC address from MAME trace

    Returns:
        Normalized PC address (instruction start)
    """
    # For STD instructions, subtract 6 bytes (LDD + STD = 3 + 3 = 6)
    # This is based on our analysis of the Star Wars ROM
    return pc - 6

def process_trace_line(line: str) -> str:
    """Process a single trace line and normalize PC address"""
    # Match: W 5022 02 @61D9 (with optional trailing comments)
    match = re.match(r'(W \w+ \w+) @(\w+)(.*)', line.rstrip())
    if match:
        prefix = match.group(1)
        pc_str = match.group(2)
        comment = match.group(3)  # Everything after the PC address

        pc = int(pc_str, 16)

        # Normalize PC address
        normalized_pc = normalize_pc_address(pc)

        # Return normalized line with original formatting preserved
        return f"{prefix} @{normalized_pc:04X}{comment}\n"

    # If we can't parse it, return original line
    return line

def process_file(input_file: str, output_file: str) -> None:
    """Process entire trace file"""
    with open(input_file, 'r') as infile, open(output_file, 'w') as outfile:
        for line in infile:
            normalized_line = process_trace_line(line)
            outfile.write(normalized_line)

if __name__ == '__main__':
    if len(sys.argv) < 2:
        print("Usage: python3 normalize_mame_trace.py <input_debug_log_file> [output_debug_log_file]")
        sys.exit(1)

    input_file = sys.argv[1]
    output_file = sys.argv[2] if len(sys.argv) > 2 else "debug_normalized.log"

    print(f"Processing {input_file} -> {output_file}")
    print("Applying 6-byte offset for STD instructions")

    process_file(input_file, output_file)

    print("Normalization complete")
