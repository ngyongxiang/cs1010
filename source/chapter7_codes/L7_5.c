/* Program for Lesson  7_5 */
  
#include <stdio.h>
#include <string.h>
void main (void)
{
    char *aa;
    char bb[25];

    char *cc[5];
    char dd[5][30];
    char ee[25], ff[30];
    int i, j;

    strcpy (ee,"This is a sample string.");
    strcpy (ff,"Another string.");

    printf ("*********** Section 1 - Initializing **************\n");

    aa = ee; 
    cc[0] = ff;
    cc[1] = ee;

    strcpy (bb,ee); 
    strcpy (dd[0],ff); 
    strcpy (dd[1],ee);

    printf ("*********** Section 2 - Printing using puts **************\n");

    puts (aa);
    puts (bb);
    puts (cc[0]);  
    puts (dd[0]);

    printf ("*********** Section 3 - Printing using putchar **************\n");

    for (i=0; i<10; i++) 
        putchar(aa[i]) ;
    putchar ('\n');
    for (i=0; i<10; i++) 
        putchar(bb[i]);
    putchar ('\n');

    for (i=0; i<2; i++)
    {
        for (j=0; j<10; j++) 
            putchar(cc[i][j]);
        putchar('\n');
    }

    for (i=0; i<2; i++)
    {
        for (j=0; j<10; j++) 
            putchar(dd[i][j]) ;
        putchar('\n');
    }
}
