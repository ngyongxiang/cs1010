// Unit6_CountDigits.c
// Read a positive integer and count the number of digits it has.

#include <stdio.h>
int count_digits(int);

int main(void) {    
	int num;

	printf("Enter a positive number: ");
	scanf("%d", &num);
	printf("%d contains %d digits.\n", num, count_digits(num)) ;

	return 0 ;
}

// Counts the number of digits in n
// Precond: n > 0
int count_digits(int n) {
	int counter = 0 ;

	do { 
		counter++;
		n /= 10 ;
	} while (n > 0) ;

	return counter;
}

