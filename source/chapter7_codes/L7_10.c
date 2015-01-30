/* Program for Lesson  7_10*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main (void)
{
    char aa[19];
    char *bb[22];
    char cc[22][19] = {"Example", " String 1 ", "Words"};
    int xx, yy;

    printf ("*********** Section 1 - Using calloc *************\n");

    strcpy (aa,cc[0]);
    xx = strlen (aa);
    bb[0] = (char *) calloc (xx,sizeof(char));

    strcpy (bb[0],aa);
    puts (bb[0]);

    printf ("*********** Section 2 - Using malloc *************\n");

    strcpy (aa,cc[1]) ;
    xx = strlen (aa);
    yy = xx * sizeof(char);
    bb[1] = (char *) malloc (yy) ;

    strcpy (bb[1], aa);
    puts (bb[1]) ;

    printf ("*********** Section 3 - Using realloc *************\n");
    strcpy (aa, cc[2]);
    xx = strlen (aa);
    yy = xx*sizeof (char);

    bb[1] = (char *) realloc (bb[1], yy);
    strcpy (bb[1], aa);
    puts (bb[1]) ;
    free (bb[1]);
}
