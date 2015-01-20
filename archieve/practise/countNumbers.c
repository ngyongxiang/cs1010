// countNumbers.c
// To count the number of integers in the range [limit1, limit2]
// which are not divisible by divisor1 and divisor2
#include <stdio.h>

int count_numbers(int, int, int, int);
int is_distinct(int ,int);
int main(void) {    
	int divisor1, divisor2, limit1, limit2;

	do{
		printf("Enter 2 divisors: ");
		scanf("%d %d",&divisor1,&divisor2);
	}while(!is_distinct(divisor1,divisor2));

	do{
		printf("Enter lower and upper limits: ");
		scanf("%d %d",&limit1,&limit2);
	}while(!is_distinct(limit1,limit2)||limit1>=limit2);

	printf("Answer = %d\n",count_numbers(divisor1,divisor2,limit1,limit2));

	return 0;
}

int count_numbers(int divisor1,int divisor2,int limit1,int limit2){
	//counts the number of integers from limit 1 to limit 2, that are not divisible by both divisor1 and divisor2
	int i,counter;
	counter=0;
	for (i=limit1;i<=limit2;i++){
		if (i%divisor1!=0&&i%divisor2!=0)
			counter++;
	}
	return counter;
}

int is_distinct(int num1,int num2){
	return (num1!=num2 && num1>0 && num2>0);
}


