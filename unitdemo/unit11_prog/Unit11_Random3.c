// Unit11_Random3.c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int seed, i;

	printf("Enter seed: ");
	scanf("%d", &seed);
	srand(seed); // feed srand() with a new seed

	for (i = 1; i <= 10; i++)
		printf("%d\n", rand()%400 + 101);

	return 0;
}

