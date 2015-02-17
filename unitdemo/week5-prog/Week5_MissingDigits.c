// Week5_MissingDigits.c
// Program to find digits that do not appear in user's input number.
#include <stdio.h>

int main(void) {
	int number, i;
	int found[10] = {0}; // found[i] = 0 means digit i is missing

	printf("Enter a number: ");
	scanf("%d", &number);
	printf("Missing digits in %d: ", number);

	while (number > 0) {
		found[number%10] = 1;   // found digit in input number
		number /= 10;
	}

	for (i = 0; i < 10; i++) {
		if (!found[i])
			printf("%d ", i);
	}
	printf("\n");

	return 0;
}

