#!/usr/bin/env python3
"""
Automated ROM Disassembler

This tool automates the process of finding and disassembling ROM routines
with proper boundary detection and validation.

Usage: python3 automated_disassembler.py <rom_file> [options]
"""

import sys
import re
import subprocess
import argparse
import os
from typing import List, Tuple, Optional, Dict
from pathlib import Path

class AutomatedDisassembler:
    def __init__(self, rom_file: str, arch: str = "m6809"):
        self.rom_file = rom_file
        self.arch = arch
        self.routines = {}
        self.disassembly_dir = Path("disassembly")
        self.disassembly_dir.mkdir(exist_ok=True)

    def find_routine_boundaries(self, start_addr: str, max_search: int = 1000) -> Tuple[str, str]:
        """Find the start and end boundaries of a routine"""
        print(f"Finding boundaries for routine at {start_addr}...")

        # Get disassembly for a large range to find boundaries
        cmd = ["unidasm", "-arch", self.arch, self.rom_file, "-basepc", start_addr, "-count", str(max_search)]

        try:
            result = subprocess.run(cmd, capture_output=True, text=True, check=True)
            lines = result.stdout.strip().split('\n')

            # Find the actual start (first non-empty line with address)
            actual_start = None
            for line in lines:
                if re.match(r'^[0-9a-f]+:', line, re.IGNORECASE):
                    actual_start = line.split(':')[0]
                    break

            if not actual_start:
                raise ValueError(f"Could not find start address in disassembly")

            # Find the end boundary (RTS, JMP, RTI, or SWI)
            end_addr = None
            for i, line in enumerate(lines):
                if re.search(r'\b(39.*RTS|7e.*JMP|3b.*RTI|3f.*SWI)\b', line, re.IGNORECASE):
                    end_addr = line.split(':')[0]
                    break

            if not end_addr:
                print(f"Warning: No clear end boundary found for {start_addr}")
                # Use a reasonable default size
                end_addr = hex(int(actual_start, 16) + 50)[2:].upper()

            return actual_start, end_addr

        except subprocess.CalledProcessError as e:
            print(f"Error running unidasm: {e}")
            return None, None

    def calculate_byte_count(self, start_addr: str, end_addr: str) -> int:
        """Calculate the number of bytes between start and end addresses"""
        start_int = int(start_addr, 16)
        end_int = int(end_addr, 16)
        return end_int - start_int + 1

    def disassemble_routine(self, start_addr: str, end_addr: str, routine_name: str) -> bool:
        """Disassemble a routine with proper boundaries"""
        print(f"Disassembling {routine_name} from {start_addr} to {end_addr}...")

        byte_count = self.calculate_byte_count(start_addr, end_addr)

        cmd = ["unidasm", "-arch", self.arch, self.rom_file, "-basepc", start_addr, "-count", str(byte_count)]

        try:
            result = subprocess.run(cmd, capture_output=True, text=True, check=True)
            lines = result.stdout.strip().split('\n')

            # Filter out empty lines
            lines = [line for line in lines if line.strip()]

            # Save to file
            output_file = self.disassembly_dir / f"rom_disasm_{routine_name}_unidasm.md"
            with open(output_file, 'w') as f:
                for line in lines:
                    f.write(line + '\n')

            print(f"✓ Created {output_file} with {len(lines)} lines")

            # Validate the disassembly
            self.validate_routine(output_file)

            return True

        except subprocess.CalledProcessError as e:
            print(f"Error disassembling {routine_name}: {e}")
            return False

    def validate_routine(self, file_path: Path):
        """Validate a disassembly file using our validation tool"""
        try:
            result = subprocess.run(
                ["python3", "validate_disassembly.py", str(file_path)],
                capture_output=True, text=True, check=True
            )
            print(f"Validation: {result.stdout.strip()}")
        except subprocess.CalledProcessError as e:
            print(f"Validation failed: {e}")

    def find_all_routines(self, search_patterns: List[str]) -> Dict[str, Tuple[str, str]]:
        """Find all routines matching the given patterns"""
        print("Searching for routine patterns in ROM...")

        # Get full disassembly to search for patterns
        cmd = ["unidasm", "-arch", self.arch, self.rom_file]

        try:
            result = subprocess.run(cmd, capture_output=True, text=True, check=True)
            lines = result.stdout.strip().split('\n')

            found_routines = {}

            for pattern in search_patterns:
                print(f"Searching for pattern: {pattern}")

                for i, line in enumerate(lines):
                    if re.search(pattern, line, re.IGNORECASE):
                        addr_match = re.match(r'^([0-9a-f]+):', line, re.IGNORECASE)
                        if addr_match:
                            addr = addr_match.group(1)
                            print(f"Found {pattern} at address {addr}")

                            # Find boundaries for this routine
                            start, end = self.find_routine_boundaries(addr)
                            if start and end:
                                found_routines[pattern] = (start, end)
                                print(f"  Boundaries: {start} to {end}")

            return found_routines

        except subprocess.CalledProcessError as e:
            print(f"Error searching for routines: {e}")
            return {}

    def disassemble_known_routines(self):
        """Disassemble known routines from our analysis"""
        print("Disassembling known routines...")

        # Known routines we've identified
        known_routines = {
            "f261_main_loop": ("a261", "a27a"),  # Main game loop we found
            # Add more as we find them
        }

        for name, (start, end) in known_routines.items():
            self.disassemble_routine(start, end, name)

    def search_for_common_patterns(self):
        """Search for common routine patterns"""
        print("Searching for common routine patterns...")

        # Common patterns that indicate routine starts
        patterns = [
            r'\b(39.*RTS)\b',  # RTS instructions
            r'\b(7e.*JMP)\b',  # JMP instructions
            r'\b(bd.*JSR)\b',  # JSR instructions
            r'\b(8e.*LDX)\b',  # LDX instructions (common in routines)
            r'\b(86.*LDA)\b',  # LDA instructions (common in routines)
        ]

        found_routines = self.find_all_routines(patterns)

        for pattern, (start, end) in found_routines.items():
            routine_name = f"routine_{start}"
            self.disassemble_routine(start, end, routine_name)

def main():
    parser = argparse.ArgumentParser(description="Automated ROM Disassembler")
    parser.add_argument("rom_file", help="Path to ROM file")
    parser.add_argument("-arch", default="m6809", help="CPU architecture (default: m6809)")
    parser.add_argument("--search", action="store_true", help="Search for common routine patterns")
    parser.add_argument("--known", action="store_true", help="Disassemble known routines")
    parser.add_argument("--addr", help="Disassemble specific address")
    parser.add_argument("--name", help="Name for the routine (used with --addr)")

    args = parser.parse_args()

    if not os.path.exists(args.rom_file):
        print(f"Error: ROM file {args.rom_file} not found")
        return 1

    disassembler = AutomatedDisassembler(args.rom_file, args.arch)

    if args.addr:
        if not args.name:
            print("Error: --name required when using --addr")
            return 1

        # Find boundaries for the specific address
        start, end = disassembler.find_routine_boundaries(args.addr)
        if start and end:
            disassembler.disassemble_routine(start, end, args.name)
        else:
            print(f"Error: Could not find boundaries for address {args.addr}")
            return 1

    elif args.search:
        disassembler.search_for_common_patterns()

    elif args.known:
        disassembler.disassemble_known_routines()

    else:
        print("No action specified. Use --search, --known, or --addr")
        return 1

    return 0

if __name__ == "__main__":
    sys.exit(main())
