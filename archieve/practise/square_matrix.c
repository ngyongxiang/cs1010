#include <stdio.h>
#define SIZE 10


// A square matrix is a two-dimensional array where the number of rows
// and the number of columns are the same.
// Read in values for an nxn square matrix containing integer values, and check 
// whether the matrix is (a) a diagonal matrix or (b) an upper-triangular
// matrix

// Diagonal matrix:
// check everything except :
// matrix[0][0]
// matrix[1][1]
// matrix[2][2]
// matrix[3][3]
int is_diagonal(int matrix[][SIZE], int size);
int is_upper_triangular();
void read_matrix(int matrix[][SIZE] ,int size);
void print_matrix(int matrix[][SIZE],int size);
int main(void){
	int matrix[SIZE][SIZE];
	int size;

	scanf("%d",&size);
	read_matrix(matrix, size);
	print_matrix(matrix,size);
	
	if (is_diagonal(matrix,size)){
		printf("Matrix is a diagonal matrix.\n");
		printf("Matrix is an upper triangular matrix.\n");
	}
	else{
		printf("Matrix is not a diagonal matrix.\n");
		if (is_upper_triangular(matrix, size)){
			printf("Matrix is an upper triangular matrix.\n");
		}else{
			printf("Matrix is not an upper triangular matrix.\n");
		}
	}

	return 0;
}


//read matrix
void read_matrix(int matrix[][SIZE] ,int size){
	int row,col;
	for (row = 0; row < size ;row++){
		for (col = 0 ; col < size; col++){
			scanf("%d", &matrix[row][col]);

		}
	}

}

// print matrix
void print_matrix(int matrix[][SIZE],int size){
	int row,col;
	printf("Matrix read:\n");
	for (row = 0; row < size ;row++){
		for (col = 0 ; col < size; col++){
			printf("%4d" ,matrix[row][col]);

		}
		printf("\n");
	}


}


// return 1 if is diagonal
int is_diagonal(int matrix[][SIZE], int size){
	int row, col;

	for (row = 0; row < size; row++){
			for (col = 0; col < size; col++){
				if ((col!=row) && (matrix[row][col]!=0)) return 0;
		}

	}

	return 1;
}


// return 1 if is upper_triangular
// Upper_triangular matrix
// matrix[4][4]
// check from 
// matrix[1][0]
// matrix[2][0-1]
// matrix[3][0-2]
// matrix[4][0-3]
// if any of above is not 0 return 0

int is_upper_triangular(int matrix[][SIZE], int size){
	int row, col;
	// skips row 1
	for (row = 1; row < size; row++){

		for (col = 0; col < row; col++){
			if (matrix[row][col] != 0) return 0;
		}
	}

	return 1;
}

