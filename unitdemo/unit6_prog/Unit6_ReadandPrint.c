// Unit6_ReadandPrint.c
// Keep reading in a non-negative integer and printing it out. 
// Stop reading when a negative integer is read in.
#include <stdio.h>

int main(void) {    
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);
	while (num >= 0) {
		printf("You entered: %d\n", num);
		printf("Enter a number: ");
		scanf("%d", &num);
	}

	return 0;
}

