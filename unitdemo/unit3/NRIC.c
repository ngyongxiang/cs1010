#include <stdio.h>

char generateCode(int);

int main(void){
	int nric;
	char check_code;
	printf("Enter 7-digit NRIC number: ");
	scanf("%d",&nric); 
	check_code = generateCode(nric);	
	printf("Check code is %c",check_code); 
	return 0;
}


// takes in NRIC and returns check code
char generateCode(int nric){
	int check_sum;
	
	//first digit
	check_sum =  nric /1000000 * 2;
	//second digit
	check_sum += (nric/100000 %10) *7;
	//third digit
	check_sum += (nric/10000 %10) * 6;
	//fourth digit
	check_sum += (nric/1000 %10) *5;
	//fifth digit
	check_sum += (nric/100 % 10) * 4;
	//sixth digit
	check_sum += (nric/10 %10) * 3;
	// last digit
	check_sum += (nric %10) * 2; 

	check_sum %= 11;
	
	check_sum = 11- check_sum;

	switch (check_sum){

		case 1:
			return 'A';
		case 2:
			return 'B';
		case 3:
			return 'C';
		case 4:
			return 'D';
		case 5:
			return 'E';
		case 6:
			return 'F';
		case 7:
			return 'G';
		case 8:
			return 'H';
		case 9:
			return 'I';
		case 10:
			return 'Z';
		case 11:
			return 'J';
	}
	return 0;

}
