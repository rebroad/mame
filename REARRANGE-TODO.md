# Remaining rearrangement work

- Phase 35 starts from `master` `b7e108f421178af43c9a1dda5ab7541c0bcc079f`, tree `002fb088b506c531f9687a4831fc6f2036e8df8e`; preserve this exact checkpoint as `20261121-before-rearrange-phase35`.
- Locked upstream is `upstream/master` at `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; `upstream/main` is unavailable. Locked merge-base is `2cf2ef01a396ccc162ce0344717f6a110fe971b3`. Keep this base unchanged.
- Split `8c3d1a4` by semantic owner. Confirmed likely owners: `de7b4f5` timed-trigger timer; `4eec4ea` UTF-8 conversion; `213c0e4` vector-frame-skip lifecycle; `802ea6a` FFmpeg dimensions; `9bed7cc` FFmpeg bilinear behavior; `643d41b`/`e874cb9` VVF frame/color statistics; `7939617` VVF scaling; `19c9842` VVF coordinate format; `bfb9d94` browser performance warnings. Audit each patch hunk before fixing targets.
- Separate the `wasm_debug` option and diagnostic gates from the TPS ring-buffer repair. Diagnostic origins are `90f4fb5` startup diagnostics and `4975311` FPS/FUPS reporting; the 32-sample TPS window repair belongs to `ca48a5416`, which introduced the 32-frame calculation over a 30-slot buffer.
- Retarget `6ae70b0` to the VVF statistics owner(s), and `b7e108f` to the startup-diagnostic owner after splitting; validate that each fixup contains only its owner's behavior.
- Drop or otherwise neutralize `189ab8c`'s obsolete `BUGS.md` deletion while retaining the current bug notes; preserve the existing `BUGS-done.md` audit.
- Review downstream record-file churn and consolidate `REARRANGE-TODO.md` and `REARRANGE-DONE.md` in separate, focused commits.
- Verify with Git history/range-diff, clean-tree checks, unchanged locked merge-base, and exact checkpoint tree equality excluding `BUGS.md`, `REARRANGE-DONE.md`, and `REARRANGE-TODO.md`. No tests or builds.
- Do not rewrite or force-update the existing `origin/master` without explicit authorization; determine a publication path that preserves its current tip.
