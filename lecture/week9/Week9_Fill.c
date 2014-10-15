// Week9_Fill.c
#include <stdio.h>
#include <string.h>
#define MAX_LINE_LEN 40
#define MAX_STR_LEN 10

int main(void) {	
	char str[MAX_STR_LEN + 1];
	int len;
	int num_lines;
	char line[MAX_STR_LEN + 1];

	printf("Enter string (between 1 and %d characters): ", MAX_STR_LEN);
	fgets(str, MAX_STR_LEN+1, stdin);
	len = strlen(str);
	if (str[len-1] == '\n') 
		str[len-1] = '\0';
	len = strlen(str);
	
	num_lines = MAX_LINE_LEN/len;

	// Fill in the code below
	int i;
	for (i = 0 ;i < num_lines; i++){
		strcat(line,str);
	}
	
	return 0;
	
}

