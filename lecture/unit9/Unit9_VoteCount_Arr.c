#include <stdio.h>
#define MAX_VOTES 1000
#define NUM_CANDIDATES 50

int main(void){

	int vote , i;

	int candidates[NUM_CANDIDATES] = {0};
	vote = 0;
	i = 0;
	
	while(i < MAX_VOTES){
		
		printf("Please enter candidate number (1 - 50 ) :\n " );
		scanf ("%d" , &vote ) ;
		
		candidates[vote - 1 ]++ ;
	
		i++;

	}
	for (i = 0; i < NUM_CANDIDATES ; i++ ){
		printf("Candidate %d : total %d, %.2f%%\n", i + 1, candidates[i], (candidates[i] * 100.0) / MAX_VOTES);
	}
	return 0;

}
