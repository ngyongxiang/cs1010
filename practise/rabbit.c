/**
 * rabbit.c 
 * A rabbit can jump at most 50 centimetres. It needs to cross a
 * river, with rocks positioned in a straight line in the river.
 * The program computes the minimum number of jumps for the rabbit
 * to cross to the other side of the river.
 */
#include <stdio.h>
#define MAX_JUMP 50

 int countJumps(int [], int);

 int main(void) {
	int num_rocks;            // including opposite bank
	int arr_rocks[20];
	printf("Enter number of rocks: ");
	scanf("%d", &num_rocks);
	int i;
	for (i=0;i<num_rocks;i++){
		scanf("%d",&arr_rocks[i]);
	}

	printf("%d",countJumps(arr_rocks,num_rocks));

	return 0;
}

// Counts the minimum number of jumps the rabbit needs
// to take to get to the other side of the river.
// Precond: size > 0
int countJumps(int rocks[], int size) {

	int i,position,stop_position,jumps,test_jump;
	stop_position=0;
	position=0; //this variable exists because starting position of rocks is 0. 
	test_jump=0;
	jumps=0;

	for (i=0;i<size;i++){
		if (rocks[i]-position>MAX_JUMP)
			return -1;
		else {
			//first we make a test jump from the last stop position
			test_jump=stop_position+MAX_JUMP;
			//if current position of rock is within reach, and the next rock is not within reach,then make a jump, if the rabit is reaching the end, there is no need to test whether the next rock is within reach arleady.
			if (rocks[i]<=test_jump&& (rocks[i+1]>test_jump ||i==size-1  )){
				jumps++;
				stop_position=rocks[i];
			}
		}
		//update position for next iteration.
		position=rocks[i];
	}
	return jumps; // this is just a stub; replace it with the correct value
}


