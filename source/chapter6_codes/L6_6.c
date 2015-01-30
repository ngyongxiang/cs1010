/* Program for Lesson 6_6 */
#include <math.h>
#include <stdio.h>

#define START 0
#define END   4
#define SIZE  10

void main (void)
{
    int i, j, k, b[SIZE], c[SIZE];
    int temp, max, wheremax=END-1, min, wheremin=START;
    int a[END]={33,44,11,22};


    for (i=START; i<END; i++)  /* initialize arrays */
        b[i] = c[i] = a[i];

    /* bubble sort */
    for (i=START; i<END; i++)
    {
        for (j=START; j<END-i-1; j++)
        {
            if (b[j]>b[j+1])
            {
                temp = b[j+1];
                b[j+1] = b[j];
                b[j] = temp;
            }
        }
    }

    /* exchange maximum sort */
    for (i=END-1; i>=START; i--)
    {
        max = c[i];
        for (j=i; j>=START; j--)
        {
            if (max<=c[j])
            {
                max = c[j];
                wheremax = j;
            }
        }
        c[wheremax] = c[i];
        c[i] = max;
    }

    /* print results */
    for (i=START; i<END; i++)
        printf ("i=%1d, a[i]=%2d, b[i]=%2d, c[i]=%2d\n",
                i, a[i], b[i], c[i]);
}
