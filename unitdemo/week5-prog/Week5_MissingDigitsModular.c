// Week5_MissingDigitsModular.c
// Program to find digits that do not appear in user's input number.
// This is a modular version.
#include <stdio.h>

void analyseNumber(int, int []);
void printMissingDigits(int []);

int main(void) {
	int number;
	int found[10] = {0}; // found[i] = 0 means digit i is missing

	printf("Enter a number: ");
	scanf("%d", &number);

	analyseNumber(number, found);

	printf("Missing digits in %d: ", number);
	printMissingDigits(found);

	return 0;
}

// Analyse user's input, num, to check which digits appear 
// in it, and which don't, using the foundArr.
void analyseNumber(int num, int foundArr[]) {
	int digit;

	while (num > 0) {
		digit = num%10;
		foundArr[digit] = 1;   // found digit in input number
		num /= 10;
	}
}

// Print out those digits that are missing,
// foundArr[i] == 0 means digit i is missing
// foundArr[i] == 1 means digit i is present
void printMissingDigits(int foundArr[]) {
	int i;

	for (i = 0; i < 10; i++) {
		if (!foundArr[i])
			printf("%d ", i);
	}
	printf("\n");
}

