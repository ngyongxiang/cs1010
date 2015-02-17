// Unit10_SumElements.c
#include <stdio.h>
#define SIZE 6    

int sum(int [], int);
int sumAlt(int [], int);
int sumOdd(int [], int);
int sumLast3(int [], int);

int main(void) {
	int numbers[SIZE] = { 20, 12, 25, 8, 36, 9 };

	printf("Sum = %d\n", sum(numbers, SIZE));
	printf("Sum alternate = %d\n", sumAlt(numbers, SIZE));
	printf("Sum odd elements = %d\n", sumOdd(numbers, SIZE));
	printf("Sum last 3 elements = %d\n", sumLast3(numbers, SIZE));

	return 0;
}

// Compute sum of all elements
// Precond: size > 0
int sum(int arr[], int size) {
	int i, sum = 0;

	for (i = 0; i < size; i++) 
		sum += arr[i];

	return sum;
}

// Compute sum of alternate elements
// Precond: size > 0
int sumAlt(int arr[], int size) {
	int i, sum = 0;

	for (i = 0; i < size; i+=2) 
		sum += arr[i];

	return sum;
}

// Compute sum of elements that are odd numbers
// Precond: size > 0
int sumOdd(int arr[], int size) {
	int i, sum = 0;

	for (i = 0; i < size; i++)
		if (arr[i]%2 == 1)
			sum += arr[i];

	return sum;
}

// Compute sum of last 3 elements 
// Precond: size >= 0
int sumLast3(int arr[], int size) {
	int i, sum = 0, count = 0;

	for (i = size-1; (i >= 0) && (count < 3); i--) {
		sum += arr[i];
		count++;
	}

	return sum;
}

