// Unit6_OddIntegers_v3.c
// List odd integers between 1 and n (provided by user)
// Version 3: 'for' loop with decrementing loop variable 
#include <stdio.h>

void print_odd_integers(int);

int main(void) {    
	int num;

	printf("Enter a positive integer: ");
	scanf("%d", &num);
	print_odd_integers(num);

	return 0;
}

// Print odd integers in range [1, n]
// Precond: n > 0
void print_odd_integers(int n) {
	for ( ; n > 0; n--)
		if (n%2 != 0)
			printf("%d ", n);
	printf("\n");
}

