// binary_search_complete.c
#include <stdio.h>
#define MAX_ELEMENTS 10

int binarySearch(int [], int, int);
void scanArray(int [], int);
void printArray(int [], int);

int main(void) {
	int list[MAX_ELEMENTS], search_key;

	scanArray(list, MAX_ELEMENTS);
	// printArray(list, MAX_ELEMENTS); // for checking

	printf("Enter search key: ");
	scanf("%d", &search_key);

	printf("Result = %d\n",
			binarySearch(list, MAX_ELEMENTS, search_key));

	return 0;
}

// To search for key in sorted arr using binary search
// Return index if found; otherwise return -1
int binarySearch(int arr[], int size, int key) {
	int low = 0, high = size - 1, mid = (low + high)/2;

	while ((low <= high) && (arr[mid] != key)) {
		if (key < arr[mid])
			high = mid - 1;
		else if (key > arr[mid])
			low = mid + 1;
		mid = (low + high)/2;
	}

	if (low > high)
		return -1;
	else
		return mid;
}

// To read values into arr
void scanArray(int arr[], int size) {
	int i;

	printf("Enter %d values: ", size);
	for (i=0; i<size; i++) {
		scanf("%d", &arr[i]);
	}
}

// To print values of arr
void printArray(int arr[], int size) {
	int i;

	for (i=0; i<size; i++) 
		printf("%d ", arr[i]);

	printf("\n");
}

