// magic_square.c
// To generate a magic square for nxn matrix (n is odd integer)

#include <stdio.h>
#define MAX_SIZE 15

void printMagic(int [][MAX_SIZE], int);
void generateMagic(int [][MAX_SIZE], int);

int main(void) {
	int magic[MAX_SIZE][MAX_SIZE] = { {0} }; 
	int size; 

	printf("Enter size of matrix: ");
	scanf("%d", &size);
	printf("%d\n", size);
	generateMagic(magic, size);
	printMagic(magic, size);

	return 0;
}

// To generate the magic square
void generateMagic(int arr[][MAX_SIZE], int size) {
	// put number 1 in the first row
	int row = 0, col = size/2;
	int count = 1;
	int orig_row,orig_col;
	arr[row][col]=count++;
	while (count <= (size * size)){
		// try move up and to the right. 
		if (row > 0){
			orig_row=row;
			row --;

		}else{
			orig_row=row;
			row = size -1;
		}

		if (col < (size-1)){
			orig_col=col;
			col ++;
		}else{
			orig_col=col;
			col = 0;
		}
		if (arr[row][col] == 0){
			arr[row][col] = count++;
		}else{
			row = orig_row;
			col = orig_col;
			row++;
			if (row > (size-1)){
				row = 0;
			}
			arr[row][col]=count++;
		}

	}

}

// To print the magic square
void printMagic(int arr[][MAX_SIZE], int size) {
	int row, col;

	for (row=0; row<size; row++) {
		for (col=0; col<size; col++) 
			printf("%5d", arr[row][col]);
		printf("\n");
	}
}


