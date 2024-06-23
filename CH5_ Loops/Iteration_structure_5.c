/*
 * Copyright (c) 2024, NDHU CSIE
 * Authors: TA, WEI-CHE CHIEN
 * Description: Guess the number and count the times by iteration
 */

#include <stdio.h>

int main()
{
    int answer = 4, guess, count = 0;

    while (count == 0 || guess != answer) {

        if (guess != answer) {
            printf("Too large!\n");
        }

        else {
            printf("Too small!\n");
        }
        printf("Please enter your guess: ");
        scanf("%d", &guess);
        count += 1;
    }

    printf("Correct!  (%d)\n", count);
    return 0;
}