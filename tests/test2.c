#include <stdio.h>

int main(void){
	char c1,c2,c3;
	printf("Enter 2 character and hit enter:");
	c1=getchar();
	c2=getchar();

	fflush(stdin);
	printf("enter another character: \n");
	c3=getchar();
	fflush(stdin);

	putchar(c1);
	putchar(c2);
	putchar(c3);
	printf("There is supposed to be a blank line before this, if fflush works, there will not be a blank line");

	return 0;
}
