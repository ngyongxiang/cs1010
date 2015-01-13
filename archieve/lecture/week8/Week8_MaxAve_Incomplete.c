// Week8_MaxAve_Incomplete.c
// This program computes the maximum and average of 
// 3 integer values in a single function.
#include <stdio.h>

void max_and_average(int, int, int,int * , int *); 

int main(void) {
	int num1, num2, num3;
	float ave,max;



	printf("Enter 3 integers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	

	printf("Maximum = %d\n",     );
	printf("Average = %.2f\n",      );

	return  0;
}

// Computes the maximum and average of 3 integers
void max_and_average(int n1, int n2, int n3,int *max_ptr, float *ave_ptr){
	*maxPtr = n1;
	if (n2 > *maxPtr)
		*maxPtr = n2;
	if (n3 > *maxPtr)
		*maxPtr = n3;
	
	*avePtr=( n1+n2+n3)/3;



}












