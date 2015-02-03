/* Lesson for 2_2 */

#include <stdio.h>
void main (void)
{
    int i,j,k,p,m,n;
    float a,b,c,d,e,f,g,h,x,y;

    i=5; j=5;
    k=11; p=3; 
    x=3.0; y=4.0;
    printf ("...... Initial values ......\n");
    printf ("i=%4d, j=%4d\nk=%4d, p=%4d\nx=%4.2f, y=%4.2f\n\n",
            i,j,k,p,x,y);

    /*--------------- Section 1 -------------------*/
    a=x+y; 
    b=x-y;  
    c=x*y;  
    d=x/y;  
    e=d+3.0;  
    f=d+3;  
    i=i+1;  
    j=j+1;  

    printf ("...... Section 1 output ......\n");
    printf ("a=%5.2f, b=%5.2f\nc=%5.2f, d=%5.2f\n" 
            "e=%5.2f, f=%5.2f\ni=%5d, j=%5d \n\n", a,b, c,d, e,f, i,j);

    /*--------------- Section 2 -------------------*/
    m=k%p;  
    n=p%k;  
    i++;  
    ++j;   
    e--;  
    --f; 

    printf ("...... Section 2 output ......\n"); 
    printf ("m=%4d, n=%4d\ni=%4d, j=%4d\n"
            "e=%4.2f, f=%4.2f\n",m,n, i,j, e,f); 
}
