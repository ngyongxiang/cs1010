#include <stdio.h>


int main(void){

	char grade = 'A',newgrade,ch;
	int value;

	printf("grade = %c\n", grade );
	newgrade = grade + 2;
	printf("newgrade = %c\n", newgrade );
	printf("newgrade = %d\n", newgrade);

	value= 65;

	printf("value = %d\n" ,value);
	printf("value = %c\n" ,value);

	if ('A' < 'c')
		printf(" 'A' is less than 'c'\n");
	else
		printf(" 'A'  is not less than 'c'\n");
	
	for (ch = 'p'; ch<= 't'; ch++)
		printf("ch = %c\n", ch);



	return 0;


}

