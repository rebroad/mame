# Bug-fix goal

Use `BUGS.md` as the backlog of observed defects. Read each entry, inspect the current source and relevant history, and verify that the issue still exists before changing code. Treat each independently actionable bug as its own fix unless investigation shows that multiple entries share one root cause and should be fixed together. Update or remove the corresponding `BUGS.md` entry when the defect is fixed or found no longer applicable, preserving enough context to explain the disposition.

For every fix, identify the commit that introduced the faulty behavior. Use source history and `git blame` on the relevant lines, then inspect the candidate commit to confirm ownership. If the fix repairs behavior introduced by a commit on the current downstream branch, create a `fixup!` commit targeting that owning commit (for example, `git commit --fixup=<owner>`). A fix that addresses multiple owners should be split into separately scoped fixups. If no meaningful downstream owner exists, make a focused standalone fix commit and record why it is not a fixup.

Do not autosquash or otherwise rewrite history as part of ordinary bug fixing. Leave fixup commits in history; the explicitly initiated rearrangement goal handles validating and autosquashing them. Do not target commits at or before the applicable upstream merge-base. If ownership is uncertain, investigate before committing and document the decision.

Keep each change narrow, follow existing project patterns, and include an appropriate regression test when practical. Verify the fix with focused tests or other reliable checks, and report what ran and any remaining uncertainty. Update `BUGS.md` in the same focused change as the fix, unless the entry is maintained separately for a clearly documented reason.
