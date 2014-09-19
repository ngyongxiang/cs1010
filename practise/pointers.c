#include <stdio.h>
#include <math.h>

int main(void){
	int a, *a_ptr;
	float b,*b_ptr;

	a_ptr=&a;
	b_ptr=&b;

	printf("Enter an integer: ");
	scanf("%d", &a);
	printf("Enter a real number: ");
	scanf("%f", &b);
	printf("Values entered are %d and %.2f\n", *a_ptr,*b_ptr);

	// multiply a by b and assign value to a while a<b^2
	// access to a and b are done only through pointers
	while (*a_ptr<pow(*b_ptr,2)){
		*a_ptr=*a_ptr* b;

	}

	printf("Final value of a = %.2d\n",*a_ptr);

	return 0;
}

