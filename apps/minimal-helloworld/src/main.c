/*
 * Copyright 2015, Wink Saville
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 */

int main(void)
{
    // Hang, because if we return we fault at address 0
    while(1) {}

    // We never get here
    return 0;
}
