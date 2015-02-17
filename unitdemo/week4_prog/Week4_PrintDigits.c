// Week4_PrintDigits.c
// Read a positive integer and print out its digits
// from least significant to most significant.

#include <stdio.h>
void print_digits(int);

int main(void) {    
	int num;

	printf("Enter a positive number: ") ;
	scanf("%d", &num);

	print_digits(num);
	return 0;
}

// Prints the digits in n from least significant
// to most significant.
// Precond: n > 0
void print_digits(int n) {
	int digit;

	while (n > 0) {
		digit = n%10;
		printf("%d\n", digit);
		n /= 10 ;
	}
}

