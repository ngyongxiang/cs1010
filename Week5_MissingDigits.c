#include <stdio.h>

int main(void) {
	int number, i,digit;
	int found[10] = {0}; 

	printf("Enter a number: ");
	scanf("%d", &number);
	printf("Missing digits in %d: ", number);


	while (number > 0) {
		digit=number%10;
		found[digit] = 1; 
		number /= 10;
	}

	for (i = 0; i < 10; i++) {
		if (found[i]==0)
			printf("%d ", i);
	}
	printf("\n");

	return 0;
}

