Cloudflare Worker proxy for GitHub Pages (COOP/COEP headers)

Overview

This Worker proxies your GitHub Pages site and injects the headers required for SharedArrayBuffer and WASM workers.

Headers injected:
- Cross-Origin-Opener-Policy: same-origin
- Cross-Origin-Embedder-Policy: require-corp
- Cross-Origin-Resource-Policy: same-origin

Deploy steps (one-time):
1) Create a free Cloudflare account and add your zone (reb.ai). Change your domain's nameservers to Cloudflare.
2) Install wrangler: npm i -g wrangler
3) In this repo, create a directory webdist/cloudflare-worker/ and add the two files worker.mjs and wrangler.toml from below.
4) Authenticate: wrangler login
5) Publish: wrangler publish
6) In Cloudflare DNS, create a proxied CNAME (orange cloud) like mame.reb.ai -> your-gh-pages-domain.github.io
7) (Optional) Route the Worker to that subdomain via Cloudflare → Workers Routes.

Notes
- Ensure all resources are served from the same origin (no third-party CDNs without proper CORP/COEP headers).
- If you later move hosting to Netlify/Vercel/Pages, you can skip the Worker and keep using the same headers via platform config.


