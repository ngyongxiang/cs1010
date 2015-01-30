/* For Chapter 4 application 4_3 */

#include <stdio.h>
void main (void)
{
    int i, degC;
    double degF;

    printf ("Table of Celsius and Fahrenheit degrees\n\n"
            "Degrees    Degrees\n"
            "Celsius     Fahrenheit\n");

    for (degC=0; degC<=100; degC+=20)
    {
        degF = degC * 9 / 5.0 + 32;
        printf ("%5f   %7.2f\n", degC, degF);
    }
}
