# Remaining rearrangement work

- Phase 36's first autosquash attempt was aborted after the VVF aggregate reset fixup conflicted before `record()` existed. The fixup is now retargeted to `5578058c7e5` (`VVF!`), where `record()` is introduced. Phase 37 will retry from a newly recorded checkpoint after rechecking refs and the locked base.
- Autosquash the audited fixups into their intended downstream owners using the locked merge-base, then inspect any conflict or empty-commit decisions consciously.
- Consolidate related phase records in focused commits; audit same-file churn across `REARRANGE-TODO.md`, `REARRANGE-DONE.md`, `BUGS.md`, and `BUGS-done.md`.
- Verify fixed merge-base, clean tree, exact source-tree equality with the Phase 37 checkpoint excluding `BUGS.md`, `REARRANGE-DONE.md`, and `REARRANGE-TODO.md`, and no remaining `fixup!`, `squash!`, or generic `fixup` subjects after the locked base. Do not run tests or builds.
- Determine how to publish without force-updating the diverged existing `origin/master`.
