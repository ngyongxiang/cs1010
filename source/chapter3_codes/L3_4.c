/* Lesson for 3_4 */ 

#include <stdio.h>  
void main (void)  
{ 
    double income=123.45, expenses=987.65;  
    int week=7, year=1996;  
    FILE *myfile; 
 
    myfile = fopen ("L3_8.OUT","w");  
    fprintf (myfile,"Week=%5d\nYear=%5d\n",week,year);  
    fprintf (myfile,"Income  =%7.2lf\n Expenses=%8.3lf\n", 
             income,expenses);
    fclose (myfile);
}
