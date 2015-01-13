#include <stdio.h>
#define MAX_SIZE 10


int scanTriangularArray(int arr[][MAX_SIZE], int size);
int maxPathValue(int arr[][MAX_SIZE],int size);
int max(int a, int b);

int main(void){
	int size;
	int pyramid[MAX_SIZE][MAX_SIZE];

	// Read a possitive integer value for size.
	// size <= 10
	printf("Enter number of rows: ");
	scanf("%d", &size);

	// Create a 2 dimensional array whereby first row has 1 element, second row 2 element etc.
	// * No of rows = no. of elements, max elements 10
	printf("Enter values for array: \n");

	scanTriangularArray(pyramid,size);


	printf("%d", maxPathValue(pyramid,size));

	return 0;
}
// Reads in numbers, place EACH number in the correct array and return the number of rows.
int scanTriangularArray(int arr[][MAX_SIZE],int size){
	int i, k;

	// row 1 = read once, row 2 = read twice, row 3 =  read 3 times
	// i = 0, scanf 1 time, so when i = 0 , run scanf when k < 1 (arr[0]) /end iter
	// i = 1, scanf 2 time, so when i = 1 , run scanf when k < 2 (arr[0]),arr[1] /end iter 

	for (i = 0 ; i < size; i++){

		for (k = 0; k < i+1; k++){
			scanf("%d", &arr[i][k]);

		}
		// printf("\n");


	}
	return size;

}

// Find the sum from bottom to top of the pyrimid that has the maximum sum.
// This is basically asking finding the biggest number in each row, add them together total+=max;
int maxPathValue(int arr[][MAX_SIZE],int size){
	int temp_sum,max,row,element;
	temp_sum = 0;
	sum = 0;


	// starting from second row
	for (row = 1; row < size; row++){

		for (element = 0; element < row; element++){
			//for each element , check from arr[row-1][elem 0 - row-1]

						
		}

	}
	
}

int max(int a, int b){
	if (b > a)
		return b

	return a
}
