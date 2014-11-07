#include <stdio.h>

int main(void){
	

	return 0;
}

int fib(int n){

	if (n < 2)
		return n;
	else 
		return fib(n-1) + fib(n - 2);

}
