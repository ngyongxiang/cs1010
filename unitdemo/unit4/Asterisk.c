#include <stdio.h>

void print_asterisks(int);

int main(void){
	int num;
	printf("Enter n : ");
	scanf("%d" , &num);
	(num <0)?printf("Done!\n"):print_asterisks(num);
	
	return 0;
}

void print_asterisks(int num){
	int i ; 
	for (i = 0 ;i < num ; i++ ) {
		printf("*");
	}
	printf("\nDone!\n");
}

void print_asterisks2(int num){

	int i;
	if (n > 0){

		for (i = 1 ; i<=2*n -1 ; i++)
			printf("*");
		printf("\n")
	}


}
