// countInputs.c
// To count the number of input values user entered.
#include <stdio.h>

int main(void) {    
	printf("Enter integers, terminate with ctrl-d\n");
	int count=0,number;
	while(scanf("%d", &number) == 1){
		count++;
	}
	printf("Number of values entered = %d\n",count);

	return 0;
}

