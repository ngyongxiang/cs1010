#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 100;

int main(void){
	char str[LEN+1],newstr[LEN+1];
	int i , len;

	printf("Enter a string: ");
	fgets(str, LEN+1,stdin);
	len = strlen(str);

	if (str[len -1] == '\n')
		str[len-1] = '\0';

	len = strlen(str);
	
	for (i = 0; i < len ; i ++){
		switch (toupper(str[i])) {
			case 'A': case 'E':
			case 'I': case 'O': case 'U';break;
			default : newstr[count++] = str[i];

		}

	}

	newstr[count] = '\0'; 
	printf("New string : %s\n". newstr);


	return 0;
}
