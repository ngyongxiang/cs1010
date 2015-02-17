// Unit11_HiLo.c
// This program implements the HiLo game.
// A secret integer in the range [1, 100] is generate.
// Player is given up to 5 chances.
// When a game is finished, player is asked whether
// he would like to play another game.
// Author: Aaron Tan

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void play_a_game(int);

int main(void) {
	int  secret;
	char response;

	srand(time(NULL));

	printf("*** Welcome to the HiLo game! ***\n");
	do {
		secret = rand()%100 + 1;
		play_a_game(secret);
		printf("Do you want to play again (y/n)? ");
		// The space in the " %c" format specifier tells scanf() 
		// to skip any whitespace character (including newline) 
		// before reading the next character.
		scanf(" %c", &response);
	} while (response == 'y');

	printf("\n*** Thanks for playing. Bye! ***\n");

	return 0;
}

// Play one HiLo game
void play_a_game(int secret) {
	int guess, tries = 0;

	printf("\nGuess a number between 1 and 100 inclusive.\n");
	do {
		tries++;
		printf("Enter your guess [%d]: ", tries);
		scanf("%d", &guess);

		if (guess < secret)
			printf("Your guess is too low!\n");
		else if (guess > secret)
			printf("Your guess is too high!\n");
	} while ( (tries < 5) && (guess != secret) );

	if (guess == secret) {
		printf("Congratulations! You did it in %d step", tries);
		if (tries == 1)
			printf(".\n");
		else
			printf("s.\n");
	}
	else
		printf("Too bad. The number is %d. Better luck next time!\n", secret);
}

