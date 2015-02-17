// Unit5_CommonErrors3.c
#include <stdio.h>

int main(void) {    
	int a, b;

	printf("Enter a and b: ");
	scanf("%d %d", &a, &b);

	if (a > 10)
		if (b < 9)
			printf("Hello\n");
	else
		printf("Goodbye\n");

	return 0;
}

