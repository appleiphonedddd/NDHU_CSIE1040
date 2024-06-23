/*
 * Copyright (c) 2024, NDHU CSIE
 * Authors: TA, WEI-CHE CHIEN
 * Description: Check the longest side of the triangle.
 */

#include <stdio.h>

int main()
{
    int side1, side2, side3, max;
    printf("Please enter the lengths:\n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if(side1 > side2 && side1 > side3) {
        max = side1;
    }

    if (side2 > side1 && side2 > side3) {
        max = side2;
    }

    if (side3 > side1 && side3 > side2) {
        max = side3;
    }

    printf("The longest side is %d\n", max);

    return 0;
}