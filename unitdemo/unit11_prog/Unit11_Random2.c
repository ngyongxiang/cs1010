// Unit11_Random2.c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;

	for (i = 1; i <= 10; i++)
		printf("%d\n", rand()%400 + 101);

	return 0;
}

