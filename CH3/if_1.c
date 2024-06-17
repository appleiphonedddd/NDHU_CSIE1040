/*
 * Copyright (c) 2024, NDHU CSIE
 * Authors: TA, WEI-CHE CHIEN
 * Description: When a is larger than 4, print "a is larger than 4".
 */

#include <stdio.h>

int main()
{
    int a;
    printf("a = ");
    scanf("%d", &a);

    if(a > 4) {
        printf("a is larger than 4\n");
    }

    return 0;
}