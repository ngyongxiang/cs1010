#include <stdio.h>
#define MAX_DIGITS 10

int main(void){
	int num, arr_found[MAX_DIGITS]= {0},i;

	printf("Enter a number: ");
	scanf("%d" ,&num);

	printf("Missing digits in %d: " , num);


	while (num > 0){
		arr_found[num % 10 ] = 1 ;
		num/=10;
	}
	
	for (i = 0; i<MAX_DIGITS; i++){
		if (!arr_found[i]){
			printf("%d", arr_found[i]);
		}
	}
	printf("\n");

	return 0;
}

