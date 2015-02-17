// Unit6_CommonErrors3.c
#include <stdio.h>

int main(void) {    
	int z = 3;

	while (z = 1) {
		printf("z = %d\n", z);
		z = 99;
	}

	return 0;
}

