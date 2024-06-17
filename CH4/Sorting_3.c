/*
 * Copyright (c) 2024, NDHU CSIE
 * Authors: TA, WEI-CHE CHIEN
 * Description: Check the smallest side of the triangle.
 */

#include <stdio.h>

int main()
{
    int side1, side2, side3, min;
    printf("Please enter the lengths:\n");
    scanf("%d %d %d", &side1, &side2, &side3);

    // Assume side1 is the smallest side
    min = side1;

    /*
     * Compare the side2 with the min
     * If side2 is smaller than min, then side2 is the smallest side
     */

    if (side2 < min) {
        min = side2;
    }

    if (side3 < min) {
        min = side3;
    }

    printf("The smallest side is %d\n", min);

    return 0;
}