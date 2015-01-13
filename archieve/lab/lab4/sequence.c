/**
 * CS1010 AY2014/5 Semester 1 Lab4 Ex2
 * Given a 12x12 integer array, fill it with integers, and
 * find the longest sequence of a digit that appears in 
 * the array horizontally, vertically or diagonally.
 * Xin Kenan
 * T32
 */

#include <stdio.h>
#define DIM 12

// Fill in the function prototypes below
int scanBoard(int arr[][DIM]);


int main(void) {
	int board[DIM][DIM] = { {0} };
	int search_digit;     
	int length;           // length of the longest sequence of search digit
	int bestRow, bestCol; // where the longest sequence of search digit starts in the board

	// call scanBoard() 

	// call search()


	if (length > 0) {
		printf("Length of longest sequence = %d\n", length); 
		printf("Start at (%d,%d)\n", bestRow, bestCol);      
	}
	else
		printf("No such sequence.\n");

	return 0;
}

// read data into the board and the search digit, and return the serach digit.
int scanBoard(int arr[][DIM]) {
	int i,k, search_digit;
	// scan data
	for (i = 0 ; i < DIM; i ++){
		for (k = 0; k < DIM; k++){
			scanf("%d", &arr[i][k]);
		}

	}
	// scan search digit
	scanf("%d",&search_digit); 

}


// return the longest length of sequence of the search digit in the board, as well as the start position (row and col number) of the sequence.
int search(int search_digit, int *bestRow,int *bestCol,int arr[][DIM]) {
	int row,col,length,counter,prev_digit,curr_digit;
	length = 0;
	counter = 0 ;

	// search horizontally, vertically and diagonally.


	// horizontal search

	for (row = 0; row < DIM; row++){
		for (col = 1; col < DIM ; col++){
			curr_digit=arr[row][col];
			// if found search_digit count++,  
			// if current_digit!=prev_digit{reset count,update bestRow,Col, length)
			if (arr[row][col]==search_digit){
				// if counter is first element, or prev_digit = curr_digit.count++ 
				if (counter==0 || prev_digit==curr_digit ){
					counter ++ ;
				}
				else{
					// else reset counter and  update everything
					if (counter > length){
						bestRow = row;
						bestCol = col;
					}
				}
			}
			prev_digit=curr_digit;
		}
		}

	}

