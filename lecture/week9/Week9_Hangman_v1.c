// Week9_Hangman_v1.c
// Author: Janice Lee
#include <stdio.h>
#include <string.h>

int has_letter(char [], char);

int main(void) {
	char input;
	char word[] = "apple";
	char temp[] = "_____";
	int i, count = 0;
	int num_lives = 5;
	int length = strlen(word);

	do {
		printf("Number of lives: %d\n", num_lives); 
		printf("Guess a letter in the word ");
		puts(temp);
		scanf(" %c", &input); 

		if (has_letter(word, input)) {
			for (i=0; i<length; i++) 
				if ((input == word[i]) && (temp[i] == '_')) {
					temp[i] = input;
					count++;
				}
		}
		else num_lives--;
	} while ((num_lives != 0) && (count != length));

	if (num_lives == 0)
		printf ("Sorry, you're hanged! The word is \"%s\".\n", word);
	else 
		printf ("Congratulations! The word is \"%s\".\n", word);
	return 0;
}

// Check whether word contains ch
int has_letter(char word[], char ch) {
	int j;
	int length = strlen(word);

	for (j=0; j<length; j++) {
		if (ch == word[j]) 
			return 1;
	}

	return 0;	// ch does not occur in word
}

