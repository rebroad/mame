#!/bin/bash

set -euo pipefail

# build_web.sh - Build upstream MAME for WebAssembly (Star Wars subset),
#                package a ROM, generate index.html, and optionally serve.

# Defaults
DO_BUILD=true
START_SERVER=true
SERVER_PORT=""
VIDEO_MODE="soft"
ENABLE_WORKERS=false # Enable WASM workers + AudioWorklet (requires full rebuild)
DRIVER_SHORTNAME="starwars"
ROM_PATH="$HOME/.mame/roms/starwars.zip"
AUDIO_LATENCY="5"
DO_WIPE=false
JOBS="$(nproc)"
BUILD_CONFIG="release32"  # default to release for web deployment

# Emscripten toolchain controls
EMSDK_VERSION="3.1.35"
USE_LOCAL_EMSDK=false  # Prefer global emsdk at ~/src/emsdk; fallback to local clone
USE_CCACHE=true        # Enable ccache by default for faster incremental builds
LINK_THREADS=""
DO_REGEN=true
DO_COMPRESS=true       # Compress by default for deployment
PROFILER_DEBUG=true    # Enable profiler by default

print_usage() {
    echo "Usage: $0 [options]"
    echo "  -no-build              Skip compiling MAME (reuse existing starwarswasm.*)"
    echo "  -no-server             Do not start a local web server"
    echo "  -port <N>              Serve on a specific port (default: first free 8000-8005)"
    echo "  -rom <path>            ROM zip to embed (default: $HOME/.mame/roms/starwars.zip)"
    echo "  -driver <shortname>    MAME driver shortname to launch (default: starwars)"
    echo "  -emsdk-version <ver>   Emscripten version to use (default: $EMSDK_VERSION)"
    echo "  -use-local-emsdk       Use local project clone instead of ~/src/emsdk"
    echo "  -no-ccache             Disable ccache wrapper for this build"
    echo "  -console-debug         Run MAME with -verbose for browser console logs"
    echo "  -build-debug           Enable Emscripten debug build flags (no size opts)"
    echo "  -no-profiler           Disable profiler debug output"
    echo "  -latency <N>           Set -audio_latency (default: $AUDIO_LATENCY)"
    echo "  -j <N>, --jobs <N>     Use N jobs for 'make -j' (default: CPU count)"
    echo "  -link-threads <N>      Use N threads for wasm-ld (-Wl,--threads=N)"
    echo "  -no-compress           Disable compression (default: enabled)"
    echo "  -autostart             Auto-insert coin and start game via autoboot.lua"
    echo "  -workers               Build with WASM workers + AudioWorklet (-pthread)"
    echo "  -wipe                  WARNING: run 'git clean -fdx' (asks confirmation)"
}

# Parse args
CONSOLE_DEBUG=false
BUILD_DEBUG=false
PROFILER_DEBUG=false
AUTOSTART=false
VERBOSE_FLAG=
while [[ $# -gt 0 ]]; do
    case "$1" in
        -no-build) DO_BUILD=false; shift;;
        -no-server) START_SERVER=false; shift;;
        -port) SERVER_PORT="${2:-}"; shift 2;;
        -rom) ROM_PATH="${2:-}"; shift 2;;
        -driver) DRIVER_SHORTNAME="${2:-}"; shift 2;;
        -latency) AUDIO_LATENCY="${2:-}"; shift 2;;
        -emsdk-version) EMSDK_VERSION="${2:-}"; shift 2;;
        -use-local-emsdk) USE_LOCAL_EMSDK=true; shift;;
        -no-ccache) USE_CCACHE=false; shift;;
        -console-debug) CONSOLE_DEBUG=true; VERBOSE_FLAG="-verbose"; shift;;
        -build-debug) BUILD_DEBUG=true; BUILD_CONFIG="debug32"; shift;;
        -profiler) PROFILER_DEBUG=true; shift;;
        -no-profiler) PROFILER_DEBUG=false; shift;;
        -debug) CONSOLE_DEBUG=true; BUILD_DEBUG=true; BUILD_CONFIG="debug32"; shift;;
        -j) JOBS="${2:-}"; shift 2;;
        -j[0-9]*) JOBS="${1#-j}"; shift;;
        --jobs) JOBS="${2:-}"; shift 2;;
        -link-threads) LINK_THREADS="${2:-}"; shift 2;;
        -no-compress) DO_COMPRESS=false; shift;;
        -autostart) AUTOSTART=true; shift;;
        -workers) ENABLE_WORKERS=true; shift;;
        -wipe) DO_WIPE=true; shift;;
        -h|--help) print_usage; exit 0;;
        *) echo "Unknown option: $1"; print_usage; exit 1;;
    esac
done

REPO_ROOT="$(cd "$(dirname "$0")" && pwd)"
OUTDIR="$REPO_ROOT/webdist"
MODE_STAMP="$REPO_ROOT/.wasm_build_mode"

echo "Repo: $REPO_ROOT"

echo "Using Emscripten: version target $EMSDK_VERSION (local clone: $USE_LOCAL_EMSDK)"

# Optional destructive cleanup using git clean/reset with confirmation
if $DO_WIPE; then
    if ! git -C "$REPO_ROOT" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        echo "Error: $REPO_ROOT is not a git repository; cannot wipe." >&2
        exit 1
    fi
    echo "WARNING: This will run 'git reset --hard' and 'git clean -fdx' in:"
    echo "  $REPO_ROOT"
    echo "This deletes ALL untracked and ignored files/dirs (build artifacts, caches, webdist, .emsdk-mame, etc.)."
    echo "This is destructive and cannot be undone."
    read -r -p "Type 'yes' to proceed with wipe, or anything else to cancel: " _ans
    if [[ "${_ans:-}" == "yes" ]]; then
        git -C "$REPO_ROOT" reset --hard
        git -C "$REPO_ROOT" clean -fdx
        echo "Repository wipe complete."
    else
        echo "Wipe cancelled."
    fi
fi

# Ensure ROM exists - check for zip first, then individual files
ROM_FOUND=false
if [[ -f "$ROM_PATH" ]]; then
    ROM_FOUND=true
    echo "Using ROM zip: $ROM_PATH"
else
    # Check for individual ROM files in starwars directory
    ROM_DIR="$HOME/.mame/roms/starwars"
    if [[ -d "$ROM_DIR" ]]; then
        echo "ROM zip not found, checking for individual files in $ROM_DIR"

        # Check for 214 version first (preferred), then 114
        # Check for either 214 or 114 version ROM file (prefer 214)
        for ver in 214 114; do
            if [[ -f "$ROM_DIR/136021.$ver.1f" ]]; then
                echo "Found Star Wars $ver version ROM files"
                ROM_FOUND=true
                ROM_PATH="$ROM_DIR"  # Use individual files directly - no need to zip
                break
            fi
        done
        if [[ "$ROM_FOUND" != "true" ]]; then
            echo "No Star Wars ROM files found in $ROM_DIR"
            echo "Expected files: 136021.214.1f (preferred) or 136021.114.1f"
        fi
    fi
fi

if [[ "$ROM_FOUND" != "true" ]]; then
    echo "Error: ROM not found at $ROM_PATH and no individual ROM files found"
    echo "Please ensure you have either:"
    echo "  - $HOME/.mame/roms/starwars.zip, or"
    echo "  - Individual ROM files in $HOME/.mame/roms/starwars/ (prefer 214 over 114)"
    exit 1
fi

version_ge() { printf '%s\n%s\n' "$1" "$2" | sort -V | head -n1 | grep -qx "$2"; }

# Ensure emscripten environment is active and compatible without affecting other projects
ensure_emscripten() {
    if $USE_LOCAL_EMSDK; then
        local LOCAL_SDK="$REPO_ROOT/.emsdk-mame"
        if [[ ! -d "$LOCAL_SDK" ]]; then
            echo "Setting up local emsdk at $LOCAL_SDK ..."
            git clone https://github.com/emscripten-core/emsdk.git "$LOCAL_SDK"
        fi
        pushd "$LOCAL_SDK" >/dev/null
        ./emsdk install "$EMSDK_VERSION"
        ./emsdk activate "$EMSDK_VERSION"
        # shellcheck disable=SC1091
        source ./emsdk_env.sh
        popd >/dev/null
    else
        # Prefer an already-configured PATH emcc if compatible; otherwise try sourcing envs, then ~/src/emsdk, else fallback to local
        local GLOBAL_SDK="$HOME/src/emsdk"
        local EMVER=""
        if command -v emcc >/dev/null 2>&1; then
            EMVER="$(emcc -v 2>/dev/null | head -n1 | sed -E 's/.* ([0-9]+\.[0-9]+\.[0-9]+).*/\1/')" || true
        fi
        if [[ -n "$EMVER" ]] && version_ge "$EMVER" "$EMSDK_VERSION"; then
            echo "Using existing emcc on PATH (version $EMVER)"
            :
        else
            # Try sourcing existing emsdk environments first (no install)
            if [[ -n "${EMSDK:-}" && -f "$EMSDK/emsdk_env.sh" ]]; then
                # shellcheck disable=SC1091
                source "$EMSDK/emsdk_env.sh"
            elif [[ -f "$GLOBAL_SDK/emsdk_env.sh" ]]; then
                # shellcheck disable=SC1091
                source "$GLOBAL_SDK/emsdk_env.sh"
            elif [[ -f "$REPO_ROOT/.emsdk-mame/emsdk_env.sh" ]]; then
                # shellcheck disable=SC1091
                source "$REPO_ROOT/.emsdk-mame/emsdk_env.sh"
            fi
            if command -v emcc >/dev/null 2>&1; then
                EMVER="$(emcc -v 2>/dev/null | head -n1 | sed -E 's/.* ([0-9]+\.[0-9]+\.[0-9]+).*/\1/')" || true
            fi
            if [[ -n "$EMVER" ]] && version_ge "$EMVER" "$EMSDK_VERSION"; then
                echo "Using emcc after sourcing env (version $EMVER)"
                :
            else
                if [[ -d "$GLOBAL_SDK" ]]; then
                    pushd "$GLOBAL_SDK" >/dev/null
                    # Install only if not already present in emsdk list
                    if ! ./emsdk list | grep -E "(^|[[:space:]])${EMSDK_VERSION}([[:space:]]|$)" >/dev/null 2>&1; then
                        ./emsdk install "$EMSDK_VERSION"
                    fi
                    # Activate only if current emcc version mismatches
                    local CUR=""
                    if command -v emcc >/dev/null 2>&1; then
                        CUR="$(emcc -v 2>/dev/null | head -n1 | sed -E 's/.* ([0-9]+\.[0-9]+\.[0-9]+).*/\1/')" || true
                    fi
                    if [[ "$CUR" != "$EMSDK_VERSION" ]]; then
                        ./emsdk activate "$EMSDK_VERSION"
                        # shellcheck disable=SC1091
                        source ./emsdk_env.sh
                    fi
                    popd >/dev/null
                else
                    echo "Global emsdk not found at $GLOBAL_SDK; falling back to local clone."
                    USE_LOCAL_EMSDK=true
                    ensure_emscripten
                    return
                fi
            fi
        fi
    fi
    # Final sanity
    if ! command -v emcc >/dev/null 2>&1; then
        echo "Error: emcc not available after setup." >&2
        exit 1
    fi

    # Configure ccache wrapper if enabled and available
    if $USE_CCACHE; then
        if command -v ccache >/dev/null 2>&1; then
            export EM_COMPILER_WRAPPER="ccache"
            # Prime ccache defaults if not set; place cache at the main repo root (shared by worktrees)
            local GIT_COMMON
            GIT_COMMON="$(git -C "$REPO_ROOT" rev-parse --git-common-dir 2>/dev/null || echo "$REPO_ROOT/.git")"
            local MAIN_ROOT
            MAIN_ROOT="$(cd "$(dirname "$GIT_COMMON")" && pwd)"
            : "${CCACHE_DIR:=$MAIN_ROOT/.ccache}"
            export CCACHE_DIR
            ccache --set-config=compiler_check=content >/dev/null 2>&1 || true
            ccache --set-config=max_size=5G >/dev/null 2>&1 || true
            echo "Using ccache at $CCACHE_DIR"
        else
            echo "ccache not found; proceeding without ccache. Install with: sudo apt install ccache"
        fi
    fi
}

ensure_emscripten

# Graceful interrupt handling for noisy builds
# Trap Ctrl-C (SIGINT) and SIGTERM to stop child process group quietly
BUILD_PID=""
cleanup_build() {
    # Only act if a build is in progress
    if [[ -n "$BUILD_PID" ]] && kill -0 "$BUILD_PID" >/dev/null 2>&1; then
        echo "\nInterrupt received – stopping build gracefully..."
        # Send SIGTERM to the whole process group started via setsid
        kill -TERM -"$BUILD_PID" >/dev/null 2>&1 || true
        # Wait for it to exit to avoid shell spew
        wait "$BUILD_PID" >/dev/null 2>&1 || true
    fi
    exit 130
}
trap cleanup_build INT TERM

# Auto-regen logic: hash Lua build scripts to detect changes
SCRIPTS_HASH_FILE="$REPO_ROOT/.genie_scripts.sha256"
compute_scripts_hash() {
    (
      cd "$REPO_ROOT" >/dev/null || exit 0
      # Include all Lua under scripts/, and filter/layout lists if present
      {
        find scripts -type f -name "*.lua" -print0 2>/dev/null
        find scripts -type f -not -name "*.lua" -print0 2>/dev/null
        find src -maxdepth 3 -type f \( -name "*.flt" -o -name "*.lst" \) -print0 2>/dev/null
      } | sort -z | xargs -0 sha256sum 2>/dev/null | sha256sum | awk '{print $1}'
    )
}
CURRENT_SCRIPTS_HASH="$(compute_scripts_hash || true)"
PREV_SCRIPTS_HASH=""
if [[ -f "$SCRIPTS_HASH_FILE" ]]; then PREV_SCRIPTS_HASH="$(cat "$SCRIPTS_HASH_FILE" 2>/dev/null || true)"; fi
if [[ -z "$PREV_SCRIPTS_HASH" || "$CURRENT_SCRIPTS_HASH" != "$PREV_SCRIPTS_HASH" ]]; then
    DO_REGEN=true
    echo "[regen] Build scripts changed → will regenerate projects (REGENIE=1)"
else
    DO_REGEN=false
    echo "[regen] No build script changes detected → skipping regeneration (REGENIE=0)"
fi

# Resolve file_packager path robustly from active emcc
EMSCRIPTEN_DIR="$(dirname "$(which emcc)")"
PACKAGER=""
if [[ -n "${EMSDK:-}" && -f "$EMSDK/upstream/emscripten/tools/file_packager.py" ]]; then
    PACKAGER="$EMSDK/upstream/emscripten/tools/file_packager.py"
elif [[ -f "$EMSCRIPTEN_DIR/tools/file_packager.py" ]]; then
    PACKAGER="$EMSCRIPTEN_DIR/tools/file_packager.py"
fi
if [[ ! -f "$PACKAGER" ]]; then
    echo "Error: file_packager.py not found (tried $PACKAGER)." >&2
    echo "Hint: ensure you're using emsdk $EMSDK_VERSION and have sourced emsdk_env.sh." >&2
    exit 1
fi

# Track current vs previous build mode to avoid mixing pthread and non-pthread objects
CUR_MODE="pthread=$($ENABLE_WORKERS && echo 1 || echo 0)"
PREV_MODE=""
if [[ -f "$MODE_STAMP" ]]; then PREV_MODE="$(cat "$MODE_STAMP" 2>/dev/null || true)"; fi

# Track build configuration to detect optimization changes that require cache cleanup
CUR_BUILD_CONFIG="$BUILD_CONFIG"
PREV_BUILD_CONFIG=""
BUILD_CONFIG_STAMP="$REPO_ROOT/.build_config.sha256"
if [[ -f "$BUILD_CONFIG_STAMP" ]]; then PREV_BUILD_CONFIG="$(cat "$BUILD_CONFIG_STAMP" 2>/dev/null || true)"; fi

# Function to clean problematic caches when build configuration changes
clean_build_caches() {
    local config_changed=false
    local mode_changed=false

    # Determine what changed
    if [[ -n "$PREV_BUILD_CONFIG" ]] && [[ "$PREV_BUILD_CONFIG" != "$CUR_BUILD_CONFIG" ]]; then
        config_changed=true
        echo "Build configuration changed from '$PREV_BUILD_CONFIG' to '$CUR_BUILD_CONFIG'"
    fi

    if [[ -n "$PREV_MODE" ]] && [[ "$PREV_MODE" != "$CUR_MODE" ]]; then
        mode_changed=true
        echo "Build mode changed from '$PREV_MODE' to '$CUR_MODE'"
    fi

    # Clean PCH files that can cause optimization conflicts (always safe to clean)
    echo "Cleaning precompiled headers..."
    find "$REPO_ROOT/build" -name "*.pch" -delete 2>/dev/null || true
    find "$REPO_ROOT/build" -name "*.gch" -delete 2>/dev/null || true

    # Only clean object files if configuration actually changed
    if $config_changed; then
        echo "Cleaning object files due to configuration change..."
        find "$REPO_ROOT/build" -name "*.o" -delete 2>/dev/null || true
    fi

    # Only clean Emscripten cache if mode changed (pthread vs single-threaded)
    if $mode_changed; then
        echo "Cleaning Emscripten cache due to mode change..."
        rm -rf "$REPO_ROOT/build/asmjs" 2>/dev/null || true
        rm -rf "$REPO_ROOT/build/asmjs-pthread" 2>/dev/null || true
        rm -rf "$REPO_ROOT/build/asmjs-single" 2>/dev/null || true
    fi

    echo "Cache cleanup complete."
}

# Check if we need to clean caches (only if there was a previous build and config actually changed)
if [[ -n "$PREV_BUILD_CONFIG" ]] && [[ "$PREV_BUILD_CONFIG" != "$CUR_BUILD_CONFIG" ]]; then
    echo "Build configuration changed from '$PREV_BUILD_CONFIG' to '$CUR_BUILD_CONFIG' - cleaning caches..."
    clean_build_caches
elif [[ -n "$PREV_MODE" ]] && [[ "$PREV_MODE" != "$CUR_MODE" ]]; then
    echo "Build mode changed from '$PREV_MODE' to '$CUR_MODE' - cleaning caches..."
    clean_build_caches
else
    echo "Using existing build configuration: $CUR_BUILD_CONFIG (mode: $CUR_MODE)"
fi

# Optional build
if $DO_BUILD; then
    echo "Building MAME (Star Wars subset) for WebAssembly..."
    # Maintain separate object trees for worker vs non-worker builds to avoid thrashing
    BUILD_BASE="$REPO_ROOT/build"
    ASMJS_LINK="$BUILD_BASE/asmjs"
    MODE_TAG=$($ENABLE_WORKERS && echo "pthread" || echo "single")
    ASMJS_MODE_DIR="$BUILD_BASE/asmjs-$MODE_TAG"
    GEN_BASE="$REPO_ROOT/build/projects/sdl/mamestarwarswasm"
    GMAKE_LINK="$GEN_BASE/gmake-asmjs"
    GMAKE_MODE_DIR="$GEN_BASE/gmake-asmjs-$MODE_TAG"
    mkdir -p "$ASMJS_MODE_DIR"
    mkdir -p "$GEN_BASE"
    # Point asmjs link to mode dir
    if [[ -L "$ASMJS_LINK" || -e "$ASMJS_LINK" ]]; then
        if [[ -L "$ASMJS_LINK" ]]; then rm -f "$ASMJS_LINK"; else mv "$ASMJS_LINK" "${ASMJS_LINK}-backup-$(date +%s)" 2>/dev/null || true; fi
    fi
    ln -sfn "$(basename "$ASMJS_MODE_DIR")" "$ASMJS_LINK"
    # Point gmake-asmjs link to mode dir
    if [[ -L "$GMAKE_LINK" || -e "$GMAKE_LINK" ]]; then
        if [[ -L "$GMAKE_LINK" ]]; then rm -f "$GMAKE_LINK"; else mv "$GMAKE_LINK" "${GMAKE_LINK}-backup-$(date +%s)" 2>/dev/null || true; fi
    fi
    mkdir -p "$GMAKE_MODE_DIR"
    ln -sfn "$(basename "$GMAKE_MODE_DIR")" "$GMAKE_LINK"
    pushd "$REPO_ROOT" >/dev/null
    # Bootstrap native 'genie' without Emscripten flags polluting host link
    if [[ -d "$REPO_ROOT/3rdparty/genie" ]]; then
        echo "Bootstrapping native genie (host build)..."
        ( cd "$REPO_ROOT/3rdparty/genie" && LDFLAGS= CFLAGS= CXXFLAGS= make -j"$(nproc)" ) || true
    fi
    # Linker flags for Emscripten – ensure FS, allow memory growth, higher initial memory.
    BUILD_LDFLAGS='-s FORCE_FILESYSTEM=1 -s ALLOW_MEMORY_GROWTH=1 -s INITIAL_MEMORY=536870912'
    # Add size-optimization defaults for release builds
    if $BUILD_DEBUG; then
        BUILD_LDFLAGS+=" -s ASSERTIONS=2 -s DEMANGLE_SUPPORT=1 -s NO_DISABLE_EXCEPTION_CATCHING=1"
        export EMCC_DEBUG=1
        BUILD_LDFLAGS+=" -v"
    else
        export EMCC_CFLAGS="${EMCC_CFLAGS:-} -Oz"
        export EMCC_CXXFLAGS="${EMCC_CXXFLAGS:-} -Oz"
        BUILD_LDFLAGS+=" -Oz"
    fi
    if $ENABLE_WORKERS; then
        # Full workers path: run main in a pthread and allow OffscreenCanvas; AudioWorklet needs workers
        BUILD_LDFLAGS+=' -s WASM_WORKERS=1 -s AUDIO_WORKLET=1 -s PROXY_TO_PTHREAD=1 -s OFFSCREENCANVAS_SUPPORT=1 -pthread'
        export EMCC_CFLAGS="${EMCC_CFLAGS:-} -pthread"
        export EMCC_CXXFLAGS="${EMCC_CXXFLAGS:-} -pthread"
    fi
    # Enable profiler debug output (useful progress without compile noise)
    if $PROFILER_DEBUG; then
        export EMCC_DEBUG=1
        BUILD_LDFLAGS+=" -v"
    fi
    # Default threads to CPU count if not specified
    if [[ -z "$LINK_THREADS" ]]; then LINK_THREADS="$(nproc)"; fi
    if [[ -n "$LINK_THREADS" ]]; then BUILD_LDFLAGS+=" -Wl,--threads=${LINK_THREADS}"; fi
    # Reduce linker noise from Emscripten about undefined symbols (e.g., legacy GL calls)
    BUILD_LDFLAGS+=" -s WARN_ON_UNDEFINED_SYMBOLS=0"
    echo "Using LDFLAGS: ${BUILD_LDFLAGS}"
    # Default compile job count if not provided
    # Function to run the build with proper error handling
    run_build() {
        local retry_after_cleanup="${1:-false}"
        local regenie_flag="$($DO_REGEN && echo 1 || echo 0)"

        if $retry_after_cleanup; then
            regenie_flag="0"  # Don't regenerate on retry
        fi

        # Capture build output for error analysis
        local build_log="/tmp/mame_build_$$.log"

        # Pass web LDFLAGS via LDOPTS so native host tools (e.g., genie) don't inherit them
        # Run make in its own session so we can SIGTERM the group on Ctrl-C (avoids Python tracebacks)
        setsid bash -c "emmake make \
            SUBTARGET=starwarswasm \
            SOURCES=src/mame/atari/starwars.cpp \
            WEBASSEMBLY=1 \
            TOOLS=0 \
            REGENIE=$regenie_flag \
            NOWERROR=1 \
            SYMBOLS=0 SYMLEVEL=0 STRIP_SYMBOLS=1 \
            NO_OPENGL=1 \
            config=$BUILD_CONFIG \
            LDOPTS=\"$BUILD_LDFLAGS\" \
            -j\"$JOBS\" 2>&1 | tee \"$build_log\"" &
        BUILD_PID=$!
        # Wait for build to finish (trap will handle Ctrl-C)
        wait "$BUILD_PID"
        local build_status=$?
        BUILD_PID=""

        # Store build log for error analysis
        if [[ -f "$build_log" ]]; then
            export LAST_BUILD_LOG="$build_log"
        fi

        return $build_status
    }

    # Run the initial build
    run_build
    status=$?

    if [[ $status -eq 130 || $status -eq 143 ]]; then
        echo "Build interrupted."
        exit 130
    fi

    if [[ $status -ne 0 ]]; then
        echo "Build failed (exit $status)." >&2

        # Check for common PCH-related errors and attempt automatic recovery
        # Look for the specific error in build logs or common error patterns
        PCH_ERROR_DETECTED=false

        # Check if we've seen this error before (common pattern)
        if [[ "$PREV_BUILD_CONFIG" != "$CUR_BUILD_CONFIG" ]] && [[ -n "$PREV_BUILD_CONFIG" ]]; then
            PCH_ERROR_DETECTED=true
            echo "Build configuration changed - likely PCH cache conflict"
        fi

        # Also check for the specific error message in recent build output
        if ! $PCH_ERROR_DETECTED; then
            # Look for the error in any recent build logs or temporary files
            if find "$REPO_ROOT/build" -name "*.log" -exec grep -l "__OPTIMIZE_SIZE__ predefined macro was disabled" {} \; 2>/dev/null | head -1 | grep -q .; then
                PCH_ERROR_DETECTED=true
            fi
        fi

        if $PCH_ERROR_DETECTED; then
            echo "Detected PCH optimization mismatch - attempting automatic recovery..."
            clean_build_caches
            echo "Retrying build after cache cleanup..."

            # Retry the build once after cleaning caches
            run_build true
            status=$?

            if [[ $status -ne 0 ]]; then
                echo "Build still failed after cache cleanup (exit $status)." >&2
                exit $status
            else
                echo "Build succeeded after automatic cache cleanup! 🎉"
            fi
        else
            exit $status
        fi
    fi
    popd >/dev/null
    # Persist scripts hash after successful build
    if [[ -n "$CURRENT_SCRIPTS_HASH" ]]; then echo "$CURRENT_SCRIPTS_HASH" > "$SCRIPTS_HASH_FILE"; fi
    echo "$CUR_MODE" > "$MODE_STAMP"
    echo "$CUR_BUILD_CONFIG" > "$BUILD_CONFIG_STAMP"
fi

# Locate artifacts (repo root after build; webdist for -no-build runs)
SRC_ROOT="$REPO_ROOT"
if ! $DO_BUILD; then
    if [[ -f "$OUTDIR/starwarswasm.html" ]]; then
        SRC_ROOT="$OUTDIR"
    fi
fi

# Verify artifacts (handle both debug and release builds)
if [[ "$BUILD_CONFIG" == "debug32" ]]; then
    ARTIFACT_BASE="starwarswasmd"
else
    ARTIFACT_BASE="starwarswasm"
fi

for f in "$SRC_ROOT/${ARTIFACT_BASE}.html" "$SRC_ROOT/${ARTIFACT_BASE}.js" "$SRC_ROOT/${ARTIFACT_BASE}.wasm"; do
    if [[ ! -f "$f" ]]; then
        echo "Error: Expected artifact missing: $f" >&2
        exit 1
    fi
done

# Stage web distribution (ensure artifacts exist in webdist)
mkdir -p "$OUTDIR"
if [[ "$SRC_ROOT" != "$OUTDIR" ]]; then
    mv -f "$SRC_ROOT/${ARTIFACT_BASE}."{html,js,wasm} "$OUTDIR/" 2>/dev/null || cp -f "$SRC_ROOT/${ARTIFACT_BASE}."{html,js,wasm} "$OUTDIR/"
    # Also stage worker bootstrap if present (pthreads/workers builds)
    if [[ -f "$SRC_ROOT/starwarswasm.worker.js" ]]; then
        echo "Injecting shims."
        cp -f "$SRC_ROOT/starwarswasm.worker.js" "$OUTDIR/"
        # Inject shims at top of worker to define `window` and `globalThis`
        if ! grep -q "self.window = self" "$OUTDIR/starwarswasm.worker.js" 2>/dev/null; then
            tmpfile="$(mktemp)"
            {
                echo '/* injected by build_web.sh: worker global shims */'
                echo 'self.window = self;'
                echo 'self.globalThis = self.globalThis || self;'
            } > "$tmpfile"
            cat "$OUTDIR/starwarswasm.worker.js" >> "$tmpfile"
            mv -f "$tmpfile" "$OUTDIR/starwarswasm.worker.js"
        fi
    else
        echo "No worker file to inject."
    fi
fi

echo "Packaging ROM into roms.data (mounted at roms/)..."
# Optional parent ROM support (embed if present in same dir or default rom dir)
PARENT_ROM=""
ROM_DIR="$(dirname "$ROM_PATH")"
if [[ -f "$ROM_DIR/starwars.zip" ]]; then
  PARENT_ROM="$ROM_DIR/starwars.zip"
elif [[ -f "$HOME/.mame/roms/starwars.zip" ]]; then
  PARENT_ROM="$HOME/.mame/roms/starwars.zip"
fi

# Optional autoboot script must be preloaded into the Emscripten FS
if $AUTOSTART; then
cat > "$OUTDIR/autoboot.lua" <<'LUA'
emu.register_frame(function()
  if emu.framecount() == 60 then
    emu.keypost('5')
  elseif emu.framecount() == 120 then
    emu.keypost('1')
  end
end)
LUA
fi

# Determine the correct ROM path based on ROM file type
# Determine ROM mount path and always use the same PACK_ARGS template for DRYness
if [[ "$ROM_PATH" == *.zip ]]; then
    # For zip files, mount directly in roms/ directory
    ROM_MOUNT_PATH="roms/$(basename "$ROM_PATH")"
else
    # For individual files, mount the entire directory in roms/starwars/
    ROM_MOUNT_PATH="roms/starwars/"
fi
PACK_ARGS=(
    "$OUTDIR/roms.data"
    --preload "$ROM_PATH@$ROM_MOUNT_PATH"
    --export-name=Module
    --use-preload-cache
    --no-heap-copy
    --js-output="$OUTDIR/roms.js"
)
if [[ -n "$PARENT_ROM" ]]; then
  echo "Including parent ROM: $PARENT_ROM"
  PACK_ARGS=("${PACK_ARGS[@]}" --preload "$PARENT_ROM@roms/$(basename "$PARENT_ROM")")
fi
# Optional per-game cfg (to carry input inversion, etc.)
CFG_FILE="$HOME/.mame/cfg/${DRIVER_SHORTNAME}.cfg"
USE_CFG=false
if [[ -f "$CFG_FILE" ]]; then
  echo "Including per-game cfg: $CFG_FILE"
  PACK_ARGS=("${PACK_ARGS[@]}" --preload "$CFG_FILE@cfg/${DRIVER_SHORTNAME}.cfg")
  USE_CFG=true
fi
# Preload autoboot if present
if $AUTOSTART; then
  PACK_ARGS+=(--preload "$OUTDIR/autoboot.lua@autoboot.lua")
fi
python3 "$PACKAGER" "${PACK_ARGS[@]}"

# Collect per-game INI overrides if available (brightness/contrast/gamma/bgfx chain)
INI_ARGS_JS=""
INI_FILE="$HOME/.mame/ini/${DRIVER_SHORTNAME}.ini"
if [[ -f "$INI_FILE" ]]; then
    # shellcheck disable=SC2013
    INI_BRIGHTNESS="$(awk 'tolower($1)=="brightness"{print $2;exit}' "$INI_FILE" 2>/dev/null || true)"
    INI_CONTRAST="$(awk 'tolower($1)=="contrast"{print $2;exit}' "$INI_FILE" 2>/dev/null || true)"
    INI_GAMMA="$(awk 'tolower($1)=="gamma"{print $2;exit}' "$INI_FILE" 2>/dev/null || true)"
    INI_BGFX_CHAIN="$(awk 'tolower($1)=="bgfx_screen_chains"{print $2;exit}' "$INI_FILE" 2>/dev/null || true)"
    INI_AUTOFRAMESKIP="$(awk 'tolower($1)=="autoframeskip"{print $2;exit}' "$INI_FILE" 2>/dev/null || true)"
    # Note: ignore waitvsync/syncrefresh in WASM, they can stall rendering in browsers
    if [[ -n "$INI_BRIGHTNESS" ]]; then
        INI_ARGS_JS+=$'\n      Module.arguments.push("-brightness", '"\"$INI_BRIGHTNESS\""');'
    fi
    if [[ -n "$INI_CONTRAST" ]]; then
        INI_ARGS_JS+=$'\n      Module.arguments.push("-contrast", '"\"$INI_CONTRAST\""');'
    fi
    if [[ -n "$INI_GAMMA" ]]; then
        INI_ARGS_JS+=$'\n      Module.arguments.push("-gamma", '"\"$INI_GAMMA\""');'
    fi
    if [[ -n "$INI_BGFX_CHAIN" ]]; then
        INI_ARGS_JS+=$'\n      Module.arguments.push("-bgfx_screen_chains", '"\"$INI_BGFX_CHAIN\""');'
    fi
    if [[ "$INI_AUTOFRAMESKIP" == "1" ]]; then
        INI_ARGS_JS+=$'\n      Module.arguments.push("-autoframeskip");'
    fi
    # waitvsync/syncrefresh intentionally not applied in web build
fi

# Generate index.html
cat > "$OUTDIR/index.html" <<EOF
<!doctype html>
<html>
  <head>
    <meta charset="utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1" />
    <title>Star Wars</title>
    <link rel="icon" href="data:,"/>
    <style>html,body{height:100%;margin:0;background:#000;color:#ccc;font-family:sans-serif} #canvas{width:100%;height:100%;display:block}</style>
  </head>
  <body>
    <canvas id="canvas"></canvas>
    <script>
      // Ensure canvas has explicit pixel size and is visible
      (function(){
        var c = document.getElementById('canvas');
        function resize(){ c.width = window.innerWidth; c.height = window.innerHeight; }
        window.addEventListener('resize', resize);
        resize();
      })();
      function dumpLog(prefix){
        try {
          if (typeof FS !== 'undefined') {
            var p = 'mame.log';
            var inf = FS.analyzePath(p);
            if (inf.exists) {
              var d = FS.readFile(p, { encoding: 'utf8' });
              console.error(prefix + '\\n' + d);
            }
          }
        } catch (e) { console.error(prefix + ' failed', e); }
      }
      window.addEventListener('error', function(e){ console.error('[window.onerror]', e.message, e.filename, e.lineno, e.colno); dumpLog('[mame.log]'); });
      window.addEventListener('unhandledrejection', function(e){ console.error('[unhandledrejection]', e.reason); dumpLog('[mame.log]'); });
      function detectPreferredVideo() {
        try {
          var c = document.createElement('canvas');
          var gl2 = c.getContext('webgl2');
          if (gl2) return 'bgfx';
          var gl = c.getContext('webgl') || c.getContext('experimental-webgl');
          if (gl) return 'bgfx';
        } catch (e) {}
        return 'soft';
      }
      // Allow URL overrides: ?video=soft|bgfx, ?latency=5
      var urlParams = new URLSearchParams(location.search);
      var urlVideo = (urlParams.get('video')||'').toLowerCase();
      var chosenVideo = urlVideo === 'soft' || urlVideo === 'bgfx' ? urlVideo : ("${VIDEO_MODE}" === "auto" ? detectPreferredVideo() : "${VIDEO_MODE}");
      var latencyOverride = urlParams.get('latency');
      var Module = {
        canvas: (function(){ return document.getElementById('canvas'); })(),
        arguments: [
          "${DRIVER_SHORTNAME}",
          "-rompath", "roms",
          "-video", chosenVideo,
          "-window", "-nomaximize", "-numscreens", "1",
          "-skip_gameinfo",
          "-log",
          "-joystick", "-mouse",
          "-speed", "1", "${VERBOSE_FLAG}",
          "-samplerate", "48000",
          "-audio_latency", latencyOverride ? String(latencyOverride) : "${AUDIO_LATENCY}"
        ],
        print: function(text){ console.log(text); },
        printErr: function(text){ console.error(text); },
        locateFile: function(path){ return path; },
        preRun: [],
        monitorRunDependencies: function(left){
          if (left === 0) {
            try {
              if (typeof FS !== 'undefined') {
                var info = FS.analyzePath('roms');
                var l = [];
                try { l = FS.readdir('roms'); } catch(e) {}
                console.log('[FS after preload] roms dir ok:', !!info.exists);
                console.log('[FS after preload] roms list:', (l||[]).join(','));
              }
            } catch (e) { console.error('[FS after preload] error', e); }
          }
        },
        onAbort: function(reason){
          console.error('[onAbort]', reason);
          try {
            if (typeof FS !== 'undefined') {
              var path = 'mame.log';
              var info = FS.analyzePath(path);
              if (info.exists) {
                var data = FS.readFile(path, { encoding: 'utf8' });
                console.error('[mame.log]\n' + data);
              } else {
                console.error('[mame.log] not found');
              }
            }
          } catch (e) { console.error('[onAbort] failed to read mame.log', e); }
        },
        onExit: function(code){
          console.error('[onExit]', code);
          try {
            if (typeof FS !== 'undefined') {
              var p = 'mame.log';
              var inf = FS.analyzePath(p);
              if (inf.exists) {
                var d = FS.readFile(p, { encoding: 'utf8' });
                console.error('[mame.log]\n' + d);
              }
            }
          } catch (e) { console.error('[onExit] read mame.log failed', e); }
        }
      };
      // Ensure canvas pixel size is set before runtime and notify Emscripten glue
      (function(){
        var c=document.getElementById('canvas');
        function applySize(){
          var w = window.innerWidth, h = window.innerHeight;
          c.width=w; c.height=h;
          if (Module && typeof Module.setCanvasSize === 'function') {
            try { Module.setCanvasSize(w, h, true); } catch(e) {}
          }
        }
        window.addEventListener('resize', applySize);
        applySize();
      })();
      // In workers mode with OffscreenCanvas, suppress main-thread getContext throws
      if ("${ENABLE_WORKERS}" === "true") {
        try {
          var __c = document.getElementById('canvas');
          var __origGetContext = __c.getContext.bind(__c);
          __c.getContext = function(type, attrs){
            try { return __origGetContext(type, attrs); } catch (e) { return null; }
          };
        } catch(e) {}
      }
      // Log whether AudioWorklet/Workers are active at runtime
      (function(){
        try {
          var ac = (window.AudioContext||window.webkitAudioContext)? new (window.AudioContext||window.webkitAudioContext)() : null;
          console.log('[Audio] Worklet support:', !!(ac && ac.audioWorklet));
        } catch(e){}
        console.log('[Env] crossOriginIsolated:', typeof crossOriginIsolated !== 'undefined' ? crossOriginIsolated : 'n/a');
        console.log('[Workers] SharedArrayBuffer available:', typeof SharedArrayBuffer !== 'undefined');
      })();
      console.log('[Args]', Module.arguments.join(' '));
      if ("${CONSOLE_DEBUG}" === "true") {
        Module.arguments.push("-verbose");
      }
      // Probe the Content-Encoding the browser actually received for the WASM
      try {
        fetch('starwarswasm.wasm', { method: 'HEAD', cache: 'no-store' }).then(function(r){
          console.log('[WASM] Content-Encoding:', r.headers.get('content-encoding') || '(none)');
          console.log('[WASM] Content-Type:', r.headers.get('content-type'));
        }).catch(function(e){ console.error('[WASM] HEAD probe failed', e); });
      } catch (e) { console.error('[WASM] HEAD probe threw', e); }
      // If cfg was packed, point MAME at it so per-game input (e.g., Y invert) loads
      if (${USE_CFG} === true) {
        Module.arguments.push("-cfg_directory", "cfg");
      }
      // Keep throttle enabled for smoother audio even in debug.
      if ("${AUTOSTART}" === "true") {
        Module.arguments.push("-autoboot_script", "autoboot.lua", "-autoboot_delay", "1");
      }
${INI_ARGS_JS}
      // Clean up any existing error.log before starting MAME
      (function(){
        try {
          if (typeof FS !== 'undefined') {
            var errorFile = 'error.log';
            var errorInf = FS.analyzePath(errorFile);
            if (errorInf && errorInf.exists) {
              FS.unlink(errorFile);
              console.log('[DEBUG] Deleted existing error.log');
            }
          }
        } catch(e) {
          console.log('[DEBUG] Could not delete error.log:', e);
        }
      })();

      // Single delayed probe after 7 seconds
      setTimeout(function(){
        console.log('[DEBUG] Delayed probe (7s)...');
        try {
          if (typeof FS !== 'undefined') {
            var p = 'mame.log';
            var inf = FS.analyzePath(p);
            if (inf && inf.exists) {
              var d = FS.readFile(p, { encoding: 'utf8' });
              console.error('[mame.log][delayed]\n' + d);
            } else {
              console.log('[DEBUG] mame.log not found (7s)');

              // Check for error.log
              var errorFile = 'error.log';
              var errorInf = FS.analyzePath(errorFile);
              if (errorInf && errorInf.exists) {
                var errorData = FS.readFile(errorFile, { encoding: 'utf8' });
                console.error('[error.log][delayed] (size: ' + errorData.length + ' bytes)');
                console.error('[error.log][delayed] contents:\n' + errorData);
              } else {
                console.log('[DEBUG] error.log not found (7s)');
              }

              // List all files in root to see what's there
              try {
                var files = FS.readdir('/');
                console.log('[DEBUG] All root files:', files.join(','));

                // Show detailed file info for each file
                files.forEach(function(file) {
                  if (file !== '.' && file !== '..') {
                    try {
                      var info = FS.analyzePath('/' + file);
                      if (info && info.exists) {
                        var stat = FS.stat('/' + file);
                        console.log('[DEBUG] File:', file, 'size:', stat.size, 'mode:', stat.mode);
                      }
                    } catch(e) {
                      console.log('[DEBUG] Could not stat file:', file, e);
                    }
                  }
                });
              } catch(e) {
                console.log('[DEBUG] Cannot list root files:', e);
              }
            }
          } else {
            console.log('[DEBUG] FS not available (7s)');
          }
        } catch(e) {
          console.log('[DEBUG] Delayed probe error:', e);
        }
      }, 7000);
    </script>
    <script src="roms.js"></script>
    <script src="${ARTIFACT_BASE}.js"></script>
  </body>
  </html>
EOF

echo "Web artifacts staged in: $OUTDIR"
ls -la "$OUTDIR"
echo "Artifacts ready. Next: ${START_SERVER:+start server}${START_SERVER:-no server} | console-debug=${CONSOLE_DEBUG}"

# Optional compression for deployment (served via HTTP Content-Encoding)
if $DO_COMPRESS; then
    echo "Compressing wasm for deployment..."
    if command -v brotli >/dev/null 2>&1; then
        brotli -f -q 11 "$OUTDIR/starwarswasm.wasm" -o "$OUTDIR/starwarswasm.wasm.br" || true
    else
        echo "brotli not found; skipping .wasm.br. Install: sudo apt install brotli"
    fi
    if command -v gzip >/dev/null 2>&1; then
        gzip -f -9 -c "$OUTDIR/starwarswasm.wasm" > "$OUTDIR/starwarswasm.wasm.gz" || true
    else
        echo "gzip not found; skipping .wasm.gz"
    fi
fi

start_server() {
    local port="$1"
    # Track chosen port for callers
    LAST_SERVER_PORT=""
    if [[ -z "$port" ]]; then
        for p in 8000 8001 8002 8003 8004 8005; do
            if ! (command -v nc >/dev/null 2>&1 && nc -z localhost "$p" 2>/dev/null); then
                port="$p"; break
            fi
        done
    fi
    if [[ -z "$port" ]]; then
        echo "No free port found (8000-8005). Start your own server in $OUTDIR." >&2
        return 1
    fi
    echo "Starting local server on http://localhost:$port ..."
    LAST_SERVER_PORT="$port"
    pushd "$OUTDIR" >/dev/null
    # Prefer Node server with COOP/COEP if available
    if command -v node >/dev/null 2>&1; then
      cat > serve.mjs << 'NODE'
import http from 'http';
import fs from 'fs';
import path from 'path';
import url from 'url';
const __dirname = path.dirname(url.fileURLToPath(import.meta.url));
const root = __dirname;
const port = process.env.PORT || 8000;
const types = { '.html':'text/html', '.js':'application/javascript', '.wasm':'application/wasm', '.json':'application/json', '.png':'image/png', '.jpg':'image/jpeg', '.jpeg':'image/jpeg', '.gif':'image/gif', '.svg':'image/svg+xml', '.css':'text/css', '.ico':'image/x-icon', '.data':'application/octet-stream' };
const server = http.createServer((req, res) => {
  let p = decodeURIComponent(new URL(req.url, `http://${req.headers.host}`).pathname);
  if (p === '/') p = '/index.html';
  const filePath = path.join(root, p);
  // Handle precompressed wasm
  if (filePath.endsWith('.wasm')) {
    const ae = String(req.headers['accept-encoding'] || '').toLowerCase();
    if (ae.includes('br') && fs.existsSync(filePath + '.br')) {
      res.setHeader('Content-Type', 'application/wasm');
      res.setHeader('Content-Encoding', 'br');
      fs.createReadStream(filePath + '.br').pipe(res);
      return;
    } else if (ae.includes('gzip') && fs.existsSync(filePath + '.gz')) {
      res.setHeader('Content-Type', 'application/wasm');
      res.setHeader('Content-Encoding', 'gzip');
      fs.createReadStream(filePath + '.gz').pipe(res);
      return;
    }
  }
  fs.readFile(filePath, (err, data) => {
    res.setHeader('Cross-Origin-Opener-Policy', 'same-origin');
    res.setHeader('Cross-Origin-Embedder-Policy', 'require-corp');
    res.setHeader('Cross-Origin-Resource-Policy', 'same-origin');
    // Required for AudioWorklet and Workers on some browsers
    res.setHeader('Cross-Origin-Resource-Policy', 'same-origin');
    res.setHeader('Origin-Trial', '');
    res.setHeader('Access-Control-Allow-Origin', '*');
    if (err) { res.writeHead(404); res.end('Not found'); return; }
    const ext = path.extname(filePath).toLowerCase();
    res.setHeader('Content-Type', types[ext] || 'application/octet-stream');
    res.writeHead(200);
    res.end(data);
  });
});
server.listen(port, () => console.log(`Serving ${root} on http://localhost:${port}`));
NODE
      PORT="$port" node serve.mjs >/dev/null 2>&1 &
    else
      python3 -m http.server "$port" >/dev/null 2>&1 &
    fi
    local pid=$!
    popd >/dev/null
    echo "Server PID: $pid"
    if command -v xdg-open >/dev/null 2>&1; then
        xdg-open "http://localhost:$port" >/dev/null 2>&1 || true
    fi
}

# Optional headless console capture (requires Node + puppeteer)
run_probe() {
    local port="$1"
    if ! $CONSOLE_DEBUG; then return 0; fi
    echo "Debug mode: attempting headless console capture..."
    pushd "$OUTDIR" >/dev/null
    if ! command -v node >/dev/null 2>&1; then
        echo "Node.js not found; skipping console capture. Install Node to enable."
        popd >/dev/null
        return 0
    fi
    # Try running probe; if puppeteer missing, advise install
    if ! node -e "require('puppeteer')" >/dev/null 2>&1; then
        echo "Puppeteer not installed. Installing locally in $OUTDIR ..."
        if command -v npm >/dev/null 2>&1; then
            ( npm init -y >/dev/null 2>&1 || true; npm install puppeteer --no-fund --no-audit >/dev/null 2>&1 ) || true
        else
            echo "npm not found; skipping console capture."
            popd >/dev/null
            return 0
        fi
    fi
    # Use the comprehensive MAME probe tool (much better output)
    if [[ -f "probe_mame_web.js" ]]; then
        node probe_mame_web.js "$USED_PORT" || true
    else
        echo "probe_mame_web.js not found; skipping console capture."
    fi
    popd >/dev/null
}

if $START_SERVER; then
    # Reuse existing server if already running and serving our page
    ensure_server() {
        local port="$1"
        local used_port=""
        local final_port=""
        # If a specific port was requested, prefer reusing it if healthy; otherwise start fresh there
        if [[ -n "$port" ]]; then
            if command -v curl >/dev/null 2>&1 && \
               curl -s --max-time 5 "http://localhost:$port/" | grep -q "<title>Star Wars</title>"; then
                used_port="$port"
            else
                start_server "$port" || true
                USED_PORT="$port"
                return
            fi
        else
            # Probe common ports for an existing healthy server (fast path)
            for p in 8000 8001 8002 8003 8004 8005; do
                if command -v curl >/dev/null 2>&1 && \
                   curl -s --max-time 5 "http://localhost:$p/" | grep -q "<title>Star Wars</title>"; then
                    used_port="$p"; break
                fi
            done
            # If still none, start a new server (start_server chooses first free, typically 8000)
            if [[ -z "$used_port" ]]; then
                start_server "" || true
                USED_PORT="$LAST_SERVER_PORT"
                return
            fi
        fi
        echo "Reusing existing server on http://localhost:$used_port"
        final_port="$used_port"
        # Return the port via a global variable
        USED_PORT="$final_port"
    }
    ensure_server "$SERVER_PORT"
else
    echo "To serve locally: (cd $OUTDIR && python3 -m http.server 8000)"
    echo "Then open: http://localhost:8000"
    USED_PORT="8000"
fi

# If debug mode, attempt headless console capture
if $CONSOLE_DEBUG; then
    run_probe "$USED_PORT" || true
fi

