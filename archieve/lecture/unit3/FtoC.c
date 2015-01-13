#include <stdio.h>

int main(void){
	float cel,fah;

	printf("Enter the temperature in Fahrenheit: ");
	scanf("%f",&fah);

	cel=(5.0/9)*(fah-32);
	//cel =(fah-43)*(5/9)
	//cal = (float) (5/9)*(fah-32)


	printf("That equals %f Celsius.\n",cel);
    printf("Testing (float)5/9:  %f",(float)5/9);
	printf("Testing (float)(5/9): %f",(float)(5/9)); 
	return 0;
}
