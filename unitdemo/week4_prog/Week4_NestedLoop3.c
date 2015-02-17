// Week4_NestedLoop3.c
// Trace this program and determine the output without running it.
#include <stdio.h>

int main(void) {
	int p, q;

	for (p=0; p<6; p++) {
		if (p%2 == 0) {
			for (q=4; q>0; q--) 
				printf("p = %d, q = %d\n", p, q);
		}
		else {
			for (q=p; q<20; q+=5) 
				printf("p = %d, q = %d\n", p, q);
		}
	}

	return 0;
}

