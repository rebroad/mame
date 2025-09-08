#!/bin/bash

set -euo pipefail

# build_web.sh - Build upstream MAME for WebAssembly (Star Wars subset),
#                package a ROM, generate index.html, and optionally serve.

# Defaults
DO_BUILD=true
START_SERVER=true
SERVER_PORT=""
VIDEO_MODE="auto"   # "auto", "bgfx" or "soft"
ENABLE_WORKERS=false # Enable WASM workers + AudioWorklet (requires full rebuild)
DRIVER_SHORTNAME="starwars1"
ROM_PATH="$HOME/.mame/roms/starwars1.zip"
AUDIO_LATENCY="5"

# Emscripten toolchain controls
EMSDK_VERSION="3.1.35"
USE_LOCAL_EMSDK=false   # Prefer global emsdk at ~/src/emsdk; fallback to local clone
USE_CCACHE=true        # Enable ccache by default for faster incremental builds

print_usage() {
    echo "Usage: $0 [options]"
    echo "  -no-build              Skip compiling MAME (reuse existing starwarswasm.*)"
    echo "  -no-server             Do not start a local web server"
    echo "  -port <N>              Serve on a specific port (default: first free 8000-8005)"
    echo "  -soft                  Force -video soft (override auto)"
    echo "  -bgfx                  Force -video bgfx (override auto)"
    echo "  -rom <path>            ROM zip to embed (default: $HOME/.mame/roms/starwars1.zip)"
    echo "  -driver <shortname>    MAME driver shortname to launch (default: starwars1)"
    echo "  -emsdk-version <ver>   Emscripten version to use (default: $EMSDK_VERSION)"
    echo "  -use-global-emsdk      Use ~/src/emsdk instead of local project clone"
    echo "  -no-ccache             Disable ccache wrapper for this build"
    echo "  -verbose               Run MAME with -verbose for browser console logs"
    echo "  -debug                 Enable verbose and auto-capture browser console"
    echo "  -latency <N>           Set -audio_latency (default: $AUDIO_LATENCY)"
    echo "  -autostart             Auto-insert coin and start game via autoboot.lua"
    echo "  -workers               Build with WASM workers + AudioWorklet (-pthread)"
}

# Parse args
VERBOSE_ARG=false
DEBUG_MODE=false
AUTOSTART=false
while [[ $# -gt 0 ]]; do
    case "$1" in
        -no-build) DO_BUILD=false; shift;;
        -no-server) START_SERVER=false; shift;;
        -port) SERVER_PORT="${2:-}"; shift 2;;
        -soft) VIDEO_MODE="soft"; shift;;
        -bgfx) VIDEO_MODE="bgfx"; shift;;
        -rom) ROM_PATH="${2:-}"; shift 2;;
        -driver) DRIVER_SHORTNAME="${2:-}"; shift 2;;
        -latency) AUDIO_LATENCY="${2:-}"; shift 2;;
        -emsdk-version) EMSDK_VERSION="${2:-}"; shift 2;;
        -use-global-emsdk) USE_LOCAL_EMSDK=false; shift;;
        -no-ccache) USE_CCACHE=false; shift;;
        -verbose) VERBOSE_ARG=true; shift;;
        -debug) DEBUG_MODE=true; VERBOSE_ARG=true; shift;;
        -autostart) AUTOSTART=true; shift;;
        -workers) ENABLE_WORKERS=true; shift;;
        -h|--help) print_usage; exit 0;;
        *) echo "Unknown option: $1"; print_usage; exit 1;;
    esac
done

REPO_ROOT="$(cd "$(dirname "$0")" && pwd)"
OUTDIR="$REPO_ROOT/webdist"
MODE_STAMP="$REPO_ROOT/.wasm_build_mode"

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
        # Prefer global emsdk at ~/src/emsdk; install/activate requested version
        local GLOBAL_SDK="$HOME/src/emsdk"
        if [[ ! -d "$GLOBAL_SDK" ]]; then
            echo "Global emsdk not found at $GLOBAL_SDK; falling back to local clone."
            USE_LOCAL_EMSDK=true
            ensure_emscripten
            return
        fi
        pushd "$GLOBAL_SDK" >/dev/null
        ./emsdk install "$EMSDK_VERSION"
        ./emsdk activate "$EMSDK_VERSION"
        # shellcheck disable=SC1091
        source ./emsdk_env.sh
        popd >/dev/null
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

# Track current vs previous build mode to avoid mixing pthread and non-pthread objects
CUR_MODE="pthread=$($ENABLE_WORKERS && echo 1 || echo 0)"
PREV_MODE=""
if [[ -f "$MODE_STAMP" ]]; then PREV_MODE="$(cat "$MODE_STAMP" 2>/dev/null || true)"; fi

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
    BUILD_LDFLAGS='-s FORCE_FILESYSTEM=1 -s ALLOW_MEMORY_GROWTH=1 -s INITIAL_MEMORY=536870912 -s NO_DISABLE_EXCEPTION_CATCHING=1'
    if $ENABLE_WORKERS; then
        # Full workers path: run main in a pthread and allow OffscreenCanvas; AudioWorklet needs workers
        BUILD_LDFLAGS+=' -s WASM_WORKERS=1 -s AUDIO_WORKLET=1 -s PROXY_TO_PTHREAD=1 -s OFFSCREENCANVAS_SUPPORT=1 -pthread'
        export EMCC_CFLAGS="${EMCC_CFLAGS:-} -pthread"
        export EMCC_CXXFLAGS="${EMCC_CXXFLAGS:-} -pthread"
    fi
    if $DEBUG_MODE; then
        BUILD_LDFLAGS+=" -s ASSERTIONS=2 -s DEMANGLE_SUPPORT=1"
    fi
    echo "Using LDFLAGS: ${BUILD_LDFLAGS}"
    # Pass web LDFLAGS via LDOPTS so native host tools (e.g., genie) don't inherit them
    emmake make \
        SUBTARGET=starwarswasm \
        SOURCES=src/mame/atari/starwars.cpp \
        WEBASSEMBLY=1 \
        TOOLS=0 \
        REGENIE=1 \
        NOWERROR=1 \
        LDOPTS="$BUILD_LDFLAGS" \
        -j"$(nproc)"
    popd >/dev/null
    echo "$CUR_MODE" > "$MODE_STAMP"
fi

# Locate artifacts (repo root after build; webdist for -no-build runs)
SRC_ROOT="$REPO_ROOT"
if ! $DO_BUILD; then
    if [[ -f "$OUTDIR/starwarswasm.html" ]]; then
        SRC_ROOT="$OUTDIR"
    fi
fi

# Verify artifacts (worker js is optional)
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
    # Also stage worker bootstrap if present (pthreads/workers builds)
    if [[ -f "$SRC_ROOT/starwarswasm.worker.js" ]]; then
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

PACK_ARGS=("$OUTDIR/roms.data" --preload "$ROM_PATH@roms/$(basename "$ROM_PATH")" --export-name=Module --use-preload-cache --no-heap-copy --js-output="$OUTDIR/roms.js")
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

# (autoboot.lua created and preloaded earlier if AUTOSTART is true)

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
    <title>MAME Star Wars (WASM)</title>
    <link rel="icon" href="data:,"/>
    <style>html,body{height:100%;margin:0;background:#000;color:#ccc;font-family:sans-serif} #canvas{width:100%;height:100%;display:block} #unmute{position:fixed;inset:0;display:flex;align-items:center;justify-content:center;background:rgba(0,0,0,.7);color:#fff;cursor:pointer;z-index:9999}</style>
  </head>
  <body>
    <canvas id="canvas"></canvas>
    <div id="unmute">Click to enable audio</div>
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
          "-throttle", "-speed", "1",
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
      // Audio unlock helper for browsers requiring user gesture
      (function(){
        var overlay = document.getElementById('unmute');
        function ctxState(){ try{ var c=Module&&Module.SDL2&&Module.SDL2.audioContext; return c?c.state:'unknown'; }catch(e){ return 'unknown'; } }
        function attemptResume(){
          try {
            var ctx = Module && Module.SDL2 && Module.SDL2.audioContext;
            if (ctx && typeof ctx.resume === 'function') {
              ctx.resume().then(function(){ console.log('[Audio] resumed, state=', ctx.state); if (ctx.state === 'running') overlay.style.display='none'; }).catch(function(err){ console.warn('[Audio] resume failed', err); });
            } else {
              // Retry shortly in case SDL2 not initialized yet
              setTimeout(attemptResume, 300);
            }
          } catch(e) { console.warn('[Audio] resume exception', e); }
        }
        function tick(){
          var s = ctxState();
          if (s === 'running') { overlay.style.display='none'; return; }
          overlay.style.display='flex';
        }
        overlay.addEventListener('click', attemptResume);
        ['click','pointerdown','touchstart','keydown','mousedown'].forEach(function(ev){ window.addEventListener(ev, attemptResume, { once:false }); });
        setInterval(tick, 800);
      })();
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
      if (chosenVideo === "bgfx") {
        Module.arguments.push("-bgfx_screen_chains", "vector");
      }
      if ("${VERBOSE_ARG}" === "true") {
        Module.arguments.push("-verbose");
      }
      // If cfg was packed, point MAME at it so per-game input (e.g., Y invert) loads
      if (${USE_CFG} === true) {
        Module.arguments.push("-cfg_directory", "cfg");
      }
      // Keep throttle enabled for smoother audio even in debug.
      if ("${AUTOSTART}" === "true") {
        Module.arguments.push("-autoboot_script", "autoboot.lua", "-autoboot_delay", "1");
      }
${INI_ARGS_JS}
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
    # Expose the chosen port for probe utilities
    echo "$port" > /tmp/mame_web_port.txt
    if command -v xdg-open >/dev/null 2>&1; then
        xdg-open "http://localhost:$port" >/dev/null 2>&1 || true
    fi
}

# Optional headless console capture (requires Node + puppeteer)
run_probe() {
    if ! $DEBUG_MODE; then return 0; fi
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
    node probe_console.js || true
    if [[ -f "$OUTDIR/console_capture.txt" ]]; then
        echo "Console log captured to $OUTDIR/console_capture.txt"
        echo "--- Last 20 lines ---"
        tail -n 20 "$OUTDIR/console_capture.txt" || true
        echo "---------------------"
    fi
    popd >/dev/null
}

if $START_SERVER; then
    # Reuse existing server if already running and serving our page
    ensure_server() {
        local port="$1"
        local used_port=""
        # Prefer previously used COOP/COEP port if available and healthy
        if [[ -z "$port" && -f /tmp/mame_web_port.txt ]]; then
            local prev
            prev="$(cat /tmp/mame_web_port.txt 2>/dev/null | tr -d '\n')"
            if [[ -n "$prev" ]]; then
                if command -v curl >/dev/null 2>&1 && \
                   curl -s "http://localhost:$prev/" | grep -q "<title>MAME Star Wars (WASM)</title>" && \
                   curl -sI "http://localhost:$prev/index.html" | grep -qi "Cross-Origin-Embedder-Policy"; then
                    used_port="$prev"
                fi
            fi
        fi
        # If a specific port was requested, try that first
        if [[ -z "$used_port" && -n "$port" ]]; then
            if command -v curl >/dev/null 2>&1 && \
               curl -s "http://localhost:$port/" | grep -q "<title>MAME Star Wars (WASM)</title>" && \
               curl -sI "http://localhost:$port/index.html" | grep -qi "Cross-Origin-Embedder-Policy"; then
                used_port="$port"
            fi
        fi
        # Otherwise scan common ports
        if [[ -z "$used_port" ]]; then
            # Prefer a server that already has COOP/COEP
            for p in 8000 8001 8002 8003 8004 8005; do
                if command -v curl >/dev/null 2>&1 && \
                   curl -s "http://localhost:$p/" | grep -q "<title>MAME Star Wars (WASM)</title>" && \
                   curl -sI "http://localhost:$p/index.html" | grep -qi "Cross-Origin-Embedder-Policy"; then
                    used_port="$p"; break
                fi
            done
        fi
        if [[ -n "$used_port" ]]; then
            echo "Reusing existing server on http://localhost:$used_port"
            echo "$used_port" > /tmp/mame_web_port.txt
            if command -v xdg-open >/dev/null 2>&1; then
                xdg-open "http://localhost:$used_port/index.html" >/dev/null 2>&1 || true
            fi
        else
            # No suitable server found; start our COOP/COEP server
            start_server "$port" || true
        fi
    }
    ensure_server "$SERVER_PORT"
else
    echo "To serve locally: (cd $OUTDIR && python3 -m http.server 8000)"
    echo "Then open: http://localhost:8000"
fi

# If debug mode, attempt headless console capture
run_probe || true


