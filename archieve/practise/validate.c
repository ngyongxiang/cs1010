// validate.c
// To read age from user, until the 
// age entered is valid (1 - 100).
#include <stdio.h>

int main(void) {    

    int age,count;
    count =0;
    do{
	printf("Enter age: ");
    scanf("%d",&age);
    count++;
	}while(age<1 || age >100);
	printf("Your age is %d.\n",age);

	printf("Number of attempts = %d\n",count);


	return 0;
}

