/**
 * CS1010 AY2014/5 Semester 1 Lab3 Ex1
 * estimatePi.c
 * This program reads in a list of n distinct integers and
 * computes the estimate value for pi.
 * This program uses an external GCD function (provided in gcd.o).
 * Xin Kenan
 * T32
 */

#include "gcd.h"
#include <stdio.h>

#define MAX_INTS 50 

double pi(int [], int);
int arr_nums[MAX_INTS]={0};

int main(void) {

	int size,i;

	//precon: size > 0
	scanf("%d",&size);

	for (i = 0; i < size; i++){
		scanf("%d",&arr_nums[i]);
	}


	return 0;
}

// Reads in an int array that contains the values and size of the array and returns estimated value of pi.

double pi(int arr[], int size) {

	return 1.2345; // Just a stub; replace it with the correct answer
}
