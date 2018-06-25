Rebasing Exercise
=================
This is an exercise in rebasing.  This project consists of two
source files, printfs.c and justcode.c.  The programs don't do
anything useful and may compile.

In the branch features_branch, there are a series of commits in which
these two files are edited.  The exercise is to rebase this branch, on
top of master so that the rebased branch consists of two commits, one
of changes to printfs.c, the other to justcode.c.

Further, after feastures_branch was branched off from master, some changes
were made so that there will be conflicts.

To do this exercise, do
   git checkout feastures_branch
   git rebase -i master
