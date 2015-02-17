// Week3_Trace3.c
#include <stdio.h>

int m(int);

int main(void) {
	int a;

	m(3);
	printf("%d\n", m(4));
	a = m(5);
	printf("%d\n", a);

	return 0;
}

int m(int x) {
	printf("Hi!\n");
	return x*(x+1)/2;
}

