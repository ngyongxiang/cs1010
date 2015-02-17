// Week3_HiLo_v1.c
// Hi-Lo Game version 1
// Adapted from L4_1.c (pg 125-126)

#include <stdio.h>

int main(void) {
	int guess, jackpot = 8;

	printf("Guess the jackpot number between 1 and 10!\n");
	printf("Please type your guess: ");
	scanf("%d", &guess);

	if (guess < jackpot)
		printf("Sorry, your guess is too low.\n");

	if (guess > jackpot)
		printf("Sorry, your guess is too high.\n");

	if (guess == jackpot)
		printf("You hit the JACKPOT!\n");

	return 0;
}

