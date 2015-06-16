# sel4-minimal-helloworld

The absolute most minimal helloworld for seL4. In fact
it does nothing except waits in a endless while loop at
this time. The reason is if it returns it faults because
the top of the stack returns to address 0 which is an
illegal address.
