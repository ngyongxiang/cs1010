#include <stdio.h>


int main(void){
	int numbers[]={1,2,3,0,4,5,6};

	if (non-Negative(numbers,7)==1){
		printf("The array is non-Negative\n");
	}else{
		printf("The array is not non-negative\n");
	}
}

int non-Negative(int arr[]. int size){
	int i;

	for(i=0; i<size; i++){
		if (arr[i]<0)
			return 0;
	}
	
	return 1;
}