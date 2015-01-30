/*For Lesson 4_4 */ 

#include <stdio.h>
void main (void)
{
    int x=5, y=0;

    printf ("x=%2d, y=%2d\n\n", x, y);

    if (x>0 && y>=0)
        printf ("x is greater than 0 and"
                "y is greater than or equal to 0\n\n");

    if (x==0 || y==0)
        printf ("x equals 0 or y equals 0\n\n");

    if (! (x==y))
        printf ("x is not equal to y\n");
}
