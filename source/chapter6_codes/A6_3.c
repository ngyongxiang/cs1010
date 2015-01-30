/* Program for application 6_3 */

#include <stdio.h>
#define MAX_NUM_ROWS 20
#define MAX_NUM_COLS 20

void main (void)
{
    int a[MAX_NUM_ROWS][MAX_NUM_COLS], x[MAX_NUM_COLS];
    int b[MAX_NUM_ROWS];
    int i, j, num_rows, num_cols;
    FILE *infile;

    infile = fopen ("matvect.dat", "rt");
    fscanf (infile, "%d %d", &num_rows, &num_cols);

    for (i=0; i<num_rows; i++)
    {
        for (j=0; j<num_cols; j++)
        {
            fscanf (infile, "%d", &a[i][j]);
        }
        fscanf (infile, "%d", &x[i]);
    }
    for (i=num_rows; i<num_cols; i++)
        fscanf (infile, "%d", &x[i]);

    printf ("\nb vector");

    for (i=0; i<num_rows; i++)
    {
        b[i]=0;
        for (j=0; j<num_cols; j++)
        {
            b[i] += a[i][j] * x[j];
        }
        printf ("\n%d", b[i]);
    }
}
