// Unit9_SumArray.c
// Compute the sum of elements in an array.
#include <stdio.h>

int sumArray(int [], int);

int main(void) {
	int foo[8] = {44, 9, 17, 1, -4, 22};
	int bar[] = {2, 8, 6};

	printf("sum is %d\n", sumArray(foo, 8));
	printf("sum is %d\n", sumArray(foo, 3));
	printf("sum is %d\n", sumArray(bar, 3));

	return 0;
}

// To sum up values in array arr
// - size of array arr can be unspecified
// - need an array size parameter
int sumArray(int arr[], int size) {
	int i, total=0;

	for (i=0; i<size; i++)
		total += arr[i];

	return total;
}

