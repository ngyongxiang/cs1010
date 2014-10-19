#include <stdio.h>
#include <ctype.h>

int main(void){
	char ch;

	printf("enter a character : ");
	ch = getchar();

	if (isalpha(ch)){
		if (isalpha(ch)){
			printf(" '%c' is a uppercase-letter. \n", ch);
			printf("Converted to lowercase : %c\n", tolower(ch));

		}
		if (islower(ch)){
			printf(" '%c' is a lowercase - letter.\n", ch);
			printf("Converted to upperchase :%c\n" ,toupper(ch));

		}
	}



	return 0;	
}
