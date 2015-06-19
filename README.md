# sel4-minimal-helloworld

An seL4 stree managed repository which uses only a libsel4minimal
library and not other libraries.

Ideally, this should only need the kernel/libsel4 but that requires
a LIBC (libmuscl). Which manifests itself with kernel/libsel4/Kbuild
depending upon $(libc) and common. And kernel/libsel4/Kconfig depends
on HAVE_LIBC. I believe with minor modificaiton libsel4 won't need to
depend on LIBC.
