// Unit6_Caution1.c
#include <stdio.h>

int main(void) {    
	double one_seventh = 1.0/7.0;
	double f = 0.0;

	while (f != 1.0) {
		printf("%f\n", f);
		f += one_seventh;
	}

	return 0;
}

