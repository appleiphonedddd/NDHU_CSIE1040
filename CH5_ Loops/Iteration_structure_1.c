/*
 * Copyright (c) 2024, NDHU CSIE
 * Authors: TA, WEI-CHE CHIEN
 * Description: Print the numbers from 1 to 9 and sum.
 */

#include <stdio.h>

int main()
{
    int count = 1, sum = 0;

    while(count <= 9) {
        sum += count;
        printf("%d ", count);
        count++;
    }

    printf("\nSum = %d\n", sum);

    return 0;
}