// Week3_quiz1.c
#include <stdio.h>

int f();

int main(void) {
	printf("Value returned = %d\n", f());
	return 0;
}

int f() {
	printf("A\n");
	return 1;
	printf("B\n");
	return 2;
	printf("C\n");
	return 3;
}

