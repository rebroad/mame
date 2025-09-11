# Disassembly Best Practices for Star Wars ROM Analysis

## Overview

This document outlines best practices for disassembling ROM routines and avoiding common mistakes that can lead to incorrect C++ implementations.

## Common Mistakes and How to Avoid Them

### 1. Over-Disassembly by `unidasm`

**Problem**: `unidasm` captures from start address to end of ROM, not just the specific routine.

**Symptoms**:
- Routine files with 1000+ lines
- Address ranges that span large portions of ROM
- Mostly data (DB, FCB, FDB) instead of code

**Solution**:
```bash
# Find the actual end of the routine first
unidasm -arch m6809 rom.bin | sed -n '/^start_addr:/,/^end_addr:/p' | grep -E "(39.*RTS|7e.*JMP)"

# Then extract just the routine
unidasm -arch m6809 rom.bin | sed -n '/^start_addr:/,/^end_addr:/p' > routine_file.md
```

### 2. Incomplete Routine Extraction

**Problem**: Routine ends before reaching proper boundary instruction.

**Symptoms**:
- Very small files (2-5 lines)
- No RTS, JMP, or return instruction
- Routine appears to end abruptly

**Solution**:
```bash
# Look for proper routine boundaries
unidasm -arch m6809 rom.bin | sed -n '/^start_addr:/,/^next_routine:/p' | head -50
```

### 3. Data vs Code Confusion

**Problem**: Disassembling data sections as code.

**Symptoms**:
- High ratio of data definition lines (DB, FCB, FDB)
- Patterns like repeated values or sequences
- No meaningful assembly instructions

**Solution**:
- Use validation tool to check data/code ratio
- Manually inspect suspicious sections
- Cross-reference with known data sections

### 4. Address Confusion

**Problem**: Routine address doesn't match actual location in ROM.

**Symptoms**:
- Calls to routine fail to find actual code
- Routine appears to be data reference
- Address doesn't align with ROM structure

**Solution**:
- Verify routine address with ROM map
- Check if address is data reference vs. subroutine
- Use cross-reference analysis

## Validation Workflow

### Step 1: Use Validation Tool

```bash
# Check all disassembly files
python3 tools/validate_disassembly.py --check-all --verbose

# Check specific file
python3 tools/validate_disassembly.py routine_file.md --verbose
```

### Step 2: Manual Inspection

For each routine, verify:
- [ ] Proper size (not too large, not too small)
- [ ] Contains boundary instruction (RTS, JMP, etc.)
- [ ] Address range makes sense
- [ ] Code vs. data ratio is reasonable
- [ ] No obvious data sections

### Step 3: Cross-Reference Check

- [ ] Routine address matches ROM calls
- [ ] No duplicate routines
- [ ] Routine boundaries don't overlap
- [ ] Secondary ROM routines properly identified

## Recommended Disassembly Process

### 1. Initial Extraction

```bash
# Get routine with generous boundaries
unidasm -arch m6809 rom.bin | sed -n '/^start_addr:/,/^start_addr+100:/p' > temp_routine.md
```

### 2. Find Actual End

```bash
# Look for boundary instructions
grep -n -E "(39.*RTS|7e.*JMP)" temp_routine.md

# Extract to actual end
head -n <line_number> temp_routine.md > final_routine.md
```

### 3. Validate

```bash
# Check for issues
python3 tools/validate_disassembly.py final_routine.md --verbose
```

### 4. Manual Review

- Review assembly logic for reasonableness
- Check for data sections that shouldn't be there
- Verify routine makes sense in context

## Validation Tool Usage

### Basic Validation

```bash
python3 tools/validate_disassembly.py routine_file.md
```

### Verbose Output

```bash
python3 tools/validate_disassembly.py routine_file.md --verbose
```

### Batch Validation

```bash
python3 tools/validate_disassembly.py --check-all
```

### Validation Criteria

The tool checks for:

1. **Size Validation**:
   - Too large (>1000 lines): Likely over-disassembled
   - Too small (<3 lines): May be incomplete
   - Very large (>500 lines): Needs verification

2. **Boundary Detection**:
   - RTS, JMP, RTI, SWI instructions
   - Missing boundaries: Incomplete routine

3. **Data vs Code**:
   - DB, FCB, FDB directives
   - Raw hex data patterns
   - Code-to-data ratio

4. **Address Analysis**:
   - Address range coverage
   - Unique address count
   - Address continuity

## Red Flags to Watch For

### Immediate Investigation Required

- **Files >1000 lines**: Almost certainly over-disassembled
- **No boundary instructions**: Routine is incomplete
- **High data ratio**: May be disassembling data as code
- **Address gaps**: Missing sections or incorrect boundaries

### Warning Signs

- **Files >500 lines**: Verify completeness
- **Files <5 lines**: Check if routine is actually complete
- **Multiple boundary instructions**: May be multiple routines
- **Suspicious patterns**: Repeated values, unusual sequences

## Integration with C++ Development

### Before Implementing

1. **Validate disassembly**: Use validation tool
2. **Review assembly logic**: Ensure it makes sense
3. **Check routine context**: Verify it's actually a subroutine
4. **Document assumptions**: Note any guesswork vs. disassembly

### During Implementation

1. **Line-by-line translation**: Match each assembly instruction
2. **Preserve branching logic**: Maintain exact control flow
3. **Comment sources**: Mark disassembly vs. guesswork
4. **Test incrementally**: Verify each section works

### After Implementation

1. **Cross-reference with MAME**: Compare behavior
2. **Test edge cases**: Verify boundary conditions
3. **Document limitations**: Note any incomplete sections
4. **Update validation**: Add new patterns to validation tool

## Tools and Scripts

### Validation Tool

- **Location**: `tools/validate_disassembly.py`
- **Purpose**: Automated validation of disassembly files
- **Usage**: `python3 tools/validate_disassembly.py [options] file`

### Normalization Script

- **Location**: `tools/active/normalize_mame_trace.py`
- **Purpose**: Fix MAME debugger PC address quirks
- **Usage**: `python3 normalize_mame_trace.py input.log > output.log`

### ROM Analysis Scripts

- **Location**: `tools/`
- **Purpose**: Various ROM analysis and preparation tasks
- **Usage**: See individual script documentation

## Conclusion

Following these practices will help avoid the mistakes that led to incorrect implementations. The key is to:

1. **Always validate** disassembly files before implementation
2. **Manually review** suspicious patterns
3. **Cross-reference** with ROM structure and calls
4. **Document assumptions** and limitations
5. **Test incrementally** during implementation

Remember: **A few minutes of validation can save hours of debugging incorrect implementations!**
