/**
 * rabbit.c 
 * A rabbit can jump at most 50 centimetres. It needs to cross a
 * river, with rocks positioned in a straight line in the river.
 * The program computes the minimum number of jumps for the rabbit
 * to cross to the other side of the river.
 */

#include <stdio.h>
#define MAX_ROCKS 20

int countJumps(int [], int);

int main(void) {
	int num_rocks,arr_rocks[MAX_ROCKS];            // including opposite bank
	
	printf("Enter number of rocks: ");
	scanf("%d", &num_rocks);

	// Read in positions of rocks continously
	int i;
	for (i = 0; i < num_rocks ; i++  ){
		scanf("%d", &arr_rocks[i]);
	}

	printf("%d\n",countJumps(arr_rocks,num_rocks));


	return 0;
}

// Counts the minimum number of jumps the rabbit needs
// to take to get to the other side of the river.
// Precond: size > 0
int countJumps(int rocks[], int size) {

	int i,k,position,jump;
	position=0;
	jump=0;

	for (i=0 ; i < size; i++){
		if (rocks[i] <= position){
		
			k=i;
			// find the largest possible rocks[i] smaller than var position.
			while (rocks[k] < position){
				if (rocks[k] < position)
					k++;
					printf("Rocks[k] is %d; position is %d;\n",rocks[k],position);
				
			}

			i=k;
			jump++;
			position=rocks[i]+50;
		}
	}
	return jump; // this is just a stub; replace it with the correct value
}

