// multiples5or7.c 
// Reads a positive integer num and count the number
// of multiples of 5 or 7 in the range [1, num].

#include <stdio.h>

int count_multiples(int);

int main(void) {
	int num;

	printf("Enter positive integer: ");
	scanf("%d", &num);

	if (!count_multiples(num)){
		printf("There are no multiples of 5 or 7 in [1,%d].\n",num);
	}else if (count_multiples(num)==1){
		printf("There is %d multiple of 5 or 7 in [1,%d].\n",count_multiples(num),num);
	}else{
		printf("There are %d multiples of 5 or 7 in [1,%d].\n",count_multiples(num),num);
	}
	

	return 0;
}

// Precond: value > 0
int count_multiples(int value) {
	int i=0,count=0;
	for (i=1;i<=value;i++){
		if (i%5==0||i%7==0){
			count++;
		}
	}
	return count;

}

