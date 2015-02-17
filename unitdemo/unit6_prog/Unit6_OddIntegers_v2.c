// Unit6_OddIntegers_v2.c
// List odd integers between 1 and n (provided by user)
// Version 2: 'for' loop with 'if' statement
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
	int i;

	for (i=1; i<=n; i++)
		if (i%2 != 0)
			printf("%d ", i);

	printf("\n");
}

