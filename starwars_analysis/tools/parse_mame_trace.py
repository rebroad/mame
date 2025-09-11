#!/usr/bin/env python3
"""
Parse MAME debug.log to extract port writes and compare with C++ trace_params.csv
"""

import re
import sys
from collections import defaultdict

def parse_mame_trace(logfile):
    """Parse MAME debug.log and extract port writes"""
    writes = []
    
    with open(logfile, 'r') as f:
        for line in f:
            # Match: W 5022 00 @F2B4
            match = re.match(r'W (\w+) (\w+) @(\w+)', line.strip())
            if match:
                addr = int(match.group(1), 16)
                value = int(match.group(2), 16)
                pc = int(match.group(3), 16)
                writes.append((addr, value, pc))
    
    return writes

def parse_cpp_trace(csvfile):
    """Parse C++ trace_params.csv"""
    traces = []
    
    with open(csvfile, 'r') as f:
        for line in f:
            if line.startswith('frame,'):
                continue  # Skip header
            parts = line.strip().split(',')
            if len(parts) >= 5:
                frame = int(parts[0])
                tag = parts[1]
                pa = int(parts[2])
                pb = int(parts[3])
                avg = int(parts[4])
                traces.append((frame, tag, pa, pb, avg))
    
    return traces

def compare_traces(mame_writes, cpp_traces):
    """Compare MAME and C++ traces"""
    print("=== MAME Port Writes ===")
    for addr, value, pc in mame_writes:
        print(f"0x{addr:04X} = 0x{value:02X} @ PC=0x{pc:04X}")
    
    print("\n=== C++ Trace ===")
    for frame, tag, pa, pb, avg in cpp_traces:
        print(f"Frame {frame}: {tag} - PA=0x{pa:04X}, PB=0x{pb:04X}, AVG=0x{avg:04X}")
    
    # Group MAME writes by address
    mame_by_addr = defaultdict(list)
    for addr, value, pc in mame_writes:
        mame_by_addr[addr].append((value, pc))
    
    print("\n=== Comparison ===")
    print("MAME writes to 0x5022/0x5023 (our PA):")
    for value, pc in mame_by_addr[0x5022]:
        print(f"  0x5022 = 0x{value:02X} @ PC=0x{pc:04X}")
    for value, pc in mame_by_addr[0x5023]:
        print(f"  0x5023 = 0x{value:02X} @ PC=0x{pc:04X}")
    
    print("MAME writes to 0x5024/0x5025 (our PB):")
    for value, pc in mame_by_addr[0x5024]:
        print(f"  0x5024 = 0x{value:02X} @ PC=0x{pc:04X}")
    for value, pc in mame_by_addr[0x5025]:
        print(f"  0x5025 = 0x{value:02X} @ PC=0x{pc:04X}")
    
    print("MAME writes to 0x4701/0x4702 (our AVG):")
    for value, pc in mame_by_addr[0x4701]:
        print(f"  0x4701 = 0x{value:02X} @ PC=0x{pc:04X}")
    for value, pc in mame_by_addr[0x4702]:
        print(f"  0x4702 = 0x{value:02X} @ PC=0x{pc:04X}")

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python3 parse_mame_trace.py debug.log trace_params.csv")
        sys.exit(1)
    
    mame_writes = parse_mame_trace(sys.argv[1])
    cpp_traces = parse_cpp_trace(sys.argv[2])
    
    compare_traces(mame_writes, cpp_traces)
