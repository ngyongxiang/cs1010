// bubble_sort.c
#include <stdio.h>
#define MAX_ELEMENTS 10

void bubbleSort(int [], int);
void scanArray(int [], int);
void printArray(int [], int);

int main(void) {
	int list[MAX_ELEMENTS];

	scanArray(list, MAX_ELEMENTS);

	printf("Before sort:\n");
	printArray(list, MAX_ELEMENTS); 

	bubbleSort(list, MAX_ELEMENTS);

	printf("After sort:\n");
	printArray(list, MAX_ELEMENTS); 

	return 0;
}

// To sort arr in increasing order
void bubbleSort(int arr[], int size) {
	int i, limit, temp;

	for (limit = size-2; limit >= 0; limit--) {
		// limit is where the inner loop variable i should end 

		for (i=0; i<=limit; i++) {
			if (arr[i] > arr[i+1]) { // swap arr[i] with arr[i+1]
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
}

// To read values into arr
void scanArray(int arr[], int size) {
	int i;

	printf("Enter %d values: ", size);
	for (i=0; i<size; i++) 
		scanf("%d", &arr[i]);
}

// To print values of arr
void printArray(int arr[], int size) {
	int i;

	for (i=0; i<size; i++) 
		printf("%d ", arr[i]);

	printf("\n");
}

