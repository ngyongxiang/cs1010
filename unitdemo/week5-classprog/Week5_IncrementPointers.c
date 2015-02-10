// Week5_IncrementPointers.c
#include <stdio.h>

int main(void) {
	int a, *ap;
	float b, *bp;
	char c, *cp;
	double d, *dp;

	ap = &a; bp = &b; cp = &c; dp = &d;
	printf("%p %p %p %p\n", ap, bp, cp, dp);

	ap++; bp++; cp++; dp++;
	printf("%p %p %p %p\n", ap, bp, cp, dp);

	ap += 3;
	printf("%p\n", ap);

	return 0;
}

