/* Program for Lesson  7_4, exercises 5*/  
   
/* 5.  The program below shows some of the character I/O functions that are
    defined in ANSI C. Please copy and run the program in order to understand
    how to use them properly.
*/


#include <stdio.h>  
#include <ctype.h>

void main(void)
 {char aa,bb,cc;
  FILE *inptr, *outptr;
aa='A';
bb='B';
cc='C';

  printf("\n\nWrite output file----------------------------------------\n\n");
  outptr= fopen("7_4.OUT","w”);

  fputc(aa,outptr);
  putc(bb,outptr);
  fprintf(outptr,"\nThis is output file 7_4.OUT, aa=%c, bb=%c\n",aa,bb);
  fclose(outptr);

  inptr= fopen("7_4.OUT","r”);

  aa=getc(inptr);
  printf("\n   d. Use getc() to read character aa=%c from a file\n",aa);

  bb=fgetc(inptr);
  printf("\n   d. Use fgetc() to read character bb=%c from a file\n",bb);

  printf("\n   f. Use fscanf() to read the rest of file 7_4.OUT\n");
  while( (fscanf(inptr,"%c",&cc) !=EOF) ) printf("%c",cc);
  fclose(inptr);
  }

