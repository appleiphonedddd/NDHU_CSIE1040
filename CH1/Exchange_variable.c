/*
 * Copyright (c) 2024, NDHU CSIE
 * Authors: TA, WEI-CHE CHIEN
 * Description: Exchanges the values of two variables.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("a = ");
    scanf("%d", &a);


    printf("b = ");
    scanf("%d", &b);

    // Exchange the values of a and b

    /**
     * First, we need to store the value of a in a temporary variable called temp.
     * Then, we assign the value of b to a.
     * Finally, we assign the value of temp to b.
     */
    int temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d", a, b);

    return 0;
}