/* Program for Lesson  7_9*/   

#include <stdio.h>
void main (void)
{
    char aa[35]={"This is a one-dimensional array"};
    char bb[5][40]={"We can","use both","array and pointer",
            "notation to access","one and two-dimensional arrays"};
    char cc[2][3][20]={"A three ","dimensional ","array ","is ","shown ","also"};
    char *dd;

    printf ("**************** Section 1  1-D array ****************\n");
    putchar (aa[0]);
    putchar (*aa);
    putchar ('\n');

    putchar (aa[16]);
    putchar (*(aa+16));
    putchar ('\n');

    printf ("**************** Section 2  2-D array ****************\n");

    putchar (bb[3 ][5] );
    putchar (*(*(bb+3)+5));
    putchar ('\n');

    puts (*(bb+2));

    dd = &bb[0][0 ];
    putchar (*(dd+125));
    putchar ('\n');

    printf ("**************** Section 3  3-D array ****************\n");

    putchar (cc[1][2 ][3]);
    putchar (*(*(*(cc+1)+2)+3));
    putchar ('\n');

    puts (*(*(cc+1)+2));

    dd = &cc[0][0][0];
    putchar (*(dd+80));
    putchar ('\n');
    puts (dd+80);

    printf ("Address of cc[0][0][0]=%p, cc+1=%p, *cc+1=%p, **cc+1=%p\n",
            &cc[0][0][0],cc+1,*cc+1,**cc+1);
}
