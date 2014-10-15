#include <stdio.h>
#define MAX_SIZE 10


int scanTriangularArray(int arr[][MAX_SIZE], int size);
int maxPathValue(int arr[][MAX_SIZE],int rows);

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

	printf("What is size: %d\n",size);

	//printf("%d", maxPathValue(pyramid,size));

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
	return i;

}

// Find the sum from bottom to top of the pyrimid that has the maximum sum.
// This is basically asking finding the biggest number in each row, add them together total+=max;
int maxPathValue(int arr[][MAX_SIZE],int rows){
	printf("Rows is :%d\n",rows);	
	int total,max,i,k;
	total = 0;

	for (i = rows-1 ; i >=0; i--){
		//at begining of each row, init max by placing first element inside, then k can start from 1.
		max = arr[i][0];
		printf("Max: %d, i=%d\n",max,i);	
		// row 4,i need to be 3 => (if arr[i][k=1-3]> max) max = arr[i][1-3])* 4
		// row 3,i need to be 2 => (if arr[i][k=1-2]> max) max = arr[i][1-2])* 3 

		for (k = 1; k <=i; k++){
			if (arr[i][k] > max)
				max = arr[i][k];

		}
		// at the end of each element loop, add in sum to total;

		total+=max;

	}

	return total;
}
