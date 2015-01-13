#include <stdio.h>
#define MAX_ROW 10
#define MAX_COL 10
// compute the sum and product of two matrices.

void scanMatrix(float [][MAX_COL], int, int);
void sumMatrix(float  [][MAX_COL], float[][MAX_COL],float[][MAX_COL],int ,int);
void prodMatrix(float [][MAX_COL], float [][MAX_COL], float [][MAX_COL], int, int, int);
void printMatrix(float [][MAX_COL], int, int);

int main(void){
	float matrixA[MAX_ROW][MAX_COL]; // input matrix 
	float matrixB[MAX_ROW][MAX_COL]; // input matrix
	float matrixC[MAX_ROW][MAX_COL];
	int matrixA_rows,matrixA_cols;
	int matrixB_rows,matrixB_cols;

	printf("Matrix A:\n");
	printf("Enter number of rows and columns: ");
	scanf("%d %d", &matrixA_rows, &matrixA_cols);
	scanMatrix(matrixA, matrixA_rows,matrixA_cols);	

	printf("Matrix B:\n");
	printf("Enter number of rows and columns: ");
	scanf("%d %d", &matrixB_rows, &matrixB_cols);
	scanMatrix(matrixB, matrixB_rows,matrixB_cols);	

	if ((matrixA_rows==matrixB_rows) && (matrixA_cols==matrixB_cols)){
		sumMatrix(matrixA, matrixB, matrixC, matrixA_rows, matrixA_cols);
		printf("Sum matrix:\n");
		printMatrix(matrixC, matrixA_rows, matrixA_cols);
	}
	else {
		printf("Unmatched dimensions; cannot be added.\n");
	}

	if (matrixA_cols == matrixB_rows){

		prodMatrix(matrixA, matrixB, matrixC , matrixA_rows, matrixA_cols, matrixB_cols);	
	    printf("Product matrix:\n");
		printMatrix(matrixC, matrixA_rows, matrixB_cols);
	}
	else {
			printf("Unmatched dimensions; cannot be multiplied.\n");
		}
	return 0;

}

// read values into mtx
void scanMatrix(float mtx[][MAX_COL], int row_size, int col_size){
	int row, col;
	printf("Enter values for matrix:\n");

	for (row = 0 ; row < row_size; row++){

		for (col = 0; col < col_size; col++){

			scanf("%f", &mtx[row][col]);
		}
	}

}


void sumMatrix(float mtxA[][MAX_COL], float mtxB[][MAX_COL],float mtxC[][MAX_COL],int row_size ,int col_size){
	int row, col;
	for (row = 0; row < row_size; row++){
		for (col = 0; col < col_size; col++){
			mtxC[row][col] = mtxA[row][col] + mtxB[row][col];	
		}
	}
}


void prodMatrix(float mtxA[][MAX_COL], float mtxB[][MAX_COL], float mtxC[][MAX_COL], int mtxA_rows, int mtxA_cols, int mtxB_cols){

	int i, k, j;
	float sum;
	
	for (i = 0 ; i< mtxA_rows; i++){

		for (k = 0 ; k < mtxB_cols; k++){
	
			sum = 0;

			for (j = 0; j < mtxA_cols; j++){
				sum = sum + (mtxA[i][j] * mtxB[j][k]);
				//printf("%d ,%d + %d, %d, values : %f, %f",i,j,j,k, mtxA[i][j],mtxB[j][k] );
				//printf("\n");
			}

			mtxC[i][k] = sum;
			//printf("sum is : %f\n" , sum);
		}
	}

}

// To print values of mtx
void printMatrix(float mtx[][MAX_COL], int row_size, int col_size) {
	int row, col;

	for (row=0; row<row_size; row++) {
		for (col=0; col<col_size; col++) 
			printf("%.2f\t", mtx[row][col]);
		printf("\n");
	}
}

