// This program computes NRIC check code.

#include <stdio.h>

char generateCode(int);

int main(void) {    
	int d1,d2,d3,d4,d5,d6,d7;
	int step1,step2,step3;
	char code;

	printf("Enter 7-digit NRIC number: ");
	scanf("%d", &number);

	d1=(number/1000000*2);
	d2=(number/100000%10*7);
	d3=(number/10000%10*6);
	d4=(number/1000%10*5);
	d5=(number/100%10*4);
	d6(number/10%10*3);
	d7=(number%10*2);
	step1=(d1*2)+(d2*7)+(d3*6)+(d4*5)+(d5*4)+(d6*3)+(d7*2);
	step2=step1%11;
	step3=11-step2;


//	printf("number is %d\n",number);
	

	code = generateCode(step3);

	printf("Check code is %c\n", code);
	return 0;
}

// This function generates the check code for NRIC num
char generateCode(int num) {
	char code;
	switch (num){
		case 1:code='A';break;
		case 2:code='B';break;
		case 3:code='c';break;
		case 4:code='D';break;
		case 5:code='E';break;
		case 6:code='F';break;
		case 7:code='G';break;
		case 8:code='H';break;
		case 9:code='I';break;
		case 10:code='Z';break;
		case 11:code='J';break;										
	};
	return code;
}


