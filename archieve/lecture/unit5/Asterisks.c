#include <stdio.h>

void print_asterisks(int);

int main(void){
	int num;

	printf("Enter n: ");
	scanf("%d",&num);
	print_asterisks(num);

	return 0;
}

void print_asterisks(int n){
	int i;
	 for (i=1;i<=2*n-1;i++){
	 	printf("*");
	 }
	 printf("\n");
	 printf("Done!\n");
}