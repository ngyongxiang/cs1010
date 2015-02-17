// Unit10_FindMax.c
#include <stdio.h>
#define SIZE 6    

int findMax(int [], int);

int main(void) {
	int numbers[SIZE] = { 20, 12, 25, 8, 36, 9 };

	printf("Max = %d\n", findMax(numbers, SIZE));

	return 0;
}

// Compute maximum value in array
// Precond: size > 0
int findMax(int arr[], int size) {
	int i, max;

	max = arr[0];
	for (i = 1; i < size; i++) 
		if (arr[i] > max)
			max = arr[i];

	return max;
}

