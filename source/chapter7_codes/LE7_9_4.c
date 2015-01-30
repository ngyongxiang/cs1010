/* Program for Lesson  7_9, exercises 4*/
 /*
  4. Find the value of x in the program below manually and then run
     the program  to check your result:
*/

#include <string.h>
#include <stdio.h>

void f1 (char a[][10], char *b[], char *pa)
{
	int i;

	pa=&b[1][2];
	 strcpy(a[0],b[0]);
	 *a[1]=*pa;
	 *(*(a+1)+1)= *(pa+1);
	 a[1][2]='\0';
}

void main(void)
{
	char x[10][10],*y[10]={"abcde","wxyz"}, *px;

	 px=y[1];
	 f1(x,y, px);
	 printf("x[0]=%s\nx[1]=%s\n",x[0],x[1]);
}


