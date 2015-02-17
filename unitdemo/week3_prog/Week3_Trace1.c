// Week3_Trace1.c
#include <stdio.h>

float f(int, float);
int g(int);

int main(void) {
	int   a = 27;
	float x = 3.5F;

	printf("%d\n", g(2*a));
	printf("%.2f\n", f(a, x));
	printf("%.2f\n", f(x, a));

	return 0;
}

float f(int a, float x) {
	return g(a) + x;
}

int g(int a) {
	return a%5;
}


