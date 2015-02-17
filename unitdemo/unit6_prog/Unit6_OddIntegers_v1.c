// Unit6_OddIntegers_v1.c
// List odd integers between 1 and n (provided by user)
// Version 1
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

	for (i=1; i<=n; i+=2)
		printf("%d ", i);

	printf("\n");
}

