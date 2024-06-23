/*
 * Copyright (c) 2024, NDHU CSIE
 * Authors: TA, WEI-CHE CHIEN
 * Description: Guess the number.
 */

#include <stdio.h>

int main()
{
    int answer = 4;
    int guess;

    printf("Please enter your guess: ");
    scanf("%d", &guess);

    if(guess > answer) {
        printf("Too large!\n");
    } 

    else if(guess < answer) {
        printf("Too small!\n");
    } 
    
    else {
        printf("Correct!\n");
    }

    return 0;
}