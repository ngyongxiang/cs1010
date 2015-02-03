/* Program for Lesson 6_2 */

#include <stdio.h>
void main (void)
{
    int a[3]={11,22}, b[]={44, 55, 66}, i;
    double x[2], y[10];

    printf ("a[0]=%2d, a[1]=%2d, a[2]=%2d\n"
            "b[0]=%2d, b[1]=%2d, b[2]=%2d\n\n",
            a[0], a[1], a[2], b[0], b[1], b[2]);

    printf ("Please enter two real numbers\n");
    scanf ("%lf%lf",&x[0], &x[1]);
    printf ("x[0] = %.1lf    x[1] = %.1lf\n\n", x[0], x[1]);

    for (i=0; i<10; i++)
    {
        y[i] = i * 100.0;
        printf ("y[%1d]=%.2lf\n", i, y[i]);
    }
}
