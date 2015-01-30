/* Lesson for 2_5 */

#include <stdio.h>
void main (void) 
{
    int i=1, j=1, 
        k1=10, k2=20, k3=30, k4=40, k5=50,
        k, h, m, n; 

    float a=7, b=6, c=5, d=4,
          e, p, q, x, y, z;

    printf ("Before increment, i=%2d, j=%2d\n",i,j);

    k=i++;  
    h=++j;   

    printf ("After increment,  i=%2d, j=%2d\n"
            "                  k=%2d, h=%2d \n\n",i,j,k,h);

    m=6/4;  
    p=6/4;  
    n=6/4.0;  
    q=6/4.0;  

    printf ("m=%2d, p=%3.1f\nn=%2d, q=%3.1f\n\n",m, p, n, q);
    printf ("Original k1=%2d, k2=%2d, k3=%2d, k4=%2d, k5=%2d\n",
            k1,k2,k3,k4,k5);

    k1 += 2;  
    k2 -= i;  
    k3 *= (8/4);  
    k4 /= 2.0;  
    k5 %= 2;  

    printf ("New       k1=%2d, k2=%2d, k3=%2d, k4=%2d, k5=%2d\n\n",
            k1,k2,k3,k4,k5);

    e= 3; 
    x= a + b -c /d *e; 
    y= a +(b -c)/d *e;
    z=((a + b)-c /d)*e;

    printf ("a=%3.0f, b=%3.0f, c=%3.0f\nd=%3.1f, e=%3.1f\n\n",
            a,b,c,d,e);

    printf ("x=  a + b -c  /d *e = %10.3f \n"
            "y=  a +(b -c) /d *e = %10.3f \n" 
            "z=((a + b)-c  /d)*e = %10.3f\n", x,y,z);
}
