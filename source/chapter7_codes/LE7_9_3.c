/* Program for Lesson  7_9, exercises 3*/ 
/*
 3. Find the values of a, b, and c manually and then run the program to
   check your answers
*/

 #include <stdio.h>
 void main(void)

 {
	char x[5]="ABCD", y[2][6]={"EFGH", "JKL"}, *px, *py;
	char a, b, c;

	px=x;
	py=&y[1][0];
	a = *px+2;
	b = *x + 10 ;
	c = 10+ *(*(y+1));
	printf("a=%c, b=%c, c=%c\n",  a,b,c);
 }


