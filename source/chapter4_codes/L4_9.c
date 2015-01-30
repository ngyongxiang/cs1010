/*For Lesson 4_9 */

#include <stdio.h>
void main (void)
{
    int i=4, j=1;

    do
    {
        printf ("old_i=%2d, ", i);
        i--;
        printf("new_i=%2d\n", i);
    } while(i);

    do
        ++j;
    while (j>999);

    printf ("j=%2d\n", j);
}
