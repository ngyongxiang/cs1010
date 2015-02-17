// Week5_ReverseArray.c
// Reverse the elements in an array.
#include <stdio.h>
#define MAX_SIZE 10

int main(void) {
	int array[MAX_SIZE], size, i, value,temp, k;

	// Read size of array 
	printf("Enter size of array (<=10): ");
	scanf("%d", &size);

	// Read in values for array
	printf("Enter %d element%s: ", size, (size<2)?"":"s");
	for (i=0; i<size; i++) {
		scanf("%d", &value);
		array[i] = value;
		// Or you could write the following single statement 
		// to replace the 2 statements above:
		// scanf("%d", &array[i]);
	}
	
	
	// Reverse the array
	k = 0 ;
	for (i = i-1; i>=0; i--){
		temp = arr[i];
		arr[i] = arr[k];
		arr[k] = temp;
		k++;
	}
	// Print the array
	printf("After reversing: ");

	return 0;
}

void print_arr(int arr[MAX_SIZE]){
	int i;
	for (i = 0; i < MAX_SIZE; i++){

		printf("%d", arr[i]);
	}

}


