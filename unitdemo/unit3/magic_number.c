#include <stdio.h>

int main(void){
	int num1,  num2, magic; 

	printf("Enter the 1st value: ");
	scanf ("%d" , num1 ); 
	magic =	get_magic(num1);
	printf("Magic number = %d", magic);

	
	printf("Enter 2nd value : ");
	scanf("%d" , num2 );
	magic = get_magic(num2);
	printf("Magic number = %d", magic);

	
	


}


//  take in a number and return the magic number 
int get_magic( int num) {
	int magic;
	magic = num %10; // digit in position 1.
	magic += num %1000 / 100;
	magic += num %100000;
	


	return magic;
}

/* int get_magic ( int value){
 * 	int digit1, digit3, digit5,sum; 
 * 	int remainingNo;
 * 	digit1 = value %10; 
 * 	digit3 = (value / 100 ) % 10; 
 * 	digit5 = (value /10000) % 10;// 10 here is redundant 
 *	sum = digit1 + digit2 +digit3;
 *	return sum%10;
 */

/*int get_magic ( int value) {
 *	int digit1, digit3, digit5, sum;
 *	int remainingNo;
 *
 *	digit1 = value %10 ;
 *	remainingNo = remainingNp / 10;
 *	digit3 = remainingNo % 10;
 *	remainingNo = remainingNo / 10;
 *	digit5 = remainingNo %10;
 *	Sum =  digit1 + digti2 + digit3;
 *
 *	return sum%10;
 *
 *
 *
 * }
 *
 *
 *
 *
 *
 *
 *
 */
