/*
 * Copyright (c) 2024, NDHU CSIE
 * Authors: TA, WEI-CHE CHIEN
 * Description: Enter two characters and observe the difference between the two scanf statements.
 */

#include <stdio.h>

int main()
{
    char ch1, ch2;
    printf("Please enter two characters:\n");

    scanf("%c %c", &ch1, &ch2);

    printf("ch = %c, %c\n", ch1, ch2);

    printf("Please enter two characters:\n");
    scanf("%c %c", &ch1, &ch2);
    printf("ch = %c, %c\n", ch1, ch2);
}