//Class:CS1010 AY2014/5 Semester
//Author: Xin Kenan
//Discussion Group: T32
//Date :
//Lab Session No : 1
//Exercise : 1
//Program Description:
/*
   This program calculates the final amount given principal amount,
   interest rate, and number of years, based on compound interest.
 */

#include <stdio.h>
#include <math.h>

int main(void){
	// Variable declaration
	int principal,rate,numYears;
	float money;
	float denominator,numerator; // let d be denumerator and n be numerator.

	// Display prompt and capture user input
	printf("Enter principal amount: ");
	scanf("%d",&principal);

	printf("Enter interest rate   : ");
	scanf("%d",&rate);

	printf("Enter number of years : ");
	scanf("%d",&numYears);

	// Computer the result
	numerator=(float)principal*(1-pow((rate/100.0),(float)numYears+1));
	denominator=1-(rate/100.0);
	money=numerator/denominator;

	// Print result
	printf("Amount = $%.2f\n",money);

	return 0;
}





