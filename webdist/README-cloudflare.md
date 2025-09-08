Cloudflare Worker proxy for GitHub Pages (COOP/COEP headers) and precompressed WASM

Overview

This Worker proxies your GitHub Pages site and injects the headers required for SharedArrayBuffer and WASM workers. It also serves precompressed WASM (`.wasm.br`/`.wasm.gz`) under the original `.wasm` URL based on the client's `Accept-Encoding`.

Headers injected:
- Cross-Origin-Opener-Policy: same-origin
- Cross-Origin-Embedder-Policy: require-corp
- Cross-Origin-Resource-Policy: same-origin
- Vary: Accept-Encoding (on .wasm)

Local dev
1) Build and compress locally:
   - `./build_web.sh -compress`
   - Start local server (build script does this automatically). Default: `http://localhost:8000/`
2) In `webdist/cloudflare-worker/wrangler.toml`, set:
   - `[env.dev].vars.ORIGIN = "http://localhost:8000/"`
3) Run the Worker locally:
   - `cd webdist/cloudflare-worker`
   - `wrangler dev --env dev`
   - Visit the Worker URL; it will proxy to localhost and serve `.wasm.br`/`.gz` when supported.

Production deploy
1) Ensure `vars.ORIGIN` in `wrangler.toml` points to your GitHub Pages origin (default provided).
2) Publish the Worker:
   - `cd webdist/cloudflare-worker`
   - `wrangler publish`
3) In Cloudflare, route a subdomain (e.g., `mame.reb.ai`) through this Worker.
4) Make sure your Pages content includes precompressed files if you want Brotli/gzip:
   - `starwarswasm.wasm.br` and/or `starwarswasm.wasm.gz` deployed alongside `starwarswasm.wasm`.

Notes
- The Worker serves `.wasm.br` if the client sends `Accept-Encoding: br`, otherwise falls back to gzip, then plain.
- Content-Type for WASM is forced to `application/wasm` and `Content-Encoding` is set accordingly.
- You can keep a single Worker script for both local and production; switch ORIGIN via environment/vars.


