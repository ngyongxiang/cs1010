// Unit5_FindMax_v1.c
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

	if ((num1 > num2) && (num1 > num3))
		max = num1;
	if ((num2 > num1) && (num2 > num3))
		max = num2;
	if ((num3 > num1) && (num3 > num2))
		max = num3;

	return max;
}

