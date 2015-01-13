#include <stdio.h>

void printSuffix(int num);

int main(void){
	
	int num;
	printf("Enter value: ");
	scanf("%d",&num);
	printSuffix(num);

}

void printSuffix(int num){
	if (num%10==1&&num%100!=11){
		printf("%dst\n",num);
	}else if (num%10==2&&num%100!=12){
		printf("%dnd\n",num);
	}else if (num%10==3&&num%100!=13){
		printf("%drd\n",num);
	}else{
		printf("%dth\n",num);
	}
}
