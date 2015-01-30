/* Lesson for 3_3 */

#include <stdio.h>
void mai n(void)
{
    double xx ;
    int ii, kk; 
    FILE *inptr;
 
    inptr = fopen ("C3_6.IN","r"); 
    fscanf (inptr,"%d",&ii); 
    fscanf (inptr,"%d %lf",&kk,&xx);

    fclose (inptr); 

    printf ("ii=%5d\nkk=%5d\nxx=%9.3lf\n",ii, kk, xx); 
}



