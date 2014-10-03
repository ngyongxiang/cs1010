#include<stdio.h>

int isAscending(int num1,int num2,int num3);

int main (void){
	
	int num1,num2,num3;

	printf("Enter 3 positive integers: ");
	scanf("%d %d %d",&num1,&num2,&num3);

	printf("The integers are %d, %d and %d\n",num1,num2,num3);

	if (isAscending(num1,num2,num3))
		printf("Yes\n");
	else
		printf("No\n");
	
	return 0;

}

int isAscending(int num1,int num2, int num3){
	
	num1=num1/100%10;
	num2=num2/100%10;
	num3=num3/100%10;
	
	if (num1<num2&&num2<num3){
		return 1;
	}
	return 0;

}

