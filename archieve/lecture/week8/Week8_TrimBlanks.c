// Week8_TrimBlanks.c
#include <stdio.h>
#include <stdlib.h>

#define FILENAME_LENGTH 30
#define	BLANK ' '

int trimBlanks (char [], char []);

int main(void) {
	char input_filename[FILENAME_LENGTH+1], 
	     output_filename[FILENAME_LENGTH+1];

	printf("What is the input filename? ");
	scanf("%s", input_filename);
	printf("What is the output filename? ");
	scanf("%s", output_filename);

	// copy input file to output file
	printf("Number of blanks trimmed = %d\n",
	       trimBlanks(input_filename, output_filename));

	return 0;
}

// To trim blanks from infile and copy trimmed text to outfile
int trimBlanks (char infile[], char outfile[]) {
	FILE *ifp, *ofp;
	char ch;

	if ((ifp = fopen(infile, "r")) == NULL) 
		exit(1);
	if ((ofp = fopen(outfile, "w")) == NULL) {
		fclose(ifp); 
		exit(2);
	}

	// Complete the code below
	while ((ch = fgetc(ifp)) != EOF) {


	}

	fclose(ifp); 
	fclose(ofp); 
	return count;
}

