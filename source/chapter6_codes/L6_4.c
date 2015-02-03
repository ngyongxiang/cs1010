/* Program for Lesson 6_4 */

#include <stdio.h>
void main (void)
{
    int i, j, year, month, day;
    int b[2][3]={51,52,53,54,55,56};
    int rainfall[10][13][32];
    FILE *infile;

    infile = fopen ("L6_4.DAT", "r");

    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            printf ("b[%1d][%1d]= %5d   ", i, j, b[i][j]);
        }
        printf ("\n");
    }

    fscanf (infile, "%d %d", &year, &month);
    for (day=1; day<=31; day++)
    {
        fscanf (infile, "%d", &rainfall[year][month][day]);
    }

    printf ("Rainfall for Year = %d, Month = %d\n\n", year, month);
    for (day=1; day<=31; day++)
    {
        printf ("%d ", rainfall[year][month][day]);
        if (day==7 || day==14 || day==21 || day==28)
            printf ("\n");
    }
}
