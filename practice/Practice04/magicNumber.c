// magicNumber.c
// You must write a function get_magic().
#include <stdio.h>

int get_magic(int);
void print_magic(int);


int main(void) {
	int num1, num2;

    printf("Enter 1st value: ");
	scanf("%d" , &num1);	
	print_magic(get_magic(num1));
	

    printf("Enter 2nd value: ");
	scanf("%d", &num2);
	print_magic(get_magic(num2));
	
    return 0;
}

int get_magic(int num){

	int magic, sum = 0;

	
	// step 1 : retrieve the 1, 3, 5 digit from right to left
	
		// sum = digit1 + digit3 + digit 5
		sum += (num % 10 ) + (num / 100 % 10) + (num / 10000 );		

	// step 2: get the right-most digit of the sum
	return magic = sum % 10;	
}

void print_magic(int num){

	printf("Magic number = %d\n", num);

}
