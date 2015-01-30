/* Program for Application 7_3 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void store_num (const char num_string[ ], int *flag, int *count, double *value, int *bad_entry);
void read_check (int *flag, double *d, double *v, double *D);
void calc_print (int flag, double d, double v, double D);

void main (void)
{
    int flag;
    double diam_1, veloc_1, diam_2, veloc_2;

    read_check(&flag, &diam_1, &veloc_1, &diam_2);
    calc_print(flag, diam_1, veloc_1, diam_2);
}

void read_check (int *flag, double *d, double *v, double *D)
{
    int count=0, bad_entry=0;
    char data_line[30];

    do
    {
        *flag = 1;
        printf ("Enter data for d, v or D in the form:    d=35.6\n"
                "No spaces are allowed.\n");
        gets (data_line);

        if (data_line[0]=='d'  &&  data_line[1]=='=')
        {
            store_num(data_line+2, flag, &count, d, &bad_entry);
            if (*flag==1) 
                printf ("d entered, d=%lf\n",*d);
        }
        else if(data_line[0]=='v'  &&  data_line[1]=='=')
        {
            store_num(data_line+2, flag, &count, v, &bad_entry);
            if (*flag==1) 
                printf ("v entered, v=%lf\n",*v);
        }
        else if(data_line[0]=='D'  &&  data_line[1]=='=')
        {
            store_num(data_line+2, flag, &count, D, &bad_entry);
            if (*flag==1)
                printf ("D entered, D=%lf\n",*D);
        }
        else
        {
            *flag = 0;
            bad_entry++;
            printf("Error on input.  Try typing your data again\n");
        }

    }while (count<3  && bad_entry<5);

    if (bad_entry==5) 
        printf ("Too many errors on input. Execution terminated.\n");
}

void calc_print(int flag, double d, double v, double D)
{
    double V;
    if (flag==1)
    {
        V = v*(d*d)/(D*D);
        printf ("The exit velocity for the fluid is V=%lf\n",V);
    }
}

void store_num (const char num_string[ ], int *flag, int *count,
                double *value, int *bad_entry)
{
    int i;

    i=0;
    do
    {
        if (isdigit(num_string[i]) || num_string[i]=='.'
            || num_string[i]=='\0')  i++;

        else
        {
            (*bad_entry)++;
            *flag=0;
            printf ("Error on input.  Try typing your data again\n");
        }

    } while (*flag==1 && num_string[i-1]!='\0');

    if (*flag==1)
    {
        *value = atof (num_string);
        (*count)++;
    }
}
