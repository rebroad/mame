# Star Wars Analysis Tools Documentation

## Python Scripts

### Core Analysis Tools

#### `prepare_roms.py` (REPLACE with `prepare_roms_simple.py`)
- **Purpose**: Prepare ROM files for analysis by creating symbolic links with descriptive names
- **Function**: Creates symbolic links to original ROM files with descriptive names
- **Output**: Renamed ROM files with descriptive names (symbolic links to original files)
- **Status**: To be replaced - complex version that references deleted complete_memory_map.bin

#### `parse_mame_trace.py`
- **Purpose**: Parse MAME debug.log to extract port writes and compare with C++ trace output
- **Function**: Extracts memory writes from MAME traces and compares with C++ CSV output
- **Input**: `debug.log` from MAME debugger
- **Output**: `mame_events.csv` for comparison with C++ traces
- **Status**: Active - used for verification

### Disassembly Tools

#### `advanced_disassembler.py`
- **Purpose**: Advanced 6809 assembly disassembler with function detection
- **Function**: Disassembles ROM code and identifies functions, data structures
- **Status**: Legacy - replaced by unidasm

#### `analyze_roms.py`
- **Purpose**: Comprehensive ROM analysis tool
- **Function**: Analyzes ROM structure, identifies code/data sections
- **Status**: Legacy - functionality integrated into other tools

#### `disasm_d91a.py`
- **Purpose**: Disassemble specific ROM routine at address 0xD91A
- **Function**: Focused disassembly of vector graphics routine
- **Status**: Legacy - replaced by unidasm

### Conversion Tools

#### `assembly_to_cpp_converter.py`
- **Purpose**: Convert 6809 assembly to C++ code
- **Function**: Translates assembly instructions to C++ equivalents
- **Status**: Legacy - manual conversion approach used instead

#### `comprehensive_analyzer.py`
- **Purpose**: Comprehensive analysis combining multiple tools
- **Function**: Orchestrates multiple analysis tools
- **Status**: Legacy - replaced by focused approach

## Documentation Files

### Core Documentation
- `MAME_DEBUGGER_QUIRKS.md` - Documents MAME debugger behavior quirks
- `rom_file_mapping.md` - Maps ROM files to MAME versions and explains file organization
- `TOOL_DOCUMENTATION.md` - This file, documents all tools and scripts

### Analysis Reports
- `assembly_to_cpp_report.md` - Report on assembly to C++ conversion
- `cpp_conversion_plan.md` - Plan for C++ conversion
- `detailed_analysis_report.md` - Detailed analysis results
- `final_summary.md` - Final analysis summary
- `ghidra_analysis_guide.md` - Guide for using Ghidra
- `ghidra_analysis_notes.md` - Notes from Ghidra analysis
- `implementation_plan.md` - Implementation plan
- `next_steps_summary.md` - Summary of next steps
- `rom_analysis_report.md` - ROM analysis results
- `webassembly_implementation_plan.md` - WebAssembly implementation plan
- `webassembly_strategy.md` - WebAssembly strategy

### Disassembly Output
- `rom_disasm_*.md` - Various ROM disassembly outputs from different tools

## Proposed Directory Structure

```
starwars_analysis/
├── docs/                          # Documentation
│   ├── core/                      # Core documentation
│   │   ├── MAME_DEBUGGER_QUIRKS.md
│   │   ├── rom_file_mapping.md
│   │   └── TOOL_DOCUMENTATION.md
│   ├── reports/                   # Analysis reports
│   │   ├── assembly_to_cpp_report.md
│   │   ├── detailed_analysis_report.md
│   │   └── ...
│   └── guides/                    # How-to guides
│       ├── ghidra_analysis_guide.md
│       └── implementation_plan.md
├── tools/                         # Python scripts
│   ├── active/                    # Currently used tools
│   │   ├── prepare_roms.py
│   │   └── parse_mame_trace.py
│   └── legacy/                    # Legacy/unused tools
│       ├── advanced_disassembler.py
│       ├── analyze_roms.py
│       └── ...
├── disassembly/                   # Disassembly outputs
│   ├── rom_disasm_*.md
│   └── ...
├── starwars_cpp/                  # C++ conversion code
├── archive/                       # Archived ROM files
└── *.bin                         # ROM files and symbolic links
```

## Tool Status

### Active Tools
- `prepare_roms_simple.py` - ROM file preparation (simple symbolic links)
- `parse_mame_trace.py` - MAME trace parsing
- `normalize_mame_trace.py` - MAME trace PC address normalization

### Redundant/One-off Tools (candidates for removal)
- `disasm_d91a.py` - Very specific, one-off script for 0xD91A disassembly (replaced by unidasm)
- `advanced_disassembler.py` - Custom 6809 disassembler (replaced by unidasm)
- `assembly_to_cpp_converter.py` - Large, complex converter (manual approach used instead)
- `comprehensive_analyzer.py` - Orchestration tool (not using orchestration approach)
- `analyze_roms.py` - General ROM analysis (functionality integrated elsewhere)

### Legacy Tools (candidates for archiving)
- All redundant tools above can be moved to `tools/legacy/` or deleted entirely

## Recommendations

1. **Reorganize directory structure** as proposed above
2. **Replace `prepare_roms.py`** with `prepare_roms_simple.py`
3. **Remove redundant tools** - they're one-off scripts replaced by better approaches
4. **Archive legacy tools** to reduce clutter
5. **Consolidate documentation** into logical groups
6. **Use `git mv`** for file moves to preserve git history
