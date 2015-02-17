// Week4_NestedLoop1.c
// Trace this program and determine the output without running it.
#include <stdio.h>

int main(void) {
	int a, b;

	a = 1;
	while (a <= 4) {
		b = a + 3;
		while (b <= 10) {
			printf("a = %d, b = %d\n", a, b);
			b += 3;
		}
		a++;
	}

	return 0;
}

