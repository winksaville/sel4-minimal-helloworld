#
# Copyright 2015, Wink Saville
#
# This software may be distributed and modified according to the terms of
# the BSD 2-Clause license. Note that NO WARRANTY is provided.
# See "LICENSE_BSD2.txt" for details.

apps-$(CONFIG_APP_MINIMAL_HELLOWORLD)        += minimal-helloworld

# Eventually we'll probably depend on libsel4 but right
# now we don't and it depends on HAVE_LIBC which we don't have.
#minimal-helloworld-y = libsel4

minimal-helloworld: kernel_elf $(minimal-helloworld-y)
