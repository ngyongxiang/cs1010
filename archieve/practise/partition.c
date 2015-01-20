#include <stdio.h>
#define MAX_SIZE 20

// ask user to input 
//1. number of elements of an integer array
//2. value of each element into an array
// ask for a certain pivot value to partition the array such that
// all elements whose values are less than pivot are moved to the left of 
// all elements whoe values are greater than or equal to pivot. 
// print the modified array.


int main(void){
	int size ,i,k,pivot = 0,temp =0;
	int arr[MAX_SIZE]={0};

	printf("Enter the number of elements: ");
	scanf("%d" , &size);

	printf("Enter %d integers: ",size);

	for (i = 0; i < size; i++) {
		scanf("%d", &arr[i]);

	}

	printf("Enter pivot: ");
	scanf("%d",&pivot);

	// all elements less than pivot are moved to the left
	// all elements greater or equal to pivot are on the right.

	for (i = 0; i< size; i++){
		if (arr[i] >= pivot){

			// go through the list , find a num smaller than pivot and swap them.
			for (k = i; k < size; k++){
				if (arr[k] < pivot){
					temp   =  arr[k];	
					arr[k] = arr[i];
					arr[i] = temp;
				}

			}

		}

	}


	for (i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
