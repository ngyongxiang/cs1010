/* Lesson for 2_3 */

#include <stdio.h>
void main (void) 
{
    float income;
    double expense; 
    int month, hour, minute; 

    printf ("What month is it?\n");
    scanf ("%d", &month);
    printf ("You have entered month=%5d\n",month);

    printf ("Please enter your income and expenses\n"); 
    scanf ("%f %lf",&income,&expense);
    printf ("Entered income=%8.2f, expenses=%8.2lf\n",
            income,expense);

    printf ("Please enter the time, e.g.,12:45\n");
    scanf ("%d : %d",&hour,&minute); 
    printf ("Entered Time = %2d:%2d\n",hour,minute); 
}
