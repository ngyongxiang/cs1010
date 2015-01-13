//Class:CS1010 AY2014/5 Semester 1
//Author: Xin Kenan
//Discussion Group: T32
//Date:
//Lab Session No:1
//Exercise:2
//Program Description:
/*
   Write a program box.c that reads three positive integers
   representing the length, width and height of a box,
   and computes (1) its surface area, and
   (2) the length of the diagonal between two vertices of
   the box that are furthest apart.
   You may assume that the surface area of the box
   does not exceed the maximum value representable in the int data type.
 */

#include <stdio.h>
#include <math.h>

// Declare function prototypes
double compute_diagonal(int,int,int);
int compute_surface_area(int,int,int);

int main(void){
	// Declare variables
	int length,width,height;

	// Display info and read user input
	printf("Enter length: ");
	scanf("%d",&length);

	printf("Enter width : ");
	scanf("%d",&width);

	printf("Enter height: ");
	scanf("%d",&height);

	//Display results;
	printf("Surface area = %d\n",compute_surface_area(length,width,height));
	printf("Diagonal = %.2f\n",compute_diagonal(length,width,height));

	return 0;
}

// Function definitions
int compute_surface_area(int len,int width,int height){
	return  (len*width+height*len+height*width)*2;
}

double compute_diagonal(int len,int width,int height){
	return (double)sqrt(pow(len,2.0)+pow(height,2.0)+pow(width,2));
}


