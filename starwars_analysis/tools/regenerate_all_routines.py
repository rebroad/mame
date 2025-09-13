#!/usr/bin/env python3
"""
Regenerate all routine files using the improved converter and update build files
"""

import subprocess
import os
import time
import argparse
import re
from pathlib import Path
from build_updater import update_build_files, get_existing_routine_files, cleanup_stale_files

def collect_all_goto_targets(disasm_dir):
    """Collect all goto targets from all disassembly files"""
    all_targets = set()

    print("🔍 First pass: Collecting all goto targets...")

    for disasm_file in disasm_dir.glob("rom_disasm_*.md"):
        with open(disasm_file, 'r', encoding='utf-8') as f:
            content = f.read()

        # Find all BRA and JMP instructions with absolute addresses
        # Use simple string search instead of regex
        lines = content.split('\n')
        for line in lines:
            if 'BRA' in line and '$' in line:
                # Extract address after $
                dollar_pos = line.find('$')
                if dollar_pos != -1:
                    addr_part = line[dollar_pos+1:].split()[0]
                    try:
                        target_addr = int(addr_part, 16)
                        all_targets.add(target_addr)
                    except ValueError:
                        pass
            elif 'JMP' in line and '$' in line:
                # Extract address after $
                dollar_pos = line.find('$')
                if dollar_pos != -1:
                    addr_part = line[dollar_pos+1:].split()[0]
                    try:
                        target_addr = int(addr_part, 16)
                        all_targets.add(target_addr)
                    except ValueError:
                        pass

    print(f"  Found {len(all_targets)} unique goto targets")
    return sorted(all_targets)

def regenerate_all_routines(build_files_only=False):
    """Regenerate all routine files with improved converter and update build files"""

    script_dir = Path(__file__).parent
    project_root = script_dir.parent
    disasm_dir = project_root / "disassembly"
    output_dir = project_root / "starwars_cpp_v2" / "src"
    converter = script_dir / "disasm_to_cpp_converter.py"
    log_file = project_root / "regeneration.log"

    # Ensure output directory exists
    output_dir.mkdir(parents=True, exist_ok=True)

    if build_files_only:
        print("🔧 Build files only mode - skipping C++ file regeneration")

        # Find existing routine files instead of disassembly files
        existing_routines = get_existing_routine_files(output_dir)
        all_routine_names = set(existing_routines)

        print(f"Found {len(existing_routines)} existing routine files")

    else:
        # Find all rom_disasm_*.md files
        disasm_files = list(disasm_dir.glob("rom_disasm_*.md"))

        if not disasm_files:
            print("No rom_disasm_*.md files found")
            return False

        print(f"Found {len(disasm_files)} disassembly files to convert")
        print(f"📝 Detailed log: {log_file}")

        # FIRST PASS: Collect all goto targets
        all_goto_targets = collect_all_goto_targets(disasm_dir)

        # Track all routine names for build file updates
        all_routine_names = set()

        # SECOND PASS: Convert each file with global goto targets
        success_count = 0
        error_count = 0
        updated_count = 0
        skipped_count = 0

        with open(log_file, 'w') as log:
            log.write(f"Regeneration started at {time.strftime('%Y-%m-%d %H:%M:%S')}\n")
            log.write(f"Processing {len(disasm_files)} disassembly files\n\n")

            for i, disasm_file in enumerate(disasm_files):
                # Extract address from filename (e.g., rom_disasm_f261.md -> f261)
                addr = disasm_file.stem.replace('rom_disasm_', '')

                # Create function name (e.g., f261 -> routine_f261)
                function_name = f"routine_{addr}"

                # Create output C++ file
                cpp_file = output_dir / f"{function_name}.cpp"

                # Run the improved converter with global goto targets
                cmd = [
                    "python3",
                    str(converter),
                    str(disasm_file),
                    str(cpp_file),
                    function_name,
                    "--global-goto-targets",
                    ",".join(f"{addr:04x}" for addr in all_goto_targets)
                ]

                try:
                    result = subprocess.run(cmd, capture_output=True, text=True, check=True)
                    all_routine_names.add(addr)
                    success_count += 1

                    # Check if file was updated or skipped based on converter output
                    if "Updated" in result.stdout:
                        log.write(f"✓ Updated {disasm_file.name} -> {cpp_file.name}\n")
                        updated_count += 1
                    elif "Skipped" in result.stdout:
                        log.write(f"⏭️  Skipped {disasm_file.name} -> {cpp_file.name} (no changes)\n")
                        skipped_count += 1
                    else:
                        log.write(f"✓ {disasm_file.name} -> {cpp_file.name}\n")
                        updated_count += 1

                except subprocess.CalledProcessError as e:
                    log.write(f"✗ {disasm_file.name} -> {cpp_file.name}\n")
                    log.write(f"  Error: {e}\n")
                    if e.stderr:
                        log.write(f"  stderr: {e.stderr}\n")
                    error_count += 1

                # Show progress every 50 files
                if (i + 1) % 50 == 0:
                    print(f"📊 Progress: {i + 1}/{len(disasm_files)} files processed...")

        print(f"\n📊 Conversion complete: {success_count}/{len(disasm_files)} files processed successfully")
        print(f"   • {updated_count} files updated")
        print(f"   • {skipped_count} files skipped (no changes)")

        if error_count > 0:
            print(f"⚠️  {error_count} files failed to convert (see {log_file} for details)")
            return False

        # Clean up stale routine files
        cleanup_stale_files(output_dir, all_routine_names)

    # Update build files with all routine files
    routine_list = sorted(list(all_routine_names), key=lambda x: int(x, 16))
    build_success = update_build_files(project_root, routine_list)

    if build_success:
        if build_files_only:
            print(f"\n🎉 Build files updated successfully!")
            print(f"   • {len(all_routine_names)} routine files found")
            print(f"   • Build files updated")
            print(f"   • Ready to compile!")
        else:
            print(f"\n🎉 Complete regeneration successful!")
            print(f"   • {len(all_routine_names)} routine files generated")
            print(f"   • Build files updated")
            print(f"   • Ready to compile!")
    else:
        print(f"\n⚠️  Regeneration completed with build file update issues")

    return build_success

def main():
    """Main function with command line argument parsing"""
    parser = argparse.ArgumentParser(description="Regenerate all routine files and update build files")
    parser.add_argument("--build-files-only", action="store_true",
                       help="Only update build files, skip C++ file regeneration")

    args = parser.parse_args()

    return regenerate_all_routines(build_files_only=args.build_files_only)

if __name__ == "__main__":
    exit(main())
