//  Unit3_Hypotenuse.c
//  Compute the hypotenuse of a right-angled triangle.
#include <stdio.h>
#include <math.h>

int main(void) {
	float hypot, side1, side2;  

	printf("Enter lengths of the 2 perpendicular sides: ");
	scanf("%f %f", &side1, &side2);

	// hypot = sqrt(side1*side1 + side2*side2);
	hypot = sqrt(pow(side1, 2) + pow(side2, 2));

	printf("Hypotenuse = %6.2f\n", hypot);

	return 0;
}

