Contributions to the seL4 kernel repository are welcome!


## CLA

Please note that GD and NICTA require a contributor license agreement (CLA)
to be signed for all external contributions. Please see
https://seL4.systems/Contributing for details (it is a fairly short and
standard CLA).

For the `seL4/seL4` repository, we can review pull requests directly on
github if we have a signed CLA on file.

If you have only small trivial changes such as style, typos, comments, or
white space and don't want to sign a CLA for that, please file an issue in
the github issue tracker, we'll usually be happy to do the change ourselves
and attribute your idea by linking to the github issue in the change set
comment.


## Kernel Development Process

Please read https://seL4.systems/Contributing


## Build/Test

Generally, any contributions should pass the tests in the project
https://github.com/seL4/sel4test. If new features or platforms are added,
they should add corresponding tests in `sel4test`.

Contributions to `master` should additionally either be invisible to the
proof in https://github.com/seL4/l4v, such as comments, documentation, style,
unverified platform, etc, or they should come with proof updates to `l4v`.


## Contact

If you have larger changes or additions, it might be a good idea to get in
contact with us as <devel@sel4.systems>, so we can help you get started.
