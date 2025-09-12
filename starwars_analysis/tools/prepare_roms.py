#!/usr/bin/env python3
"""
Prepare ROM files for analysis
Creates symbolic links to original ROM files with descriptive names
"""

import struct
import os
import io
import zipfile

def _read_rom(path: str, zf: zipfile.ZipFile | None) -> bytes:
    """Read a ROM either from filesystem or from starwars1.zip if available.

    Returns empty bytes if not found anywhere.
    """
    # Prefer local file if non-empty
    if os.path.exists(path):
        with open(path, 'rb') as f:
            data = f.read()
        if data:
            return data
    # Try zip
    if zf is not None:
        # Try exact name first, then any member ending with the name
        candidates = [path]
        try:
            for name in zf.namelist():
                if name.endswith('/' + path) or name == path:
                    candidates.append(name)
        except Exception:
            pass
        for name in candidates:
            try:
                with zf.open(name) as f:
                    data = f.read()
                if data:
                    return data
            except KeyError:
                continue
            except Exception:
                continue
    return b""


def create_memory_map():
    """Create memory maps mirroring MAME exactly.

    Outputs:
      - complete_memory_map.bin (CPU 64KB address space)
      - maincpu_rom_region.bin (0x12000-byte ROM region used by MAME)
    """

    # CPU address space (64KB)
    cpu = bytearray(0x10000)

    # ROM region for maincpu (0x12000 bytes)
    rom_region = bytearray(0x12000)

    # File names per MAME's starwars ROM definitions
    rom0_bank = '136021.214.1f'   # 0x6000-0x7FFF (and ROM_CONTINUE at 0x10000)
    rom1 = '136021.102.1hj'       # 0x8000-0x9FFF
    rom2 = '136021.203.1jk'       # 0xA000-0xBFFF
    rom3 = '136021.104.1kl'       # 0xC000-0xDFFF
    rom4 = '136021.206.1m'        # 0xE000-0xFFFF
    vector_prom = '136021-105.1l' # 0x3000-0x3FFF (CPU space)

    # Open zip if present
    zip_path = os.path.join(os.getcwd(), 'starwars1.zip')
    zf = None
    if os.path.exists(zip_path):
        try:
            zf = zipfile.ZipFile(zip_path, 'r')
            print(f"Using ROMs from: {zip_path}")
        except Exception as e:
            print(f"WARNING: Failed to open {zip_path}: {e}")

    # Load vector PROM into CPU space at 0x3000-0x3FFF
    v = _read_rom(vector_prom, zf)
    if v:
        cpu[0x3000:0x3000 + len(v)] = v
        print(f"Loaded vector PROM: {len(v)} bytes -> CPU[0x3000]")
    else:
        print(f"WARNING: Missing vector PROM {vector_prom}")

    # Helper to load a file at an offset into a buffer
    def load_file_into(buf: bytearray, path: str, offset: int, max_len: int = None):
        data = _read_rom(path, zf)
        if not data:
            print(f"WARNING: Missing ROM file: {path}")
            return 0
        n = len(data) if max_len is None else min(len(data), max_len)
        buf[offset:offset + n] = data[:n]
        print(f"Loaded {path}: {n} bytes -> offset 0x{offset:04X}")
        return n

    # Fill ROM region exactly like MAME (region base = 0x0000 within rom_region)
    # 0x6000-0x7FFF maps to rom_region[0x6000:0x8000]
    load_file_into(rom_region, rom0_bank, 0x6000, 0x2000)
    # ROM_CONTINUE at 0x10000 in ROM region (second bank page)
    load_file_into(rom_region, rom0_bank, 0x10000, 0x2000)
    load_file_into(rom_region, rom1, 0x8000, 0x2000)
    load_file_into(rom_region, rom2, 0xA000, 0x2000)
    load_file_into(rom_region, rom3, 0xC000, 0x2000)
    load_file_into(rom_region, rom4, 0xE000, 0x2000)

    # Populate CPU address space with the currently active bank (bank1 entry 0)
    # MAME sets bank1 entry 0 to rom_region+0x6000 and maps 0x6000-0x7FFF.
    cpu[0x6000:0x8000] = rom_region[0x6000:0x8000]
    cpu[0x8000:0xA000] = rom_region[0x8000:0xA000]
    cpu[0xA000:0xC000] = rom_region[0xA000:0xC000]
    cpu[0xC000:0xE000] = rom_region[0xC000:0xE000]
    cpu[0xE000:0x10000] = rom_region[0xE000:0x10000]

    return cpu, rom_region

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

    zip_path = os.path.join(os.getcwd(), 'starwars1.zip')
    zf = None
    if os.path.exists(zip_path):
        try:
            zf = zipfile.ZipFile(zip_path, 'r')
        except Exception:
            zf = None

    for original, new_name in roms:
        data = _read_rom(original, zf)
        if data:
            with open(new_name, 'wb') as f_out:
                f_out.write(data)
            print(f"Created: {new_name}")
        else:
            print(f"Skipping {new_name} (missing)")

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

    # Create CPU map and ROM region mirroring MAME
    cpu_map, rom_region = create_memory_map()

    # Save CPU address space map
    with open('complete_memory_map.bin', 'wb') as f:
        f.write(cpu_map)
    print(f"\nCreated complete memory map (CPU space): {len(cpu_map)} bytes")

    # Save ROM region map
    with open('maincpu_rom_region.bin', 'wb') as f:
        f.write(rom_region)
    print(f"Created maincpu ROM region: {len(rom_region)} bytes (0x12000 expected)")

    # Analyze entry points
    analyze_entry_points()

    print("\nROM files prepared for Ghidra import!")
    print("Recommended import order:")
    print("1. complete_memory_map.bin (CPU address space, bank1 entry 0)")
    print("2. maincpu_rom_region.bin (full ROM region including 0x10000 page)")
    print("3. main_cpu_rom.bin (for detailed CPU analysis)")
    print("4. text_rom.bin (for string analysis)")

if __name__ == "__main__":
    main()
