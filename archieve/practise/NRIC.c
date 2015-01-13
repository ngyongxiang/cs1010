// This program computes NRIC check code.

#include <stdio.h>

char generateCode(int);

int main(void) {    
	int number;
	char code;

	printf("Enter 7-digit NRIC number: ");
	scanf("%d", &number);

	number=(number/1000000*2)+(number/100000%10*7)+(number/10000%10*6)+(number/1000%10*5)+(number/100%10*4)+(number/10%10*3)+(number%10*2);
	number%=11;
	number=11-number;
	

//	printf("number is %d\n",number);
	

	code = generateCode(number);

	printf("Check code is %c\n", code);
	return 0;
}

// This function generates the check code for NRIC num
char generateCode(int num) {
	char code;
	switch (num){
		case 1:
			code='A';
			break;
		case 2:
			code='B';
			break;
		case 3:
			code='c';
			break;
		case 4:
			code='D';
			break;
		case 5:
			code='E';
			break;
		case 6:
			code='F';
			break;
		case 7:
			code='G';
			break;
		case 8:
			code='H';
			break;
		case 9:
			code='I';
			break;
		case 10:
			code='Z';
			break;
		case 11:
			code='J';
			break;
												
	};


	return code;
}


