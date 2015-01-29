/**
 * CS1010 AY2014/5 Semester 2 Lab1 Ex1
 * area.c
 * This program calculates the area of trapezoid given the lengths of each base,the height of trapezoid
 * Xin Kenan
 * Tutorial 1
 */

#include <stdio.h>


int main(void) {
	int b1, b2, height;
	double area;


	printf("Enter b1: ");
	scanf("%d", &b1);

	printf("Enter b2: ");
	scanf("%d" , &b2);

	printf("Enter height: ");
	scanf("%d", &height);

	area = (b1 + b2) /2.0 * height;

	printf("Amount = %.2f\n", area);

	return 0;
}

