// Unit6_FindMax.c
// Keep reading in non-negative integers 
// and determine the maximum integer input by the user.

#include <stdio.h>

int main(void) {    
	int num, maxi = 0;

	printf("Enter a number: ");
	scanf("%d", &num);
	while (num >= 0) {
		if (maxi < num) {
			maxi = num;
		}
		printf("Enter a number: ");
		scanf("%d", &num);
	} 
	printf("The maximum number is %d\n", maxi);

	return 0;
}

