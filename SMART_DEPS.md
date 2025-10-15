# Smart Dependency Resolution for MAME Builds

## The Problem

MAME's build system traditionally does **full transitive dependency analysis**:
- Scans all #include directives recursively
- Follows device→device→device chains infinitely
- Results in compiling ~thousands of files for 2 drivers
- BBC + SpyHunt → compiles Z80, NEC, ARM, MIPS, and 50+ other CPUs

## The Solution

**Smart Dependency Resolution** limits the transitive include depth and skips unnecessary device dependencies:

### How It Works

1. **Depth Limiting** - Only follows #includes to depth 2 by default
   - Depth 0: Driver source file (bbcb.cpp)
   - Depth 1: Direct includes from driver
   - Depth 2: Includes from those files
   - Depth 3+: SKIPPED (where the bloat happens!)

2. **Device Filtering** - Stops device→device transitive chains
   - Driver includes CPU header ✅
   - CPU header includes another device ❌ STOP HERE

3. **Result** - Compiles ~hundreds of files instead of thousands

## Usage

### Default (Smart Mode ON)

```bash
# Smart dependencies enabled by default for filter builds
make SUBTARGET=test FFMPEG_LIBS="..."
```

You'll see:
```
Using SMART dependency resolution (depth_limit=2)
Smart scan found 347 files (vs ~thousands with full transitive scan)
```

### Disable Smart Mode (Old Behavior)

```bash
# Use full transitive dependencies (slow but comprehensive)
make SUBTARGET=test SMART_DEPS=0 FFMPEG_LIBS="..."
```

### Adjust Depth Limit

Edit `scripts/build/makedep.py` line 797:
```python
def scan_source_dependencies(root, sources, smart=True, depth_limit=2):
```

Change `depth_limit=2` to:
- `depth_limit=1` - Even faster, more aggressive (might miss dependencies)
- `depth_limit=3` - Slower, more conservative
- `depth_limit=999` - Same as SMART_DEPS=0

## Example Comparison

**Building BBC + SpyHunt:**

| Mode | Files Compiled | CPUs Included | Build Time |
|------|----------------|---------------|------------|
| Smart (depth=2) | ~400 files | 6502, Z80, M6809 | **2-3 minutes** |
| Full Transitive | ~3000+ files | ALL 50+ CPUs | 15-20 minutes |

## Technical Details

**What Gets Included (Smart Mode):**
- ✅ Driver source files
- ✅ Direct device headers
- ✅ Core EMU headers
- ✅ Shared MAME code
- ✅ Library utilities
- ❌ Transitive device dependencies
- ❌ Unused CPU cores
- ❌ Deep dependency chains

**Implementation:**
- Modified: `scripts/build/makedep.py` function `scan_source_dependencies()`
- Added: Smart mode with depth limiting
- Added: Device transitive blocking
- Added: SMART_DEPS environment control

## Troubleshooting

**Build errors about missing symbols?**
- Increase depth limit or disable smart mode
- Some drivers have complex dependency chains

**Still compiling too much?**
- Reduce depth_limit to 1
- Check driver source for unnecessary includes

**Want old behavior?**
- `make SMART_DEPS=0` - Full transitive scan

## Future Enhancements

Potential improvements:
- Parse MACHINE_CONFIG to determine actual devices used
- Device usage graph analysis
- Per-driver dependency caching
- Parallel dependency scanning

