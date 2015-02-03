/* Program for Lesson  7_2 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main (void)
{
    char cc, long_string[50], many_lines[70];
    int occupied, reserved, buffer_size;

    printf ("****** Section 1 - conversion specifications ********\n");
    strcpy (long_string,"This is a complete sentence." );
    strcpy (many_lines,"This sentence \ncovers two lines.");
    printf ("[[%s]]\n",long_string);
    printf ("[[%40s]]\n",long_string);
    printf ("[[%-40s]]\n",long_string);
    printf ("[[%40.10s]]\n\n",long_string);

    printf ("%s%s\n%s","This is"," one method for printing","string constants.\n");

    printf ("\n****** Section 2 - finding information about strings **\n");
    occupied = (int) strlen (many_lines);
    reserved = sizeof(many_lines) / sizeof(char);

    buffer_size = BUFSIZ;
    printf ("occupied = %d \nreserved = %d\n\nOur buffer size is %d\n",
            occupied, reserved, buffer_size);

    if (isdigit(many_lines[0])) 
        putchar(many_lines[0]);
    cc = tolower (many_lines[0]);
    putchar (cc);
    putchar ('\n');
    puts (many_lines);
}
