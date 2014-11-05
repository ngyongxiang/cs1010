#include <stdio.h>
#define MAX_SIZE 10

void read_input(int arr[MAX_SIZE], int size);
int find_pair (int arr[], int size,int target, int *num1, int *num2);
int main(void){
	int size,target,num1,num2;
	int arr[MAX_SIZE] = {0};	
	// Given an array of integers storesd in ascending order. 
	// Given k, find one pair of integers in this array so that the sum of the pair equals k

	// findPair returns 1 if sum of arr[a] + arr[b] = k; // pass back the caller which are the two elements

	// if there is a solution, print the pair, if there is no solution print "No solution " . 

	printf("Please enter the number of elements: ");
	scanf("%d",&size);

	printf("Please enter %d integers: ",size);
	read_input(arr, size);

	printf("Please enter the target sum: ");
	scanf("%d",&target); 
	
	if (find_pair (arr, size,target, &num1, &num2)==1)
	
		printf("The pair of values are %d and %d.\n",num1,num2);
	else 
		printf("No solution!\n");
	return 0;
}

void read_input(int arr[MAX_SIZE],int  size){
	int i;
	for (i = 0; i <size ; i++){
		scanf("%d", &arr[i]);

	}	

}

int find_pair(int arr[], int size, int target, int *num1, int *num2){

	int i,k;

	for (i = 0 ; i < size; i++){

		for (k = i; k < size; k++){

			if (arr[i] + arr[k] == target){

				*num1 = arr[i];
				*num2 = arr[k];

				return 1;
			}
		}
	}
	return 0; // return 0 if the pair does not exist
}
