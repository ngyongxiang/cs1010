#include <stdio.h>
#define MAX_ROW 20
#define MAX_COL 20

void print_matrix(int[][MAX_COL],int);
void rotate(int[][MAX_COL], int);
void read_matrix(int[][MAX_COL],int);


int main(void)
{	
	int matrix[MAX_ROW][MAX_COL],size;

	//read the matrix and size here
	scanf("%d", &size);
	read_matrix(matrix,size);
	printf("=========== Before ==========\n");
	print_matrix(matrix,size);


	rotate(matrix, size);

	printf("=========== After ==========\n");
	print_matrix(matrix, size);

	return 0;
}

// printfs N * N  matrix 
void print_matrix(int matrix[][MAX_COL], int size)
{
	//print the matrix here	
	int i, k;
	for (i = 0; i < size; i++){
		for ( k = 0; k < size; k++){
			printf("%d ", matrix[i][k]);
		}
		printf("\n");
	}

}


// rotate matrix 90 degree clockwise
void rotate(int matrix[][MAX_COL],int size) 
{	
	//rotate the matrix here
	//step 1:  transpose
}

// read matrix
void read_matrix(int matrix[][MAX_COL],int size){
	int i, k;
	for (i = 0; i < size; i++){
		for ( k = 0 ; k < size; k++){
			scanf("%d", &matrix[i][k]);
		}
	}

}
