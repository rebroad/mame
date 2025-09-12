#!/usr/bin/env python3
"""
Dynamic Routine Loader for Star Wars C++ Simulator

This tool monitors unknown_addresses.txt and automatically:
1. Disassembles new routines
2. Converts them to C++
3. Compiles them as shared libraries
4. Loads them into the running simulator

Similar to Linux modprobe for kernel modules.
"""

import os
import sys
import time
import subprocess
import threading
import queue
from pathlib import Path
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler

class RoutineLoader:
    def __init__(self, project_root):
        self.project_root = Path(project_root)
        self.unknown_file = self.project_root / "unknown_addresses.txt"
        self.processed_addresses = set()
        self.loaded_routines = {}  # address -> function_name mapping
        
    def monitor_unknown_addresses(self):
        """Monitor unknown_addresses.txt for new addresses"""
        print(f"Monitoring {self.unknown_file} for new unknown addresses...")
        
        class UnknownFileHandler(FileSystemEventHandler):
            def __init__(self, loader):
                self.loader = loader
                
            def on_modified(self, event):
                if event.src_path == str(self.loader.unknown_file):
                    self.loader.process_new_addresses()
        
        event_handler = UnknownFileHandler(self)
        observer = Observer()
        observer.schedule(event_handler, str(self.unknown_file.parent), recursive=False)
        observer.start()
        
        try:
            while True:
                time.sleep(1)
        except KeyboardInterrupt:
            observer.stop()
        observer.join()
    
    def process_new_addresses(self):
        """Process new addresses in unknown_addresses.txt"""
        if not self.unknown_file.exists():
            return
            
        with open(self.unknown_file, 'r') as f:
            lines = f.readlines()
        
        new_addresses = []
        for line in lines:
            line = line.strip()
            if line.startswith('0x'):
                addr = int(line, 16)
                if addr not in self.processed_addresses:
                    new_addresses.append(addr)
                    self.processed_addresses.add(addr)
        
        for addr in new_addresses:
            print(f"Processing new unknown address: 0x{addr:04X}")
            self.disassemble_and_convert(addr)
    
    def disassemble_and_convert(self, address):
        """Disassemble and convert a routine to C++"""
        addr_str = f"{address:04X}".lower()
        
        # 1. Disassemble the routine
        print(f"  Disassembling 0x{address:04X}...")
        disasm_cmd = [
            sys.executable, "tools/automated_disassembler.py",
            "--input", "complete_memory_map.bin",
            "--output-dir", "disassembly",
            "--addr", f"0x{address:04X}",
            "--name", addr_str
        ]
        
        result = subprocess.run(disasm_cmd, cwd=self.project_root, 
                              capture_output=True, text=True)
        if result.returncode != 0:
            print(f"    ❌ Disassembly failed: {result.stderr}")
            return False
        
        disasm_file = self.project_root / "disassembly" / f"rom_disasm_{addr_str}.md"
        if not disasm_file.exists():
            print(f"    ❌ Disassembly file not created")
            return False
        
        print(f"    ✅ Disassembly complete: {disasm_file}")
        
        # 2. Convert to C++
        print(f"  Converting to C++...")
        convert_cmd = [
            sys.executable, "tools/disasm_to_cpp_converter.py",
            str(disasm_file)
        ]
        
        result = subprocess.run(convert_cmd, cwd=self.project_root,
                              capture_output=True, text=True)
        if result.returncode != 0:
            print(f"    ❌ C++ conversion failed: {result.stderr}")
            return False
        
        cpp_file = self.project_root / "disassembly" / f"routine_{addr_str}.cpp"
        if not cpp_file.exists():
            print(f"    ❌ C++ file not created")
            return False
        
        print(f"    ✅ C++ conversion complete: {cpp_file}")
        
        # 3. Compile as shared library
        print(f"  Compiling shared library...")
        if not self.compile_shared_library(addr_str, cpp_file):
            return False
        
        # 4. Load into simulator (if running)
        print(f"  Loading into simulator...")
        if not self.load_into_simulator(address, addr_str):
            return False
        
        print(f"  ✅ Routine 0x{address:04X} loaded successfully!")
        return True
    
    def compile_shared_library(self, addr_str, cpp_file):
        """Compile the C++ routine as a shared library"""
        shared_lib = self.project_root / "dynamic_routines" / f"routine_{addr_str}.so"
        shared_lib.parent.mkdir(exist_ok=True)
        
        compile_cmd = [
            "g++", "-shared", "-fPIC",
            "-I", str(self.project_root / "starwars_cpp_v2" / "include"),
            str(cpp_file),
            "-o", str(shared_lib)
        ]
        
        result = subprocess.run(compile_cmd, capture_output=True, text=True)
        if result.returncode != 0:
            print(f"    ❌ Compilation failed: {result.stderr}")
            return False
        
        print(f"    ✅ Shared library created: {shared_lib}")
        return True
    
    def load_into_simulator(self, address, addr_str):
        """Load the routine into the running simulator"""
        # This would require the simulator to have a dynamic loading interface
        # For now, we'll just update the routine map file
        
        routine_map_file = self.project_root / "starwars_cpp_v2" / "src" / "dynamic_routine_map.cpp"
        
        # Add the new routine to the map
        new_entry = f"    {{0x{address:04X}, routine_{addr_str}_impl}},\n"
        
        if routine_map_file.exists():
            with open(routine_map_file, 'r') as f:
                content = f.read()
        else:
            content = """// Dynamic routine map - auto-generated
#include <map>
#include <functional>
#include "cpu_6809.h"

namespace StarWars {
    extern std::map<uint16_t, std::function<void(StarWarsCPU&)>> dynamic_routine_map = {
"""
        
        # Insert new entry before the closing brace
        if "};\n" in content:
            content = content.replace("};\n", new_entry + "};\n")
        else:
            content += new_entry + "};\n"
        
        with open(routine_map_file, 'w') as f:
            f.write(content)
        
        print(f"    ✅ Routine map updated: {routine_map_file}")
        return True

def main():
    if len(sys.argv) != 2:
        print("Usage: python dynamic_routine_loader.py <project_root>")
        sys.exit(1)
    
    project_root = sys.argv[1]
    loader = RoutineLoader(project_root)
    loader.monitor_unknown_addresses()

if __name__ == "__main__":
    main()
