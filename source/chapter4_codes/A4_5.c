/* For Chapter 4 application 4_5 */

#include <stdio.h>
#include <math.h>

void main (void)
{
    double x, y;
    double delta=0.3; /* the interval for sampling x values along the working range (0, 10) */
    double distance;  /* the interval for sampling x values along the working range (0, 10) */
    double min=-1;    /* initialize min to -1 */

    for (x=0.1; x<10; x+=delta)
    {
        y = sqrt (54/x);
        distance = x*x+y*y;
        if ((min == -1) || (min > distance))  /* if this is the first iteration (i.e. min is -1), then record the distance */
            min = distance;
    }
    printf ("radius of the disc: %.1f\n", sqrt (min));
}

