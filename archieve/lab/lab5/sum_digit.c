#include <stdio.h>

int main(void){

	printf("%d\n",sumDigits(342) );

	return 0;
}

int sumDigits(int n){

	int sum;
	if ( n /10 == 0){
		return n;
	}else{

		sum = (n%10)+ sumDigits((n/10));
		return sum;
	}
}