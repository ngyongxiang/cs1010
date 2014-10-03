// countCoprimes.c
// To count the number of pairs of integers in the range [2, limit]
// which are coprime.
#include <stdio.h>

int count_coprimes(int);
int gcd(int, int);

int main(void) {
	int limit;

	printf("Enter limit: ");
	scanf("%d", &limit);

	printf("Answer = %d\n", count_coprimes(limit));

	return 0;
}

// Return the number of pairs of integers in the range [2, lim]
// which are coprime. if a and b are only divisible by 1 and nothing else, they are co-prime.
// Precond: lim > 2
int count_coprimes(int lim) {
	int count,i,k;
	count=0;
	for (i=2;i<=lim;i++){
		for (k=i;k<=lim;k++){
			if (gcd(i,k)==1)
				count++;
		}
	}
	
	return count; // this is just a dummy return value
}

// Return the GCD of a and b
// This is a badly written gcd() function. We will discuss this
// function and write a better one in Week 6 discussion session. 
// Precond: a>=0, b>=0 and not both = 0
int gcd(int a, int b) {
	int divisor;

	if (a == 0) return b;
	else if (b == 0) return a;

	if (a < b) divisor = a;
	else divisor = b;

	while (1) {
		if ((a%divisor == 0) && (b%divisor == 0))
			return divisor;
		divisor--;
	}
	return 1;
}

