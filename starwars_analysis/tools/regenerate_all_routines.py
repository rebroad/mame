#!/usr/bin/env python3
"""
Regenerate all routine files using the improved converter and update build files
"""

import subprocess
import os
import time
from pathlib import Path
from build_updater import update_build_files, get_existing_routine_files, cleanup_stale_files

def regenerate_all_routines():
    """Regenerate all routine files with improved converter and update build files"""

    script_dir = Path(__file__).parent
    project_root = script_dir.parent
    disasm_dir = project_root / "disassembly"
    output_dir = project_root / "starwars_cpp_v2" / "src"
    converter = script_dir / "disasm_to_cpp_converter.py"
    log_file = project_root / "regeneration.log"

    # Ensure output directory exists
    output_dir.mkdir(parents=True, exist_ok=True)

    # Find all rom_disasm_*.md files
    disasm_files = list(disasm_dir.glob("rom_disasm_*.md"))

    if not disasm_files:
        print("No rom_disasm_*.md files found")
        return False

    print(f"Found {len(disasm_files)} disassembly files to convert")
    print(f"📝 Detailed log: {log_file}")

    # Track all routine names for build file updates
    all_routine_names = set()

    # Convert each file with logging to file
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

            # Run the improved converter
            cmd = [
                "python3",
                str(converter),
                str(disasm_file),
                str(cpp_file),
                function_name
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
        print(f"\n🎉 Complete regeneration successful!")
        print(f"   • {success_count} routine files generated")
        print(f"   • Build files updated")
        print(f"   • Ready to compile!")
    else:
        print(f"\n⚠️  Regeneration completed with build file update issues")

    return build_success

if __name__ == "__main__":
    regenerate_all_routines()
