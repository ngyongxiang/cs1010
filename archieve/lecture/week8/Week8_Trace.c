// Week8_Trace.c
// Students: Please trace this manually first before you run it.
#include <stdio.h>
void f(int, double, int *, double *);

int main(void) {
	int a = 5;
	double b = 7.1;
	int c = 12;
	double d = 22.3;

	printf("a = %d, b = %f, c = %d, d = %f\n", a, b, c, d);
	printf("&a = %p, &b = %p\n", &a, &b);

	f(c, d, &a, &b);  

	printf("After returning from function f:\n");
	printf("a = %d, b = %f, c = %d, d = %f\n", a, b, c, d);
	return 0;
}

void f(int w, double x, int *y, double *z) {
	printf("w = %d, x = %f, y = %p, z = %p\n", w, x, y, z);

	w = 2 * w;  
	x = 3 * x;  

	*y = *y * 4;
	*z = 5 * *z;
}

