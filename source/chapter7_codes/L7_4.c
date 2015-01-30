/* Program for Lesson  7_4 */

#include <stdio.h> 
void main (void) 
{ 
    char a[40],b[3][60],c[4][100],d[50],e[30]; 
    int i; 
    FILE *infile; 
    FILE *outfile; 
    infile = fopen ("L7_4.TXT","r");
    outfile = fopen ("L7_4.OUT","w");
 
    printf ("************ Section 1 for Array a[ ] *************\n"); 
    printf ("Enter a line of text for a[ ]\n"); 
    gets (a); 
    puts (a); 

    printf ("\n\n************ Section 2 for Array b[ ][ ] *************\n");
    printf ("Type 3 lines for b[ ] and press return at the end of each one\n");
    for (i=0; i<3; i++)
    {
        gets (b[i]);
        puts (b[i]); 
    } 
 
    printf ("\n\n************ Section 3 for Array c[ ][ ] *************\n"); 
    printf ("We will read c[ ] from a file\n"); 
    for (i=0; i<4; i++) 
    { 
        fgets (c[i],100 ,infile); 
        puts (c[i]); 
        fputs (c[i] ,outfile); 
    }
 
    printf ("************ Section 4 for Arrays d[ ] and e[ ] *************\n"); 
    printf ("Enter a line of text for d[ ] and press return\n"); 
    scanf ("%s",d); 
    puts (d); 
    gets (e); 
    printf ("This is the rest of the text entered\n"); 
    puts (e); 
} 
