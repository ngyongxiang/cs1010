/*
 * S1010 AY2014/5 Semester 1 Lab2 Ex2
 * square_free.c
 * Xin Kenan
 * T32
 * This program takes in 2 sets of integers, compute the number of 
 squre-free integers in the range defined by each set, compare
 and report which range has more square-free integers.
 */

#include <stdio.h>

int find_sqrfree(int ,int );
int sqr_num_test(int );
int compare_num(int ,int );

int main(void) {
	int lower1, upper1, lower2, upper2,num_range1,num_range2; //num_range1,num_range2 = number of squre free numers.

	printf("Enter four positive integers: ");

	scanf("%d %d %d %d",&lower1,&upper1,&lower2,&upper2);

	num_range1=find_sqrfree(lower1,upper1);
	num_range2=find_sqrfree(lower2,upper2);

	switch (compare_num(num_range1,num_range2)){
		case 0:
			printf("Both ranges have the same number of square-free numbers: %d\n",num_range1);
			break;
		case 1:
			printf("Range [%d, %d] has more square-free numbers: %d\n",lower1,upper1,num_range1);
			break;
		case 2:
			printf("Range [%d, %d] has more square-free numbers: %d\n",lower2,upper2,num_range2);
			break;
		default:
			printf("Something went wrong.");
	}

	return 0;
}



// Calls sqr_num_test function and sum returned values together (only square num returns 1, otherwise sqr_num_test returns 1).
int find_sqrfree(int lower,int upper){
	int i,sqrfree_count;

	sqrfree_count=0;

	for (i=lower;i<=upper;i++){
		sqrfree_count+=sqr_num_test(i);
	}

	return sqrfree_count;
}


// This function returns 0 if the number is divisible by square num, 1 otherwise.We started from 2 instead of 1
// because "a square_free number is divisible by no square number except 1."
int sqr_num_test(int num){
	int k;
	// k = num/2 because k*k will not be divisible by num if k>num/2,
	//therefore we can conclude directly that num is square-free.eg,num=4,k=num/2+1,k*k=9, 4 is not dvivisible by 9.  
	for (k=2; k<=num/2; k++){ 
		if (num % (k * k ) ==0 ){
			return 0;
		}
	}
	return 1;
}


// Return 1 if num1 is bigger, return 2 is num2 is bigger
// If they are equal. return 0
int compare_num(int num1,int num2){
	if (num1==num2){
		return 0;
	}else if (num1 > num2){
		return 1;
	}else {
		return 2;
	}
}


