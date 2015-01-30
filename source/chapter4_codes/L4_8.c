/*For Lesson 4_8 */

#include <stdio.h>
void main (void)
{
    int i=4, k=1, sum=0;

    while (i)
    {
        printf ("old_i=%2d, ", i);
        sum += i--;
        printf ("new_i=%2d, sum=%2d\n", i, sum);
    }
    printf ("\n");

    sum = 0;
    while (k)
    {
        printf ("old_k=%2d, ", k);
        sum -= k++;
        printf ("new_k=%2d, sum=%2d\n", k, sum);
    }
}
