#!/bin/bash

set -euo pipefail

# Deploy MAME WASM web build (webdist/) to GitHub Pages

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

info()    { echo -e "${BLUE}[INFO]${NC} $*"; }
success() { echo -e "${GREEN}[SUCCESS]${NC} $*"; }
warn()    { echo -e "${YELLOW}[WARNING]${NC} $*"; }
error()   { echo -e "${RED}[ERROR]${NC} $*"; }

usage() {
    echo "Usage: $0 [--help] [--force] [--build-first] [--message <commit_msg>] [--deploy-worker]"
}

FORCE_DEPLOY=false
BUILD_FIRST=false
COMMIT_MESSAGE="Deploy MAME Star Wars WASM to GitHub Pages [ci skip]"
DEPLOY_WORKER=false

while [[ $# -gt 0 ]]; do
    case "$1" in
        --help) usage; exit 0;;
        --force) FORCE_DEPLOY=true; shift;;
        --build-first) BUILD_FIRST=true; shift;;
        --message) COMMIT_MESSAGE="${2:-}"; shift 2;;
        --deploy-worker) DEPLOY_WORKER=true; shift;;
        *) error "Unknown option: $1"; usage; exit 1;;
    esac
done

info "🚀 MAME WASM Web Deployment"

# Ensure repo
if ! git rev-parse --git-dir >/dev/null 2>&1; then
    error "Not in a git repository. Run from project root."
    exit 1
fi

REPO_ROOT="$(pwd)"
WEBDIR="$REPO_ROOT/webdist"

# Build if requested or missing
if [[ ! -d "$WEBDIR" ]] || [[ ! -f "$WEBDIR/index.html" ]]; then
    if $BUILD_FIRST; then
        info "Building web artifacts..."
        if [[ -x "$REPO_ROOT/build_web.sh" ]]; then
            "$REPO_ROOT/build_web.sh" -no-server
        else
            error "build_web.sh not found or not executable."
            exit 1
        fi
    else
        error "webdist not found or incomplete. Run ./build_web.sh first or pass --build-first."
        exit 1
    fi
fi

# Basic validation
REQUIRED_FILES=(index.html starwarswasm.js starwarswasm.wasm roms.js roms.data)
for f in "${REQUIRED_FILES[@]}"; do
    if [[ ! -f "$WEBDIR/$f" ]]; then
        error "Missing required file in webdist: $f"
        exit 1
    fi
done
success "✅ Web artifacts present in webdist/"

TMPDIR="gh-pages-tmp"
WORKTREE_DIR="gh-pages-deploy"

info "🧹 Preparing temporary directory..."
rm -rf "$TMPDIR" "$WORKTREE_DIR"
mkdir -p "$TMPDIR"

info "📦 Copying webdist → $TMPDIR ..."
cp -a "$WEBDIR"/* "$TMPDIR"/

# Add README
cat > "$TMPDIR/README.md" << 'EOF'
# MAME Star Wars (WebAssembly)

Playable web build of MAME running Atari Star Wars, compiled with Emscripten.

Open `index.html` to start. Requires a modern browser with WebAssembly and WebGL.
EOF

# Prepare worktree for gh-pages
if git show-ref --verify --quiet refs/remotes/origin/gh-pages; then
    info "📋 gh-pages branch exists; preparing worktree..."
    git worktree remove "$WORKTREE_DIR" 2>/dev/null || true
    git worktree add -B gh-pages "$WORKTREE_DIR" origin/gh-pages 2>/dev/null || git worktree add -B gh-pages "$WORKTREE_DIR"
else
    info "📋 Creating gh-pages branch..."
    git worktree remove "$WORKTREE_DIR" 2>/dev/null || true
    git worktree add -B gh-pages "$WORKTREE_DIR"
fi

info "🧹 Cleaning worktree..."
rm -rf "$WORKTREE_DIR"/*

info "📦 Copying deployment files..."
cp -a "$TMPDIR"/* "$WORKTREE_DIR"/

pushd "$WORKTREE_DIR" >/dev/null

DID_PAGES=false
if git diff --quiet && git diff --cached --quiet; then
    if $FORCE_DEPLOY; then
        warn "No changes detected; forcing empty commit..."
        git commit --allow-empty -m "$COMMIT_MESSAGE"
        DID_PAGES=true
    else
        info "No changes to deploy to GitHub Pages. Proceeding to Cloudflare Worker (if requested)."
    fi
else
    info "📝 Committing changes..."
    git add .
    git commit -m "$COMMIT_MESSAGE"
    DID_PAGES=true
fi

if $DID_PAGES; then
  info "🚀 Pushing to GitHub Pages..."
  if git push origin gh-pages; then
      success "✅ Deployed to GitHub Pages."
      REPO_URL="$(git config --get remote.origin.url)"
      if [[ "$REPO_URL" == *github.com* ]]; then
          if [[ "$REPO_URL" == *"@"* ]]; then
              REPO_PATH=$(echo "$REPO_URL" | sed 's/.*github.com[:\/]\([^.]*\)\.git/\1/')
          else
              REPO_PATH=$(echo "$REPO_URL" | sed 's/.*github.com\/\([^.]*\)\.git/\1/')
          fi
          OWNER="${REPO_PATH%%/*}"
          REPO="${REPO_PATH##*/}"
          PAGES_URL="https://${OWNER}.github.io/${REPO}/"
          success "🌐 URL: ${PAGES_URL}"
          warn "⚠️  It may take a minute to update."
      fi
  else
      error "❌ Push failed."
      popd >/dev/null
      git worktree remove "$WORKTREE_DIR"
      rm -rf "$TMPDIR"
      exit 1
  fi
fi

popd >/dev/null
git worktree remove "$WORKTREE_DIR" || true
rm -rf "$TMPDIR"

success "🎉 Deployment complete."

# Optionally deploy/update Cloudflare Worker (to front GitHub Pages with COOP/COEP)
if $DEPLOY_WORKER; then
    info "☁️  Deploying Cloudflare Worker (proxy) ..."
    if [[ -d "$WEBDIR/cloudflare-worker" ]]; then
        pushd "$WEBDIR/cloudflare-worker" >/dev/null
        if ! command -v npx >/dev/null 2>&1; then
            warn "npx not found; skipping Worker deploy. Install Node.js >= 20 and npm."
        else
            if [[ ! -d node_modules ]]; then
                info "Installing worker dev dependencies (wrangler) ..."
                npm i -D wrangler@latest >/dev/null 2>&1 || true
            fi
            npx wrangler deploy || warn "wrangler deploy failed; check Cloudflare credentials and zone/route config."
            # Try to print the configured route(s) and origin
            ORIGIN_LINE=$(grep -E '^ORIGIN\s*=\s*"' wrangler.toml 2>/dev/null | head -n1 || true)
            ROUTE_LINE=$(grep -E 'pattern\s*=\s*"' wrangler.toml 2>/dev/null | head -n1 || true)
            if [[ -n "$ORIGIN_LINE" ]]; then
                ORIGIN_VAL=$(echo "$ORIGIN_LINE" | sed -E 's/.*ORIGIN\s*=\s*"([^"]+)".*/\1/')
                info "Worker ORIGIN upstream: $ORIGIN_VAL"
            fi
            if [[ -n "$ROUTE_LINE" ]]; then
                ROUTE_VAL=$(echo "$ROUTE_LINE" | sed -E 's/.*pattern\s*=\s*"([^"]+)".*/\1/')
                success "Access via Cloudflare route: https://${ROUTE_VAL%/*}/"
            else
                warn "No route in wrangler.toml. You can use your workers.dev subdomain instead."
            fi
        fi
        popd >/dev/null
    else
        warn "Cloudflare worker folder not found at $WEBDIR/cloudflare-worker; skipping."
    fi
fi

