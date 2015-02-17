// Unit9_VoteCountArrayVer2.c
// Program to count votes for 30 candidates.
// This version uses the array initializer.
#include <stdio.h>
#define NUM_VOTES 1000     // number of votes
#define NUM_CANDIDATES 30  // number of candidates

int main(void) {
	int i, vote;
	int cand[NUM_CANDIDATES] = { 0 };

	printf("Enter votes:\n");
	for (i = 0; i < NUM_VOTES; i++) {
		scanf("%d", &vote);
		cand[vote-1]++;
	}

	for (i = 0; i < NUM_CANDIDATES; i++) {
		printf("candidate %d: total %d, %.2f%%\n",
				i+1, cand[i], (cand[i] * 100.0)/NUM_VOTES);
	}

	return 0;
}

