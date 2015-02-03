/* Program for Lesson  7_7, exercises 1*/
/*
 1. Find the value of x in the program below manually and then
    run the program  to check your result: 
*/
 
#include <string.h> 
#include <stdio.h> 
 
void f1 (char a, char b[], char *c); 
{ 
	 a='a'; 
	 strcpy(b,"bcde"); 
	 b[0]=a; 
	 c[2]=*b+5; 
} 
 
void main(void) 
{ 
	char x[25]="9876", *px;
 
	 f1('1',x,&x[0]); 
	 printf("1. x=%s\n",x); 
 
	 f1('2',x,&x[1]); 
	 printf("2. x=%s\n",x); 
 
	 px=x; 
	 f1(*(px+1), x+2, px+2); 
	 
	 printf("3. x=%s\n",x); 
} 
 
  
