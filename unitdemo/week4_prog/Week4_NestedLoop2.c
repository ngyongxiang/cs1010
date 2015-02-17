// Week4_NestedLoop2.c
// Trace this program and determine the output without running it.
#include <stdio.h>

int main(void) {
	int x, y;

	for (x=10; x<30; x+=5) 
		for (y=x; y>4; y/=2) 
			printf("x = %d, y = %d\n", x, y);

	return 0;
}

