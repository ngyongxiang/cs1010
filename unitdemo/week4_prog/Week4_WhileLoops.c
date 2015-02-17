// Week4_WhileLoops.c
// Examples of while loop: for tracing
#include <stdio.h>

int main(void) {    
	int a, b, c;

	a = 1;
	while (a*a < 100) {
		printf("%d ", a);
		a *= 2;
	}
	printf("\n");

	b = 0; c = 9;
	while (b < c) {
		printf("b=%d, c=%d\n", b, c);
		b++; c--;
	}
	printf("outside: b=%d, c=%d\n", b, c);

	return 0;
}

