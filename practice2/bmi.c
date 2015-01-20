#include <stdio.h>

int main(void){
	float weight,height,bmi;

	printf("Please enter your weight and height: ");
	scanf("%f %f", &weight,&height);
	
	bmi = weight / (height *height); 
	printf("BMI = %.6f\n", bmi);
	
	return 0;

}
