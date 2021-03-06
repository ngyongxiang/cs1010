/**
 * CS1010 AY2014/5 Semester 1 Lab2 Ex3
 * bisection.c
 * Xin Kenan 
 * T32 
 * This program takes in coeficients of a polynomial of degree 3:c3,c2,c1 and c0 ,and their end points a and b
 * and computes the root of a continuous function.
 */

#include <stdio.h>
#include <math.h>
#define THRESHOLD 0.0001

double polynomial(double, int, int, int, int);

int main(void) {
	int    c3, c2, c1, c0; // coefficients of polynomial
	double a, b,           		 // endpoints
		   pA, pB;         		 // function values at endpoints
	double m, pM;         		 // midpoint and function value at midpoint
	double fabs_ab;			     // absolute value of a and b

	//count=1; 			   	 	 // initiate var count for debugging

	printf("Enter coefficients (c3,c2,c1,c0) of polynomial: ");
	scanf("%d %d %d %d", &c3, &c2, &c1, &c0);


	printf("Enter endpoints a and b: ");
	scanf("%lf %lf", &a, &b);

	do {	
		//  fabs_ab have to be updated before new a or b val is assigned. 
		//	Otherwise, 1 loop is missing.
		fabs_ab=fabs(a-b);    

		// 	calculate midpoint
		m=(a+b)/2;

		/*  DEBUG OUTPUT		
			printf("#%d :",count);
			printf("a = %f  ; ",a);
			printf("b = %f  ; ",b);
			printf("m = %f   \n",m);
			find P(a), p(b),p(m)
		 */

		pA=polynomial(a,c3,c2,c1,c0);

		/*  
			DEBUG OUTPUT
			printf("p(a) = %f; ",pA);
		 */

		pB=polynomial(b,c3,c2,c1,c0);
		/*  
			DEBUG OUTPUT
			printf("p(b) = %f; ",pB);
		 */

		pM=polynomial(m,c3,c2,c1,c0);
		/*  DEBUG OUTPUT
			printf("p(m) = %f\n ",pM);
		 */

		//  replace m with a or b depends on sign or m
		if ((pM<0 && pA<0) || (pM>0&&pA>0)){
			a=m;
		}else if ((pM<0 && pB<0) || (pM>0 && pB>0)){
			b=m;	
		}
		/* 	DEBUG OUTPUT
			printf("a - b = %f\n", fabs(a-b));
			count++;
		 */
		
	}while(fabs_ab >= THRESHOLD && fabs(pM) != 0);


	printf("root = %f\n", m);
	printf("p(root) = %f\n", pM);

	return 0;
}

// Returns value of polynomial.
double polynomial(double val_x, int c3, int c2, int c1, int c){
	return (c3*pow(val_x,3)) + (c2*pow(val_x,2)) + (c1*pow(val_x,1)) +c;
}
