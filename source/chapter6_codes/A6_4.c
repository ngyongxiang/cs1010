/* application example 6.4 */

#include<stdio.h>
#define SIZE1 30
#define SIZE2 60
void main (void)
{
    int x[SIZE1][SIZE2];
    int i, j, a, count, sum;
    FILE *infile, *outfile;

    infile = fopen ("input.dat", "r");
    outfile = fopen("output.out", "r+");

    /* read input file */
    for (i=0; i<=SIZE1-1; i++)
    {
        for (j=0; j<=SIZE2-1; j++)
        {
            fscanf (infile, "%1d", &x[i][j]);
        }
    }

    /* print input file */
    for (i=0; i<=18; i++)
    {
        for (j=0; j<=SIZE2-1; j++)
        {
            printf ("%1d", x[i][j]);
        }
        printf ("\n");
    }

    /* compress file */
    count = 0;
    printf ("\n\n\n");
    for (j=0; j<=SIZE1-1; j++)
    {
        for (i=0; i<=SIZE2-1; i++)
        {
            count++;
            if (i==SIZE2-1 || x[j][i]!=x[j][i+1])
            {
                fprintf (outfile, "%d ", count);
                printf ("%d ", count);
                count = 0;
            }
        }
        fprintf (outfile, "\n");
        printf ("\n");
    }

    /* expand */
    rewind (outfile);
    for (j=1; j<=SIZE1; j++)
    {
        a = 0;
        sum = 0;
        do
        {
            fscanf (outfile, "%d", &count);
            for (i=1; i<=count; i++)
                printf ("%1d", a);
            a = !a;
            sum += count;
        } while (sum<SIZE2);
        printf ("\n");
    }
    fclose (infile);
    fclose (outfile);
}
