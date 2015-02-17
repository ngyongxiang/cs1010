// Week4_ListIntegers.c
// List integers between a and b (provided by user)
#include <stdio.h>

void list_integers_v1(int, int);
void list_integers_v2(int, int);

int main(void) {    
	int a, b;

	printf("Enter 2 integers a and b (a<=b): ");
	scanf("%d %d", &a, &b);
	list_integers_v1(a, b);
	list_integers_v2(a, b);

	return 0;
}

// List integers in the range [lower, upper]
// Precond: lower <= upper
void list_integers_v1(int lower, int upper) {
	int num;

	for (num=lower; num<=upper; num++) {
		printf("%d ", num);
	}
	printf("\n");
}

// Print integers in range [lower, upper]
// Precond: lower <= upper
void list_integers_v2(int lower, int upper) {
	while (lower <= upper) {
		printf("%d ", lower);
		lower++;
	}
	printf("\n");
}

