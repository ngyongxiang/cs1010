/* For Chapter 4 application 4_1 */
 
#include <stdio.h>
void main (void)
{
    double x, y, m1, m2, b1, b2;
    FILE *inpt;

    inpt = fopen ("INTSECT.DAT", "r");

    fscanf (inpt, "%lf %lf", &m1, &b1);
    fscanf (inpt, "%lf %lf", &m2, &b2);

    if (m1 != m2)
    {
        x = (b2 - b1) / (m1 - m2);
        y =  m1 * x + b1;

        printf ("\n\The slopes and intercepts are:\n\n"
                "m1  =  %lf\n"
                "b1  =  %lf\n"
                "m2  =  %lf\n"
                "b2  =  %lf\n", m1, b1, m2, b2);

        printf ("\nThe intersection point is (%lf, %lf).", x, y);
    }

    fclose (inpt);
}
