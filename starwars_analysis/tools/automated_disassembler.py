#!/usr/bin/env python3
"""
Automated ROM Disassembler

This tool automates the process of finding and disassembling multiple ROM routines
with proper boundary detection and validation.

For single routine disassembly, use disassemble_routine.py instead.

Usage:
  # Search for common routine patterns
  python3 automated_disassembler.py --rom complete_memory_map.bin --search

  # Disassemble known routines
  python3 automated_disassembler.py --rom complete_memory_map.bin --known

  # Fully automated disassembly of all meaningful routines
  python3 automated_disassembler.py --rom complete_memory_map.bin --full-auto
"""

import sys
import re
import subprocess
import argparse
import os
import time
from typing import List, Tuple, Optional, Dict
from pathlib import Path
from unidasm_wrapper import run_unidasm, find_routine_end, validate_unidasm, find_intelligent_boundaries
from disassemble_routine import disassemble_routine

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

        # Note: unidasm validation is done when actually needed, not during initialization

    def _get_disassembly_window(self, start_addr: str, max_count: int) -> List[str]:
        """Return disassembly lines starting at start_addr; if not found, start at next available address >= start.
        Falls back to scanning full unidasm output.
        """
        # Try home-grown ranged run first
        try:
            start_int = int(start_addr, 16)
            end_int = (start_int + max_count) & 0xFFFF
            end_addr = f"{end_int:04x}"
            lines = run_unidasm(self.rom_file, start_addr, end_addr, self.arch)
            if lines:
                return lines
        except Exception:
            pass

        # Fallback: full unidasm, then pick the next address >= start
        try:
            from unidasm_wrapper import run_unidasm_full
            all_lines = run_unidasm_full(self.rom_file, self.arch)
            all_lines = [ln.strip() for ln in all_lines if ln.strip()]
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

    def find_routine_boundaries(self, start_addr: str, max_search: int = 1000, existing_ranges: List[Tuple[str, str]] = None) -> Tuple[str, str, set, Optional[str]]:
        """Find the start and end boundaries of a routine with intelligent analysis"""

        try:
            # Use the intelligent boundary detection from unidasm_wrapper
            end_addr_found, external_targets, jmp_target = find_intelligent_boundaries(self.rom_file, start_addr, self.arch, existing_ranges)

            if not end_addr_found:
                # Fallback: use a small fixed window to seed traversal
                start_int = int(start_addr, 16)
                fallback_len = 128
                end_int = (start_int + fallback_len - 1) & 0xFFFF
                return start_addr, f"{end_int:04x}", set(), None

            # Validate routine size
            start_int = int(start_addr, 16)
            end_int = int(end_addr_found, 16)
            size = end_int - start_int + 1

            if size < 3:
                fallback_len = 64
                end_int = (start_int + fallback_len - 1) & 0xFFFF
                return start_addr, f"{end_int:04x}", set(), None

            return start_addr, end_addr_found, external_targets, jmp_target

        except Exception as e:
            print(f"Error finding boundaries: {e}")
            try:
                start_int = int(start_addr, 16)
                end_int = (start_int + 64 - 1) & 0xFFFF
                return f"{start_int:04x}", f"{end_int:04x}", set(), None
            except Exception:
                return None, None, set(), None


    def _disassemble_lines(self, start_addr: str, count: int = 256) -> list:
        """Get raw disassembly lines for a window starting at start_addr using our fixed disassembler."""
        return run_unidasm(self.rom_file, start_addr, arch=self.arch)

    def calculate_byte_count(self, start_addr: str, end_addr: str) -> int:
        """Calculate the number of bytes between start and end addresses"""
        start_int = int(start_addr, 16)
        end_int = int(end_addr, 16)
        return end_int - start_int + 1

    def disassemble_routine_batch(self, start_addr: str, end_addr: str, routine_name: str, verbose: bool = True, force_save: bool = False, jmp_target: str = None) -> bool:
        """Disassemble a routine with proper boundaries using disassemble_routine.py"""
        if verbose:
            print(f"Disassembling {routine_name} from {start_addr} to {end_addr}...")
            if jmp_target:
                print(f"  Will add JMP to ${jmp_target} for overlap handling")

        # Use the enhanced disassemble_routine function from disassemble_routine.py
        success = disassemble_routine(
            rom_file=self.rom_file,
            start_addr=start_addr,
            end_addr=None,  # Let auto_detect_end find the proper end
            routine_name=routine_name,
            markdown=False,  # Use plain text for batch processing
            verbose=verbose,
            force_save=force_save,
            auto_detect_end=True,  # Use intelligent boundary detection
            arch=self.arch,
            jmp_target=jmp_target  # Pass the JMP target for overlap handling
        )

        if success and verbose:
            # Validate the created file
            output_file = self.disassembly_dir / f"rom_disasm_{routine_name}.md"
            self.validate_routine(output_file)

        return success

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
        try:
            from unidasm_wrapper import run_unidasm_full
            lines = run_unidasm_full(self.rom_file, self.arch)

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
                            start, end, _, _ = self.find_routine_boundaries(addr)
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
            self.disassemble_routine_batch(start, end, name)

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
        """Extract absolute target addresses from JSR/JMP and conditional branch instructions in disassembly lines."""
        targets = []
        for line in lines:
            # Expect format like: f261: 7e f2 61     JMP    $F261
            # or: 6017: 27 01        BEQ    $601A
            m = re.search(r'\b(JSR|JMP|BEQ|BNE|BCC|BCS|BVC|BVS|BMI|BPL|BHI|BLS|BGE|BLT|BGT|BLE|BRA|LBRN|LBCC|LBCS|LBEQ|LBNE|LBMI|LBPL|LBVC|LBVS|LBHI|LBLS|LBGE|LBLT|LBGT|LBLE|LBSR)\s+\$?([0-9A-Fa-f]{4})\b', line)
            if m:
                addr = m.group(2).lower()
                targets.append(addr)
        return targets

    def graph_disassemble_from_reset(self, verbose=False):
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
        last_progress_time = time.time()
        total_jump_targets = 0
        max_queue_size = 1000  # Safety limit to prevent infinite loops
        start_time = time.time()
        max_runtime = 300  # 5 minutes max runtime
        processed_ranges = []  # List of (start, end) tuples for already processed routines

        def is_address_covered(addr_str):
            """Check if an address is already covered by a processed routine"""
            try:
                addr_int = int(addr_str, 16)
                for start_str, end_str in processed_ranges:
                    start_int = int(start_str, 16)
                    end_int = int(end_str, 16)
                    if start_int <= addr_int <= end_int:
                        return True
                return False
            except ValueError:
                return False

        def remove_covered_addresses(start_addr, end_addr, routine_name):
            """Remove all addresses from the queue that are within the given routine's range"""
            start_int = int(start_addr, 16)
            end_int = int(end_addr, 16)
            addresses_to_remove = []
            
            for addr in to_visit:
                try:
                    addr_int = int(addr, 16)
                    if start_int <= addr_int <= end_int:
                        addresses_to_remove.append(addr)
                except ValueError:
                    pass
            
            for addr in addresses_to_remove:
                to_visit.remove(addr)
                if verbose:
                    print(f"  🗑️  Removed covered address: ${addr}")
            
            if addresses_to_remove:
                print(f"  🧹 Removed {len(addresses_to_remove)} addresses covered by routine {routine_name} ({start_addr}-{end_addr})")

        print(f"🚀 Starting traversal from reset vector ${entry}")
        print(f"📊 Initial queue: {len(to_visit)} addresses")

        while to_visit:
            # Safety checks
            if len(to_visit) > max_queue_size:
                print(f"⚠️  Queue size exceeded {max_queue_size}, stopping to prevent infinite loop")
                break

            if time.time() - start_time > max_runtime:
                print(f"⚠️  Runtime exceeded {max_runtime}s, stopping")
                break
            addr = to_visit.pop(0)
            if addr in visited:
                continue

            # Skip if address is already covered by a processed routine
            if is_address_covered(addr):
                if verbose:
                    print(f"  ⏭️  Skipping ${addr} - already covered by processed routine")
                continue

            visited.add(addr)
            discovered_entries.append(addr)

            # Progress reporting every 50 files or every second if verbose
            current_time = time.time()
            if disassembled > 0 and (disassembled % 50 == 0 or (verbose and current_time - last_progress_time >= 1.0)):
                print(f"📊 Progress: {disassembled} files created, {len(to_visit)} addresses in queue, {total_jump_targets} jump targets collected")
                last_progress_time = current_time

            if verbose:
                print(f"🔍 Processing ${addr}... (Queue: {len(to_visit)}, Jump targets: {total_jump_targets}, Visited: {len(visited)})")
            else:
                print(f"Traversing entry ${addr}... (Queue: {len(to_visit)})")
            try:
                if verbose:
                    print(f"  🔍 Finding boundaries for ${addr}...")
                start, end, external_targets, jmp_target = self.find_routine_boundaries(addr, max_search=1500, existing_ranges=processed_ranges)
                is_seed = (addr == entry)
                if verbose:
                    print(f"  ✅ Boundaries found: {start} to {end}, {len(external_targets)} external targets")
                    if jmp_target:
                        print(f"  🔗 Will add JMP to ${jmp_target} for overlap handling")
            except subprocess.TimeoutExpired:
                print(f"  ⏰ Timeout processing ${addr} - skipping")
                continue
            except Exception as e:
                print(f"  ❌ Error processing ${addr}: {e}")
                continue

            if start and end:
                name = f"{start}_{end}"
                ok = self.disassemble_routine_batch(start, end, name, verbose=False, force_save=is_seed, jmp_target=jmp_target)

                if ok:
                    # Add this routine range to the processed ranges
                    processed_ranges.append((start, end))
                    if verbose:
                        print(f"  📝 Added routine range: {start} to {end}")

                    # Remove all addresses from the queue that are within this routine's range
                    remove_covered_addresses(start, end, f"{start}-{end}")

                # Add external targets to the queue for exploration (only if not already covered)
                for target in external_targets:
                    if target not in visited and target not in to_visit and not is_address_covered(target):
                        # Safety check: validate address format and range
                        try:
                            target_int = int(target, 16)
                            if 0 <= target_int <= 0xFFFF:
                                # Check if target is within current routine range
                                current_start_int = int(start, 16)
                                current_end_int = int(end, 16)
                                if current_start_int <= target_int <= current_end_int:
                                    if verbose:
                                        print(f"  ⏭️  Skipping internal target: ${target} (within current routine {start}-{end})")
                                else:
                                    to_visit.append(target)
                                    total_jump_targets += 1
                                    if verbose:
                                        print(f"  ➕ Added jump target: ${target}")
                            else:
                                if verbose:
                                    print(f"  ⚠️  Skipping invalid target: ${target} (out of range)")
                        except ValueError:
                            if verbose:
                                print(f"  ⚠️  Skipping invalid target: ${target} (not hex)")
                    elif is_address_covered(target):
                        if verbose:
                            print(f"  ⏭️  Skipping target ${target} - already covered by processed routine")
                    else:
                        if verbose:
                            print(f"  ⏭️  Skipping target ${target} - already visited or in queue")
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

                        # Add this routine range to the processed ranges (seed window)
                        seed_end = addr  # For seed, use a small range around the address
                        processed_ranges.append((addr, seed_end))
                        if verbose:
                            print(f"  📝 Added seed routine range: {addr} to {seed_end}")

                        # Remove all addresses from the queue that are within this seed routine's range
                        remove_covered_addresses(addr, seed_end, f"seed-{addr}")

                        for t in self._extract_call_targets(seed_lines):
                            if t not in visited and t not in to_visit and not is_address_covered(t):
                                to_visit.append(t)
                                total_jump_targets += 1
                elif ok:
                    disassembled += 1
                    # After saving, get lines again to discover new targets inside this routine
                    lines = self._disassemble_lines(start, self.calculate_byte_count(start, end))
                    for t in self._extract_call_targets(lines):
                        if t not in visited and t not in to_visit and not is_address_covered(t):
                            to_visit.append(t)
                            total_jump_targets += 1
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

                        # Add this routine range to the processed ranges (fallback seed)
                        fallback_end = addr  # For fallback, use a small range around the address
                        processed_ranges.append((addr, fallback_end))
                        if verbose:
                            print(f"  📝 Added fallback routine range: {addr} to {fallback_end}")

                    for t in self._extract_call_targets(lines):
                        if t not in visited and t not in to_visit and not is_address_covered(t):
                            to_visit.append(t)
                            total_jump_targets += 1
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

        print(f"\n🎉 Traversal complete!")
        print(f"📁 Disassembled {disassembled} routines from reset vector")
        print(f"🔍 Explored {len(discovered_entries)} unique addresses")
        print(f"📂 All files saved in: {self.disassembly_dir}")
        return disassembled

    def fully_automated_disassembly(self, verbose=False):
        """Fully automated workflow to find and disassemble all meaningful routines"""
        print("=== FULLY AUTOMATED ROM DISASSEMBLY ===")
        print("This will find and disassemble all meaningful routines automatically.")
        print("")

        # Strict mode: traverse only from reset vector (no heuristic scanning)
        traversed = self.graph_disassemble_from_reset(verbose=verbose)

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
            routine_name = f"routine_{start}_{end}"
            self.disassemble_routine_batch(start, end, routine_name)

        # Process subroutine calls (these might be callers of routines)
        for pattern, (start, end) in found_calls.items():
            if start and end and start != end:  # Only if we found actual boundaries
                routine_name = f"caller_{start}_{end}"
                self.disassemble_routine_batch(start, end, routine_name)

def main():
    # Check if user tried to pass a positional argument (address) before parsing
    if len(sys.argv) > 1 and not sys.argv[1].startswith('-') and sys.argv[1] not in ['--help', '-h']:
        print("Error: This tool is for batch/automated disassembly only.")
        print("For single routine disassembly, use disassemble_routine.py instead:")
        print("  python3 disassemble_routine.py <rom_file> <address> [options]")
        print("  python3 disassemble_routine.py complete_memory_map.bin 0xf448 --find-end --markdown")
        return 1

    parser = argparse.ArgumentParser(description="Automated ROM Disassembler")
    parser.add_argument("--rom", help="Path to ROM file")
    parser.add_argument("--input", help="Path to ROM file (alternative to --rom)")
    parser.add_argument("--output-dir", help="Output directory for disassembly files")
    parser.add_argument("-arch", default="m6809", help="CPU architecture (default: m6809)")
    parser.add_argument("--search", action="store_true", help="Search for common routine patterns")
    parser.add_argument("--known", action="store_true", help="Disassemble known routines")
    parser.add_argument("--full-auto", action="store_true", help="Fully automated disassembly of all meaningful routines")
    parser.add_argument("--verbose", "-v", action="store_true", help="Enable verbose progress reporting")

    args = parser.parse_args()

    # Determine ROM file path
    rom_file = args.input or args.rom

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

    if args.search:
        disassembler.search_for_common_patterns()

    elif args.known:
        disassembler.disassemble_known_routines()

    elif args.full_auto:
        disassembler.fully_automated_disassembly(verbose=args.verbose)

    else:
        print("No action specified. Use --search, --known, --full-auto, or --addr")
        return 1

    return 0

if __name__ == "__main__":
    sys.exit(main())
