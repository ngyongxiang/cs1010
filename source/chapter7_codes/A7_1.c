/* Program for Application 7_1 */

#include <stdio.h>
#define NUM_COLS 5
#define NUM_ROWS 8
#define NUM_OPERNDS 5

void main (void)
{
    char operatr, operand;
    int i, j;
    double a[NUM_ROWS][NUM_COLS], result[NUM_ROWS]={0.};
    FILE *infile;

    infile = fopen ("SPREAD.DAT", "r");
    for (i=0; i<NUM_ROWS; i++)
    {
        for (j=0; j<NUM_COLS; j++)
        {
            fscanf(infile, "%lf", &a[i][j]);
        }
    }

    printf ("Enter a command of the sort A+B*C-D*E:\n");

    operand = getchar ();
    for (j=0; j<NUM_ROWS; j++)  
        result[j] += a[j][(int)operand-(int)('A')];

    for (i=0; i<NUM_OPERNDS-1; i++)
    {
        operatr = getchar ();
        operand = getchar ();

        switch (operatr)
        {
            case '+':
                for (j=0; j<NUM_ROWS; j++)
                {
                    result[j] += a[j][(int)operand-(int)('A')];
                }
                break;
            case '-':
                for (j=0; j<NUM_ROWS; j++)
                {
                    result[j] -= a[j][(int)operand-(int)('A')];
                }
                break;
            case '*':
                for (j=0; j<NUM_ROWS; j++)
                {
                    result[j] *= a[j][(int)operand-(int)('A')];
                }
                break;
            case '/':
                for (j=0; j<NUM_ROWS; j++)
                {
                    result[j] /= a[j][(int)operand-(int)('A')];
                }
                break;
            default:
                break;
        }
    }

    printf ("Result \n");
    for (i=0; i<8; i++) 
        printf("%lf \n",result[i]);
}
