#!/usr/bin/env python3
"""
Prepare ROM files for analysis
Creates symbolic links to original ROM files with descriptive names
"""

import os
from pathlib import Path

def create_rom_links():
    """Create symbolic links to original ROM files with descriptive names"""
    
    # ROM file mappings (original_name, descriptive_name)
    rom_mappings = [
        ('136021.114.1f', 'starwars_rev1_main_cpu.bin'),
        ('136021.214.1f', 'starwars_original_main_cpu.bin'),
        ('136021.102.1hj', 'secondary_rom_1.bin'),
        ('136021.104.1kl', 'secondary_rom_2.bin'),
        ('136021.203.1jk', 'secondary_rom_3.bin'),
        ('136021.208', 'secondary_rom_4.bin'),
        ('136021.107', 'secondary_rom_5.bin'),
        ('136021.206.1m', 'text_rom.bin'),
        ('136021.105', 'data_rom.bin'),
        ('136021.110', 'mathbox_prom_0.bin'),
        ('136021.111', 'mathbox_prom_1.bin'),
        ('136021.112', 'mathbox_prom_2.bin'),
        ('136021.113', 'mathbox_prom_3.bin'),
        ('136021-105.1l', 'avg_prom.bin'),
    ]
    
    created_links = 0
    skipped_links = 0
    
    for original_name, link_name in rom_mappings:
        if os.path.exists(original_name):
            # Remove existing file/link if it exists
            if os.path.exists(link_name):
                os.remove(link_name)
                print(f"Removed existing {link_name}")
            
            # Create symbolic link
            os.symlink(original_name, link_name)
            print(f"Created link: {link_name} -> {original_name}")
            created_links += 1
        else:
            print(f"Warning: {original_name} not found, skipping {link_name}")
            skipped_links += 1
    
    print(f"\nSummary: Created {created_links} links, skipped {skipped_links} missing files")

if __name__ == '__main__':
    create_rom_links()
