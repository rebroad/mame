#!/usr/bin/env python3
"""
Reorganize Star Wars analysis directory structure

This script reorganizes the current flat directory structure into a more
organized hierarchy with separate directories for documentation, tools,
and disassembly output.
"""

import os
import shutil
import subprocess
from pathlib import Path

def create_directory_structure(base_path: Path) -> None:
    """Create the new directory structure"""
    directories = [
        'docs/core',
        'docs/reports', 
        'docs/guides',
        'tools/active',
        'tools/legacy',
        'disassembly'
    ]
    
    for directory in directories:
        (base_path / directory).mkdir(parents=True, exist_ok=True)
        print(f"Created directory: {directory}")

def git_mv_or_mv(src: Path, dst: Path) -> None:
    """Try git mv first, fall back to regular mv"""
    try:
        # Try git mv first
        subprocess.run(['git', 'mv', str(src), str(dst)], check=True, capture_output=True)
        print(f"Git moved {src.name} to {dst.parent.name}/")
    except subprocess.CalledProcessError:
        # Fall back to regular move
        shutil.move(str(src), str(dst))
        print(f"Moved {src.name} to {dst.parent.name}/")

def move_files(base_path: Path) -> None:
    """Move files to appropriate directories"""
    
    # Core documentation
    core_docs = [
        'MAME_DEBUGGER_QUIRKS.md',
        'rom_file_mapping.md', 
        'TOOL_DOCUMENTATION.md'
    ]
    
    for doc in core_docs:
        src = base_path / doc
        dst = base_path / 'docs/core' / doc
        if src.exists():
            git_mv_or_mv(src, dst)
    
    # Analysis reports
    report_docs = [
        'assembly_to_cpp_report.md',
        'cpp_conversion_plan.md',
        'detailed_analysis_report.md',
        'final_summary.md',
        'rom_analysis_report.md',
        'next_steps_summary.md',
        'webassembly_implementation_plan.md',
        'webassembly_strategy.md'
    ]
    
    for doc in report_docs:
        src = base_path / doc
        dst = base_path / 'docs/reports' / doc
        if src.exists():
            git_mv_or_mv(src, dst)
    
    # Guides
    guide_docs = [
        'ghidra_analysis_guide.md',
        'ghidra_analysis_notes.md',
        'implementation_plan.md'
    ]
    
    for doc in guide_docs:
        src = base_path / doc
        dst = base_path / 'docs/guides' / doc
        if src.exists():
            git_mv_or_mv(src, dst)
    
    # Active tools
    active_tools = [
        'prepare_roms.py',
        'parse_mame_trace.py',
        'normalize_mame_trace.py'
    ]
    
    for tool in active_tools:
        src = base_path / tool
        dst = base_path / 'tools/active' / tool
        if src.exists():
            git_mv_or_mv(src, dst)
    
    # Legacy tools
    legacy_tools = [
        'advanced_disassembler.py',
        'analyze_roms.py',
        'assembly_to_cpp_converter.py',
        'comprehensive_analyzer.py',
        'disasm_d91a.py'
    ]
    
    for tool in legacy_tools:
        src = base_path / tool
        dst = base_path / 'tools/legacy' / tool
        if src.exists():
            git_mv_or_mv(src, dst)
    
    # Disassembly output
    disasm_files = [f for f in base_path.glob('rom_disasm_*.md')]
    for disasm_file in disasm_files:
        dst = base_path / 'disassembly' / disasm_file.name
        git_mv_or_mv(disasm_file, dst)

def main():
    base_path = Path('.')
    
    print("Reorganizing Star Wars analysis directory structure...")
    print()
    
    # Create directory structure
    create_directory_structure(base_path)
    print()
    
    # Move files
    move_files(base_path)
    print()
    
    print("Reorganization complete!")
    print()
    print("New structure:")
    print("├── docs/")
    print("│   ├── core/          # Core documentation")
    print("│   ├── reports/       # Analysis reports") 
    print("│   └── guides/        # How-to guides")
    print("├── tools/")
    print("│   ├── active/        # Currently used tools")
    print("│   └── legacy/        # Legacy/unused tools")
    print("├── disassembly/       # Disassembly outputs")
    print("├── starwars_cpp/      # C++ conversion code")
    print("├── archive/           # Archived ROM files")
    print("└── *.bin             # ROM files and symbolic links")

if __name__ == '__main__':
    main()
