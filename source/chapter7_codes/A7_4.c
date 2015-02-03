
/* Program for Application 7_4 */

/*************************************************************************************/
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#define MAX_NUM_REPTS 1000
#define NUM_CITIES 5 
#define NUM_DESCRIPTORS 12 
#define REPORT_SIZE 800 
 
void main (void) 
    { 
    int i, j, k, rept_len, tally[4][NUM_CITIES]={0}, city_match, 
        descriptor_match, mm, undefined, num_repts; 
    char *report[MAX_NUM_REPTS], *match; 
    char indiv_rept[REPORT_SIZE]={0};
    char city[NUM_CITIES][15]={"San Francisco", "Berkeley", "Palo Alto", 
            "Santa Cruz", "San Jose"}; 
    char descriptor[NUM_DESCRIPTORS][15]={"mild","weak","slow", 
            "moderate", "medium", "tempered", 
            "strong", "powerful", "sharp",
            "violent", "destructive", "extreme"}; 
    FILE *infile; 
 
    infile = fopen ("EQREPT.TXT","rt"); 
    rept_len=1; 
    j=0; 
    i=0; 
    undefined=0; 
 
/*************************************************************************************/
    while (indiv_rept[i] != EOF && j<MAX_NUM_REPTS)
    { 
        for (i=0; i<REPORT_SIZE-1; i++) 
        { 
            indiv_rept[i] = getc (infile); 
            if (indiv_rept[i]=='#' || indiv_rept[i]==EOF) break; 
        } 
 
        indiv_rept[i+1] = '\0'; 
        rept_len = i+2; 
        report[j] = (char *) calloc (rept_len, sizeof(char)); 
 
        if (report[j]==NULL) 
        { 
            printf ("Memory not allocated for report number %d", j+1); 
        } 
        else
        {
            strcpy (report[j], indiv_rept);
        }

        puts(report[j]);
        j++;
    }

/*************************************************************************************/
    num_repts = j;
 
    for(i=0; i<num_repts; i++) 
    { 
        for (j=0; j<NUM_CITIES; j++) 
        { 
            match = strstr(report[i],city[j]); 
            if (match != NULL) break; 
        } 
        for (k=0; k<NUM_DESCRIPTORS; k++) 
        { 
            match = strstr(report[i],descriptor[k]); 
            if (match != NULL) 
                break; 
        } 
        city_match = j; 
        descriptor_match = k; 
        if (0<=descriptor_match && descriptor_match<=2)
        {
            tally[0][j]++; 
        } 
        else if (3<=descriptor_match && descriptor_match<=5) 
        { 
            tally[1][j]++; 
        } 
        else if (6<=descriptor_match && descriptor_match<=8) 
        { 
            tally[2][j]++; 
        } 
        else if (9<=descriptor_match && descriptor_match<=11) 
        { 
            tally[3][j]++; 
        } 
    } 
 
/***********************************************************************************/
    printf ("Final tally of Modified Mercalli intensities:\n\n");
    printf ("Modified\nMercalli\nIntensity "); 
    for (i=0; i<NUM_CITIES; i++) 
        printf ("%12s", city[i]); 
 
    mm = 2; 
    for (i=0; i<4; i++) 
    { 
        mm+=2; 
        printf ("\n\n%6d",mm); 
        for (j=0; j<NUM_CITIES; j++) 
        { 
            printf ("%12d",tally[i][j]); 
        } 
    } 
}
