/* Program for Lesson 6_3 */

#include <stdio.h>
#include <math.h>
void main (void)
{
    int i, j, k, num_elem;
    double x[20], y[20], z[20];
    FILE *infile, *outfile;

    infile = fopen ("C6_3.IN", "r");
    outfile = fopen ("C6_3.OUT", "w");

    k = fscanf (infile, "%lf%lf", &x[0], &y[0]);
    fprintf (outfile, "k = %d\n", k);
    fprintf (outfile, "Value of EOF = %d\n", EOF);

    i = 1;

    while (fscanf (infile, "%lf%lf", &x[i], &y[i]) != EOF)
        i++;

    num_elem = i;

    fprintf (outfile,"   x[i]    y[i]    z[i]\n");

    for (j=0; j<num_elem; j++)
    {
        z[j] = sqrt (x[j]*x[j]+y[j]*y[j]);
        fprintf (outfile, "%7.1f %7.1f %7.1f\n", x[j], y[j], z[j]);
    }

    fclose (infile);
    fclose (outfile);
}
