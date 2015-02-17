// Unit10_MinPairDiff.c
#include <stdio.h>
#include <stdlib.h>
#define SIZE 6    

int minPairDiff(int [], int);

int main(void) {
	int numbers[SIZE] = { 20, 12, 25, 8, 36, 9 };

	printf("Minimum pair-wise difference = %d\n", minPairDiff(numbers, SIZE));

	return 0;
}

// Compute the minimum possible difference of any
// pair of elements in arr
// Precond: size > 1
int minPairDiff(int arr[], int size) {
	int i, j, diff, minDiff;

	minDiff = abs(arr[0] - arr[1]); // initialise min difference

	for (i = 0; i < size-1; i++) 
		for (j = i+1; j < size; j++) {
			diff = abs(arr[i] - arr[j]);
			if (diff < minDiff)
				minDiff = diff;
		}

	return minDiff;
}

