#include <stdio.h>
#include <stdlib.h>
#define MAX_DIGITS 10

int findMax(int arr[],int size);
int sum(int arr[], int size);
int sumAlt(int arr[], int size);
int sumOdd(int arr[],int size);
int sumLast3(int arr[],int size);
int minPairDiff(int arr[], int size);
int maxDiffArraySort(int arr[] ,int size);

int main(void){
	//declarations;
	int arr[10]={0} , size= 0 ,i ;
	
	printf("Enter the size: ");
	scanf("%d",&size);
	
	printf("Enter %d numbers: ",size);
	for (i = 0; i <size; i++)
		scanf("%d" ,&arr[i]);
	
	printf("The Maximum value is : %d\n" , findMax(arr, size));
	printf("The sum of all the numbers is:  %d\n" , sum(arr, size));	
	printf("The sum of alternate elements is: %d\n",sumAlt(arr,size)); 
	printf("Tne sum of all odd numbers is : %d\n", sumOdd(arr,size));
	printf("The sum of last 3 elements is: %d\n" ,sumLast3(arr,size));
	printf("The minimum diff is : %d\n" ,minPairDiff(arr,size));
	printf("The minimum diff is (using array): %d\n", maxDiffArraySort(arr,size));
	return 0;
	
}

//take in array , return maximum value
int findMax(int arr[] , int size){
	int k,max = 0;
	for (k = 0; k < size; k++ ){
		if (arr[k]>max)
			max=arr[k];
	}
	return max;
}

int sum(int arr[] , int size){
	int sum = 0 ,i;
for (i = 0; i<size; i++){
		sum+=arr[i];

	}

	return sum;
}

int sumAlt(int arr[], int size){

	int sum = 0 ,i ;
	for (i = 0; i < size; i+=2){
		sum+=arr[i];
	}
	return sum;
}

int sumOdd(int arr[] ,int size){
	int sum = 0, i;

	for (i = 0; i < size; i++){
		if (arr[i]%2!=0 || arr[i]==1){
			sum+=arr[i];
		}

	}

	return sum;

}

int sumLast3(int arr[], int size){
	int sum = 0, i,counter;
	counter=size - 1;
	
	for (i = 3; i > 0 && counter >= 0 ; i--){
		sum+=arr[counter--];
	}
	return sum;
}

int minPairDiff(int arr[], int size){
	
	//init diff to first element in arr
	int diff = abs(arr[1]-arr[0]), i,k;

	for (i = 1; i < size; i ++){
		for (k = i + 1 ; k < size ; k ++) {
			if (abs(arr[k]-arr[i]) < diff){
				diff=abs(arr[k]-arr[i]);
			}
		}
	}
	
	return diff;

}
int maxDiffArraySort(int arr[] ,int size){
	int i,k,temp;
	
	//sort array in accending order
	
	for (i = 0 ; i < size ; i++ ){
		for (k = 0 ; k <size-1 ; k++){
			if (arr[k+1] < arr[k]){
				temp = arr[k];
				arr[k] = arr[ k +1];
				arr[k + 1] =temp;
			}
		}
	}
	int j;
	for (j = 0 ; j < size ; j++){
		printf("%d,",arr[j]);
	}
	return (arr[size] - arr[0]);
}

