#include <stdio.h>

int get_magic(int number);

int main(void){

	int num1,num2;
	printf("Enter 1st value: ");
	scanf("%d",&num1);
	printf("Magic number = %d\n",get_magic(num1));	

	printf("Enter 2nd value: ");
	scanf("%d",&num2);
	printf("Magic number = %d\n",get_magic(num2));

	return 0;


}

int get_magic(int number){
	return ((number%10)+(number/100%10)+(number/10000))%10; 
}
