/*
 * Copyright (c) 2024, NDHU CSIE
 * Authors: TA, WEI-CHE CHIEN
 * Description: Check if the input is a regular triangle, Isosceles triangle, or Rectangular triangle
 */

#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Please enter the lengths:\n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 || side2 == side3 || side3 == side1) {
        printf("Isosceles triangle\n");
    }

    else if (side1 == side2 && side2 == side3) {
        printf("Regular triangle\n");
    }

    else if (side1 * side1 + side2 * side2 == side3 * side3 || side1 * side1 + side3 * side3 == side2 * side2 || side2 * side2 + side3 * side3 == side1 * side1) {
        printf("Rectangular triangle\n");
    }

    return 0;
}