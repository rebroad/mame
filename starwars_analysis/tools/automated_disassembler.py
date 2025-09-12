#!/usr/bin/env python3
"""
Automated ROM Disassembler

This tool automates the process of finding and disassembling ROM routines
with proper boundary detection and validation.

Usage: python3 automated_disassembler.py <address> --rom <rom_file> [options]
       python3 automated_disassembler.py 0xf448 --rom complete_memory_map.bin
"""

import sys
import re
import subprocess
import argparse
import os
from typing import List, Tuple, Optional, Dict
from pathlib import Path
from disassemble_routine import run_unidasm as dr_run_unidasm, find_routine_end as dr_find_routine_end

class AutomatedDisassembler:
    def __init__(self, rom_file: str, arch: str = "m6809"):
        self.rom_file = rom_file
        self.arch = arch
        self.routines = {}
        # Set disassembly directory to be relative to project root, not current working directory
        script_dir = Path(__file__).parent
        project_root = script_dir.parent  # Go up one level from tools/ to starwars_analysis/
        self.disassembly_dir = project_root / "disassembly"
        self.disassembly_dir.mkdir(exist_ok=True)

    def _get_disassembly_window(self, start_addr: str, max_count: int) -> List[str]:
        """Return disassembly lines starting at start_addr; if not found, start at next available address >= start.
        Falls back to scanning full unidasm output.
        """
        # Try home-grown ranged run first
        try:
            start_int = int(start_addr, 16)
            end_int = (start_int + max_count) & 0xFFFF
            end_addr = f"{end_int:04x}"
            lines = dr_run_unidasm(self.rom_file, start_addr, end_addr)
            if lines:
                return lines
        except Exception:
            pass

        # Fallback: full unidasm, then pick the next address >= start
        try:
            result = subprocess.run(["unidasm", "-arch", self.arch, self.rom_file], capture_output=True, text=True, check=True)
            all_lines = [ln.strip() for ln in result.stdout.split('\n') if ln.strip()]
            start_int = int(start_addr, 16)
            window = []
            in_range = False
            for ln in all_lines:
                m = re.match(r'^([0-9a-fA-F]+):', ln)
                if not m:
                    continue
                cur_int = int(m.group(1), 16)
                if not in_range and (cur_int == start_int or cur_int > start_int):
                    in_range = True
                if in_range:
                    window.append(ln)
                    if len(window) >= max_count:
                        break
            return window
        except Exception:
            return []

    def find_routine_boundaries(self, start_addr: str, max_search: int = 1000) -> Tuple[str, str]:
        """Find the start and end boundaries of a routine with intelligent analysis"""
        print(f"Finding boundaries for routine at {start_addr}...")

        try:
            # Use our fixed disassembler with dd skip approach
            lines = dr_run_unidasm(self.rom_file, start_addr)

            # Find the actual start (first non-empty line with address)
            actual_start = None
            for line in lines:
                if re.match(r'^[0-9a-f]+:', line, re.IGNORECASE):
                    actual_start = line.split(':')[0]
                    break

            if not actual_start:
                raise ValueError(f"Could not find start address in disassembly")

            # Intelligent boundary detection
            end_addr_found = self._find_intelligent_end_boundary(lines, actual_start)

            if not end_addr_found:
                # Fallback: use a small fixed window to seed traversal
                start_int = int(actual_start, 16)
                fallback_len = 128
                end_int = (start_int + fallback_len - 1) & 0xFFFF
                return actual_start, f"{end_int:04x}"

            # Validate routine size
            start_int = int(actual_start, 16)
            end_int = int(end_addr_found, 16)
            size = end_int - start_int + 1

            if size < 3:
                fallback_len = 64
                end_int = (start_int + fallback_len - 1) & 0xFFFF
                return actual_start, f"{end_int:04x}"

            return actual_start, end_addr_found

        except Exception as e:
            print(f"Error finding boundaries: {e}")
            try:
                start_int = int(start_addr, 16)
                end_int = (start_int + 64 - 1) & 0xFFFF
                return f"{start_int:04x}", f"{end_int:04x}"
            except Exception:
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
                # Estimate branch direction using the home-grown helper to cap the window
                end_candidates.append((addr, addr_int, "branch"))

        if not end_candidates:
            return None

        # Prioritize end candidates: return > external_jump > branch > infinite_loop
        priority_order = ["return", "external_jump", "branch", "infinite_loop"]

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
        if match:
            target = match.group(1)
            # Only return targets within valid 6809 address space
            try:
                target_int = int(target, 16)
                if 0 <= target_int <= 0xFFFF:
                    return target
            except ValueError:
                pass
        return None

    def _disassemble_lines(self, start_addr: str, count: int = 256) -> list:
        """Get raw disassembly lines for a window starting at start_addr using our fixed disassembler."""
        return dr_run_unidasm(self.rom_file, start_addr)

    def calculate_byte_count(self, start_addr: str, end_addr: str) -> int:
        """Calculate the number of bytes between start and end addresses"""
        start_int = int(start_addr, 16)
        end_int = int(end_addr, 16)
        return end_int - start_int + 1

    def disassemble_routine(self, start_addr: str, end_addr: str, routine_name: str, verbose: bool = True, force_save: bool = False) -> bool:
        """Disassemble a routine with proper boundaries"""
        if verbose:
            print(f"Disassembling {routine_name} from {start_addr} to {end_addr}...")

        byte_count = self.calculate_byte_count(start_addr, end_addr)

        try:
            # Use home-grown decoder to get lines in range
            lines = self._disassemble_lines(start_addr, byte_count)

            # Filter out empty lines
            lines = [line for line in lines if line.strip()]

            # Check if this looks like valid assembly (not all zeros)
            valid_assembly = False
            for line in lines:
                m = re.match(r'^([0-9a-fA-F]+):\s+((?:[0-9a-fA-F]{2}\s+)*[0-9a-fA-F]{2})', line)
                if m:
                    byte_str = m.group(2)
                    bytes_list = [b.lower() for b in byte_str.split()]
                    if any(b != '00' for b in bytes_list):
                        valid_assembly = True
                        break
            if not valid_assembly and lines and force_save:
                valid_assembly = True

            if not valid_assembly:
                if verbose or force_save:
                    print(f"⚠ Skipping {routine_name} - appears to be all zeros or invalid")
                return False

            # Save to file
            output_file = self.disassembly_dir / f"rom_disasm_{routine_name}.md"
            with open(output_file, 'w') as f:
                for line in lines:
                    f.write(line + '\n')

            if verbose or force_save:
                print(f"✓ Created {output_file} with {len(lines)} lines")

            if verbose:
                self.validate_routine(output_file)

            return True

        except Exception as e:
            if verbose or force_save:
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

        # Get full disassembly to search for patterns with consistent base address
        cmd = ["unidasm", "-arch", self.arch, self.rom_file, "-basepc", "0x0000"]

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

    # --- NEW: Entry-point-driven traversal helpers ---
    def _read_reset_vector(self) -> Optional[str]:
        """Read the 6809 reset vector (0xFFFE-0xFFFF) from the ROM image and return hex address string."""
        try:
            with open(self.rom_file, 'rb') as f:
                data = f.read()
            if len(data) < 0x10000:
                print("WARNING: ROM image smaller than 64KB; cannot read reset vector")
                return None
            reset = int.from_bytes(data[0xFFFE:0x10000], byteorder='big')
            return f"{reset:04x}"
        except Exception as e:
            print(f"WARNING: Failed to read reset vector: {e}")
            return None

    def _extract_call_targets(self, lines: list) -> list:
        """Extract absolute target addresses from JSR/JMP instructions in disassembly lines."""
        targets = []
        for line in lines:
            # Expect format like: f261: 7e f2 61     JMP    $F261
            m = re.search(r'\b(JSR|JMP)\s+\$?([0-9A-Fa-f]{4})\b', line)
            if m:
                addr = m.group(2).lower()
                targets.append(addr)
        return targets

    def graph_disassemble_from_reset(self):
        """Traverse and disassemble routines starting from the reset vector, following JSR/JMP."""
        print("Step 0: Reading 6809 reset vector...")
        entry = self._read_reset_vector()
        if not entry:
            print("ERROR: Could not determine reset vector; aborting traversal")
            return 0
        print(f"Reset vector -> ${entry}")

        to_visit = [entry]
        visited = set()
        discovered_entries = []
        disassembled = 0

        while to_visit:
            addr = to_visit.pop(0)
            if addr in visited:
                continue
            visited.add(addr)
            discovered_entries.append(addr)

            print(f"Traversing entry ${addr}...")
            start, end = self.find_routine_boundaries(addr, max_search=1500)
            is_seed = (addr == entry)

            if start and end:
                name = start
                ok = self.disassemble_routine(start, end, name, verbose=False, force_save=is_seed)
                if not ok and is_seed:
                    # Seed fallback: try raw window and save regardless
                    seed_lines = self._disassemble_lines(addr, 256)
                    if seed_lines:
                        output_file = self.disassembly_dir / f"rom_disasm_seed_{addr}.md"
                        with open(output_file, 'w') as f:
                            for line in seed_lines:
                                f.write(line + '\n')
                        print(f"✓ Created {output_file} (seed window)")
                        disassembled += 1
                        for t in self._extract_call_targets(seed_lines):
                            if t not in visited and t not in to_visit:
                                to_visit.append(t)
                elif ok:
                    disassembled += 1
                    # After saving, get lines again to discover new targets inside this routine
                    lines = self._disassemble_lines(start, self.calculate_byte_count(start, end))
                    for t in self._extract_call_targets(lines):
                        if t not in visited and t not in to_visit:
                            to_visit.append(t)
            else:
                # Fallback window: do NOT save; only extract targets to continue traversal
                lines = self._disassemble_lines(addr, 256)
                if lines:
                    if is_seed:
                        output_file = self.disassembly_dir / f"rom_disasm_seed_{addr}.md"
                        with open(output_file, 'w') as f:
                            for line in lines:
                                f.write(line + '\n')
                        print(f"✓ Created {output_file} (seed window)")
                        disassembled += 1
                    for t in self._extract_call_targets(lines):
                        if t not in visited and t not in to_visit:
                            to_visit.append(t)
                else:
                    print(f"  Skipping ${addr}: unable to disassemble")

        # Write discovered entries for auditing
        try:
            ep_file = self.disassembly_dir / "entry_points.txt"
            with open(ep_file, 'w') as f:
                for a in discovered_entries:
                    f.write(f"{a}\n")
        except Exception:
            pass

        print(f"Traversal complete. Disassembled {disassembled} routines from reset vector.")
        return disassembled

    def fully_automated_disassembly(self):
        """Fully automated workflow to find and disassemble all meaningful routines"""
        print("=== FULLY AUTOMATED ROM DISASSEMBLY ===")
        print("This will find and disassemble all meaningful routines automatically.")
        print("")

        # Strict mode: traverse only from reset vector (no heuristic scanning)
        traversed = self.graph_disassemble_from_reset()

        print(f"\n=== AUTOMATION COMPLETE ===")
        print(f"Disassembled {traversed} routines (reset traversal only)")
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
    parser.add_argument("address", nargs="?", help="Address to disassemble (hex format, e.g., 0xf448)")
    parser.add_argument("--rom", help="Path to ROM file")
    parser.add_argument("--input", help="Path to ROM file (alternative to --rom)")
    parser.add_argument("--output-dir", help="Output directory for disassembly files")
    parser.add_argument("-arch", default="m6809", help="CPU architecture (default: m6809)")
    parser.add_argument("--search", action="store_true", help="Search for common routine patterns")
    parser.add_argument("--known", action="store_true", help="Disassemble known routines")
    parser.add_argument("--full-auto", action="store_true", help="Fully automated disassembly of all meaningful routines")
    parser.add_argument("--addr", help="Disassemble specific address (alternative to positional argument)")
    parser.add_argument("--name", help="Name for the routine (used with address)")

    args = parser.parse_args()
    
    # Determine ROM file path
    rom_file = args.input or args.rom
    
    # Determine address (positional argument takes precedence over --addr)
    address = args.address or args.addr
    
    # For --full-auto, try to find the ROM file automatically
    if not rom_file and args.full_auto:
        # Look for complete_memory_map.bin in the parent directory
        script_dir = Path(__file__).parent
        project_root = script_dir.parent
        auto_rom_file = project_root / "complete_memory_map.bin"
        
        if auto_rom_file.exists():
            rom_file = str(auto_rom_file)
            print(f"Auto-detected ROM file: {rom_file}")
        else:
            parser.error("ROM file path required (use --rom or --input). Auto-detection failed - complete_memory_map.bin not found in project root.")
    
    if not rom_file:
        parser.error("ROM file path required (use --rom or --input)")
    
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

    if address:
        if not args.name:
            # Generate a default name from the address
            addr_clean = address.replace("0x", "").replace("0X", "").upper()
            args.name = f"routine_{addr_clean}"

        # Find boundaries for the specific address
        start, end = disassembler.find_routine_boundaries(address)
        if start and end:
            disassembler.disassemble_routine(start, end, args.name)
        else:
            print(f"Error: Could not find boundaries for address {address}")
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
