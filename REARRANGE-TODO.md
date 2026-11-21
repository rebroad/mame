# Remaining rearrangement work

- Phase 36 starts from clean `master` `6b775eaa3f8ef0aa8f464e9eee605584a6a1d30d`, tree `aacc8de54aca01ca3c28efe66d03cae3fce14c64`; checkpoint `20261121-before-rearrange-phase36` points to that exact commit. Rechecked refs: `upstream/master` `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; `upstream/main` unavailable; locked merge-base `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- Autosquash the audited fixups into their intended downstream owners using the locked merge-base, then inspect any conflict or empty-commit decisions consciously.
- Consolidate related phase records in focused commits; audit same-file churn across `REARRANGE-TODO.md`, `REARRANGE-DONE.md`, `BUGS.md`, and `BUGS-done.md`.
- Verify fixed merge-base, clean tree, exact source-tree equality with the Phase 36 checkpoint excluding `BUGS.md`, `REARRANGE-DONE.md`, and `REARRANGE-TODO.md`, and no remaining `fixup!`, `squash!`, or generic `fixup` subjects after the locked base. Do not run tests or builds.
- Determine how to publish without force-updating the diverged existing `origin/master`.
