#include <stdio.h>

int sum_multiples_of_3(int);

int main(void){
	int num;
	printf("Enter a possitive integer: ");
	scanf("%d",&num);
	printf("Sum = %d \n",sum_multiples_of_3(num));

	return 0;
}
//Precond : num>0
int sum_multiples_of_3(int num){
	int i,sum;
	sum=0; // Always remember to initialise
	for (i=3;i<=num;i+=3){
		sum+=i;
	}
	return sum;
}