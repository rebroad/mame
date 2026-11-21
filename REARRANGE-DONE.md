# Rearrangement audit

## Start state

- Operation began from clean `master` at `3c2af20ef8f82df155ae23187c9fff25472289c3`, tree `6d25c74cff6df5eab92bfb47b26e983fb514fd01`.
- Created checkpoint `20261121-before-rearrange` at that exact commit and tree; the existing branch was verified at the start commit and not overwritten.
- Checked available upstream refs: `upstream/master` exists at `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; `upstream/main` is unavailable. `master` tracks `origin/master`.
- Locked merge-base: `2cf2ef01a396ccc162ce0344717f6a110fe971b3` (`git merge-base master upstream/master`). Downstream range: 341 commits.
- Added `BUGS.md` and recorded four issues found during code review: mismatched configured FFmpeg output/frame dimensions; persistent WASM diagnostics; changed malformed UTF-8 handling; and VVF statistics baselines that leak across recording instances.
- Reviewed all 341 original source commits by semantic groups. Notable mixed commits include `d5df6e745ce8` (Unicode, runtime diagnostics, web build/deploy, SDL setup), `e005da47884b` (build tooling and video reporting), `1a93ca6f6f90` (FFmpeg implementation and build integration), and `aba5a010829c` (smart build and recording work). The VVF writer/player has the highest same-file churn (66 commits to `vvfwrite.cpp`, 43 to `vvfwrite.h`) and needs careful subfeature consolidation.
- Identified `d3a657abf781` as a follow-up to the timestamp feature in `b724c835e30e`; it also removes VVF-local timestamps, which should be validated as part of that adaptation. Commit splitting and exact fixup ownership remain pending.
- Tests and builds are prohibited by the active goal.


## History phase 1: verified one-owner fixes

- Before this phase, clean `master` was `e03e6673a26f8728aa82395edf49108779df3a6f`, tree `29ab8141034c1738af034cc612352f8e8f33d797`; checkpoint branch `20261121-before-rearrange-step2` points to that exact commit and tree.
- Rechecked upstream refs: `upstream/master` remained `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`, `upstream/main` remained unavailable, and the locked merge-base remained `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- Autosquashed the 13 verified one-owner fixes listed in `REARRANGE-TODO.md`, plus `3c2af20` into its `dfdbc59` owner. No conflicts occurred.
- Verified the rewritten branch retained merge-base `2cf2ef01a396ccc162ce0344717f6a110fe971b3`, had a clean worktree, and matched checkpoint source paths exactly (`git diff --quiet 20261121-before-rearrange-step2 master -- . ':(exclude)BUGS.md' ':(exclude)REARRANGE-DONE.md' ':(exclude)REARRANGE-TODO.md'`, exit 0). Rewritten branch tree: `29ab8141034c1738af034cc612352f8e8f33d797`.


## History phase 2: split mixed runtime/configuration change

- Starting checkpoint `20261121-before-rearrange-phase2` is `b4318cdb432c5016b6112d509678eb595d80c36c`, tree `578f6878c0419836dfccb970b47b37b78cb268d9`. The branch was clean; upstream/base were rechecked and remained unchanged.
- Split the former `d5df6e7` mixed commit into six scoped commits: browser-audio follow-up (`f40f833`, pending autosquash into `1b0d4db`), emulator diagnostics (`c8c098b`), scheduler timer reuse (`06d0d57`), Unicode conversion (`7d39234`), Cloudflare worker config (`e7ddaf4`), and unused SQLite local removal (`2076ecd`). All original paths/hunks were retained.
- Added the scheduler timer's cross-instance delegate issue to `BUGS.md`.
- The rebase completed without conflicts. The locked merge-base remained `2cf2ef01a396ccc162ce0344717f6a110fe971b3`; the source tree matched the phase checkpoint after excluding the three record files (`git diff --quiet ...`, exit 0). Rewritten full tree `76642ec2b05e71dc3d6fe650f93abd7c987836fa` differs only in evolving audit records.


## History phase 3: browser-audio fixup

- Starting checkpoint `20261121-before-rearrange-phase3` was clean `master` `c15a38b7c542d825915d7339c4c95a5b39fe6c11`, tree `da6a94981c5299cc1d517722acf6e9354533613d`.
- Rechecked upstream refs and the locked base: `upstream/master` `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; `upstream/main` unavailable; merge-base `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- Autosquashed split browser-audio follow-up `f40f833` into owner `94f73d9`; rewritten owner is `9c741955bc3`.
- Rebase completed without conflicts. Merge-base stayed fixed; worktree is clean and source tree matches checkpoint under the three record exclusions (`git diff --quiet 20261121-before-rearrange-phase3 master -- . ':(exclude)BUGS.md' ':(exclude)REARRANGE-DONE.md' ':(exclude)REARRANGE-TODO.md'`, exit 0).


## History phase 4: separate build options from FPS diagnostics

- Starting checkpoint `20261121-before-rearrange-phase4` was `5a28f96e9e5c51cc7fff9e8a08936120f272aadc`, tree `c91b9a165818970dee1195314b6d89927e0b03f6`; upstream/master and the locked base were rechecked.
- Split `ec7cfce` into web-build option normalization (`b66b50f`) and the FPS logging correction (`aab609c`, marked as a fixup to performance-warning commit `8bdce7b`; `git log -S'screen->refresh_rate'` confirms this as the original owner).
- The rebase completed without conflicts. The locked merge-base was unchanged and source paths matched the checkpoint after excluding the three record files (`git diff --quiet 20261121-before-rearrange-phase4 master -- . ':(exclude)BUGS.md' ':(exclude)REARRANGE-DONE.md' ':(exclude)REARRANGE-TODO.md'`, exit 0).


## History phase 5: performance-warning fixup

- Starting checkpoint `20261121-before-rearrange-phase5` was clean `master` `4c66e54ff93fed2e1175eaabe721c89b028c382f`, tree `412185677efd008752d80882455f232052f533fa`.
- After tracing the changed `screen->refresh_rate()` expression, autosquashed `aab609c` into its performance-warning owner. Rewritten owner `12eccf7c89d` now selects the first screen through `screen_device_enumerator` and reads its refresh attoseconds.
- Rebase completed without conflicts. Locked merge-base stayed `2cf2ef01a396ccc162ce0344717f6a110fe971b3`; clean source tree matches phase-five checkpoint under the three record exclusions (`git diff --quiet 20261121-before-rearrange-phase5 master -- . ':(exclude)BUGS.md' ':(exclude)REARRANGE-DONE.md' ':(exclude)REARRANGE-TODO.md'`, exit 0).


## History phase 6: split cross-owner fixes

- Starting checkpoint `20261121-before-rearrange-phase6` was `f0f734ff558228cde54b730abd5af09fa774361a`, tree `79c37167c406cacb40f82f9d457b4de78fc0a20a`; upstream/master and the locked merge-base were rechecked.
- Split browser/build fix `72aa735` into `7d7613c` for ccache root selection (`build_web ccache more`, owner `32cf540`) and `1f2604c` for frameskip reporting (`collect frameskip stats`, owner `aa11b6b`).
- Split smart-build fix `f01681b` into `636b614` for cache schema versioning (`build try to speed up more`, owner `d28b3ad`) and `ba52565` for the dependency diagnostic (`smart make works!`, owner `1bd99b2`).
- The rebase completed. Merge-base remained `2cf2ef01a396ccc162ce0344717f6a110fe971b3`; source paths matched the checkpoint with record exclusions (`git diff --quiet 20261121-before-rearrange-phase6 master -- . ':(exclude)BUGS.md' ':(exclude)REARRANGE-DONE.md' ':(exclude)REARRANGE-TODO.md'`, exit 0).

## History phase 7 starting point

- Clean `master` start: `f90fedf3ec8c441f6ac4c4cf65536903d21ec614`, tree `0942ac00f7d4f57e7875af712826f16406c1a4b5`; checkpoint `20261121-before-rearrange-phase7` points to it.
- Rechecked upstream refs: `upstream/master` `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; `upstream/main` unavailable; merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.

## History phase 8 starting point

- Began from clean `master` `59aa68fff1d7966f91114d0df0f643b512608acf`, tree `d95ffc75513f32d8579a077cad17bbcae9e06754`; checkpoint `20261121-before-rearrange-phase8` points to it.
- Rechecked upstream/master `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; upstream/main unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- A rebase trial stopped while applying the ccache refactor and was aborted cleanly. Inspecting the conflict and line history showed the attempted targets were wrong: the ccache path repair belongs to `21178dc` (`one ccache`), while the makedep diagnostic repair belongs to `e7b0783` (`build try to speed up more`). No source changes were retained.

## History phase 9 starting point

- Began from clean `master` `1ee973b27bc3f1cf13500518140f38fecdaba031`, tree `efd759475662464fee9d129fe18fd1385599c1f0`; checkpoint `20261121-before-rearrange-phase9` points to it.
- Rechecked upstream/master `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; upstream/main unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- Moved the ccache-root repair `e9375ec` directly after its actual owner `21178dc` (`one ccache`) and the makedep diagnostic repair `e63073c` directly after `e7b0783` (`build try to speed up more`); marked each repair as a fixup. The previous subjects pointed at later, similarly named commits.
- The replay paused once on a transient `.git/index.lock` report after commit 136/364. No Git process or lock remained on inspection; resuming completed the replay without content conflicts.
- Rewritten `master` at completion: `5aff0f24b18219679cd3ab0cda6f2bd1aac7aceb`, tree `fef63bb70c3c4e34c0213fc8e9afd21db6c80ada`. The fixed merge-base is unchanged; the worktree is clean; source paths match phase-9 checkpoint exactly when excluding `BUGS.md`, `REARRANGE-DONE.md`, and `REARRANGE-TODO.md`. No `fixup!` commits remain in the locked range.

## History phase 10 starting point

- Began from clean `master` `25eb54d1d6cac307d10af3dccb527506ac13a57b`, tree `4366476d99a71ec3c664c9362acdc73aaa03c53f`; checkpoint `20261121-before-rearrange-phase10` points to it.
- Rechecked upstream/master `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; upstream/main unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- Diff review found two mixed commits: `99ba3c6` combines quick-driver selection with an FFmpeg incomplete-type/include-path fix; `c1e5fff` combines the smart dependency resolver with FFmpeg library auto-detection. The destructor and FFmpeg library setup adapt the `14ec42f` FFmpeg recording owner, so they will become distinct fixups to that owner; quick-driver and smart-dependency behavior remain separate commits.
- Split `99ba3c6` into quick-driver feature `07c1af8` and FFmpeg video-manager fixup `29eaa84` targeting `14ec42f`. Resolving the expected `c1e5fff` deletion of the quick-build script caused Git to continue past the requested edit stop, so that commit remains for a dedicated replay. The source tree matches this phase checkpoint after excluding the three goal-record files.

## History phase 11 starting point

- Began from clean `master` `c7ce01b58613931fc6f7522739dab87459cda7f6`, tree `89eece9abb32ad04105bfaacf65a02a025352d6f`; checkpoint `20261121-before-rearrange-phase11` points to it.
- Rechecked upstream/master `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; upstream/main unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- Split `c1e5fff` into smart dependency resolution (`34c4f7a`) and FFmpeg pkg-config detection (`b7b5cb7`, fixup to `14ec42f`). The earlier 99ba split is `07c1af8` (quick-driver build) plus `29eaa84` (FFmpeg video-manager fixup to `14ec42f`).
- The first source comparison caught whitespace-only drift in `scripts/build/smartdep.py` (29 blank lines lost trailing spaces). Restored the exact checkpoint blob as fixup `ff3c233` to the smart-dependency owner; comparison now passes. The precise source of the whitespace normalization is unconfirmed.
- Final phase-11 source tree matches checkpoint `20261121-before-rearrange-phase11` exactly under the three record exclusions. Merge-base remains fixed and the worktree is clean.

## History phase 12 starting point

- Began from clean `master` `ff3c2331ae6f2e8aa93d4ad8356b3b7baf925e1c`; tree `a06647333e6bbb7c36a504097f479362817e6b3d`; checkpoint `20261121-before-rearrange-phase12` points to it.
- Rechecked upstream/master `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; upstream/main unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- The trial autosquash stopped on conflicts in `makefile` and `scripts/genie.lua` when `b7b5cb7` was placed after `14ec42f`. Inspection proved those configuration blocks were introduced by `e3b0b36`, so `b7b5cb7` belongs immediately after that commit. The rebase was aborted without retained changes; phase-12 source tree still matches its checkpoint.

## History phase 13 starting point

- Began from clean `master` `f5905aeb3178ab28bb5fb32d31e60053f02ef7ca`, tree `1c269f489e9c584ee9bf8644672265ec83244afd`; checkpoint `20261121-before-rearrange-phase13` points to it.
- Rechecked upstream/master `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; upstream/main unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- `29eaa84` applied cleanly at the FFmpeg writer owner `14ec42f`; `e3b0b36` introduces the build integration extended by `b7b5cb7` and needs its generic message corrected to a fixup of `14ec42f`.

## History phase 13 completed

- Reordered the FFmpeg integration commits so the pkg-config detection follows its actual build-configuration prerequisite; attached the video-manager adaptation to the FFmpeg recording owner. The source tree matches checkpoint `20261121-before-rearrange-phase13` under the three record-file exclusions.
- The remaining generic FFmpeg integration completion and smart-dependency whitespace restoration are tracked for attachment in phase 14.

## History phase 14 starting point

- Began from clean `master` `866bbcf5e86a2747209cd12ce6b2a7758c48ab50`, tree `9963d24e737b08be61d07b787aa8327a4c41e1bd`; checkpoint `20261121-before-rearrange-phase14` points to it.
- Rechecked upstream/master `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; upstream/main unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- Attach the generic FFmpeg integration completion (`6dc01cd`) to recording owner `fcd33ce`, and whitespace restoration (`bf22d7e`) to smart-dependency owner `55446b7`; verify checkpoint equality afterward.

## History phase 14 completed

- Folded the FFmpeg integration completion into recording owner `758fb38ba21` and restored smart-dependency whitespace in owner `d829f19dd2c`. No `fixup!` subjects remain in the locked downstream range.
- The rebase resumed after a transient `.git/index.lock` creation failure; inspection found no remaining lock or Git process. Final tree `ef6b844550793626ef7f3bd0e00315f18fe07de4` matches checkpoint `20261121-before-rearrange-phase14` under the three record-file exclusions; merge-base remains fixed and the worktree is clean.

## History phase 15 starting point

- Began from clean `master` `8fb3eaf46491c1a986a849cee55a6cb247041f12`, tree `ef6b844550793626ef7f3bd0e00315f18fe07de4`; checkpoint `20261121-before-rearrange-phase15` points to it.
- Rechecked upstream/master `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; upstream/main unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- The locked range has 23 commits whose subject is only `fixup`; phase 15 audits their patches and ownership before replay.

## History phase 15 completed

- Repositioned the 23 generic fixes beside their audited owners, including FPS/FUPS reporting, web deployment, VVF audio/debug/scaling, and Star Wars timer lifecycle repairs. Split the two cross-owner VVF fixes into six focused fixups: Opus and audio metadata, palette counter and index ordering, primary-screen include, and stats initialization.
- Rebase completed with merge-base unchanged and source tree exactly matching checkpoint `20261121-before-rearrange-phase15` under the three record-file exclusions. The six newly created `fixup!` commits remain to be attached explicitly in phase 16.

## History phase 16 starting point

- Began from clean `master` `57c9de0a55299c4c38bc10d9659a253509f6f3a1`, tree `e7b456274751aa0459c03ff940e4a965940c4ac6`; checkpoint `20261121-before-rearrange-phase16` points to it.
- Rechecked upstream/master `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; upstream/main unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- Explicitly attach the six split fixups to their verified owners, then review repeated-file churn.

## History phase 16 replay correction

- The first replay was aborted without retaining changes after the palette-index member-order patch conflicted at `e8a331f`. The moved declaration is tied to the compression-settings layout introduced by `9447a45`, so phase 17 retargets it to that owner.

## History phase 17 starting point

- Began from clean `master` `8cc0c629227d0af9fb24c154accb786d57e4b36a`, tree `109222bca97a34f5d1fbc85e3c70b315418a0ae8`; checkpoint `20261121-before-rearrange-phase17` points to it.
- Rechecked upstream/master `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; upstream/main unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- First replay was aborted without retained changes after the palette-index patch conflicted at `e8a331f`; retargeted it to `9447a45`, which introduces the compression block. The second replay was also aborted cleanly when the stats initializer removal conflicted at `5f8f755`. Inspection showed the actual initializer expansion owner is the later `VVF color stats` commit `d828e2b`.

## History phase 18 starting point

- Began from clean `master` `1aabb92b1d78de1d98cd903f20dc0c651df11ff9`, tree `d1e71a935ff902d36e09a728b95ee74684d8ea69`; checkpoint `20261121-before-rearrange-phase18` points to it.
- Rechecked upstream/master `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; upstream/main unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- The Opus constructor repair was isolated from the stats initializer expansion. The latter was integrated into `d828e2b`, the actual stats owner. Replay then stopped at the palette-counter reorder because its target `19944a7` predates the compression fields it must follow; the replay was aborted cleanly.

## History phase 19 starting point

- Began from clean `master` `096dbea95e82289bb19d6726d5ac380881a65332`, tree `1230f9dbceaf7bf701d0f217974bded40bde1d8d`; checkpoint `20261121-before-rearrange-phase19` points to it.
- Rechecked upstream/master `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; upstream/main unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- Both palette member-order fixes now follow compression owner `9447a45`; Opus initialization is audio-only at `e49b406`; stats initialization is consolidated in stats owner `d828e2b`.

## History phase 19 completed

- The compression header update and palette member ordering were attached to compression owner `9447a45`; palette counter ordering, screen sizing include, and stats initialization were also integrated with their owners. The Opus patch was isolated to constructor and channel-layout changes. The rebase completed with the locked base unchanged and the source tree equal to checkpoint `20261121-before-rearrange-phase19` under the three record-file exclusions.
- One `fixup!` remains: the isolated Opus-only commit must be folded into encoder owner `e49b406`.

## History phase 20 starting point

- Began from clean `master` `d67800580da5b6af95c3bb94ea6545f1f488f813`, tree `c5a0c6a8f064ee7bf054c4b73c3df5c9888b3d60`; checkpoint `20261121-before-rearrange-phase20` points to it.
- Rechecked upstream/master `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; upstream/main unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.

## History phase 20 completed

- Attached the Opus constructor member order and channel-layout update to encoder owner `e49b406`. No `fixup!`, `squash!`, or generic `fixup` subjects remain in the locked range.
- The rebase completed with fixed merge-base and clean worktree; source tree equals checkpoint `20261121-before-rearrange-phase20` under the three record-file exclusions.

## History phase 21 starting point

- Began from clean `master` `0bc2c54ae2a317675c133632a4f9f89fca7079e9`, tree `a9ae67192323a9c4cabdadb45c7c69e3e6b812bf`; checkpoint `20261121-before-rearrange-phase21` points to it.
- Rechecked upstream/master `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; upstream/main unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- Next audit target is repeated VVF edits; preserve separate recording, audio, scaling, palette, and diagnostics behaviors.

## History phase 21 completed

- Split the mixed `99a0ab1` change into separate end-frame FPS accounting and diagnostic color-glyph commits. The rebase completed with the fixed merge-base and checkpoint tree unchanged under the three record-file exclusions.
- The color helper commit `ff662a9` later replaces the earlier inline Cursor/VSCode spacing workaround. Commit `5d1dfd3` also removes a scaling-loss suffix that remains in final history; phase22 consolidates that warning repair with its owner and removes superseded formatting iterations.

## History phase 22 starting point

- Began from clean `master` `6bd5ad08f3afd4bbbaa6362711a77e33677ecce5`, tree `1c8744faf419e391807a1a800e4a4276fa0509de`; checkpoint `20261121-before-rearrange-phase22` points to it.
- Rechecked upstream/master `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; upstream/main unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- First replay was aborted after a conflict-resolution script left markers in an intermediate commit; no history changes were retained. The no-loss/no-manual-timestamp warning format is owned by `22c2cf0`, which already contains the final form.

## History phase 23 starting point

- Began from clean `master` `5e3da4f68c5378a597e4a4bb9de0578cfc0a1ac0`, tree `1199328c3d5e6431b32af54285642999da9e86b6`; checkpoint `20261121-before-rearrange-phase23` points to it.
- Rechecked upstream/master `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; upstream/main unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- The retry removes three superseded Cursor-only iterations while retaining the later helper’s final behavior and the independent frame-timing/rainbow changes.

## History phase 23 replay audit

- The replay initially omitted `<cstdlib>` and `<cstring>` from `src/osd/modules/render/vvfwrite.cpp`: the sequence editor dropped `53699b8`, although the phase plan listed different removals. Phase24 restored both dependencies and folded them into the later color-helper owner.

## History phase 24 correction plan

- Keep the same locked upstream ref and merge-base. Restore the two missing includes as a scoped fixup to the rewritten `vvf color` helper, checkpoint that restored source state, autosquash the fixup, and verify exact source-tree equality with the checkpoint.

## History phase 24 starting point

- Began from `master` `effb252728ea0646993d5ffa1d1b972db34dae20`, tree `1682e5ebcd4e6891b460fb3869aff9caab84a93a`; checkpoint `20261121-before-rearrange-phase24` points to that exact commit.
- Rechecked `upstream/master` `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; `upstream/main` is unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- Restored the two includes as a fixup to the VVF color-helper owner. The working source tree now matches the phase23 checkpoint under the three record-file exclusions; the fixup still needs autosquashing.

## History phase 24 completed

- Autosquashed the include restoration into rewritten owner `vvf color` (`0ee1f7307a97`). The worktree is clean; `master` has merge-base `2cf2ef01a396ccc162ce0344717f6a110fe971b3`; `git diff --exit-code 20261121-before-rearrange-phase24 HEAD -- . ':(exclude)BUGS.md' ':(exclude)REARRANGE-DONE.md' ':(exclude)REARRANGE-TODO.md'` passes. No `fixup!`, generic `fixup`, or `squash!` subjects remain in the locked range.

## History phase 25 audit target

- Read-only churn audits found a mixed TPS/probe commit `7548279`, whose machine TPS reporting is separate from the probe port parser; the parser repairs the default-port handling from `a0ffda5`. The touch-control key-code correction `2187ed2` repairs feature owner `7e03e12`. Further review targets include the vector-frame reset sequence, VVF screen sizing, FFmpeg transfer/debug iterations, the web performance monitor, and driver selection. Two newly verified runtime issues are recorded in `BUGS.md`.

## History phase 25 starting point

- Began from clean `master` `660699a13c091ad3eeafda56da423ded41ed169b`, tree `2d7adfdf6a7e4c6dd68ff2821bb10cf1c6dcb51c`; checkpoint `20261121-before-rearrange-phase25` points to it.
- Rechecked `upstream/master` `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; `upstream/main` is unavailable; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.

## History phase 25 completed

- Split the mixed TPS/probe commit. Machine TPS reporting is isolated as `Improve TPS reporting`; the probe-parser correction is a `fixup!` targeting `fix probe_mame_web default port`.
- The rebase completed with clean source-tree equivalence to checkpoint `20261121-before-rearrange-phase25` under the three record-file exclusions. The fixed merge-base remains unchanged. Repeated transient `.git/index.lock` collisions occurred while `watch git diff` and `watch codex-status` remained active; the user asked to keep them running. Their involvement is plausible but unproven.
- Phase26 attached the probe fixup and touch key-code repair to their verified owners.

## History phase 26 completed

- Autosquashed the probe-parser fixup into `fix probe_mame_web default port` and moved the touch key-code correction beside `Add touch controls to web build`. Checkpoint `20261121-before-rearrange-phase26` verifies exact source equality under the three record-file exclusions; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`. No fixup, squash, or generic fixup subjects remain in the locked range.

## History phase 27 audit and plan

- Read-only review found mixed vector-option/docs, pause-correction/comment, and browser-monitor/probe/config commits. The current pause-correction commit is `cdbbe592d21`; `649af5a` is its equivalent on the phase25 checkpoint, not an ancestor of current `master`.
- The browser monitor's final owner is `ae4b708`; earlier 8-second stop `5ca457d` is superseded. FFmpeg commit `ae876ecc` removes two independently introduced timers (`ed92f67` copy path and `98db383` owned-bitmap queue), so split it into two fixups. Keep the schema/coordinate VVF dimension chain in dependency order and preserve the final observed-range formulas.
- At operation start, `upstream/main` is absent; selected upstream is `upstream/master` `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`, with locked merge-base `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.

## History phase 27 completed

- Started clean at `bc78080d5ddab9060b5b0c715fb098c561ff87d6`, tree `82582d5723bf441f6c11bd6510e7f922b6458dda`, checkpoint `20261121-before-rearrange-phase27`.
- Split vector option implementation from its documentation; separated the pause frame-skip correction from unrelated comments; split monitor telemetry, probe launch flags, and generated-web ignore changes; retained the WASM abort filter while dropping a superseded monitor tweak; removed the obsolete 8-second stop; split FFmpeg copy-path and zero-copy queue timing removals.
- A whitespace-only monitor conflict was resolved by converting current indentation only. The later `ae4b708` redesign conflict used that commit’s exact file, verified identical to the checkpoint blob with no later edits. The final source tree exactly matches the phase27 checkpoint under the three record-file exclusions, and merge-base remains unchanged.
- Phase28 has four scoped fixups to autosquash; no builds or tests were run.

## History phase 28 autosquash re-plan

- The first attempt to autosquash the copy-path timing removal into `ed92f67` conflicted with later FFmpeg frame-pool and async-mode rewrites. It was aborted; branch `master` returned to checkpoint `20261121-before-rearrange-phase28` (`4f9e8f17d61d75ce44010c221b3394436f81c2a6`) and source equality under the three record-file exclusions passed.
- The current async-copy implementation is finalized in `98db383`; retarget the copy-path timing removal there, alongside the distinct zero-copy queue timing removal. Preserve the vector and browser fixups for the retry.
- Phase29 will retry from a new unique checkpoint after rechecking the same upstream ref and locked merge-base.

## History phase 29 completed

- Started clean at `b695a03f5b71290c87b65e51bcff4995ddcd3845`, tree `56af561d35f3818b11894cbecf1c4f209afe42c3`, checkpoint `20261121-before-rearrange-phase29`. Autosquashed vector frame-skip correction, browser telemetry, and separate FFmpeg copy-path and owned-bitmap queue timing removals.
- The rebase preserved exact source-tree equality under the three record-file exclusions; locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`. No fixup subjects remain in the locked range. One transient index-lock collision left the exact current commit staged; the staged tree was verified against `CHERRY_PICK_HEAD`, committed with its original message, and replay continued successfully.
- No builds or tests were run.

## History phase 30 audit and plan

- The initial phase30 plan misidentified both owners. The nothrot correction belongs to `enable nothrot` (`5c71462`), and browser cleanup belongs to the current-lineage owner `237b4ad`; phase31 verified and attached both. In `c7e4296`, `-x` tracing is independent of alias normalization and was split out.
- Keep generic driver discovery (`3b794e5`) separate from the later native `DRIVERS=` handoff (`2939bdf`). Current locked-range counts: 46 `build_web.sh` edits and 38 edits each to the TODO and DONE records.
- At phase30 operation start, `upstream/main` is unavailable; selected `upstream/master` is `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`, locked merge-base `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.

## History phase 30 completed

- Started from clean `master` `2321bc35ff522c6ad9a9b1781f639668291d3e9b`, tree `13f4f66772f6d096f1c5f10024ff28674bec24c6`; checkpoint `20261121-before-rearrange-phase30` points to that commit.
- Split `-x` tracing from option alias normalization. Rebase completed through all 396 todo entries; checkpoint source tree matches under the three record-file exclusions, and the locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- Final ownership audit found two planned attachments were not performed: `fix build_web nothrot` remains separate from `enable nothrot`, and `build_web fix browser cleanup` remains separate from browser lifecycle owner `237b4ad`. The previously cited `84d4a67` is not an ancestor of the locked current branch; `237b4ad` is the current-lineage owner. Phase31 will attach both. A transient index-lock collision occurred during replay; the lock was absent on inspection and the rebase resumed successfully while the user's watchers remained running. No tests or builds were run.

## History phase 31 starting point

- Began from clean `master` `8a015a5fc677c0ecd59527e021f4d86b046a785d`, full tree `fa95a903fc8647bdc5ae286064701b66530ec9b2`.
- Rechecked `upstream/master` `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; `upstream/main` is unavailable; locked merge-base is `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- The phase31 checkpoint will point to this exact starting commit.
- Current-lineage ownership check: `84d4a67` is absent from the phase31 ancestry; `237b4ad` is the browser lifecycle owner immediately followed by `e949b4b` cleanup.

## History phase 31 completed

- Rewrote `master` from checkpoint `20261121-before-rearrange-phase31` at `8a015a5fc677c0ecd59527e021f4d86b046a785d` (tree `fa95a903fc8647bdc5ae286064701b66530ec9b2`). Attached the nothrot correction to `enable nothrot` (`74ccb14`) and browser-profile cleanup to current-lineage owner `237b4ad` (`35a0d61`).
- The phase31 source tree exactly matches the checkpoint under the three record-file exclusions. `master` still merges at `2cf2ef01a396ccc162ce0344717f6a110fe971b3`; no `fixup!` or `squash!` subjects remain. No tests or builds were run.

## History phase 32 starting point

- Began from clean `master` `9e26ad9e9a3657be5b73b9207f7ed9f880ea10ec`, full tree `7b9ab8560839f098910523d318fb24ef0e5d4390`.
- Rechecked `upstream/master` `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; `upstream/main` is unavailable; locked merge-base is `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- The phase32 checkpoint will point to this exact starting commit.

## History phase 32 completed

- Checkpoint `20261121-before-rearrange-phase32` is at `9e26ad9e9a3657be5b73b9207f7ed9f880ea10ec`, tree `7b9ab8560839f098910523d318fb24ef0e5d4390`. Removed superseded `c0dcc61` raw-pointer and `4664439` optional-mode experiments; folded the net owned-bitmap async implementation from `9b452f4` into video-pool owner `9cf4b1a` (rewritten owner `c93fe617c95`). The affected file blobs match the original `9b452f4` tree, and `c0dcc61`'s patch ID duplicates checkpoint-only `51dc7d1`.
- Current-lineage VVF inspection confirmed 14-bit signed coordinate encoding and exposed a degenerate-axis collapse plus stale 2047 header comments; both are recorded in `BUGS.md`. The rebase completed through 404 entries, source matches the checkpoint under the three record exclusions, merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`, and no fixup/squash subjects remain. No tests or builds were run.

## History phase 33 source replay complete

- Started from clean `master` `180535e7407e4ac2293e12f88dd5a56b2c75ac7b`, tree `c16015187a4c6677fcddf87f4d222f504757887d`, checkpoint `20261121-before-rearrange-phase33b`. At operation start, `upstream/main` was unavailable; `upstream/master` was `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; locked merge-base was `2cf2ef01a396ccc162ce0344717f6a110fe971b3`.
- Split the Star Wars frame-rate experiment from the VVF 14-bit format work; attached the unused `m_recent_frames` removal to its introducer. Split `ea819ad` among VVF state/stats, format constants, and end-frame timing owners. Separated the `b15b81c` scale lifecycle change from obsolete diagnostics. Split `1bb4c4b` into range tracking, redundant pen-up, FPS, color-marker, and remaining debug-output changes.
- Corrected the VVF bug provenance in `BUGS.md`: degenerate-axis collapse begins in `33d6bbe`; stale 2047 comments originate in `021c46b` and remain outdated after the 14-bit redesign.
- Replayed all 414 entries to `786ad0973fc0cbdc79b2117d57c825ea52eb04cd` (tree `152fa97994c89a5c54b632b2e2db1c41251353e9`). The source tree exactly matches checkpoint `20261121-before-rearrange-phase33b` with `BUGS.md`, `REARRANGE-DONE.md`, and `REARRANGE-TODO.md` excluded; merge-base is unchanged. Eight correctly targeted VVF fixups remain for a dedicated autosquash operation. No tests or builds were run.
- A transient `.git/index.lock` interrupted continuation near entry 290. No owner process was observable after the lock disappeared. The staged tree for `Tidy Emscripten and vector comments` exactly matched its original commit and was committed with its original message before the rebase resumed; no causal link to either watcher was established.

## History phase 33 autosquash complete

- Attached the eight VVF fixups to their audited owners, explicitly moving the FPS and diagnostic-color fixups after the relevant owners. The rebase preserved the phase33c checkpoint source tree; a final blob comparison exposed replay-only drift in `vvfwrite.cpp`, corrected in `36f09a1`.
- Checkpoint `20261121-before-rearrange-phase33c` is at `65f15f031b7dbb52ed6764e166e17f7f95340aba`, tree `950b49ba8b3be3b6e29e7196828265ba2395eda7`. Current source matches it exactly under the three record-file exclusions. The locked merge-base remains `2cf2ef01a396ccc162ce0344717f6a110fe971b3`; no fixup or squash subjects remain in the locked range.
- The user asked to keep `watch git diff` and `watch codex-status` running. No causal link between either watcher and the earlier transient index lock was established. No builds or tests were run.

## History phase 34 complete

- Started from `master` `5efe9ab86a082855f22e0b25753ea1d12b04ddaa`, tree `5482085743b04b6559785bbce5860fe9ebe35ee9`. `upstream/main` was unavailable; `upstream/master` was `2c2a20b9a4e5ba4dc46f8ae19a77f19d30fb225d`; the locked merge-base was `2cf2ef01a396ccc162ce0344717f6a110fe971b3`. Checkpoint: `20261121-before-rearrange-phase34` at the exact start commit.
- The audit found no record edits mixed with source or `BUGS.md`. Dropped 118 historical record-only commits, kept the non-record history, and restored the final TODO and DONE snapshots as separate commits.
- The source tree matches the phase34 checkpoint under the three record-file exclusions. The locked merge-base is unchanged, no fixup/squash subjects remain, and the worktree is clean. No tests or builds were run.
