# Practical Demonstration: Address-Perfect Disassembly

## The Core Concept

**You're absolutely right to want address-perfect matching!** Here's exactly how to achieve it:

## Method 1: Live Memory Dump (Recommended)

### Step 1: Capture Live Memory at Execution Point
```bash
# Create script to dump memory when F261 is reached
printf "BP F261,1,{save /tmp/live_memory.bin,0,10000}\nG\n" > dump_at_f261.cmd

# Run MAME and dump memory
mame starwars1 -debug -debugscript dump_at_f261.cmd -nothrottle -skip_gameinfo
```

### Step 2: Disassemble the Live Memory
```bash
# Disassemble the live memory (not static ROM)
unidasm -arch m6809 /tmp/live_memory.bin > live_disassembly.txt

# Extract just the F261 routine
awk '/^f261:/,/^f300:/' live_disassembly.txt > f261_routine_live.txt
```

### Step 3: Trace Execution from F261
```bash
# Create script to trace from F261
printf "PC F261\ntraceover /tmp/trace_f261.log,1\nstep 50\ntrace flush\ntrace off\nexit\n" > trace_f261.cmd

# Run MAME and capture trace
mame starwars1 -debug -debugscript trace_f261.cmd -nothrottle -skip_gameinfo
```

### Step 4: Verify Perfect Match
```bash
# Normalize trace
python3 normalize_mame_trace.py /tmp/trace_f261.log /tmp/trace_normalized.log

# Compare - should show 100% match
python3 compare_trace_to_disasm.py --trace /tmp/trace_normalized.log --disasm-dir /tmp/f261_routine_live.txt
```

## Method 2: Bank-Aware Static Disassembly

If live memory dumping is problematic, you can create bank-aware disassembly:

### Step 1: Determine Current Bank State
```bash
# Check which bank is active by examining 0x6000
printf "md 6000,8\nexit\n" > check_bank.cmd
mame starwars1 -debug -debugscript check_bank.cmd -nothrottle -skip_gameinfo
```

### Step 2: Apply Correct Bank to ROM
```python
# In prepare_roms.py, modify the bank selection:
if current_bank == 0:
    cpu[0x6000:0x8000] = rom_region[0x6000:0x8000]  # Bank 0
else:
    cpu[0x6000:0x8000] = rom_region[0x10000:0x12000]  # Bank 1 (ROM_CONTINUE)
```

### Step 3: Disassemble with Correct Bank
```bash
# Regenerate memory map with correct bank
python3 prepare_roms.py

# Disassemble the corrected memory map
unidasm -arch m6809 complete_memory_map.bin > bank_corrected_disasm.txt
```

## Why This Matters for C++ Conversion

### Address-Perfect Mapping
```cpp
// With address-perfect disassembly, you can map directly:
std::map<uint16_t, std::function<void()>> address_map = {
    {0xF261, []() { game_main_loop(); }},      // Exact address match
    {0xF36F, []() { another_routine(); }},     // Exact address match
    {0xF70D, []() { yet_another(); }},         // Exact address match
};

// Your C++ functions can be called at the same addresses
// as the original 6809 code
```

### Seamless Integration
```cpp
// The 6809 CPU can call your C++ code transparently
void cpu_execute_at_address(uint16_t addr) {
    if (address_map.find(addr) != address_map.end()) {
        address_map[addr]();  // Call C++ function
    } else {
        // Fall back to 6809 emulation for unmapped addresses
        emulate_6809_at(addr);
    }
}
```

## Expected Results

When done correctly, you should see:

```
Trace PCs compared: 50
Matched: 50
Mismatches: 0
```

**This means every single address in the MAME trace has an identical instruction in your disassembly.**

## Troubleshooting

### If you still see mismatches:

1. **Check bank state**: The 0x6000-0x7FFF region might be using a different bank
2. **Verify memory dump**: Make sure the memory dump was captured at the right moment
3. **Check address range**: Ensure you're comparing the same address ranges
4. **Verify normalization**: Make sure the trace normalization is working correctly

### Common Issues:

- **Bank switching**: MAME switches banks during execution, so static ROM disassembly won't match
- **Dynamic memory**: Some addresses might contain RAM that changes during execution
- **Timing**: Memory dump must be captured at the exact moment of execution

## Summary

**You're not expecting too much** - address-perfect matching is not only possible but essential for C++ conversion. The key is:

1. ✅ **Use live memory dumps** from MAME at execution time
2. ✅ **Disassemble the live memory** (not static ROM files)
3. ✅ **Verify with normalized traces** to ensure 100% match
4. ✅ **Map addresses directly** to C++ functions

This approach ensures your C++ code can be called at the exact same addresses as the original 6809 code, maintaining perfect compatibility and enabling seamless integration.
