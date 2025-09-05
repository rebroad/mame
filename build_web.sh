#!/bin/bash

set -euo pipefail

# build_web.sh - Build upstream MAME for WebAssembly (Star Wars subset),
#                package a ROM, generate index.html, and optionally serve.

# Defaults
DO_BUILD=true
START_SERVER=true
SERVER_PORT=""
VIDEO_MODE="bgfx"   # "bgfx" or "soft"
DRIVER_SHORTNAME="starwars1"
ROM_PATH="$HOME/.mame/roms/starwars1.zip"

# Emscripten toolchain controls
EMSDK_VERSION="3.1.35"
USE_LOCAL_EMSDK=true   # Use repo-local emsdk clone to avoid affecting global
USE_CCACHE=true        # Enable ccache by default for faster incremental builds

print_usage() {
    echo "Usage: $0 [options]"
    echo "  -no-build              Skip compiling MAME (reuse existing starwarswasm.*)"
    echo "  -no-server             Do not start a local web server"
    echo "  -port <N>              Serve on a specific port (default: first free 8000-8005)"
    echo "  -soft                  Use -video soft instead of bgfx"
    echo "  -bgfx                  Use -video bgfx (default)"
    echo "  -rom <path>            ROM zip to embed (default: $HOME/.mame/roms/starwars1.zip)"
    echo "  -driver <shortname>    MAME driver shortname to launch (default: starwars1)"
    echo "  -emsdk-version <ver>   Emscripten version to use (default: $EMSDK_VERSION)"
    echo "  -use-global-emsdk      Use ~/src/emsdk instead of local project clone"
    echo "  -no-ccache             Disable ccache wrapper for this build"
    echo "  -verbose               Run MAME with -verbose for browser console logs"
}

# Parse args
VERBOSE_ARG=false
while [[ $# -gt 0 ]]; do
    case "$1" in
        -no-build) DO_BUILD=false; shift;;
        -no-server) START_SERVER=false; shift;;
        -port) SERVER_PORT="${2:-}"; shift 2;;
        -soft) VIDEO_MODE="soft"; shift;;
        -bgfx) VIDEO_MODE="bgfx"; shift;;
        -rom) ROM_PATH="${2:-}"; shift 2;;
        -driver) DRIVER_SHORTNAME="${2:-}"; shift 2;;
        -emsdk-version) EMSDK_VERSION="${2:-}"; shift 2;;
        -use-global-emsdk) USE_LOCAL_EMSDK=false; shift;;
        -no-ccache) USE_CCACHE=false; shift;;
        -verbose) VERBOSE_ARG=true; shift;;
        -h|--help) print_usage; exit 0;;
        *) echo "Unknown option: $1"; print_usage; exit 1;;
    esac
done

REPO_ROOT="$(cd "$(dirname "$0")" && pwd)"
OUTDIR="$REPO_ROOT/webdist"

echo "Repo: $REPO_ROOT"

echo "Using Emscripten: version target $EMSDK_VERSION (local clone: $USE_LOCAL_EMSDK)"

# Ensure ROM exists
if [[ ! -f "$ROM_PATH" ]]; then
    echo "Error: ROM not found at $ROM_PATH"
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
        # Try global emsdk
        if [[ -f "$HOME/src/emsdk/emsdk_env.sh" ]]; then
            # shellcheck disable=SC1091
            source "$HOME/src/emsdk/emsdk_env.sh"
        fi
        if ! command -v emcc >/dev/null 2>&1; then
            echo "Error: emcc not found. Install emsdk or re-run without -use-global-emsdk." >&2
            exit 1
        fi
        # Verify version; if incompatible, fall back to local isolated emsdk
        local EMVER
        EMVER="$(emcc -v 2>/dev/null | head -n1 | sed -E 's/.* ([0-9]+\.[0-9]+\.[0-9]+).*/\1/')" || true
        if [[ -z "$EMVER" ]] || [[ "$EMVER" != 3.1.* ]] || ! version_ge "$EMVER" 3.1.35; then
            echo "Global emcc version '$EMVER' is not compatible. Switching to local emsdk $EMSDK_VERSION."
            USE_LOCAL_EMSDK=true
            ensure_emscripten
            return
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
            # Prime ccache defaults if not set
            : "${CCACHE_DIR:=$REPO_ROOT/.ccache}"
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

# Optional build
if $DO_BUILD; then
    echo "Building MAME (Star Wars subset) for WebAssembly..."
    pushd "$REPO_ROOT" >/dev/null
    emmake make \
        SUBTARGET=starwarswasm \
        SOURCES=src/mame/atari/starwars.cpp \
        WEBASSEMBLY=1 \
        TOOLS=0 \
        REGENIE=1 \
        NOWERROR=1 \
        -j"$(nproc)"
    popd >/dev/null
fi

# Locate artifacts (repo root after build; webdist for -no-build runs)
SRC_ROOT="$REPO_ROOT"
if ! $DO_BUILD; then
    if [[ -f "$OUTDIR/starwarswasm.html" ]]; then
        SRC_ROOT="$OUTDIR"
    fi
fi

# Verify artifacts
for f in "$SRC_ROOT/starwarswasm.html" "$SRC_ROOT/starwarswasm.js" "$SRC_ROOT/starwarswasm.wasm"; do
    if [[ ! -f "$f" ]]; then
        echo "Error: Expected artifact missing: $f" >&2
        exit 1
    fi
done

# Stage web distribution (ensure artifacts exist in webdist)
mkdir -p "$OUTDIR"
if [[ "$SRC_ROOT" != "$OUTDIR" ]]; then
    mv -f "$SRC_ROOT/starwarswasm."{html,js,wasm} "$OUTDIR/" 2>/dev/null || cp -f "$SRC_ROOT/starwarswasm."{html,js,wasm} "$OUTDIR/"
fi

echo "Packaging ROM into roms.data (mounted at roms/)..."
python3 "$PACKAGER" \
    "$OUTDIR/roms.data" \
    --preload "$ROM_PATH@roms/$(basename "$ROM_PATH")" \
    --export-name=Module \
    --use-preload-cache \
    --no-heap-copy \
    --lz4 \
    --js-output="$OUTDIR/roms.js"

# Generate index.html
cat > "$OUTDIR/index.html" <<EOF
<!doctype html>
<html>
  <head>
    <meta charset="utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1" />
    <title>MAME Star Wars (WASM)</title>
    <style>html,body{height:100%;margin:0;background:#000;color:#ccc;font-family:sans-serif} #c{width:100%;height:100%;display:block}</style>
  </head>
  <body>
    <canvas id="c"></canvas>
    <script>
      var Module = {
        canvas: (function(){ return document.getElementById('c'); })(),
        arguments: [
          "${DRIVER_SHORTNAME}", "-rompath", "roms",
          "-video", "${VIDEO_MODE}",
          "-joystick", "1", "-mouse", "1"
        ],
        print: function(text){ console.log(text); },
        printErr: function(text){ console.error(text); },
        locateFile: function(path){ return path; }
      };
      if ("${VIDEO_MODE}" === "bgfx") {
        Module.arguments.push("-bgfx_screen_chains", "vector");
      }
      if ("${VERBOSE_ARG}" === "true") {
        Module.arguments.push("-verbose");
      }
    </script>
    <script src="roms.js"></script>
    <script src="starwarswasm.js"></script>
  </body>
  </html>
EOF

echo "Web artifacts staged in: $OUTDIR"
ls -la "$OUTDIR"

start_server() {
    local port="$1"
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
    pushd "$OUTDIR" >/dev/null
    python3 -m http.server "$port" >/dev/null 2>&1 &
    local pid=$!
    popd >/dev/null
    echo "Server PID: $pid"
    # Expose the chosen port for probe utilities
    echo "$port" > /tmp/mame_web_port.txt
    if command -v xdg-open >/dev/null 2>&1; then
        xdg-open "http://localhost:$port" >/dev/null 2>&1 || true
    fi
}

if $START_SERVER; then
    start_server "$SERVER_PORT" || true
else
    echo "To serve locally: (cd $OUTDIR && python3 -m http.server 8000)"
    echo "Then open: http://localhost:8000"
fi


