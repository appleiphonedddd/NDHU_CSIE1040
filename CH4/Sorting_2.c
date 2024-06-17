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

    // Assume side1 is the longest side
    max = side1;


    /*
     * Compare the side2 with the max
     * If side2 is greater than max, then side2 is the longest side
     */
    
    if(side2 > max) {
        max = side2;
    }

    if (side3 > max) {
        max = side3;
    }

    printf("The longest side is %d\n", max);

    return 0;
}