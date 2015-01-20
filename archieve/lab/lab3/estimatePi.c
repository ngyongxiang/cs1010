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
#include <math.h>

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

	printf("Estimated pi = %.4f\n",pi(arr_nums,size));


	return 0;
}

// Reads in an int array that contains the values and size of the array and returns estimated value of pi.

double pi(int arr[], int size) {
	
	int count_nocf,count_sets,i,k;
	count_nocf=0;
	count_sets=0;
	for (i = 0; i < size; i++){
		for (k=i+1; k < size ;k++){
			if (gcd(arr_nums[i],arr_nums[k])==1){
				count_nocf++;
			}
			//printf("GCD %d\n:", gcd(i,k));			
			//printf("i: %d k: %d\n", i,k);

			count_sets++;
		}
	}
	//printf("Count sets: %d\n ", count_sets);
	//printf("Count nocf: %d\n ", count_nocf);
	return sqrt(6.0/((double)count_nocf/count_sets)) ;
}
