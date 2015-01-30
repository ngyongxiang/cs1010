/* Program for Lesson  7_3 */  

#include <stdio.h>
#include <string.h>
#define NUM_ROWS 3
#define NUM_COLS 15

void main (void)
{
    char aa[2][90], bb[NUM_ROWS][NUM_COLS];
    int i, occupied, reserved;
    FILE *outfile;
    outfile = fopen "L7_3.OUT","w");

    printf ("********* Section 1 - Initializing ***********\n");
    strcpy (aa[0],"The aa[ ][ ] array ");
    strcpy (aa[1],"has 2 strings.\n");
    strcpy (bb[0],"The bb array ");
    strcpy (bb[1],"has ");
    strcpy (bb[2],"3 strings.");

    printf ("********** Section 2 - Printing ************\n");
    for (i=0; i<2; i++) 
        printf("%s",aa[i]);
    for (i=0; i<NUM_ROWS; i++) 
        puts(bb[i]);
    for (i=0; i<NUM_ROWS; i++) 
        fputs(bb[i],outfile);

    reserved = sizeof (bb[0]);
    occupied = strlen (bb[0]);
    printf ("Reserved bytes for bb[0]=%d \nOccupied bytes for bb[0]=%d\n",
            reserved, occupied);
}
