// Unit4_FunctionEg.c
#include <stdio.h>
#include <math.h>

/* Function prototype placed at top of program */
double sqrt_sum_square(double, double);

int main(void) {    
	double y = 1.23;   // not the same as y in sqrt_sum_square
	double z = 4.56;

	// x below has nothing to do with x in sqrt_sum_square
	double x = sqrt_sum_square(y, z);
	// in the previous statement, y and z are actual parameters

	printf("The square root of the sum of squares ");
	printf("of %.2f and %.2f is %.2f\n", y, z, x);

	return 0;
}

/*
 * Finds the square root of the 
 * sum of the squares of the two parameters
 * Precond: x and y are non-negative numbers
 */
double sqrt_sum_square(double x, double y) {
	// x and y above are the formal parameters

	double sum_square;  // local variable declaration

	sum_square = pow(x,2) + pow(y,2);
	return sqrt(sum_square);    
}

