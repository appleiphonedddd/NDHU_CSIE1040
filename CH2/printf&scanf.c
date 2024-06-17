/*
 * Copyright (c) 2024, NDHU CSIE
 * Authors: TA, WEI-CHE CHIEN
 * Description: Compare the output of printf() with %d and %u.
 */

#include <stdio.h>

int main()
{
    int a = -121215244;
    unsigned int b = 9512125;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("a = %u\n", a);
    printf("b = %u\n", b);

    return 0;
}