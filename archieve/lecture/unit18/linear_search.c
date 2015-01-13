// linear_search.c
#include <stdio.h>
#define MAX_ELEMENTS 10

int linearSearch(int [], int, int);
void scanArray(int [], int);
void printArray(int [], int);

int main(void) {
	int list[MAX_ELEMENTS], search_key, foundIndex;

	scanArray(list, MAX_ELEMENTS);
	// printArray(list, MAX_ELEMENTS); // for checking

	printf("Enter search key: ");
	scanf("%d", &search_key);

	foundIndex = linearSearch(list, MAX_ELEMENTS, search_key);
	if (foundIndex == -1)
		printf("Key is not found.\n");
	else 
		printf("Key is found at index %d\n", foundIndex);

	return 0;
}

// To search for key in arr using linear search
// Return index if found; otherwise return -1
int linearSearch(int arr[], int size, int key) {
	int i;

	for (i=0; i<size; i++)
		if (key == arr[i])
			return i;

	return -1;  // indicate key not found
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

