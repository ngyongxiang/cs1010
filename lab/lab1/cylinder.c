/**
 * CS1010 AY2014/5 Semester 1 Lab1 Ex2
 * box.c
 * This program reads radius and height in integers and computer surface area and volume
 * Xin Kenan
 * Tutorial 1
 */

#include <stdio.h>
#include <math.h>

#define PI 3.14

double compute_surface_area(int, int);
double compute_volume(int, int); 


int main(void) {

int radius , height;
double surface, volume;

	printf("Enter radius: ");
	scanf("%d", &radius);

	printf("Enter height: ");
	scanf("%d", &height);

	surface = compute_surface_area(radius, height);
	volume = compute_volume(radius, height);
	
	printf("Surface area = %.2f\n", surface);
	printf("Volume = %.2f\n", volume);

	return 0;
}


// calculate area of cylinder and return result
double compute_surface_area(int radius, int height){
	double result; 

	result = 2 * PI * radius * height + 2 * PI * pow(radius,2.0);

	return result;
}

// calculate volume of cylinder and return result
double compute_volume(int radius ,int height){
	double result; 
	
	result = PI * pow(radius,2.0) * height;


	return result;
}
