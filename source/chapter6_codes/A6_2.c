/* Program for application 6_2 */

#include <stdio.h>
#define MAX_NUM_PTS 100

void main (void)
{
    int x[MAX_NUM_PTS], num_pts, i, j, count_lower, count_higher, median;
    double sum, mean;
    FILE *infile;

    infile = fopen ("average.dat", "rt");
    fscanf (infile, "%d", &num_pts);
    for (i=0; i<num_pts; i++)
        fscanf (infile, "%d", &x[i]);

    /* calculate mean */
    sum = 0.0;
    for (i=0; i<num_pts; i++)
        sum += x[i];
    mean = sum / (double)num_pts;

    /* calculate median */
    j = -1;
    do
    {
        j++;
        count_lower = 0;
        count_higher = 0;
        for (i=0; i<num_pts; i++)
        {
            if (x[j]<=x[i])
                count_higher++;
            if (x[j]>=x[i])
                count_lower++;
        }
    }
    while (j<num_pts && count_lower<=((double)(num_pts)/2.)
           || count_higher<=((double)(num_pts)/2.));
    median = x[j];

    printf ("The mean of the values is: %.3lf \n"
            "The median value is:       %d\n", mean, median);
}
