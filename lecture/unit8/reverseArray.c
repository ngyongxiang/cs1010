#include <stdio.h>
#define MAX_SIZE 10


int main(void){
	//var declarations
	int arr[MAX_SIZE]={0}, size = 0, i,k, temp; 
	

	printf("Enter size of array(<=10):");
	scanf("%d", &size);

	printf("Enter %d elements : ",size);
	while (i < size){
		scanf("%d", &arr[i]);	
		i++;
	}
	
	//reverse the array here, place last element in temp and then swap first element with temp until i < size
	for (i = 0 ; i < size ; i ++ ){
		temp=arr[i] ; 
		arr[i]=arr[size - i -1 ] ;//
		arr[size -i -1]=temp;
	}
	//print out the new array
	
	printf(" The new array elements are : ");
	for (k=0 ; k < size; k++){
		printf("%d,", arr[k]);
	}

	return 0;
}

	
