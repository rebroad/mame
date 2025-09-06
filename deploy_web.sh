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
    echo "Usage: $0 [--help] [--force] [--build-first] [--message <commit_msg>]"
}

FORCE_DEPLOY=false
BUILD_FIRST=false
COMMIT_MESSAGE="Deploy MAME Star Wars WASM to GitHub Pages [ci skip]"

while [[ $# -gt 0 ]]; do
    case "$1" in
        --help) usage; exit 0;;
        --force) FORCE_DEPLOY=true; shift;;
        --build-first) BUILD_FIRST=true; shift;;
        --message) COMMIT_MESSAGE="${2:-}"; shift 2;;
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

if git diff --quiet && git diff --cached --quiet; then
    if $FORCE_DEPLOY; then
        warn "No changes detected; forcing empty commit..."
        git commit --allow-empty -m "$COMMIT_MESSAGE"
    else
        info "No changes to deploy. Use --force to push anyway."
        popd >/dev/null
        git worktree remove "$WORKTREE_DIR"
        rm -rf "$TMPDIR"
        exit 0
    fi
else
    info "📝 Committing changes..."
    git add .
    git commit -m "$COMMIT_MESSAGE"
fi

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

popd >/dev/null
git worktree remove "$WORKTREE_DIR" || true
rm -rf "$TMPDIR"

success "🎉 Deployment complete."

