// Week9_strtok.c
// This program illustrates the use of strtok().
// Taken from http://www.tutorialspoint.com/c_standard_library/c_function_strtok.htm
#include <string.h>
#include <stdio.h>

int main(void) {
	char str[80] = "This is - www.tutorialspoint.com - website";
	char s[2] = "-";
	char *token;

    /* get the first token */
	token = strtok(str, s);

	/* walk through other tokens */
    while (token != NULL) {
		printf("%s\n", token);
		token = strtok(NULL, s);
	}
	
    return 0;
}

