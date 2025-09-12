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
        """Find the start and end boundaries of a routine with intelligent analysis"""
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

            # Intelligent boundary detection
            end_addr = self._find_intelligent_end_boundary(lines, actual_start)

            if not end_addr:
                # Don't print warning for every failed boundary - too noisy
                return None, None

            # Validate routine size
            start_int = int(actual_start, 16)
            end_int = int(end_addr, 16)
            size = end_int - start_int + 1

            if size < 3:  # Too small to be a meaningful routine
                print(f"Routine too small ({size} bytes) - skipping")
                return None, None

            return actual_start, end_addr

        except subprocess.CalledProcessError as e:
            print(f"Error running unidasm: {e}")
            return None, None

    def _find_intelligent_end_boundary(self, lines: List[str], start_addr: str) -> Optional[str]:
        """Intelligently find the end boundary of a routine"""
        start_int = int(start_addr, 16)
        end_candidates = []

        for i, line in enumerate(lines):
            if not re.match(r'^[0-9a-f]+:', line, re.IGNORECASE):
                continue

            addr_match = re.match(r'^([0-9a-f]+):', line, re.IGNORECASE)
            if not addr_match:
                continue

            addr = addr_match.group(1)
            addr_int = int(addr, 16)

            # Skip if we haven't reached the start address yet
            if addr_int < start_int:
                continue

            # Look for end boundary instructions
            if re.search(r'\b(39.*RTS|3b.*RTI|3f.*SWI)\b', line, re.IGNORECASE):
                end_candidates.append((addr, addr_int, "return"))
            elif re.search(r'\b(7e.*JMP)\b', line, re.IGNORECASE):
                # Check if it's a jump to self (infinite loop) or external jump
                jmp_target = self._extract_jump_target(line)
                if jmp_target and jmp_target.lower() == addr.lower():
                    end_candidates.append((addr, addr_int, "infinite_loop"))
                elif jmp_target:
                    # External jump - this might be the end
                    end_candidates.append((addr, addr_int, "external_jump"))

            # Look for unconditional branches that might indicate routine end
            elif re.search(r'\b(20.*BRA|16.*LBRA)\b', line, re.IGNORECASE):
                # Check if it branches backwards (loop) or forwards (exit)
                branch_target = self._extract_branch_target(line, addr_int)
                if branch_target and branch_target < addr_int:
                    # Backwards branch - might be loop, not end
                    continue
                else:
                    # Forward branch - might be exit
                    end_candidates.append((addr, addr_int, "forward_branch"))

        if not end_candidates:
            return None

        # Prioritize end candidates: return > external_jump > forward_branch > infinite_loop
        priority_order = ["return", "external_jump", "forward_branch", "infinite_loop"]

        for priority in priority_order:
            for addr, addr_int, reason in end_candidates:
                if reason == priority:
                    print(f"  Found {reason} boundary at {addr}")
                    return addr

        # Fallback: return the first candidate
        return end_candidates[0][0]

    def _extract_jump_target(self, line: str) -> Optional[str]:
        """Extract the target address from a JMP instruction"""
        match = re.search(r'\b7e\s+([0-9a-f]+)\b', line, re.IGNORECASE)
        return match.group(1) if match else None

    def _extract_branch_target(self, line: str, current_addr: int) -> Optional[int]:
        """Extract the target address from a branch instruction"""
        # Handle BRA instruction
        match = re.search(r'\b20\s+([0-9a-f]+)\b', line, re.IGNORECASE)
        if match:
            offset = int(match.group(1), 16)
            if offset > 127:  # Negative offset
                offset = offset - 256
            return current_addr + 2 + offset

        # Handle LBRA instruction
        match = re.search(r'\b16\s+([0-9a-f]+)\b', line, re.IGNORECASE)
        if match:
            offset = int(match.group(1), 16)
            if offset > 32767:  # Negative offset
                offset = offset - 65536
            return current_addr + 3 + offset

        return None

    def calculate_byte_count(self, start_addr: str, end_addr: str) -> int:
        """Calculate the number of bytes between start and end addresses"""
        start_int = int(start_addr, 16)
        end_int = int(end_addr, 16)
        return end_int - start_int + 1

    def disassemble_routine(self, start_addr: str, end_addr: str, routine_name: str, verbose: bool = True) -> bool:
        """Disassemble a routine with proper boundaries"""
        if verbose:
            print(f"Disassembling {routine_name} from {start_addr} to {end_addr}...")

        byte_count = self.calculate_byte_count(start_addr, end_addr)

        cmd = ["unidasm", "-arch", self.arch, self.rom_file, "-basepc", start_addr, "-count", str(byte_count)]

        try:
            result = subprocess.run(cmd, capture_output=True, text=True, check=True)
            lines = result.stdout.strip().split('\n')

            # Filter out empty lines
            lines = [line for line in lines if line.strip()]

            # Check if this looks like valid assembly (not all zeros)
            valid_assembly = False
            for line in lines:
                if ':' in line and not line.strip().endswith('00 00  NEG    <$00'):
                    valid_assembly = True
                    break

            if not valid_assembly:
                if verbose:
                    print(f"⚠ Skipping {routine_name} - appears to be all zeros or invalid")
                return False

            # Save to file
            output_file = self.disassembly_dir / f"rom_disasm_{routine_name}.md"
            with open(output_file, 'w') as f:
                for line in lines:
                    f.write(line + '\n')

            if verbose:
                print(f"✓ Created {output_file} with {len(lines)} lines")

            # Validate the disassembly (but don't print validation output during capture)
            if verbose:
                self.validate_routine(output_file)

            return True

        except subprocess.CalledProcessError as e:
            if verbose:
                print(f"Error disassembling {routine_name}: {e}")
            return False

    def validate_routine(self, file_path: Path):
        """Validate a disassembly file using our validation tool"""
        try:
            # Get the directory of this script
            script_dir = Path(__file__).parent
            validation_script = script_dir / "validate_disassembly.py"

            result = subprocess.run(
                ["python3", str(validation_script), str(file_path)],
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

    def fully_automated_disassembly(self):
        """Fully automated workflow to find and disassemble all meaningful routines"""
        print("=== FULLY AUTOMATED ROM DISASSEMBLY ===")
        print("This will find and disassemble all meaningful routines automatically.")
        print("")

        # Step 1: Disassemble known routines
        print("Step 1: Disassembling known routines...")
        self.disassemble_known_routines()

        # Step 2: Find all RTS instructions (routine endings)
        print("\nStep 2: Finding all RTS instructions...")
        rts_routines = self.find_all_routines([r'^[0-9a-f]+:\s+39\s+RTS$'])

        # Step 3: Find all JMP instructions (routine starts/transfers)
        print("\nStep 3: Finding all JMP instructions...")
        jmp_routines = self.find_all_routines([r'^[0-9a-f]+:\s+7e\s+[0-9a-f]+.*JMP'])

        # Step 4: Find all JSR instructions (subroutine calls)
        print("\nStep 4: Finding all JSR instructions...")
        jsr_routines = self.find_all_routines([r'\bbd\s+[0-9a-f]+.*JSR\b'])

        # Step 5: Analyze and disassemble meaningful routines
        print("\nStep 5: Analyzing and disassembling meaningful routines...")

        all_candidates = {}
        all_candidates.update(rts_routines)
        all_candidates.update(jmp_routines)
        all_candidates.update(jsr_routines)

        meaningful_routines = 0
        
        for pattern, (start, end) in all_candidates.items():
            if start and end and start != end:
                # Calculate size
                start_int = int(start, 16)
                end_int = int(end, 16)
                size = end_int - start_int + 1

                # Only disassemble routines of reasonable size
                if 5 <= size <= 200:  # 5-200 bytes
                    routine_name = f"auto_{start}"
                    print(f"Disassembling routine at {start} (size: {size} bytes)")
                    if self.disassemble_routine(start, end, routine_name, verbose=False):
                        meaningful_routines += 1

        print(f"\n=== AUTOMATION COMPLETE ===")
        print(f"Found and disassembled {meaningful_routines} meaningful routines")
        print(f"All routines saved in: {self.disassembly_dir}")
        print(f"Use 'python3 validate_disassembly.py --check-all' to validate all routines")

    def search_for_common_patterns(self):
        """Search for common routine patterns with intelligent filtering"""
        print("Searching for common routine patterns...")

        # Patterns that indicate routine starts (not just any instruction)
        routine_start_patterns = [
            r'^[0-9a-f]+:\s+7e\s+[0-9a-f]+.*JMP.*\$F261',  # JMP to F261 (main loop entry)
            r'^[0-9a-f]+:\s+39\s+RTS$',  # RTS at start (return routine)
            r'^[0-9a-f]+:\s+8e\s+[0-9a-f]+.*LDX.*#\$',  # LDX immediate (common routine start)
            r'^[0-9a-f]+:\s+86\s+[0-9a-f]+.*LDA.*#\$',  # LDA immediate (common routine start)
            r'^[0-9a-f]+:\s+cc\s+[0-9a-f]+.*LDD.*#\$',  # LDD immediate (common routine start)
        ]

        # Patterns that indicate subroutine calls (to find callers)
        subroutine_call_patterns = [
            r'\bbd\s+[0-9a-f]+.*JSR\b',  # JSR instructions
        ]

        print("Searching for routine start patterns...")
        found_routines = self.find_all_routines(routine_start_patterns)

        print("Searching for subroutine call patterns...")
        found_calls = self.find_all_routines(subroutine_call_patterns)

        # Process routine starts
        for pattern, (start, end) in found_routines.items():
            routine_name = f"routine_{start}"
            self.disassemble_routine(start, end, routine_name)

        # Process subroutine calls (these might be callers of routines)
        for pattern, (start, end) in found_calls.items():
            if start and end and start != end:  # Only if we found actual boundaries
                routine_name = f"caller_{start}"
                self.disassemble_routine(start, end, routine_name)

def main():
    parser = argparse.ArgumentParser(description="Automated ROM Disassembler")
    parser.add_argument("rom_file", nargs="?", help="Path to ROM file")
    parser.add_argument("--input", help="Path to ROM file (alternative to positional argument)")
    parser.add_argument("--output-dir", help="Output directory for disassembly files")
    parser.add_argument("-arch", default="m6809", help="CPU architecture (default: m6809)")
    parser.add_argument("--search", action="store_true", help="Search for common routine patterns")
    parser.add_argument("--known", action="store_true", help="Disassemble known routines")
    parser.add_argument("--full-auto", action="store_true", help="Fully automated disassembly of all meaningful routines")
    parser.add_argument("--addr", help="Disassemble specific address")
    parser.add_argument("--name", help="Name for the routine (used with --addr)")

    args = parser.parse_args()
    
    # Determine ROM file path
    rom_file = args.input or args.rom_file
    if not rom_file:
        parser.error("ROM file path required (use positional argument or --input)")
    
    # Set output directory if provided
    output_dir = args.output_dir

    if not os.path.exists(rom_file):
        print(f"Error: ROM file {rom_file} not found")
        return 1

    disassembler = AutomatedDisassembler(rom_file, args.arch)
    
    # Override output directory if provided
    if output_dir:
        disassembler.disassembly_dir = Path(output_dir)
        disassembler.disassembly_dir.mkdir(exist_ok=True)

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

    elif args.full_auto:
        # Capture all output to limit console display
        import tempfile
        import io
        
        # Capture stdout to a string buffer
        original_stdout = sys.stdout
        captured_output = io.StringIO()
        sys.stdout = captured_output
        
        try:
            disassembler.fully_automated_disassembly()
        finally:
            # Restore stdout
            sys.stdout = original_stdout
        
        # Get captured output and limit display
        output_lines = captured_output.getvalue().split('\n')
        
        if len(output_lines) <= 100:
            # Show full output
            print('\n'.join(output_lines))
        else:
            # Show summary
            print('\n'.join(output_lines[:50]))
            print(f"... ({len(output_lines) - 100} lines omitted) ...")
            print('\n'.join(output_lines[-50:]))

    else:
        print("No action specified. Use --search, --known, --full-auto, or --addr")
        return 1

    return 0

if __name__ == "__main__":
    sys.exit(main())
