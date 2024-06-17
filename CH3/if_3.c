/*
 * Copyright (c) 2024, NDHU CSIE
 * Authors: TA, WEI-CHE CHIEN
 * Description: When a is larger than 4, print "a is larger than 4". 
 * When a is smaller than 4, print "a is small than 4". Otherwise, print "a is equal to 4".
 */

#include <stdio.h>

int main()
{
    int a;
    printf("a = ");
    scanf("%d", &a);

    if (a > 4) {
        printf("a is larger than 4\n");
    }

    else if(a < 4) {
        printf("a is small than 4\n");
    }

    else {
        printf("a is equal to 4\n");
    }

    return 0;
}