// Unit9_VoteCount.c
// Program to count the votes for Tom, Dick and Harry.
#include <stdio.h>
#define NUM_VOTES 1000     // number of votes

int main(void) {
	int i, vote, tom = 0, dick = 0, harry = 0;

	printf("Enter votes:\n");
	for (i = 0; i < NUM_VOTES; i++) {
		scanf("%d", &vote);
		switch (vote) {
			case 1: tom++; break;
			case 2: dick++; break;
			case 3: harry++; break;
		}
	}
	printf("Tom: %d; Dick: %d; Harry: %d\n", tom, dick, harry);

	return 0;
}

