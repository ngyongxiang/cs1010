/**
 * CS1010 AY2014/5 Semester 1 Lab5 Ex1
 * blocks.c
 * <Type a description of the program here>
 * <Type your name here>
 * <Type your discussion group here>
 */

#include<stdio.h>
#define MAX 20

int scanBlocks(int []);
void printBlocks(int [], int);
void bubbleSort(int[], int);
int isLargerThan(int, int);
int sumDigits(int);

int main(void) {
	int blocks[MAX], size;

	size = scanBlocks(blocks);

	bubbleSort(blocks, size);

	printf("Sorted blocks:\n");
	printBlocks(blocks, size);

	return 0;
}

// Read the number of blocks and the list of numbers, and
// return the number of blocks.
int scanBlocks(int arr[]) {

	int size,i;

	printf("Enter number of blocks: ");
	scanf("%d", size);

	printf("Enter the numbers: ");
	for (i = 0; i < size -1 ;i ++){
		scanf("%d", &arr[i]);
	}

	// Complete the code

	return size;
}

// Print the elements in arr
// Given -- do NOT change this function
void printBlocks(int arr[], int size) {
	int i;

	for (i=0; i<size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

// Sort arr using Bubblesort
// Given -- do NOT change this function
void bubbleSort(int arr[], int size) {
	int i, limit, temp;

	for (limit = size-2; limit >=0; limit--) {
		for (i=0; i<=limit; i++) {
			if (isLargerThan(arr[i], arr[i+1]) == 1) {
				// swap arr[i] with arr[i+1]
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
}

// Return 1 if a is to appear after b in the sorted list,
// or 0 otherwise.
int isLargerThan(int a, int b) { 

	// Complete the code
	

	return 0;
}

// Recursive function to sum the digits in num
// Precond: num >= 0
int sumDigits(int n){
	int sum = 0; 
	sum = sum + (n%10);

	if (n == 0)
		return sum;
	else {
		return sumDigits(n/10) + sum;
	}
 
 
}
