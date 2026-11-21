# Remaining rearrangement work

- Phase 37 starts from clean `master` `9154ab241e57aabcfebd26f0f562469c3e359b5b`, tree `1cc1dbea62d7a99e16b94b791ec07f6c56e14f4e`; checkpoint `20261121-before-rearrange-phase37` will point to this exact commit. Rechecked refs: `upstream/master` `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; `upstream/main` unavailable; locked merge-base `2cf2ef01a396ccc162ce0344717f6a110fe971b3`. The first autosquash attempt was aborted after the VVF aggregate reset fixup conflicted before `record()` existed; that fixup now targets `5578058c7e5` (`VVF!`), where `record()` is introduced.
- Autosquash the audited fixups into their intended downstream owners using the locked merge-base, then inspect any conflict or empty-commit decisions consciously.
- Consolidate related phase records in focused commits; audit same-file churn across `REARRANGE-TODO.md`, `REARRANGE-DONE.md`, `BUGS.md`, and `BUGS-done.md`.
- Verify fixed merge-base, clean tree, exact source-tree equality with the Phase 37 checkpoint excluding `BUGS.md`, `REARRANGE-DONE.md`, and `REARRANGE-TODO.md`, and no remaining `fixup!`, `squash!`, or generic `fixup` subjects after the locked base. Do not run tests or builds.
- Determine how to publish without force-updating the diverged existing `origin/master`.
