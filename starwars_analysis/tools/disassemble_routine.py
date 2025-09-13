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
import re
from typing import List, Tuple, Optional
from pathlib import Path
from unidasm_wrapper import run_unidasm, find_routine_end

def disassemble_routine(rom_file: str, start_addr: str, end_addr: Optional[str] = None,
                       output_file: Optional[str] = None, routine_name: Optional[str] = None,
                       markdown: bool = True, verbose: bool = True, force_save: bool = False,
                       auto_detect_end: bool = False, arch: str = "m6809", jmp_target: str = None) -> bool:
    """
    Disassemble a single routine with comprehensive options.

    Args:
        rom_file: Path to the ROM file
        start_addr: Start address (hex string)
        end_addr: Optional end address (hex string)
        output_file: Optional output file path
        routine_name: Optional routine name for default file naming
        markdown: Whether to format output as markdown (default: True)
        verbose: Whether to print verbose output (default: True)
        force_save: Whether to save even if routine appears invalid (default: False)
        auto_detect_end: Whether to auto-detect routine end (default: False)
        arch: CPU architecture (default: "m6809")
        jmp_target: Optional target address for JMP instruction to handle overlaps

    Returns:
        True if successful, False otherwise
    """
    try:
        # Auto-detect end if requested
        if auto_detect_end and not end_addr:
            end_addr = find_routine_end(rom_file, start_addr, arch)
            if end_addr and verbose:
                print(f"Auto-detected routine end: {end_addr}")
            elif not end_addr and verbose:
                print("Could not auto-detect routine end, using default range")
                # Use a reasonable default range
                start_int = int(start_addr, 16)
                end_int = (start_int + 512) & 0xFFFF
                end_addr = f"0x{end_int:04x}"

        # Get disassembly
        lines = run_unidasm(rom_file, start_addr, end_addr, arch)

        if not lines:
            if verbose:
                print(f"No disassembly found for address {start_addr}")
            return False

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
                print(f"⚠ Skipping routine - appears to be all zeros or invalid")
            return False

        # Prepare output
        if markdown:
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

            # Add JMP instruction for overlap handling if specified
            if jmp_target:
                # Find the last address in the disassembly to calculate the JMP address
                last_line = lines[-1] if lines else ""
                last_addr_match = re.match(r'^([0-9a-f]+):', last_line, re.IGNORECASE)
                if last_addr_match:
                    last_addr = last_addr_match.group(1).upper()
                    last_addr_int = int(last_addr, 16)
                    jmp_addr_int = last_addr_int + 1
                    jmp_addr = f"{jmp_addr_int:04X}"
                    output_lines.append(f"{jmp_addr}: 7e {jmp_target}     JMP    ${jmp_target}")
                    if verbose:
                        print(f"  Added JMP ${jmp_target} at ${jmp_addr} for overlap handling")

            output_lines.append("```")
        else:
            # Plain text format
            output_lines = lines.copy()

            # Add JMP instruction for overlap handling if specified
            if jmp_target:
                # Find the last address in the disassembly to calculate the JMP address
                last_line = lines[-1] if lines else ""
                last_addr_match = re.match(r'^([0-9a-f]+):', last_line, re.IGNORECASE)
                if last_addr_match:
                    last_addr = last_addr_match.group(1).upper()
                    last_addr_int = int(last_addr, 16)
                    jmp_addr_int = last_addr_int + 1
                    jmp_addr = f"{jmp_addr_int:04X}"
                    output_lines.append(f"{jmp_addr}: 7e {jmp_target}     JMP    ${jmp_target}")
                    if verbose:
                        print(f"  Added JMP ${jmp_target} at ${jmp_addr} for overlap handling")

        # Determine output file if not provided
        if not output_file and routine_name:
            # Use default directory structure like automated_disassembler.py
            script_dir = Path(__file__).parent
            project_root = script_dir.parent
            disassembly_dir = project_root / "disassembly"
            disassembly_dir.mkdir(exist_ok=True)
            output_file = disassembly_dir / f"rom_disasm_{routine_name}.md"

        # Output to file or stdout
        if output_file:
            with open(output_file, 'w') as f:
                f.write('\n'.join(output_lines))
            if verbose:
                print(f"✓ Created {output_file} with {len(lines)} lines")
        else:
            print('\n'.join(output_lines))

        return True

    except Exception as e:
        if verbose:
            print(f"Error disassembling routine: {e}")
        return False

def main():
    parser = argparse.ArgumentParser(description="Disassemble a ROM routine")
    parser.add_argument("rom_file", help="Path to ROM file")
    parser.add_argument("start_addr", help="Start address (hex, e.g., 0xf448)")
    parser.add_argument("--end", help="End address (hex)")
    parser.add_argument("--output", "-o", help="Output file path")
    parser.add_argument("--name", help="Routine name for default file naming")
    parser.add_argument("--find-end", action="store_true", help="Auto-detect routine end")
    parser.add_argument("--no-markdown", action="store_true", help="Output plain text instead of markdown")
    parser.add_argument("--quiet", action="store_true", help="Suppress verbose output")
    parser.add_argument("--force", action="store_true", help="Force save even if routine appears invalid")
    parser.add_argument("--arch", default="m6809", help="CPU architecture (default: m6809)")
    parser.add_argument("--jmp-target", help="Target address for JMP instruction to handle overlaps")

    args = parser.parse_args()

    # Auto-detect ROM file if not provided
    if not args.rom_file:
        # Look for complete_memory_map.bin in the parent directory (same as automated_disassembler.py)
        script_dir = Path(__file__).parent
        project_root = script_dir.parent
        auto_rom_file = project_root / "complete_memory_map.bin"

        if auto_rom_file.exists():
            args.rom_file = str(auto_rom_file)
            print(f"Auto-detected ROM file: {args.rom_file}")
        else:
            parser.error("ROM file path required. Auto-detection failed - complete_memory_map.bin not found in project root.")

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

    # Disassemble
    success = disassemble_routine(
        args.rom_file,
        start_addr,
        end_addr=end_addr,
        output_file=args.output,
        routine_name=args.name,
        markdown=not args.no_markdown,
        verbose=not args.quiet,
        force_save=args.force,
        auto_detect_end=args.find_end,
        arch=args.arch
    )
    return 0 if success else 1

if __name__ == "__main__":
    sys.exit(main())
