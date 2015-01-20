#include <stdio.h>
#include <ctype.h>
#define LEN 51

int word_count(char str[]);
void print_sentence(char str[],int size);
int main(void){
	char str[LEN];
	int i=0;
	char ch;

	printf("Enter a sentence with at most 50 characters:\n");
	while ((ch=getchar())!='\n')
		str[i++] = ch;
		
	str[i] = '\0';
	
	print_sentence(str, i);
	
	printf("Word count = %d\n", word_count(str));



	return 0;
}


int word_count(char str[]){
	int i=0,count = 1;
	while (str[i]!= '\0'){
		if (isspace(str[i++])) count++;
	}
	



	return count;
}

void print_sentence(char str[],int size){
	int i;
	printf("Sentence = ");
	for (i = 0; i < size; i++){
		printf("%c" ,str[i]);
	}
	printf("\n");	
}
