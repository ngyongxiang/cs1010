// Unit3_MixedTypes.c
#include <stdio.h>

int main(void) {    
	int   m = 10/4;
	float p = 10/4;
	int   n = 10/4.0;
	float q = 10/4.0;
	int   r = -10/4.0;

	printf("m = %d\n", m);
	printf("p = %f\n", p);
	printf("n = %d\n", n);
	printf("q = %f\n", q);
	printf("r = %d\n", r);

	return 0;
}

