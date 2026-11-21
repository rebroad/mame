# Remaining rearrangement work

- Phase 37 completed from checkpoint `20261121-before-rearrange-phase37` at `9154ab241e57aabcfebd26f0f562469c3e359b5b`, tree `1cc1dbea62d7a99e16b94b791ec07f6c56e14f4e`. The autosquash replayed all 341 entries. Conflict replay drift in `machine.cpp` and `vvfwrite.cpp` was corrected in separate source commits; the source tree now matches the checkpoint exactly under the three record-file exclusions. The VVF aggregate reset was kept with `VVF refinements` for its fields; duration resets were applied at `VVF debug min/max frame calls`. No tests or builds were run.
- Audit and decide whether the two replay-correction commits can be folded into their semantic owners without changing the checkpoint tree. Continue checking owner groups and record-file churn in focused phases.
- Consolidate related phase records in focused commits; audit same-file churn across `REARRANGE-TODO.md`, `REARRANGE-DONE.md`, `BUGS.md`, and `BUGS-done.md`.
- Recheck fixed merge-base, clean tree, source-tree equality with the latest checkpoint excluding `BUGS.md`, `REARRANGE-DONE.md`, and `REARRANGE-TODO.md`, and absence of fixup/squash subjects after the locked base. Do not run tests or builds.
- Publish without force-updating the diverged existing `origin/master`; use a new remote branch if the configured remote accepts it.
