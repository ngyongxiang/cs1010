/* Program for Lesson  7_1 */

#include <stdio.h>
#include <string.h>
void main (void)
{
    char aa, bb[4], cc[100], dd[100];
    FILE *outfile;
    outfile = fopen ("L7_1.out","w");

    printf ("**********  Section 1 - Initializing ************\n");
    aa = 'g';
    bb[0] = 'C';
    bb[1] = 'a';
    bb[2] = 't';
    bb[3] = '\0';

    strcpy (cc,"This is a string constant, also called a string literal.");
    strcpy (dd,cc);

    printf ("\n**********  Section 2 - Printing **********\n");
    putchar (aa);
    putc (aa, outfile);
    fputc (aa, outfile);

    puts (bb);
    fputs (bb,outfile);
    printf ("%s\n",bb);
    fprintf (outfile,"%s\n",bb);

    puts (cc);
    puts (dd);

    printf ("addresses aa=%p, bb=%p, cc=%p, dd=%p\n",&aa,bb,cc,dd);
}
