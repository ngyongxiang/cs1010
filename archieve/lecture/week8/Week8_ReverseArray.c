// Week8_ReverseArray.c
// Reverse the elements in an array.
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

int scanArray(int []);
void printArray(int [], int);
void reverseArray(int [], int);

int main(void) {
	int array[MAX_SIZE], size;

	size = scanArray(array);

	reverseArray(array, size);

	printf("After reversing: ");
	printArray(array, size);

	return 0;
}

// Read elements into array and return number of elements read.
int scanArray(int arr[]) {
	
	FILE *infile;
	if((infile = fopen("array.in" , "r"))==NULL){
		
		printf("Cannot open file \n");
		exit(1);
		
	};

	int size, i;

//	fprintf("Enter size of array (<=%d): ", MAX_SIZE);
	fscanf(infile, "%d", &size);

	for (i=0; i<size; i++) {
		fscanf(infile, "%d", &arr[i]);
	}
	
	fclose(infile);

	return size;
}

// Print array
void printArray(int arr[], int size) {
	int i;
	FILE *outfile;
	
	if ((outfile = fopen("array.out","w" ))==NULL){

		printf("Cannot open file\n");
	}


	for (i=0; i<size; i++) {
		sprintf(infile, "%d ", arr[i]);
	}
	printf("\n");
}

// Reverse the array
void reverseArray(int arr[], int size) {
	int i, temp;

	for (i=0; i<size/2; i++) {
		temp = arr[i];
		arr[i] = arr[size-i-1];
		arr[size-i-1] = temp;
	}
}

