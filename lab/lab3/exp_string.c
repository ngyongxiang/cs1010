#include <stdio.h>
#include <string.h>
#define LENGTH 10

int main(void){
	char str[LENGTH];
	char str1[LENGTH];
	//int i = 0;
	//test wheter scanf adds '/0'
	// printf("Enter some string 10 chars \n");
	// scanf("%s",str);
	// fgets(str,LENGTH,stdin);
	// for (i = 0; i < LENGTH; i++){
	// 	printf("%c",str[i]);
	str[0] = 'a';
	str[1] = 'p';
	str[2] = 'p';
	str[3] = 'l';
	str[4] = 'e';
	
	

		// if (str[i] == '\0'){
		// 	printf("hi\n");
		// }
	// 	if (str[i]=='\0'){
	// 		printf("Null");
	// 	}
	// }
	int i, counter = 5;
	printf("%s\n",str);
	printf("str contains : %s\n",str);
	printf("Length of str= %d\n", (int)strlen(str));
	printf("\n");

	printf("Type in 'apple':");
	scanf("%s",str1);

	printf("str1 contains : %s\n",str1);
	printf("Length  of str1 = %d\n", (int)strlen(str1));

	printf("\n");
	printf("under this line, test whether str contains \\0 \n");
	printf("================================================\n");
	printf("str:  ");
	for ( i = 0 ; i < LENGTH; i++){

		if (str[i] == '\0'){
			printf("NULL%d", counter);
			counter++;
		}else{
			printf("%c", str[i]);
		}

	}
	printf("\n");
	printf("str1: " );
	counter = 5;
		for ( i = 0 ; i < LENGTH; i++){

		if (str1[i] == '\0'){
			printf("NULL%d", counter);
			counter++;
		}else{
			printf("%c", str1[i]);
		}

	}

	printf("\n");
	printf("The two strings are : %d", strcmp(str,str1));

	
	return 0;
}
