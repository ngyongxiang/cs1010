// Unit9_ModifyArrayArg.c
#include <stdio.h>

void doubleArray(int [], int);
void printArray(int [], int);

int main(void) {
	int foo[8] = {44, 9, 17, 1, -4, 22};

	doubleArray(foo, 4);
	printArray(foo, 8);

	return 0;
}

// To double the values of array elements
void doubleArray(int arr[], int size) {
	int i;

	for (i=0; i<size; i++)
		arr[i] *= 2;
}

// To print arr
void printArray(int arr[], int size) {
	int i;

	for (i=0; i<size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

