/* Program for Lesson 6_5 */

#include <stdio.h>
void function1 (int *d, int e);
void function2 (double b[ ], int num_elem);
double function3 (const double b[ ], int num_elem);

void main (void)
{
    int i, a[10]={0,1,2,3,4,5,6,7,8,9};
    double x, c[5]={2.,4.,6.,8.,10};

    function1 (&a[5], a[8]);

    function2 (c , 5);

    x = function3 (c, 5);

    printf ("\na[5]=%d\n", a[5]);
    printf ("c[ ]=");
    for (i=0; i<5; i++)
        printf("%.1lf ", c[i]);
    printf ("\nx = %.1lf", x);
}

void function1 (int *d, int e)
{
    *d = 100 + e;
}

void function2 (double b[], int num_elem)
{
    int i;

    for (i=0; i<num_elem; i++)
        b[i] *= 10.;
}

double function3 (const double b[], int num_elem)
{
    int i;
    double sum;

    sum = 0.0;
    for (i=0; i<num_elem; i++)
        sum += b[i];
    return (sum);
}
