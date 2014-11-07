#include <stdio.h>
#define MAX_ELEMENTS 10

int binarySearch(int [] ,int, int)

int main(void){
	int list[MAX_ELEMENTS], search_key;



	return 0;
}


int binarySearch(int arr[], int size, int key){
	
	int low = 0,high = size -1 ; mid = (low + high)/2;

	while ((low <=high) && ( arr[mid] != key)){
		if ( key < arr[mid] ){
			high = mid - 1;
		}else if (key > arr[mid])
			low = mid + 1;
	}
	mid = (low + high) / 2;


}

void scanArray(int arr[], int size){


	int i;
	printf("Enter %d values: " , size);
	for (i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
}

void printArray(int arr[], int size){
	int i;
	for (i = 0; i <size; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
}