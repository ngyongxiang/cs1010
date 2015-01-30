/* For Chapter 4 application 4_2 */
 
#include <stdio.h>
void main (void)
{
    int i;
    double horizleg, vertleg, area;

    horizleg = 5.0;
    vertleg = 7.0;

    for ( i=1; i<=4; i++ )
    {
        area = 0.5 * horizleg * vertleg;
        printf ("Triangle area number %d = %6.2lf \n", i, area);

        horizleg += 1.0;
        vertleg /= 2.0;
    }
}
