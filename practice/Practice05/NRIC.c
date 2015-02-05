// NRIC.c
// This program computes NRIC check code.
#include <stdio.h>

char generateCode(int);
int get_weigh(int);

int main(void) {    
	int number;
	char code;

	printf("Enter 7-digit NRIC number: ");
	scanf("%d", &number);

	code = generateCode(number);

	printf("Check code is %c\n", code);

	return 0;
}

// This function generates the check code for NRIC num
char generateCode(int num) {
	int check_sum;
	char code;
	// step 1 get weigh * num;
	// step 2 divide weigh by 11 to obtain reminder
	// step 3 subtract result from 11
	check_sum =11 - get_weigh(num) % 11;	
	
	// step 4 generate code
	switch (check_sum){

		case 1:
			code = 'A';
			break;
		case 2:
			code = 'B';
			break;
		case 3:
			code = 'C';
			break;
		case 4:
			code = 'D';
			break;
		case 5:
			code = 'E';
			break;
		case 6:
			code = 'F';
			break;
		case 7:
			code = 'G';
			break;
		case 8:
			code = 'H';
			break;
		case 9:
			code = 'I';
			break;
		case 10:
			code = 'Z';
			break;
		case 11:
			code = 'J';
			break;

	}

	return code;
}

// get product of digit * weight 
int get_weigh(int num){

	int weigh = 0;
		
		weigh += num %10 			 *2	   	+ 
				 num /10	  % 10   *3    	+ 
				 num /100	  % 10	 *4		+  
				 num /1000    % 10 	 *5		+ 
				 num /10000   % 10	 *6		+ 
				 num /100000  % 10	 *7		+ 
				 num /1000000		 *2 ;	
	
	return weigh;
}
