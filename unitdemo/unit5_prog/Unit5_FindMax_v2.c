// Unit5_FindMax_v2.c
// This program is incorrect.
#include <stdio.h>

int getMax(int, int, int);

int main(void) {    
	int value1, value2, value3, max;

	printf("Enter 3 integers: ");
	scanf("%d %d %d", &value1, &value2, &value3);

	max = getMax(value1, value2, value3);

	printf("Maximum is %d\n", max);

	return 0;
}

// Returns the largest among num1, num2 and num3
int getMax(int num1, int num2, int num3) {
	int max = 0;

	if (num1 > max)
		max = num1;
	else if (num2 > max)
		max = num2;
	else if (num3 > max)
		max = num3;

	return max;
}

