// Week5_SetContainment.c
// Program to check if a set is contained in another.
// This is an incomplete program given to students.
#include <stdio.h>

void scanArray(int [], int);
void printArray(int [], int);
int isSubset(int [], int, int [], int);

int main(void) {
	int arrayA[4], sizeA = 4, arrayB[7], sizeB = 7;

	printf("1st array:\n");
	scanArray(arrayA, sizeA);
	printf("2nd array:\n");
	scanArray(arrayB, sizeB);

	if (isSubset(arrayA, 4, arrayB, 7))
		printf("arrayA[0..3] is a subset of arrayB[0..6]\n");
	else
		printf("arrayA[0..3] is not a subset of arrayB[0..6]\n");

	if (isSubset(arrayA, 4, arrayB, 6))
		printf("arrayA[0..3] is a subset of arrayB[0..5]\n");
	else
		printf("arrayA[0..3] is not a subset of arrayB[0..5]\n");

	return 0;
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
void printArray(int arr[], int size) 
{
	int i;

	// To print all values on one line
	for (i=0; i<size; i++) 
		printf("%d ", arr[i]);

	printf("\n");
}

// This function is a stub. Complete it.
int isSubset(int arrA[], int sizeA, int arrB[], int sizeB) {
	int i , k , found;
	if (sizeA > sizeB)
		return 0;
	else {
		
		for (i = 0 ; i < sizeA; i++){
			found = 0;
			for (k = 0; k < sizeB; k++){
				// if found set found flag to 1
				if (arrA[i] == arrB[k])
					found = 1;
			}
			// if nothing is found , it is not a subset
			if (found == 0)
				return 0;
		}
	}
	return 1;

}

