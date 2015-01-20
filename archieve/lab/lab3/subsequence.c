/**
 * CS1010 AY2014/5 Semester 1 Lab3 Ex2
 * subsequence.c
 * This program reads in a list of integers and find the
 * k-interval subsequence with the largest sum.
 * Xin Kenan
 * T32
 */

#include <stdio.h>

 int scan_list(int []);
 void sum_subsequence(int [], int, int []);

 int main(void) {
	int list[10], size; // array and actual number of elements entered
	int answers[3];     // stores the required answers

	size = scan_list(list); 

	sum_subsequence(list, size, answers);

	printf("Max sum %d of %d-interval subsequence starting at position %d.\n",
		answers[0], answers[1], answers[2]);

	return 0;
}

// Read in elements for the array arr and returns the 
// number of elements read.
// Postcond: i > 0
int scan_list(int arr[]) {
	int num, i;

	printf("Enter number of elements: ");
	scanf("%d", &num);
	printf("Enter %d element%s: ", num, (num>1)?"s":"");
	for (i=0; i<num; i++) {
		scanf("%d", &arr[i]);
	}

	return num;
}

// Write a description for this function below
// ...
// ...
//   ans[0] = maximum sum of solution subsequence
//   ans[1] = interval k of the solution subsequence
//   ans[2] = start position of the solution subsequence
void sum_subsequence(int arr[], int size, int ans[]) {
	int interval,count,element_pos,sum,start_pos;
	
	ans[0]=0;
	ans[1]=1;
	ans[2]=0;

	for (interval =1; interval <= size; interval++){
		element_pos=0;
		start_pos=0;
		
		for (count=1; count <= interval; count++){

			sum=0;

			for (element_pos = start_pos; element_pos < size; element_pos+=interval){
				sum+=arr[element_pos];
				//printf("  Element pos is at %d\n",element_pos);
				//printf("  Sum now is %d\n",sum);
			}

			//printf("   What is the element_pos now: %d\n",element_pos);

			

				//printf("element position is at : %d\n",element_pos);
			//printf("Sum at count %d is %d for %d interval\n",count,sum,interval);
			if (sum>ans[0]){
				ans[0]=sum;
				ans[1]=interval;
				ans[2]=start_pos;

			}
			if (element_pos + 1 > size){
				start_pos = element_pos - size;
			}
		}


	}

	// fill in the code

}
