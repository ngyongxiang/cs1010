#include <stdio.h>
#include <ctype.h>

int main(void){
	

	return 0;
}

int count_nonspace(char str[]){
	int i=0, count=0;
	while (str[i] != '\0'){
		if (!isspace(str[i]))
			count ++
		i++;
	}
	return count;
}
