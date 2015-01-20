#include <stdio.h>
#include <ctype.h>

int main(void){
	char ch;

	printf("enter a character: ");
	ch = getchar();
	if (isalpha(ch)){
		if (isupper(ch)){

			printf("'%c' is a uppercase-letter.\n",ch);
			printf("Converted to lowercase: %c\n",tolower(ch));


		}
		if (islower(ch)){

			printf("'%c' is a lowercase-letter.\n",ch);
			printf("Converted to uppercase: %c\n", toupper(ch));

		}
	}

	if (isdigit(ch))printf("'%c' is a digit character.\n",ch );
	if (isalnum(ch))printf("'%c' is an alphanumeric character.\n",ch);
	if (isspace(ch)) printf("'%c' is a whitespace character.\n",ch);
	if (ispunct(ch)) printf("'%c' is a punctuation characer.\n",ch);
	return 0;
}
