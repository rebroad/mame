#!/usr/bin/env python3
"""
Prepare ROM files for analysis
Creates symbolic links to original ROM files with descriptive names
"""

import struct
import os

def create_memory_map():
    """Create a complete memory map by combining ROM files"""
    
    # Memory layout based on MAME analysis
    # 0x0000-0x2FFF: RAM (12KB) - will be empty
    # 0x3000-0x3FFF: Vector ROM (4KB) - from 136021-105.1l
    # 0x4000-0x4FFF: I/O Ports - will be empty
    # 0x5000-0x5FFF: Mathbox RAM - will be empty  
    # 0x6000-0xFFFF: ROM Banks (40KB) - from main ROMs
    
    # Create 64KB memory space
    memory = bytearray(0x10000)
    
    # Load vector ROM at 0x3000-0x3FFF
    if os.path.exists('136021-105.1l'):
        with open('136021-105.1l', 'rb') as f:
            vector_rom = f.read()
        memory[0x3000:0x3000+len(vector_rom)] = vector_rom
        print(f"Loaded vector ROM: {len(vector_rom)} bytes at 0x3000")
    
    # Load main ROM at 0x6000-0xFFFF
    if os.path.exists('136021.114.1f'):
        with open('136021.114.1f', 'rb') as f:
            main_rom = f.read()
        memory[0x6000:0x6000+len(main_rom)] = main_rom
        print(f"Loaded main ROM: {len(main_rom)} bytes at 0x6000")
    
    # Load secondary ROM at 0x8000-0x9FFF (if different from main)
    if os.path.exists('136021.102.1hj'):
        with open('136021.102.1hj', 'rb') as f:
            sec_rom = f.read()
        memory[0x8000:0x8000+len(sec_rom)] = sec_rom
        print(f"Loaded secondary ROM: {len(sec_rom)} bytes at 0x8000")
    
    # Load text ROM at 0xA000-0xBFFF
    if os.path.exists('136021.206.1m'):
        with open('136021.206.1m', 'rb') as f:
            text_rom = f.read()
        memory[0xA000:0xA000+len(text_rom)] = text_rom
        print(f"Loaded text ROM: {len(text_rom)} bytes at 0xA000")
    
    # Load extended/banked ROMs into 0xC000-0xFFFF (best-effort mapping)
    # NOTE: This is an approximation to enable analysis of addresses like $D91A.
    # TODO: Verify exact bank mapping/order against Star Wars ROM schematics.
    offset = 0xC000
    ext_parts = [
        '136021.203.1jk',  # 8KB
        '136021.208',      # 8KB
        '136021.214.1f'    # 16KB (if present, may overlap earlier mapping)
    ]
    for part in ext_parts:
        if os.path.exists(part):
            with open(part, 'rb') as f:
                data = f.read()
            end = min(0x10000, offset + len(data))
            memory[offset:end] = data[:end - offset]
            print(f"Loaded extended ROM chunk {part}: {len(data)} bytes at 0x{offset:04X}")
            offset = end
    
    return memory

def create_individual_roms():
    """Create individual ROM files for separate analysis"""
    
    roms = [
        ('136021.114.1f', 'main_cpu_rom.bin'),
        ('136021.214.1f', 'main_cpu_rom_alt.bin'),
        ('136021.102.1hj', 'secondary_rom_1.bin'),
        ('136021.104.1kl', 'secondary_rom_2.bin'),
        ('136021.203.1jk', 'secondary_rom_3.bin'),
        ('136021.206.1m', 'text_rom.bin'),
        ('136021.208', 'secondary_rom_4.bin'),
        ('136021.105', 'data_rom.bin'),
        ('136021.107', 'secondary_rom_5.bin'),
        ('136021.110', 'mathbox_prom_0.bin'),
        ('136021.111', 'mathbox_prom_1.bin'),
        ('136021.112', 'mathbox_prom_2.bin'),
        ('136021.113', 'mathbox_prom_3.bin'),
        ('136021-105.1l', 'avg_prom.bin')
    ]
    
    for original, new_name in roms:
        if os.path.exists(original):
            with open(original, 'rb') as f_in:
                with open(new_name, 'wb') as f_out:
                    f_out.write(f_in.read())
            print(f"Created: {new_name}")

def analyze_entry_points():
    """Analyze potential entry points in the main ROM"""
    
    with open('136021.114.1f', 'rb') as f:
        data = f.read()
    
    print("\n=== Entry Point Analysis ===")
    
    # Check first few bytes
    if len(data) >= 3:
        opcode = data[0]
        if opcode == 0x7e:  # JMP instruction
            target = struct.unpack('>H', data[1:3])[0]
            print(f"Main entry point: JMP ${target:04x}")
    
    # Look for other JMP instructions
    print("\nJMP instructions found:")
    for i in range(0, len(data) - 2, 2):
        if data[i] == 0x7e:  # JMP
            target = struct.unpack('>H', data[i+1:i+3])[0]
            print(f"  ${i:04x}: JMP ${target:04x}")
    
    # Look for JSR instructions (subroutine calls)
    print("\nJSR instructions found (first 20):")
    count = 0
    for i in range(0, len(data) - 2, 2):
        if data[i] == 0xbd:  # JSR
            target = struct.unpack('>H', data[i+1:i+3])[0]
            print(f"  ${i:04x}: JSR ${target:04x}")
            count += 1
            if count >= 20:
                break

def main():
    print("Preparing ROM files for Ghidra analysis...")
    
    # Create individual ROM files
    create_individual_roms()
    
    # Create complete memory map
    memory = create_memory_map()
    
    # Save complete memory map
    with open('complete_memory_map.bin', 'wb') as f:
        f.write(memory)
    print(f"\nCreated complete memory map: {len(memory)} bytes")
    
    # Analyze entry points
    analyze_entry_points()
    
    print("\nROM files prepared for Ghidra import!")
    print("Recommended import order:")
    print("1. complete_memory_map.bin (for full analysis)")
    print("2. main_cpu_rom.bin (for detailed CPU analysis)")
    print("3. text_rom.bin (for string analysis)")

if __name__ == "__main__":
    main()
