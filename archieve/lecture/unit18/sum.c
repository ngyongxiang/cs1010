#include <stdio.h>

int main(void) {
	// your code goes here
	printf("%d",sumDigits(343));
	return 0;
}
 
int sumDigits(int n){
	int sum = 0; 
	sum = sum + (n%10);

	if (n == 0)
		return sum;
	else {
		return sumDigits(n/10) + sum;
	}
 
 
}