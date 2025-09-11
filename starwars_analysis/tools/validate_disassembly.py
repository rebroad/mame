#!/usr/bin/env python3
"""
Disassembly Validation Tool for Star Wars ROM Analysis

This tool validates disassembly files to catch common mistakes:
- Over-disassembly (too many lines)
- Incomplete routines (missing RTS/JMP)
- Data vs code confusion
- Unrealistic routine sizes
- Missing routine boundaries

Usage: python3 validate_disassembly.py <disassembly_file> [options]
"""

import sys
import re
import os
import argparse
from typing import List, Dict, Tuple, Optional

class DisassemblyValidator:
    def __init__(self):
        self.warnings = []
        self.errors = []
        self.stats = {}

    def validate_file(self, filename: str) -> Dict:
        """Validate a single disassembly file"""
        if not os.path.exists(filename):
            self.errors.append(f"File not found: {filename}")
            return {"valid": False, "errors": self.errors}

        with open(filename, 'r') as f:
            lines = f.readlines()

        self.stats = self._analyze_file(lines)
        self._check_routine_completeness(lines)
        self._check_realistic_size()
        self._check_data_vs_code(lines)
        self._check_boundary_instructions(lines)

        return {
            "valid": len(self.errors) == 0,
            "warnings": self.warnings,
            "errors": self.errors,
            "stats": self.stats
        }

    def _analyze_file(self, lines: List[str]) -> Dict:
        """Analyze basic file statistics"""
        total_lines = len(lines)
        code_lines = 0
        data_lines = 0
        comment_lines = 0
        addresses = []

        for line in lines:
            line = line.strip()
            if not line:
                continue

            # Check for address pattern (e.g., "0ea2: be 4b 32")
            addr_match = re.match(r'^([0-9a-f]+):', line, re.IGNORECASE)
            if addr_match:
                addresses.append(addr_match.group(1))

            # Count different line types
            if line.startswith('#'):
                comment_lines += 1
            elif re.match(r'^[0-9a-f]+:', line, re.IGNORECASE):
                if any(pattern in line.upper() for pattern in ['DB', 'FCB', 'FDB']):
                    data_lines += 1
                else:
                    code_lines += 1

        return {
            "total_lines": total_lines,
            "code_lines": code_lines,
            "data_lines": data_lines,
            "comment_lines": comment_lines,
            "unique_addresses": len(set(addresses)),
            "address_range": self._get_address_range(addresses)
        }

    def _get_address_range(self, addresses: List[str]) -> Optional[Tuple[str, str]]:
        """Get the address range covered by the disassembly"""
        if not addresses:
            return None

        # Convert hex strings to integers for comparison
        int_addresses = []
        for addr in addresses:
            try:
                int_addresses.append(int(addr, 16))
            except ValueError:
                continue

        if not int_addresses:
            return None

        min_addr = min(int_addresses)
        max_addr = max(int_addresses)
        return (f"{min_addr:04x}", f"{max_addr:04x}")

    def _check_routine_completeness(self, lines: List[str]):
        """Check if routine has proper ending instructions"""
        has_rts = False
        has_jmp = False
        has_return = False
        has_bra = False
        has_loop = False

        for line in lines:
            line = line.strip().lower()
            if 'rts' in line:
                has_rts = True
            elif 'jmp' in line:
                has_jmp = True
            elif 'return' in line:
                has_return = True
            elif 'bra' in line:
                has_bra = True
            elif 'bcc' in line or 'bcs' in line or 'beq' in line or 'bne' in line:
                has_loop = True

        if not (has_rts or has_jmp or has_return):
            if has_bra or has_loop:
                self.warnings.append("No RTS, JMP, or return instruction found - may be infinite loop or incomplete")
            else:
                self.warnings.append("No RTS, JMP, or return instruction found - routine may be incomplete")

        # Check for infinite loops (common in game loops)
        if has_jmp and has_bra:
            self.warnings.append("Contains both JMP and BRA - may be infinite loop structure")

    def _check_realistic_size(self):
        """Check if routine size is realistic"""
        total_lines = self.stats.get("total_lines", 0)
        code_lines = self.stats.get("code_lines", 0)

        # Typical routine size heuristics
        if total_lines > 1000:
            self.errors.append(f"Routine too large ({total_lines} lines) - likely over-disassembled")
        elif total_lines > 500:
            self.warnings.append(f"Very large routine ({total_lines} lines) - verify completeness")
        elif total_lines < 3:
            self.warnings.append(f"Very small routine ({total_lines} lines) - may be incomplete")

        if code_lines < total_lines * 0.5:
            self.warnings.append("Low code-to-data ratio - may contain data sections")
        elif code_lines > total_lines * 0.9:
            self.warnings.append("Very high code-to-data ratio - verify this is pure code")

    def _check_data_vs_code(self, lines: List[str]):
        """Check for data vs code confusion"""
        data_patterns = ['DB', 'FCB', 'FDB', 'DC.B', 'DC.W']
        data_lines = 0
        suspicious_lines = 0

        for line in lines:
            line = line.strip().upper()
            if any(pattern in line for pattern in data_patterns):
                data_lines += 1
            elif re.match(r'^[0-9a-f]+:\s+[0-9a-f\s]+$', line):
                # Line with just address and hex bytes
                suspicious_lines += 1

        if data_lines > 0:
            self.warnings.append(f"Found {data_lines} data definition lines - verify this is code")
        if suspicious_lines > 10:
            self.warnings.append(f"Found {suspicious_lines} lines that look like raw data")

    def _check_boundary_instructions(self, lines: List[str]):
        """Check for proper boundary instructions"""
        boundary_instructions = ['RTS', 'JMP', 'RTI', 'SWI']
        found_boundaries = []

        for line in lines:
            line = line.strip().upper()
            for instruction in boundary_instructions:
                if instruction in line:
                    found_boundaries.append(instruction)

        if not found_boundaries:
            self.warnings.append("No boundary instructions found - routine may be incomplete")
        elif len(found_boundaries) > 5:
            self.warnings.append(f"Multiple boundary instructions found: {set(found_boundaries)}")

def main():
    parser = argparse.ArgumentParser(description="Validate Star Wars ROM disassembly files")
    parser.add_argument("file", nargs='?', help="Disassembly file to validate")
    parser.add_argument("--verbose", "-v", action="store_true", help="Verbose output")
    parser.add_argument("--check-all", action="store_true", help="Check all disassembly files in directory")

    args = parser.parse_args()

    validator = DisassemblyValidator()

    if args.check_all:
        # Check all disassembly files in current directory
        files = [f for f in os.listdir('.') if f.endswith('_unidasm.md') or (f.startswith('rom_disasm_') and f.endswith('.md'))]
        if not files:
            print("No disassembly files found (*_unidasm.md or rom_disasm_*.md)")
            return

        print(f"Validating {len(files)} disassembly files...")
        print("=" * 60)

        for filename in sorted(files):
            print(f"\n{filename}:")
            result = validator.validate_file(filename)

            if result["valid"]:
                print("  ✓ VALID")
            else:
                print("  ✗ INVALID")

            for error in result["errors"]:
                print(f"    ERROR: {error}")
            for warning in result["warnings"]:
                print(f"    WARNING: {warning}")

            if args.verbose:
                stats = result["stats"]
                print(f"    Lines: {stats['total_lines']} total, {stats['code_lines']} code, {stats['data_lines']} data")
                if stats["address_range"]:
                    print(f"    Address range: {stats['address_range'][0]}-{stats['address_range'][1]}")
    else:
        # Check single file
        result = validator.validate_file(args.file)

        if result["valid"]:
            print(f"✓ {args.file} is valid")
        else:
            print(f"✗ {args.file} has issues")

        for error in result["errors"]:
            print(f"ERROR: {error}")
        for warning in result["warnings"]:
            print(f"WARNING: {warning}")

        if args.verbose:
            stats = result["stats"]
            print(f"\nStatistics:")
            print(f"  Total lines: {stats['total_lines']}")
            print(f"  Code lines: {stats['code_lines']}")
            print(f"  Data lines: {stats['data_lines']}")
            print(f"  Unique addresses: {stats['unique_addresses']}")
            if stats["address_range"]:
                print(f"  Address range: {stats['address_range'][0]}-{stats['address_range'][1]}")

if __name__ == "__main__":
    main()
