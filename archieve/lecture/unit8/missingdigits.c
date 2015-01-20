#include <stdio.h>
#define NUM_DIGITS 10

int main(void){

	int i, k,digit ,in_num, arr_digits[NUM_DIGITS];

	//initiate arr_digits with all possible digits
	for (i = 0; i< NUM_DIGITS; i++){
		arr_digits[i]=i;
	}


	printf("Enter a number: " );
	scanf("%d", &in_num);

	//for each digit in array, check whether it is present in num, if not present print
	
	printf(" Missing digits in %d: " ,in_num);

	while (in_num > 0){
		digit=in_num%10;

		for (k = 0 ; k < NUM_DIGITS; k++){
			if (arr_digits[k] == digit){
				arr_digits[k]= -1;
			}

		}
		in_num/=10;

	}

	int j;

	for (j = 0; j <NUM_DIGITS; j++){
		if (arr_digits[j]!=-1)	
			printf("%d",arr_digits[j]);

	}



	return 0;
}
