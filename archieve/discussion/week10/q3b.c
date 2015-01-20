// q3b.c
#include <stdio.h>
#include <string.h>

int main(void) {
	char fruitname[8] = "apple";

	strcpy(fruitname, "pineapple");
	printf("fruitname = %s\n", fruitname);

	return 0;
}

