/*For Lesson 4_11 */

#include <stdio.h>
void main (void)
{
    int i, j, k, m=0;

    for (i=1; i<=5; i+=2)
    {
        for (j=1; j<=4; j++)
        {
            k = i+j;
            printf ("i=%3d, j=%3d, k=%3d\n", i, j, k);
        }
        m = k+i;
    }
}
