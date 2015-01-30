/*For Lesson 4_5 */

#include <stdio.h>
void main (void)
{
    int a=4, b=-2, c=0 ,x;

    if (a)
        printf ("a=%2d, !a=%2d\n", a, !a);
    if (b)
        printf ("b=%2d, !b=%2d\n", b, !b);

    if (c)
        printf ("Never gets printed\n");
    else
        printf ("c=%2d, !c=%2d\n\n", c, !c);

    if (a>b && b>c || a==b)
        printf ("Answer is TRUE\n");
    else
        printf ("Answer is FALSE\n");

     x = a>b || b>c && a==b;
     printf ("x=%2d, !x=%2d\n", x, !x);
}
