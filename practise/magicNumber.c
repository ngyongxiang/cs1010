#include <stdio.h>
#define MAXDIGITS 5
int main(void){

	int num1,num2;
	int i=MAXDIGITS -1;
 

    printf("Enter 1st value: ");
    scanf("%d",&num1);
	int array1[MAXDIGITS];
	printf("%d",num1);
	while(num1>0){
		printf("%d",&num1);
		array1[i--]=num1%10;
		num1/=10;
	};
	return 1;




}
