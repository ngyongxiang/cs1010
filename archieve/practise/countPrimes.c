// countPrimes.c
// To count the number of primes in the range [1, limit]
// where limit is entered by user.
#include <stdio.h>

int is_prime(int);

int main(void) {    
	int limit,i,num_primes;
	num_primes=0;

	printf("Enter limit: ");
 	scanf("%d", &limit);
 	// this method took alot of cpu time and is not efficient, is there a way to make it faster?
 	for (i=1;i<=limit;i++){
 		num_primes+=is_prime(i);
 	}

 	printf("Number of primes (1-%d): %d\n",limit,num_primes);

	return 0;
}

int is_prime(int number){
	int i=0;
	if (number==1)
		return 0;
	for (i=2;i<=number/2;i++){
		if (number%i==0){
			return 0;
		}
	}
	return 1;
}

