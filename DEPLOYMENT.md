## MAME Web (WASM) Deployment Guide

This document explains how the GitHub Pages site, Cloudflare Worker, and local scripts work together, what gets uploaded where, and exactly which commands to run for different kinds of changes.

### Architecture Overview

- **Build artifacts**: The playable site lives entirely in `webdist/` and includes:
  - `index.html`, `starwarswasm.wasm`, `starwarswasm.js`, `starwarswasm.worker.js`
  - `roms.data` and `roms.js` (ROMs pack and loader)
  - Optional runtime helpers like `autoboot.lua`

- **Hosting (origin)**: These static files are published to the `gh-pages` branch and served at:
  - `https://rebroad.github.io/mame/`

- **Cloudflare Worker (edge proxy)**: A small Worker proxies requests from:
  - `https://mame.reb.ai/` → `https://rebroad.github.io/mame/`
  - The Worker injects cross-origin isolation headers needed for modern WASM + threads:
    - `cross-origin-opener-policy: same-origin`
    - `cross-origin-embedder-policy: require-corp`
    - `cross-origin-resource-policy: same-origin`
  - No game assets are hosted on Cloudflare; the Worker only proxies and sets headers.

### What gets uploaded where

- **GitHub Pages (gh-pages branch)**
  - All files from `webdist/` (HTML, JS, WASM, worker, roms.*) are committed and pushed.
  - URL: `https://rebroad.github.io/mame/`

- **Cloudflare Worker**
  - Only the Worker script/config is uploaded to Cloudflare.
  - It reads the upstream origin from `ORIGIN` (set to `https://rebroad.github.io/mame/`).
  - URL: `https://mame.reb.ai/` (custom domain route), plus a workers.dev URL for testing.

### Scripts

- `./build_web.sh`
  - Builds the WASM binary with Emscripten (unless `-no-build`), packs ROMs, and generates `webdist/index.html`.
  - Supports quick iteration by skipping the heavy rebuild when you only change web/config assets.
  - Practical flags:
    - `-no-build`: do not recompile C++/WASM; just (re)package `roms.data` and regenerate `index.html`.
    - `-no-server`: skip starting the local Python server.
  - Local test: After it completes, you can serve locally: `(cd webdist && python3 -m http.server 8000)`.

- `./deploy_web.sh`
  - Copies `webdist/` to a temp dir, commits to `gh-pages`, and pushes to GitHub.
  - Optional: `--deploy-worker` also deploys the Cloudflare Worker.
  - Optional: `--force` forces a gh-pages commit even if there are no file diffs.

### When to run a full build vs `-no-build`

- Run a full build (no `-no-build`) when:
  - You changed C++ source, Emscripten flags, or anything affecting `starwarswasm.wasm`/`starwarswasm.js`.
  - You upgraded Emscripten SDK or modified low-level build settings.

- Use `-no-build` when:
  - You changed `index.html` generation, `autoboot.lua`, ROM packaging, or config/INI/CFG files.
  - You only need to regenerate `roms.data` and `index.html` without recompiling the emulator.

### Common tasks and commands

1) Update game runtime settings (e.g., brightness)

- Adjust the relevant local config, e.g. per-game cfg at `~/.mame/cfg/starwars1.cfg` (or your INI/CFG of choice).
- Repackage and regenerate the site without recompiling:
```bash
./build_web.sh -no-build -no-server
```
- Deploy the updated `webdist/` to GitHub Pages:
```bash
./deploy_web.sh
```
- You do not need to redeploy the Cloudflare Worker for content/config changes.

2) Change UI or web behavior only (HTML/JS tweaks)

- Edit the relevant parts (e.g., values used in `index.html` generation). Then:
```bash
./build_web.sh -no-build -no-server
./deploy_web.sh
```

3) Change emulator code or Emscripten settings

- Perform a full rebuild to regenerate WASM and JS:
```bash
./build_web.sh -no-server
```
- Then deploy to GitHub Pages:
```bash
./deploy_web.sh
```

4) Update the Cloudflare Worker (proxy or headers)

- Only required if you change the Worker logic/config or the upstream origin.
- Deploy the Worker alongside Pages:
```bash
./deploy_web.sh --deploy-worker
```

### Runtime notes

- URL parameters are supported for quick testing:
  - `?video=soft` or `?video=bgfx` to force the renderer
  - `?latency=NN` to override audio latency
- The page logs environment details (e.g., `crossOriginIsolated`, `SharedArrayBuffer` availability) in the console.

### Verifying and diagnosing

- Local server:
```bash
(cd webdist && python3 -m http.server 8000)
open http://localhost:8000/
```

- Probe production console remotely (captures to `webdist/console_capture.txt`):
```bash
node webdist/probe_console.js https://mame.reb.ai
tail -n 100 webdist/console_capture.txt
```

- Check cross-origin isolation headers on Cloudflare route:
```bash
curl -sI https://mame.reb.ai/index.html | sed -n '1,40p'
```

### What triggers which deployment

- Changes in `webdist/` contents → run `./deploy_web.sh` to update GitHub Pages.
- Changes in Worker code/config (`webdist/cloudflare-worker/*` or ORIGIN) → run `./deploy_web.sh --deploy-worker`.
- Most gameplay/config tweaks (e.g., brightness in cfg/ini) do not require rebuilding WASM, only `-no-build` + deploy.

### URLs

- GitHub Pages origin: `https://rebroad.github.io/mame/`
- Cloudflare proxied domain: `https://mame.reb.ai/`

If the Cloudflare route returns a blank page, check console logs via the probe, and verify `COOP/COEP/CORP` headers are present on `index.html`.


