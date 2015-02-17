// Unit12_Example.c
#include <stdio.h>

int main(void) {
	int num, sum = 0;

	printf("Enter integers, terminate with ctrl-d:\n");

	while (scanf("%d", &num) == 1) {
		sum += num;
	}
	printf("Sum = %d\n", sum);

	return 0;
}

