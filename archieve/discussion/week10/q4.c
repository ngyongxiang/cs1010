// q4.c
#include <stdio.h>

int main(void) {
	char board[2][3] = { {'a','b','c'}, {'d','e','f'} };
	int i;

	for (i=0; i<2; i++)
		printf("%s\n", board[i]);

	return 0;
}

