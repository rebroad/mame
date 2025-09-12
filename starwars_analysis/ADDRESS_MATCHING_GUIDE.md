# Step-by-Step Guide: Address-Perfect Disassembly Matching MAME Traces

## The Problem

When creating C++ replacements for 6809 code, you need the disassembly addresses to **exactly match** what MAME's debugger shows. This ensures your C++ functions can be called at the same addresses and maintain compatibility.

## The Solution: Live Memory Disassembly

Instead of disassembling static ROM files, we need to disassemble the **live memory state** that MAME is actually executing at the moment the trace is captured.

## Step-by-Step Process

### Step 1: Capture Live Memory State

```bash
# Create a debugger script to dump live CPU memory
printf "save /path/to/live_memory.bin,0,10000\nexit\n" > dump_memory.cmd

# Run MAME and dump memory at the exact moment you want to trace
mame starwars1 -debug -debugscript dump_memory.cmd -nothrottle -skip_gameinfo
```

### Step 2: Disassemble the Live Memory

```bash
# Use unidasm on the live memory dump (not the static ROM)
unidasm -arch m6809 /path/to/live_memory.bin > live_disassembly.txt
```

### Step 3: Capture MAME Trace

```bash
# Create a debugger script to trace execution
printf "traceover /path/to/trace.log,1\nstep 100\ntrace flush\ntrace off\nexit\n" > trace.cmd

# Run MAME and capture the trace
mame starwars1 -debug -debugscript trace.cmd -nothrottle -skip_gameinfo
```

### Step 4: Normalize and Compare

```bash
# Normalize the trace (fix MAME's PC quirk)
python3 normalize_mame_trace.py /path/to/trace.log /path/to/trace_normalized.log

# Compare trace against live disassembly
python3 compare_trace_to_disasm.py --trace /path/to/trace_normalized.log --disasm-dir /path/to/live_disassembly.txt
```

## Why This Works

### The Banking Issue Explained

Star Wars uses **banked ROM** at addresses 0x6000-0x7FFF. MAME can switch between two banks:

- **Bank 0**: ROM bytes from offset 0x6000 in the ROM file
- **Bank 1**: ROM bytes from offset 0x10000 in the ROM file (ROM_CONTINUE)

When you disassemble static ROM files, you get one bank's worth of code. But MAME's execution might be using the other bank, causing address mismatches.

### Live Memory Solves This

By dumping MAME's live memory state, you get:
- The **exact bytes** that the CPU sees at each address
- The **current bank selection** already applied
- The **dynamic state** that matches the trace

## Practical Example

Let's say you want to disassemble the main game loop that starts at address 0xF261:

### 1. Set Breakpoint and Dump Memory

```bash
# Create script to dump memory when we hit F261
printf "BP F261,1,{save /tmp/memory_at_f261.bin,0,10000}\nG\n" > dump_at_f261.cmd
mame starwars1 -debug -debugscript dump_at_f261.cmd -nothrottle -skip_gameinfo
```

### 2. Disassemble the Dumped Memory

```bash
# Disassemble the live memory state
unidasm -arch m6809 /tmp/memory_at_f261.bin | awk '/^f261:/,/^f300:/' > f261_routine_live.txt
```

### 3. Trace Execution from F261

```bash
# Create script to trace from F261
printf "PC F261\ntraceover /tmp/trace_from_f261.log,1\nstep 50\ntrace flush\ntrace off\nexit\n" > trace_f261.cmd
mame starwars1 -debug -debugscript trace_f261.cmd -nothrottle -skip_gameinfo
```

### 4. Verify Perfect Match

```bash
# Normalize and compare
python3 normalize_mame_trace.py /tmp/trace_from_f261.log /tmp/trace_normalized.log
python3 compare_trace_to_disasm.py --trace /tmp/trace_normalized.log --disasm-dir /tmp/f261_routine_live.txt
```

**Expected Result**: 100% match - every address in the trace will have identical instructions in the disassembly.

## For C++ Conversion

Once you have address-perfect disassembly:

1. **Map addresses to C++ functions**:
   ```cpp
   // Address 0xF261 maps to this C++ function
   void game_main_loop() {
       // Converted from disassembly at 0xF261
   }
   ```

2. **Maintain address compatibility**:
   ```cpp
   // Your C++ code can be called at the same addresses
   // as the original 6809 code for seamless integration
   ```

3. **Use function pointers**:
   ```cpp
   // Map 6809 addresses to C++ functions
   std::map<uint16_t, std::function<void()>> address_map = {
       {0xF261, game_main_loop},
       {0xF36F, another_routine},
       // ... etc
   };
   ```

## Advanced: Bank-Aware Disassembly

For even more precision, you can create a bank-aware disassembler:

```python
def disassemble_with_banking(rom_data, bank_state):
    """Disassemble ROM with current bank state applied"""
    cpu_memory = bytearray(0x10000)
    
    # Apply current bank selection
    if bank_state == 0:
        cpu_memory[0x6000:0x8000] = rom_data[0x6000:0x8000]
    else:
        cpu_memory[0x6000:0x8000] = rom_data[0x10000:0x12000]
    
    # Fill rest of memory
    cpu_memory[0x8000:0xA000] = rom_data[0x8000:0xA000]
    # ... etc
    
    return disassemble_memory(cpu_memory)
```

## Summary

**You're not expecting too much** - address-perfect matching is absolutely achievable and necessary for C++ conversion. The key is:

1. ✅ **Dump live memory** from MAME at the moment of execution
2. ✅ **Disassemble the live memory** (not static ROM files)  
3. ✅ **Compare against normalized traces** to verify perfect matches
4. ✅ **Use the address-perfect disassembly** as the basis for C++ conversion

This ensures your C++ code can be called at the exact same addresses as the original 6809 code, maintaining perfect compatibility with the rest of the system.
