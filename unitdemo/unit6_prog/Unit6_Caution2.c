// Unit6_Caution2.c
#include <stdio.h>

int main(void) {    
	int a = 2147483646;
	int i;

	for (i=1; i<=5; i++) {
		printf("%d\n", a);
		a++;
	}

	return 0;
}

