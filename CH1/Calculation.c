/*
 * Copyright (c) 2024, NDHU CSIE
 * Authors: TA, WEI-CHE CHIEN
 * Description: calculates the sum of two integers.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare variables as integers
    int integer1, integer2, sum;

    /**
     * int integer1, integer2, sum;
     */

    printf("Please enter the first integer: ");
    scanf("%d", &integer1);

    printf("Please enter the second integer: ");
    scanf("%d", &integer2);

    sum = integer1 + integer2;

    printf("%d + %d = %d", integer1, integer2, sum);

    return 0;
}