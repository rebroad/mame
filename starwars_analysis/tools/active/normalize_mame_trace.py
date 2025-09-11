#!/usr/bin/env python3
"""
Normalize MAME debug trace to instruction-level PC addresses

This tool processes MAME debug output and normalizes PC addresses for multi-byte
operations to show the instruction address rather than the second byte write address.

Example:
Input:  W 5022 02 @61D9    # Shows PC of second byte write
Output: W 5022 02 @61D3    # Shows PC of instruction start
"""

import re
import sys
import argparse
from typing import List, Tuple, Optional

class MAMETraceNormalizer:
    def __init__(self):
        # Common 6809 instruction lengths for multi-byte operations
        self.instruction_lengths = {
            # Store instructions that write multiple bytes
            'STD': 3,  # Store Double (3 bytes: opcode + 2-byte address)
            'STX': 3,  # Store Index Register X
            'STY': 3,  # Store Index Register Y
            'STU': 3,  # Store User Stack Pointer
            'STS': 3,  # Store System Stack Pointer
            # Load instructions that read multiple bytes
            'LDD': 3,  # Load Double (3 bytes: opcode + 2-byte immediate)
            'LDX': 3,  # Load Index Register X
            'LDY': 3,  # Load Index Register Y
            'LDU': 3,  # Load User Stack Pointer
            'LDS': 3,  # Load System Stack Pointer
        }
        
        # Track known instruction patterns at specific addresses
        self.known_instructions = {}
    
    def load_rom_disassembly(self, disasm_file: Optional[str] = None) -> None:
        """Load ROM disassembly to get instruction information"""
        if not disasm_file:
            return
            
        try:
            with open(disasm_file, 'r') as f:
                for line in f:
                    # Parse disassembly format: 61D3: CC 02 1F     LDD    #$021F
                    match = re.match(r'(\w+):\s+\w+\s+\w+\s+\w+\s+(\w+)', line)
                    if match:
                        pc = int(match.group(1), 16)
                        instruction = match.group(2)
                        if instruction in self.instruction_lengths:
                            self.known_instructions[pc] = instruction
        except FileNotFoundError:
            print(f"Warning: Could not load disassembly file {disasm_file}")
    
    def normalize_pc_address(self, pc: int, address: int) -> int:
        """
        Normalize PC address for multi-byte operations
        
        Args:
            pc: Current PC address from MAME trace
            address: Memory address being written to
            
        Returns:
            Normalized PC address (instruction start)
        """
        # Check if we know the instruction at this PC
        if pc in self.known_instructions:
            instruction = self.known_instructions[pc]
            if instruction in self.instruction_lengths:
                return pc - self.instruction_lengths[instruction]
        
        # Heuristic: If this looks like a second byte write, try to find the instruction
        # Common pattern: STD $5022 writes to consecutive addresses
        for offset in range(1, 6):  # Check up to 5 bytes back
            candidate_pc = pc - offset
            if candidate_pc in self.known_instructions:
                instruction = self.known_instructions[candidate_pc]
                if instruction in self.instruction_lengths:
                    # Check if this instruction would write to the current address
                    if self._instruction_writes_to_address(candidate_pc, instruction, address):
                        return candidate_pc
        
        # If we can't normalize, return original PC
        return pc
    
    def _instruction_writes_to_address(self, pc: int, instruction: str, target_addr: int) -> bool:
        """Check if instruction at PC writes to target address"""
        # This is a simplified heuristic - in practice, you'd need full disassembly
        # For now, assume STD instructions with immediate addressing write to the specified address
        return instruction == 'STD'
    
    def process_trace_line(self, line: str) -> str:
        """Process a single trace line and normalize PC address"""
        # Match: W 5022 02 @61D9
        match = re.match(r'(W \w+ \w+) @(\w+)', line.strip())
        if match:
            prefix = match.group(1)
            pc_str = match.group(2)
            pc = int(pc_str, 16)
            
            # Extract memory address being written to
            addr_match = re.match(r'W (\w+)', prefix)
            if addr_match:
                addr = int(addr_match.group(1), 16)
                normalized_pc = self.normalize_pc_address(pc, addr)
                
                # Return normalized line
                return f"{prefix} @{normalized_pc:04X}\n"
        
        # If we can't parse it, return original line
        return line
    
    def process_file(self, input_file: str, output_file: str, disasm_file: Optional[str] = None) -> None:
        """Process entire trace file"""
        # Load ROM disassembly if provided
        if disasm_file:
            self.load_rom_disassembly(disasm_file)
        
        with open(input_file, 'r') as infile, open(output_file, 'w') as outfile:
            for line in infile:
                normalized_line = self.process_trace_line(line)
                outfile.write(normalized_line)

def main():
    parser = argparse.ArgumentParser(description='Normalize MAME debug trace PC addresses')
    parser.add_argument('input', help='Input MAME trace file')
    parser.add_argument('output', help='Output normalized trace file')
    parser.add_argument('--disasm', help='ROM disassembly file for instruction information')
    parser.add_argument('--verbose', '-v', action='store_true', help='Verbose output')
    
    args = parser.parse_args()
    
    normalizer = MAMETraceNormalizer()
    
    if args.verbose:
        print(f"Processing {args.input} -> {args.output}")
        if args.disasm:
            print(f"Using disassembly file: {args.disasm}")
    
    normalizer.process_file(args.input, args.output, args.disasm)
    
    if args.verbose:
        print("Normalization complete")

if __name__ == '__main__':
    main()
