// q3a.c
#include <stdio.h>

int main(void) {
	char username[8];

	printf("Enter username: ");
	fgets(username, 8, stdin);

	printf("username = %s\n", username);

	return 0;
}

