# Remaining rearrangement work

- Phase 38 starts from clean `master` `a5c98ec2a3b6f6fa69bd96981b25f5f53a127ea9`, tree `b39d5b3d48ebd7375ce4fbe5b0aaf542e2a6387b`; checkpoint `20261121-before-rearrange-phase38` will point to this exact commit. Rechecked refs: `upstream/master` `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; `upstream/main` unavailable; locked merge-base `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- Phase 37 completed from checkpoint `20261121-before-rearrange-phase37` at `9154ab241e57aabcfebd26f0f562469c3e359b5b`, tree `1cc1dbea62d7a99e16b94b791ec07f6c56e14f4e`. The autosquash replayed all 341 entries. Conflict replay drift in `machine.cpp` and `vvfwrite.cpp` was corrected in separate source commits; the source tree matches the checkpoint under the three record-file exclusions. No tests or builds were run.
- Review whether the two replay-correction commits can be folded into their semantic owners without changing the checkpoint tree. Continue checking owner groups and record-file churn in focused phases.
- Consolidate related phase records in focused commits; audit same-file churn across `REARRANGE-TODO.md`, `REARRANGE-DONE.md`, `BUGS.md`, and `BUGS-done.md`.
- Recheck fixed merge-base, clean tree, source-tree equality with the Phase 38 checkpoint excluding `BUGS.md`, `REARRANGE-DONE.md`, and `REARRANGE-TODO.md`, and absence of fixup/squash subjects after the locked base. Do not run tests or builds.
- Publish without force-updating the diverged existing `origin/master`; use a new remote branch if the configured remote accepts it.
