# Remaining rearrangement work

- Phase 35 starts from `master` `b7e108f421178af43c9a1dda5ab7541c0bcc079f`, tree `002fb088b506c531f9687a4831fc6f2036e8df8e`; preserve this exact checkpoint as `20261121-before-rearrange-phase35`.
- Locked upstream is `upstream/master` at `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; `upstream/main` is unavailable. Locked merge-base is `2cf2ef01a396ccc162ce0344717f6a110fe971b3`. Keep this base unchanged.
- Audit and split downstream mixed commit `8c3d1a4faa59a10a9c60a5b65f0866444ab19357` by semantic owner across emulator options/diagnostics, scheduler timer ownership, vector frame lifecycle, FFmpeg dimensions, Unicode conversion, VVF recording/statistics/coordinates, and browser performance warnings.
- Audit `6ae70b06398bc5472e681c8e550aedaca869b5f2` and `b7e108f421178af43c9a1dda5ab7541c0bcc079f` separately and retarget their fixes to the correct downstream owners; do not autosquash into the mixed commit merely because they currently name it.
- Decide the disposition of `189ab8c94ea55826d1f6cea6ed8e39137cae2438` (deletion of `BUGS.md`) while keeping the required bug record available during this active goal.
- Review downstream record-file churn and consolidate `REARRANGE-TODO.md` and `REARRANGE-DONE.md` in separate, focused commits.
- Verify with Git history/range-diff, clean-tree checks, unchanged locked merge-base, and exact checkpoint tree equality excluding `BUGS.md`, `REARRANGE-DONE.md`, and `REARRANGE-TODO.md`. No tests or builds.
- Do not rewrite or force-update the existing `origin/master` without explicit authorization; determine a publication path that preserves its current tip.
