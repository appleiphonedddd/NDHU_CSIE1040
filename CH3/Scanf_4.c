/*
 * Copyright (c) 2024, NDHU CSIE
 * Authors: TA, WEI-CHE CHIEN
 * Description: Enter two characters and print them.
 */

#include <stdio.h>

int main()
{
    char ch1, ch2;
    printf("Please enter two characters:\n");

    scanf("%c \n%c", &ch1, &ch2);

    printf("ch = %c, %c\n", ch1, ch2);
    return 0;
}