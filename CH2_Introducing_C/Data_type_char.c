/*
 * Copyright (c) 2024, NDHU CSIE
 * Authors: TA, WEI-CHE CHIEN
 * Description: Define a character variable and print its value.
 */

#include <stdio.h>

int main()
{
    char ch;

    /**
     * Read the char value from ASCII code then move to next character.
     */
    //char ch = 'a' + 1;
    
    scanf("%c", &ch);

    printf("Output: %c\n", ch);

    return 0;
}