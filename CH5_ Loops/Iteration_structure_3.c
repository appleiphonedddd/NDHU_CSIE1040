/*
 * Copyright (c) 2024, NDHU CSIE
 * Authors: TA, WEI-CHE CHIEN
 * Description: Guess the number by iteration.
 */

#include <stdio.h>

int main()
{
    int answer = 4, guess;
    printf("Please enter your guess: ");
    scanf("%d", &guess);

    while (guess != answer) {

        if (guess != answer) {
            printf("Too large!\n");
        }

        else {
            printf("Too small!\n");
        }
        printf("Please enter your guess: ");
        scanf("%d", &guess);
    }

    printf("Correct         ");
    return 0;
}