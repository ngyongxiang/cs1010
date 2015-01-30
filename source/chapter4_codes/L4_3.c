/*For Lesson 4_3 */

#include <stdio.h>
void main (void)
{
    int day;
    double time;

    printf ("Type the day and time of interest\n\n");
    scanf ("%d%lf", &day, &time);

    if (day<=5)
    {
        if (time<=9.00)
            printf ("Work\n\n");
        else
            printf ("Relax\n\n");
    }
    else
    {
        if (time<=8.00)
            printf ("Sleep\n\n");
        else
            printf ("Have fun\n\n");
    }
}
