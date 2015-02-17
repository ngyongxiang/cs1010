// Week6_SumToRandomPos.c
// This program reads integer values into a 2D array
// and sums elements from position [0][0] to a
// random position [upToRow][upToCol], in row-major order.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_ROWS 5    
#define MAX_COLS 8

void scanArray(float [][MAX_COLS], int, int);

int main(void) {
	float array[MAX_ROWS][MAX_COLS];
	int rows, cols;

	printf("Enter rows and columns: ");
	scanf("%d %d", &rows, &cols);
	scanArray(array, rows, cols);

	// call sumPartial() function below

	srand(time(NULL));
	upToRow = rand()%row;
	upToRow = rand()%col;

	printf("Sum to position [%d][%d] = %.2f\n"); // incomplete 

	return 0;
}

// Read in values for arr
void scanArray(float arr[][MAX_COLS], int rows, int cols) {
	int r, c;

	printf("Enter %d values:\n", rows * cols);
	for (r=0; r < rows; r++)
		for (c=0; c < cols; c++)
			scanf("%f", &arr[r][c]);
}

float sumPartial(float arr[][MAX_COLS],int rows,int cols, int upToRow, int upToCol){

	float sum = 0 ;
	int r,c;
	for (r = 0; i < upToRow; r++){
		for (c = 0 ; c < cols ; c ++)
			sum+=arr[r][c];
	}

	for (c = 0; c < upToCol; c++){
		sum += arr[upToRow][c];
	}

	return sum;
}

// Sum elements from position [0][0] to a random 
// position [upToRow][upToCol].
// Fill in sumPartial() function below.


