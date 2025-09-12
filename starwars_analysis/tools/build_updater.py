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
    """Update rom_routines_wrapper.cpp to add all routines to declarations, routine_map and remove stale ones"""
    wrapper_file = project_path / "starwars_cpp_v2" / "src" / "rom_routines_wrapper.cpp"
    
    if not wrapper_file.exists():
        print("    ❌ rom_routines_wrapper.cpp not found")
        return False
    
    print("    📝 Updating rom_routines_wrapper.cpp...")
    
    with open(wrapper_file, 'r') as f:
        content = f.read()
    
    lines = content.split('\n')
    expected_routines = set(routine_files)
    
    # Find function declarations section (before the first function implementation)
    decl_start = -1
    decl_end = -1
    for i, line in enumerate(lines):
        if 'void routine_' in line and '_impl(StarWarsCPU& cpu);' in line:
            if decl_start == -1:
                decl_start = i
            decl_end = i
        elif decl_start != -1 and not ('void routine_' in line and '_impl(StarWarsCPU& cpu);' in line):
            if line.strip() == '' or line.strip().startswith('//'):
                continue
            else:
                break
    
    # Find the routine_map definition
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
    
    # Build new function declarations
    new_declarations = []
    for routine in sorted(routine_files, key=lambda x: int(x, 16)):
        new_declarations.append(f"void routine_{routine}_impl(StarWarsCPU& cpu);")
    
    # Build new routine_map entries
    new_map_entries = []
    for routine in sorted(routine_files, key=lambda x: int(x, 16)):
        addr = int(routine, 16)
        new_map_entries.append(f"    {{0x{addr:04X}, routine_{routine}_impl}},")
    
    # Build new wrapper functions
    new_wrapper_functions = []
    for routine in sorted(routine_files, key=lambda x: int(x, 16)):
        new_wrapper_functions.extend([
            f"void CPU6809::routine_{routine}() {{",
            f"    StarWarsCPU wrapper(*this);",
            f"    routine_{routine}_impl(wrapper);",
            f"}}",
            ""
        ])
    
    # Count existing entries for reporting
    existing_declarations = 0
    existing_map_entries = 0
    existing_wrappers = 0
    
    if decl_start != -1 and decl_end != -1:
        existing_declarations = decl_end - decl_start + 1
        for line in lines[decl_start:decl_end+1]:
            if 'void routine_' in line:
                existing_declarations += 0  # Already counted above
            else:
                existing_declarations -= 1  # Adjust for non-declaration lines
    
    for line in lines[map_start+1:map_end]:
        if '{0x' in line and '_impl' in line:
            existing_map_entries += 1
    
    # Count existing wrapper functions
    for i, line in enumerate(lines):
        if re.match(r'void CPU6809::routine_[a-f0-9]+\(\) \{', line):
            existing_wrappers += 1
    
    # Find wrapper functions section (after the map)
    wrapper_start = -1
    for i in range(map_end, len(lines)):
        if re.match(r'void CPU6809::routine_[a-f0-9]+\(\) \{', lines[i]):
            wrapper_start = i
            break
    
    # Reconstruct the file
    updated_lines = []
    
    # Add lines before declarations
    if decl_start != -1:
        updated_lines.extend(lines[:decl_start])
    else:
        # Find where to insert declarations (after includes, before first function)
        insert_point = 0
        for i, line in enumerate(lines):
            if line.strip().startswith('#include') or line.strip().startswith('namespace') or line.strip().startswith('//'):
                insert_point = i + 1
            elif line.strip() and not line.strip().startswith('//'):
                break
        updated_lines.extend(lines[:insert_point])
        if updated_lines and updated_lines[-1].strip():
            updated_lines.append('')
    
    # Add new declarations
    updated_lines.extend(new_declarations)
    if new_declarations:
        updated_lines.append('')
    
    # Add lines between declarations and map
    if decl_start != -1:
        updated_lines.extend(lines[decl_end+1:map_start+1])
    else:
        # Find the routine_map line
        for i, line in enumerate(lines):
            if 'static const std::map' in line and 'routine_map' in line:
                updated_lines.extend(lines[insert_point:i+1])
                break
    
    # Add new map entries
    updated_lines.extend(new_map_entries)
    
    # Add lines between map and wrapper functions
    if wrapper_start != -1:
        updated_lines.extend(lines[map_end+1:wrapper_start])
    else:
        updated_lines.extend(lines[map_end+1:])
    
    # Add new wrapper functions
    if wrapper_start != -1:
        updated_lines.extend(new_wrapper_functions)
        
        # Add remaining lines after wrapper functions
        wrapper_end = wrapper_start
        for i in range(wrapper_start, len(lines)):
            if re.match(r'void CPU6809::routine_[a-f0-9]+\(\) \{', lines[i]):
                # Find the end of this wrapper function
                brace_count = 0
                for j in range(i, len(lines)):
                    if '{' in lines[j]:
                        brace_count += lines[j].count('{')
                    if '}' in lines[j]:
                        brace_count -= lines[j].count('}')
                    if brace_count == 0:
                        wrapper_end = j + 1
                        break
        
        # Skip the old wrapper functions and add any remaining content
        updated_lines.extend(lines[wrapper_end:])
    else:
        # No existing wrapper functions, just add the new ones
        updated_lines.extend(new_wrapper_functions)
    
    # Write updated content
    with open(wrapper_file, 'w') as f:
        f.write('\n'.join(updated_lines))
    
    removed_declarations = max(0, existing_declarations - len(routine_files))
    removed_map_entries = max(0, existing_map_entries - len(routine_files))
    removed_wrappers = max(0, existing_wrappers - len(routine_files))
    
    if removed_declarations > 0:
        print(f"    🗑️  Removed {removed_declarations} stale function declarations")
    if removed_map_entries > 0:
        print(f"    🗑️  Removed {removed_map_entries} stale routines from routine_map")
    if removed_wrappers > 0:
        print(f"    🗑️  Removed {removed_wrappers} stale wrapper functions")
    print(f"    📊 Total routines in map: {len(expected_routines)}")
    return True

def update_header_file(project_path: Path, routine_files: List[str]) -> bool:
    """Update cpu_6809.h to add all routine declarations and remove stale ones"""
    header_file = project_path / "starwars_cpp_v2" / "include" / "cpu_6809.h"
    
    if not header_file.exists():
        print("    ❌ cpu_6809.h not found")
        return False
    
    print("    📝 Updating cpu_6809.h...")
    
    with open(header_file, 'r') as f:
        content = f.read()
    
    lines = content.split('\n')
    expected_routines = set(routine_files)
    
    # Find the CPU6809 class definition and the public section
    class_start = -1
    public_start = -1
    private_start = -1
    
    for i, line in enumerate(lines):
        if 'class CPU6809' in line:
            class_start = i
        elif class_start != -1 and 'public:' in line:
            public_start = i
        elif public_start != -1 and ('private:' in line or 'protected:' in line):
            private_start = i
            break
    
    if class_start == -1 or public_start == -1:
        print("    ❌ Could not find CPU6809 class or public section in cpu_6809.h")
        return False
    
    # Find existing routine declarations in the public section
    existing_declarations = []
    decl_start = -1
    decl_end = -1
    
    for i in range(public_start, private_start if private_start != -1 else len(lines)):
        if 'void routine_' in lines[i] and '(void);' in lines[i]:
            match = re.search(r'void routine_([a-f0-9]+)\(void\);', lines[i])
            if match:
                if decl_start == -1:
                    decl_start = i
                decl_end = i
                existing_declarations.append(lines[i])
    
    # Build new routine declarations
    new_declarations = []
    for routine in sorted(routine_files, key=lambda x: int(x, 16)):
        new_declarations.append(f"    void routine_{routine}(void);")
    
    # Count existing declarations for reporting
    existing_count = len(existing_declarations)
    
    # Reconstruct the file
    updated_lines = []
    
    # Add lines before routine declarations
    if decl_start != -1:
        updated_lines.extend(lines[:decl_start])
    else:
        # Find where to insert declarations (after other public methods)
        insert_point = public_start + 1
        for i in range(public_start + 1, private_start if private_start != -1 else len(lines)):
            if lines[i].strip() and not lines[i].strip().startswith('//'):
                insert_point = i
        updated_lines.extend(lines[:insert_point])
        if updated_lines and updated_lines[-1].strip():
            updated_lines.append('')
    
    # Add new declarations
    updated_lines.extend(new_declarations)
    if new_declarations:
        updated_lines.append('')
    
    # Add remaining lines after declarations
    if decl_start != -1:
        updated_lines.extend(lines[decl_end+1:])
    else:
        updated_lines.extend(lines[insert_point:])
    
    # Write updated content
    with open(header_file, 'w') as f:
        f.write('\n'.join(updated_lines))
    
    removed_count = max(0, existing_count - len(routine_files))
    
    if removed_count > 0:
        print(f"    🗑️  Removed {removed_count} stale routine declarations from header")
    print(f"    📊 Total routine declarations in header: {len(expected_routines)}")
    return True

def update_build_files(project_path: Path, routine_files: List[str]) -> bool:
    """Update all build files with the given routine files"""
    print("🔧 Updating build files...")
    
    success = True
    success &= update_cmake_lists(project_path, routine_files)
    success &= update_routine_map(project_path, routine_files)
    success &= update_header_file(project_path, routine_files)
    
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
