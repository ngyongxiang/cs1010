#include<stdio.h>

int isLeapYear(int);

int main(void){
	int year;
	printf("Enter the year: ");
	scanf("%d",&year);
    
	if (isLeapYear(year)==1){
		printf("%d is a leap year.\n",year);

	}
	else{
		printf("%d is not a leap year.\n",year);
	}
	return 0;
}

int isLeapYear(int yr){
	if ((yr%4==0&&yr%100!=0)||yr%4==0)
		return 1;
	else
		return 0;
}
