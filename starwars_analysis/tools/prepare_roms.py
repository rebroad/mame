#!/usr/bin/env python3
"""
Prepare ROM memory images for analysis and tooling.

This script builds:
- complete_memory_map.bin (CPU 64KB address space, bank1 entry 0 active)
- maincpu_rom_region.bin (0x12000 main ROM region as per MAME)

ROM data is read directly from starwars1.zip
"""

import struct
import os
import io
import zipfile

def _read_rom(path: str, zf: zipfile.ZipFile | None) -> bytes:
    """Read a ROM from starwars1.zip. Returns empty bytes if not found."""
    if zf is not None:
        # Try exact name and then any member ending with the basename
        base = path.split('/')[-1]
        candidates = [path, base]
        try:
            for name in zf.namelist():
                if name.endswith('/' + base) or name == base:
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

    # Open zip from ~/.mame/roms/starwars1.zip (preferred) or CWD fallback
    zip_path = os.path.expanduser('~/.mame/roms/starwars1.zip')
    if not os.path.exists(zip_path):
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

def analyze_entry_points():
    """Analyze entry points using the 6809 reset vector from complete_memory_map.bin.

    The 6809 CPU reads the reset vector from 0xFFFE-0xFFFF on power-up.
    This is the actual entry point that MAME's CPU would jump to.
    """
    try:
        with open('complete_memory_map.bin', 'rb') as f:
            memory = f.read()
    except FileNotFoundError:
        print("WARNING: complete_memory_map.bin not found; skipping entry point analysis")
        return

    if len(memory) < 0x10000:
        print("WARNING: Memory map too small; skipping entry point analysis")
        return

    print("\n=== Entry Point Analysis (6809 Reset Vector) ===")

    # Read the reset vector from 0xFFFE-0xFFFF
    reset_vector = struct.unpack('>H', memory[0xFFFE:0x10000])[0]
    print(f"6809 Reset Vector (0xFFFE-0xFFFF): ${reset_vector:04x}")
    print(f"CPU will jump to: ${reset_vector:04x} on power-up")

    # Analyze what's at the reset vector target
    if reset_vector < len(memory):
        target_data = memory[reset_vector:reset_vector+16]
        print(f"Code at ${reset_vector:04x}: {target_data[:8].hex()}")
        
        # Check if it's a JMP instruction
        if len(target_data) >= 3 and target_data[0] == 0x7e:
            jmp_target = struct.unpack('>H', target_data[1:3])[0]
            print(f"  -> JMP ${jmp_target:04x}")
        elif len(target_data) >= 1:
            print(f"  -> Opcode: ${target_data[0]:02x}")

    # Also show what's in the ROM bank window (0x6000-0x7FFF)
    print(f"\nROM Bank Window (0x6000-0x7FFF):")
    rom_window = memory[0x6000:0x6000+16]
    print(f"  ${0x6000:04x}: {rom_window.hex()}")
    if len(rom_window) >= 3 and rom_window[0] == 0x7e:
        jmp_target = struct.unpack('>H', rom_window[1:3])[0]
        print(f"  -> JMP ${jmp_target:04x}")

def main():
    print("Preparing Star Wars ROM memory images (MAME layout)...")

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

    print("\nROM memory images prepared.")
    print("Artifacts:")
    print("- complete_memory_map.bin (CPU address space, bank1 entry 0)")
    print("- maincpu_rom_region.bin (full ROM region including 0x10000 page)")

if __name__ == "__main__":
    main()
