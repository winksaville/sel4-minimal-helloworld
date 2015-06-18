/*
 * Copyright 2015, Wink Saville
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 */

/**
 * Currently no parameters are passed to main
 * and the program hangs when we return.
 */
volatile int gi;

int main(void)
{
    // Do work
    for (gi = 0; gi < 1000; gi++) {
    }

    // Return success
    return 0;
}
