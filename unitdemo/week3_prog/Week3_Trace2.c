// Week3_Trace2.c
#include <stdio.h>

void h(int, int);
int k(int);

int main(void) {
	int a = 26, b = 9;

	h(a, b);
	printf("%d\n", k(b));

	return 0;
}

void h(int x, int a) {
	int b = x%7 + a;
	printf("%d\n", k(b));
}

int k(int a) {
	return 2*a;
}

