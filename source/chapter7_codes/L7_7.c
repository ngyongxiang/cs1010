/* Program for Lesson  7_7*/  

#define LENGTH 20
#include <stdio.h>
#include <string.h>
void function1 (char ee[ ], char ff[ ][LENGTH], char *gg, char *hh[ ], int num_rows_ff, int 
num_elems_hh);

void main (void)
{
    char aa[ ] = "One-dimensional array.";
    char bb[ ][LENGTH] = {"Two-","dimensional ","array."};
    char *cc = "Pointer to string constant.";
    char *dd[ ] = {"Array ","of pointers ","to string ","constants."};
    int num_rows_bb, num_elems_dd;

    num_rows_bb = sizeof(bb)/LENGTH;
    num_elems_dd = sizeof(dd)/sizeof(char *);

    function1(aa, bb, cc, dd, num_rows_bb, num_elems_dd);
}

void function1 (char ee[ ], char ff[  ][LENGTH], char *gg, char *hh[ ],  int num_rows_ff, int 
num_elems_hh)
{
    int i;

    puts(ee);
    for (i=0; i<num_rows_ff ; i++) 
        puts(ff[i]);
    puts(gg);
    for (i=0; i<num_elems_hh; i++) 
        puts(hh[i]);
}
