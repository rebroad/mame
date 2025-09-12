#!/usr/bin/env python3
"""
Shared build file update utilities for routine management
"""

import re
from pathlib import Path
from typing import List, Set

def update_cmake_lists(project_path: Path, routine_files: List[str]) -> bool:
    """Update CMakeLists.txt to include all routine source files and remove stale ones"""
    cmake_file = project_path / "starwars_cpp_v2" / "CMakeLists.txt"
    
    if not cmake_file.exists():
        print("    ❌ CMakeLists.txt not found")
        return False
    
    print("    📝 Updating CMakeLists.txt...")
    
    with open(cmake_file, 'r') as f:
        content = f.read()
    
    # Find the SOURCES section
    lines = content.split('\n')
    sources_start = -1
    sources_end = -1
    
    for i, line in enumerate(lines):
        if 'set(SOURCES' in line:
            sources_start = i
        elif sources_start != -1 and line.strip() == ')':
            sources_end = i
            break
    
    if sources_start == -1 or sources_end == -1:
        print("    ❌ Could not find SOURCES section in CMakeLists.txt")
        return False
    
    # Create expected routine set
    expected_routines = set(routine_files)
    
    # Build new SOURCES section
    new_lines = []
    added_count = 0
    removed_count = 0
    
    for line in lines[sources_start+1:sources_end]:
        if 'src/routine_' in line:
            # Extract routine name from line like "    src/routine_f261.cpp"
            match = re.search(r'src/routine_([a-f0-9]+)\.cpp', line)
            if match:
                routine_name = match.group(1)
                if routine_name in expected_routines:
                    # Keep existing routine
                    new_lines.append(line)
                else:
                    # Remove stale routine
                    removed_count += 1
            else:
                # Keep non-routine lines
                new_lines.append(line)
        else:
            # Keep non-routine lines
            new_lines.append(line)
    
    # Add new routine files that weren't in the original list
    existing_in_cmake = set()
    for line in new_lines:
        if 'src/routine_' in line:
            match = re.search(r'src/routine_([a-f0-9]+)\.cpp', line)
            if match:
                existing_in_cmake.add(match.group(1))
    
    for routine in routine_files:
        if routine not in existing_in_cmake:
            new_line = f"    src/routine_{routine}.cpp"
            new_lines.append(new_line)
            added_count += 1
    
    # Reconstruct the file
    updated_lines = lines[:sources_start+1] + new_lines + lines[sources_end:]
    
    # Write updated content
    with open(cmake_file, 'w') as f:
        f.write('\n'.join(updated_lines))
    
    if added_count > 0:
        print(f"    ✅ Added {added_count} new routines to CMakeLists.txt")
    if removed_count > 0:
        print(f"    🗑️  Removed {removed_count} stale routines from CMakeLists.txt")
    print(f"    📊 Total routines in build: {len(expected_routines)}")
    return True

def update_routine_map(project_path: Path, routine_files: List[str]) -> bool:
    """Update rom_routines_wrapper.cpp to add all routines to routine_map and remove stale ones"""
    wrapper_file = project_path / "starwars_cpp_v2" / "src" / "rom_routines_wrapper.cpp"
    
    if not wrapper_file.exists():
        print("    ❌ rom_routines_wrapper.cpp not found")
        return False
    
    print("    📝 Updating rom_routines_wrapper.cpp...")
    
    with open(wrapper_file, 'r') as f:
        content = f.read()
    
    # Find the routine_map definition
    lines = content.split('\n')
    map_start = -1
    map_end = -1
    
    for i, line in enumerate(lines):
        if 'static const std::map' in line and 'routine_map' in line:
            map_start = i
        elif map_start != -1 and '};' in line:
            map_end = i
            break
    
    if map_start == -1 or map_end == -1:
        print("    ❌ Could not find routine_map in rom_routines_wrapper.cpp")
        return False
    
    # Create expected routine set
    expected_routines = set(routine_files)
    
    # Build new routine_map entries
    new_lines = []
    added_count = 0
    removed_count = 0
    
    for line in lines[map_start+1:map_end]:
        if '{0x' in line and '_impl' in line:
            # Extract routine name from line like "    {0xF261, routine_f261_impl},"
            match = re.search(r'routine_([a-f0-9]+)_impl', line)
            if match:
                routine_name = match.group(1)
                if routine_name in expected_routines:
                    # Keep existing routine
                    new_lines.append(line)
                else:
                    # Remove stale routine
                    removed_count += 1
            else:
                # Keep non-routine lines
                new_lines.append(line)
        else:
            # Keep non-routine lines
            new_lines.append(line)
    
    # Add new routine entries that weren't in the original list
    existing_in_map = set()
    for line in new_lines:
        if '{0x' in line and '_impl' in line:
            match = re.search(r'routine_([a-f0-9]+)_impl', line)
            if match:
                existing_in_map.add(match.group(1))
    
    for routine in routine_files:
        if routine not in existing_in_map:
            addr = int(routine, 16)
            new_entry = f"    {{0x{addr:04X}, routine_{routine}_impl}},"
            new_lines.append(new_entry)
            added_count += 1
    
    # Reconstruct the file
    updated_lines = lines[:map_start+1] + new_lines + lines[map_end:]
    
    # Write updated content
    with open(wrapper_file, 'w') as f:
        f.write('\n'.join(updated_lines))
    
    if added_count > 0:
        print(f"    ✅ Added {added_count} new routines to routine_map")
    if removed_count > 0:
        print(f"    🗑️  Removed {removed_count} stale routines from routine_map")
    print(f"    📊 Total routines in map: {len(expected_routines)}")
    return True

def update_build_files(project_path: Path, routine_files: List[str]) -> bool:
    """Update all build files with the given routine files"""
    print("🔧 Updating build files...")
    
    success = True
    success &= update_cmake_lists(project_path, routine_files)
    success &= update_routine_map(project_path, routine_files)
    
    if success:
        print("✅ Build files updated successfully!")
    else:
        print("❌ Some build file updates failed!")
    
    return success

def get_existing_routine_files(src_dir: Path) -> List[str]:
    """Get list of existing routine files in the src directory"""
    routine_files = []
    for file_path in src_dir.glob("routine_*.cpp"):
        # Extract routine name from filename like "routine_f261.cpp"
        match = re.match(r'routine_([a-f0-9]+)\.cpp', file_path.name)
        if match:
            routine_files.append(match.group(1))
    
    return sorted(routine_files, key=lambda x: int(x, 16))

def cleanup_stale_files(src_dir: Path, expected_routines: Set[str]) -> int:
    """Remove routine files that are no longer expected"""
    print("🧹 Cleaning up stale routine files...")
    
    removed_count = 0
    for file_path in src_dir.glob("routine_*.cpp"):
        # Extract routine name from filename
        match = re.match(r'routine_([a-f0-9]+)\.cpp', file_path.name)
        if match:
            routine_name = match.group(1)
            if routine_name not in expected_routines:
                print(f"    🗑️  Removing stale file: {file_path.name}")
                file_path.unlink()
                removed_count += 1
    
    if removed_count > 0:
        print(f"    ✅ Removed {removed_count} stale routine files")
    else:
        print("    ✅ No stale files found")
    
    return removed_count
