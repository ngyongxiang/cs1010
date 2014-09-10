#include <stdio.h>

int is_prime(int);

int main(void){
	int num;
	printf("Enter a positive integer: ");
	scanf("%d",&num);

	int a= is_prime(num);

	if (a)
		printf("%d is a prime.\n",num);
	else 
		printf("%d is not a prime.\n",num);

	return 0;
}


int is_prime(int num){

	int i=0;
	if (num==1) // exlusively exluding 1 using if else, not so nice. Any better way? It can be done by letting i starting from 1, but the again, still have to if i!=0&&num%i==0 , not so nice. people wondering why start from 1 and exclude in conditional statement.
		return 0;
	else{ 
		for (i = 2; i<=num/2; i++){
			if ( num%i==0 )
				return 0;
		}	
	}
	return 1;
}


