#include <stdio.h>

int sum_multiples_of_3(int);

int main(void){
	int num;
	printf("Enter a possitive integer");
	scanf("%d",&num);
	printf("Sum = %d \n",sum_multiples_of_3(num));

	return 0;
}
//Precond : num>0
int sum_multiples_of_3(int num){
	int i,sum;
	for (int i=1;i<num;i++){
		if (i%3==0){
			sum+=i;
		}
	}
	return sum;
}