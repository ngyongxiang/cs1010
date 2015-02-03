/* Program for Lesson  7_6, exercises 2*/  
/* 2. Find errors in the following program:*/ 
 
#include <string.h> 
void main(void) 
 {char dd[3][8]={"Dog", "Donkey", "Dragon"}, *x[3]={"aa",'bb'}; 
 
  x[2]=dd[3]; 
 
  for (i=0;i<3;i++) 
  printf("x[%d]=%s\n",i,x[i]); 
 
  }
 
 
 
