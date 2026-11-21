# Remaining rearrangement work

- Phase 36 starts after the Phase 35 records are committed. Recheck upstream refs and lock the merge-base again before creating `20261121-before-rearrange-phase36` at the exact clean starting commit.
- Autosquash the audited fixups into their intended downstream owners using the locked merge-base, then inspect any conflict or empty-commit decisions consciously.
- Consolidate related phase records in focused commits; audit same-file churn across `REARRANGE-TODO.md`, `REARRANGE-DONE.md`, `BUGS.md`, and `BUGS-done.md`.
- Verify fixed merge-base, clean tree, exact source-tree equality with the Phase 36 checkpoint excluding `BUGS.md`, `REARRANGE-DONE.md`, and `REARRANGE-TODO.md`, and no remaining `fixup!`, `squash!`, or generic `fixup` subjects after the locked base. Do not run tests or builds.
- Determine how to publish without force-updating the diverged existing `origin/master`.
