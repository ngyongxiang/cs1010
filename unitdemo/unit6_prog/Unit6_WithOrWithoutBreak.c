// Unit6_WithOrWithoutBreak.c
// Compare with or without break in a loop.
// To add 5 integers entered by user, or
// until a negative integer is entered.
#include <stdio.h>
#define TIMES 5

int main(void) {
	// With 'break'
	printf("Enter %d values to be added.\n", TIMES);
	printf("If a negative value is entered, loop terminates.\n");
	int n, i, sum;
	int isValid;

	sum = 0;
	i = 1;
	while (i <= TIMES) {
		scanf("%d", &n);
		if (n < 0)
			break;
		sum += n;
		i++;
	}
	printf("i = %d, sum = %d\n", i, sum);

	// Without 'break'
	printf("Enter %d values to be added.\n", TIMES);
	printf("If a negative value is entered, loop terminates.\n");

	sum = 0;
	i = 1;
	isValid = 1;
	while ((i <= TIMES) && isValid) {
		scanf("%d", &n);
		if (n < 0)
			isValid = 0;
		else {
			sum += n;
			i++;
		}
	}
	printf("i = %d, sum = %d\n", i, sum);

	return 0;
}
