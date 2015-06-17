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
int main(void)
{
    int i = 0;

    // Do work
    for (i = 0; i < 1000; i++) {
    }

    // Return success
    return 0;
}
