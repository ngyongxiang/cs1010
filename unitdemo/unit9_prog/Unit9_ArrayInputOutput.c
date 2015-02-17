// Unit9_ArrayInputOutput.c
// Program to illustrate the use of input/output functions
// for array; a function to read values into an array, and
// a functio display the values in an array.
#include <stdio.h>
#define SIZE 6

void scanArray(float [], int);
void printArray(float [], int);

int main(void) {
	float scores[SIZE];

	scanArray(scores, SIZE);
	printArray(scores, SIZE);

	return 0;
}

// To read values into arr
void scanArray(float arr[], int size) {
	int i;

	printf("Enter %d values: ", size);
	for (i=0; i<size; i++) {
		scanf("%f", &arr[i]);
	}
}

// To print values of arr
void printArray(float arr[], int size) {
	int i;

	// To print all values on one line
	for (i=0; i<size; i++) 
		printf("%f ", arr[i]);

	printf("\n");
}

