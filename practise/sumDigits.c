#include <stdio.h>
#include <ctype.h>

// read characters on a line
// sum the digit charactrers, ignoring the non-digit ones and everything
// after the first white space.
int main(void){
	int sum=0,n;
	printf("Enter input: ");
	while (!isspace(n=getchar())){
		if (isdigit(n)) sum += n-'0';
	}

	printf("Sum = %d\n", sum);
	return 0;
}
