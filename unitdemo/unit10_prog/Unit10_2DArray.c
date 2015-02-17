// Unit10_2DArray.c
#include <stdio.h>
#define N 5    // number of columns in array

int sumArray(int [][N], int); // function prototype

int main(void) {
	int foo[][N] = { {3,7,1}, {2,1}, {4,6,2} };
	printf("sum is %d\n", sumArray(foo, 3));
	printf("sum is %d\n", sumArray(foo, 2));

	return 0;
}

// To sum all elements in arr
int sumArray(int arr[][N], int rows) {
	int i, j, total = 0;

	for (i=0; i<rows; i++) {
		for (j=0; j<N; j++) {
			total += arr[i][j];
		}
	}
	return total;
}

