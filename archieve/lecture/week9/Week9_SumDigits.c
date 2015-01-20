#include <stdio.h>
#include <type.h>

int main(void){
	char ch;
	int sum = 0;
	printf("Enter input :");
	
	
	while (!isspace(ch = getchar())){
		if(isdigit(ch))	
			sum += ch - '0';	
			
	}
	
	printf("Sum  = %d\n", sum);
	return 0;
}
