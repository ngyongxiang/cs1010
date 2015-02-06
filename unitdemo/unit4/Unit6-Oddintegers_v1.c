#include <stdio.h>

int main(void){	
	int num,sum;
	
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	
	sum =sum_multiples_of_3(num);

	printf("Sum = %d\n", sum);

	return 0;
}
/*
int sum_multiples_of_3(int num){
	int i, ans;
	ans = 0;
	for (i =1 ; i <= num; i++){
		if (i % 3 == 0)
			ans += i;
	}
	return ans;
}
*/

int sum_multiples_of_3(int num){

	int i, ans;
	ans = 0 ;
	for (i = 1, i <= num ; i*=3){
		ans+=i;
	}
	return ans;
}
