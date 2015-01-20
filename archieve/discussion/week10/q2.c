// q2.c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[10];
	int value;

	printf("Enter input: ");
	fgets(str, 10, stdin);
	value = atoi(str);
	printf("Value is %d\n", value);

	return 0;
}

