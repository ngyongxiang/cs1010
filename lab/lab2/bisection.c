/**
 * CS1010 AY2014/5 Semester 1 Lab2 Ex3
 * bisection.c
 * Xin Kenan 
 * T32 
 * This program takes in coeficients of a polynomial of degree 3:c3,c2,c1 and c0 ,and their end points a and b
 * and computes the root of a continuous function.
 */

#include <stdio.h>

// Given function prototype must not be changed
double polynomial(double, int, int, int, int);

int main(void) {
	int    c3, c2, c1, c0; // coefficients of polynomial
	double a, b,           // endpoints
		   pA, pB;         // function values at endpoints
	double m, pM;          // midpoint and function value at midpoint

	printf("Enter coefficients (c3,c2,c1,c0) of polynomial: ");
	scanf("%d %d %d %d", &c3, &c2, &c1, &c0);

	printf("Enter endpoints a and b: ");

	printf("root = %f\n", m);
	printf("p(root) = %f\n", pM);

	return 0;
}



