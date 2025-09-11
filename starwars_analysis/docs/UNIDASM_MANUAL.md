# UNIDASM Manual

## Overview

`unidasm` is a universal disassembler tool included with MAME that can disassemble binary files for various CPU architectures. It's designed to disassemble entire files or portions of files, but **does not automatically detect routine boundaries**.

## Command Line Syntax

```bash
unidasm <filename> -arch <architecture> [options]
```

### Required Arguments

- **`<filename>`**: Path to the binary file to disassemble
- **`-arch <architecture>`**: Target CPU architecture (see supported architectures below)

### Optional Arguments

- **`-basepc <pc>`**: Base program counter address (hex, default: 0)
- **`-skip <n>`**: Skip N bytes from start of file (decimal)
- **`-count <n>`**: Disassemble only N bytes (decimal, default: entire file)
- **`-norawbytes`**: Don't show raw hex bytes
- **`-xchbytes`**: Exchange byte order
- **`-flipped`**: Show disassembly before address
- **`-upper`**: Use uppercase hex
- **`-lower`**: Use lowercase hex
- **`-octal`**: Use octal instead of hexadecimal

## Supported Architectures

The tool supports many CPU architectures including:
- **`m6809`**: Motorola 6809 (used in Star Wars)
- `z80`, `m6800`, `m68000`, `6502`, `8080`, `8086`, and many others

## How UNIDASM Works

### 1. File Loading
- Loads the entire file into memory
- Applies skip offset if specified
- Truncates to count bytes if specified

### 2. Disassembly Process
- Starts at `basepc` address
- Disassembles sequentially from start to end
- **Does NOT detect routine boundaries automatically**
- Continues until end of file or count limit

### 3. Output Format
```
<address>: <hex_bytes> <assembly_instruction>
```

Example:
```
0368: fc 4b 0e     LDD    $4B0E
036b: 83 00 01     SUBD   #$0001
036e: fd 4b 0e     STD    $4B0E
```

## Key Limitations and Gotchas

### 1. **No Automatic Routine Detection**
- `unidasm` disassembles from start to end
- It does NOT stop at RTS, JMP, or other boundary instructions
- This is why we got 6,593 lines for the 6368 routine!

### 2. **No End Address Parameter**
- There's no `-end` or `-to` parameter
- You must use `-count` to limit the number of bytes
- Calculating the right count can be tricky

### 3. **Sequential Disassembly Only**
- Cannot skip to specific addresses mid-file
- Cannot disassemble non-contiguous sections
- Must use `-skip` to start at different positions

### 4. **Data vs Code Confusion**
- Will disassemble data as code if it looks like valid instructions
- No intelligence to detect data sections
- May produce misleading "instructions" from data

## Common Usage Patterns

### Disassemble Entire File
```bash
unidasm rom.bin -arch m6809
```

### Disassemble from Specific Address
```bash
unidasm rom.bin -arch m6809 -basepc 0x611e
```

### Skip Bytes and Limit Count
```bash
unidasm rom.bin -arch m6809 -skip 24862 -count 100
# Skip to address 0x611E (24862 decimal), disassemble 100 bytes
```

### Clean Output (No Raw Bytes)
```bash
unidasm rom.bin -arch m6809 -norawbytes
```

## Why Our Approach Failed

### The Problem
We used commands like:
```bash
unidasm rom.bin -arch m6809 -basepc 0x6368
```

This disassembled from address 0x6368 to the **end of the file**, not just the routine!

### The Solution
We should have used:
```bash
# Find routine size first, then use -count
unidasm rom.bin -arch m6809 -basepc 0x6368 -count 108
# 108 bytes = 42 lines * ~2.5 bytes per instruction
```

## Best Practices for UNIDASM

### 1. Always Use -count
```bash
# Instead of this (disassembles entire file):
unidasm rom.bin -arch m6809 -basepc 0x611e

# Do this (limit the size):
unidasm rom.bin -arch m6809 -basepc 0x611e -count 200
```

### 2. Use -skip for Large Files
```bash
# For large ROMs, skip to the section of interest
unidasm rom.bin -arch m6809 -skip 24862 -count 200
```

### 3. Validate Output
- Check that the last instruction makes sense (RTS, JMP, etc.)
- Verify the routine size is reasonable
- Look for data sections that shouldn't be there

### 4. Use Our Validation Tool
```bash
python3 validate_disassembly.py routine_file.md
```

## UNIDASM vs. Other Disassemblers

### UNIDASM Advantages
- Supports many architectures
- Part of MAME (consistent with emulator)
- Good for sequential disassembly
- Handles various CPU quirks

### UNIDASM Limitations
- No routine boundary detection
- No end address parameter
- No data vs code intelligence
- No symbolic information
- Sequential disassembly only

### Alternatives
- **IDA Pro**: Professional disassembler with routine detection
- **Ghidra**: Free NSA tool with advanced analysis
- **objdump**: GNU tool for ELF files
- **Custom scripts**: Like our validation tools

## Integration with Our Workflow

### Before Using UNIDASM
1. **Identify routine boundaries** manually or with tools
2. **Calculate byte counts** for each routine
3. **Plan the disassembly** strategy

### After Using UNIDASM
1. **Validate the output** with our tools
2. **Check routine completeness**
3. **Verify no over-disassembly**

### Recommended Workflow
```bash
# 1. Disassemble with generous count
unidasm rom.bin -arch m6809 -basepc 0x611e -count 500 > temp_routine.md

# 2. Find actual end
grep -n -E "(39.*RTS|7e.*JMP)" temp_routine.md

# 3. Extract to actual end
head -n <line_number> temp_routine.md > final_routine.md

# 4. Validate
python3 validate_disassembly.py final_routine.md

# 5. Clean up
rm temp_routine.md
```

## Conclusion

**UNIDASM is not faulty or buggy** - it works exactly as designed. The issue was **how we were using it**:

1. **We didn't understand** that it disassembles entire files by default
2. **We didn't use -count** to limit the disassembly size
3. **We didn't validate** the output before implementing C++ code
4. **We assumed** it would automatically detect routine boundaries

The tool is designed for **sequential disassembly of entire files**, not for **extracting specific routines**. Our validation tools and best practices now compensate for these limitations and ensure we get accurate, complete routines for C++ implementation.

**Key Takeaway**: UNIDASM is a powerful tool, but it requires careful usage and validation to avoid the mistakes we encountered. Always use `-count` and validate the output! 🎯
