/* Lesson for 3_2 */

#include <stdio.h>
#include <conio.h>

void main (void)
{
    char  c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11;

/*************************************************************
**      SECTION 1
*************************************************************/

    printf ("\n***SECTION 1****************************************\n");

    c1 = 'g';
    c2 = '<';
    c3 = '\n';
    printf ("%c %c\n", c1, c2);
    putchar (c1);
    putchar (32) ;
    putchar (c2) ;
    putchar (c3);

    printf ("\n***SECTION 2 ***************************************\n");

/***************************************************************
**      SECTION 2
***************************************************************/

    printf ("Enter two characters (without spaces), then press return:\n");

    scanf ("%c%c", &c4, &c5);
    putchar (c4) ;
    putchar (c5);
    printf ("\n%d %d\n", c4, c5);

    printf ("\n***SECTION 3 *****************************************\n");

/*****************************************************************
**      SECTION 3
*****************************************************************/

    printf ("Enter two more characters (without spaces), then press return\n");
    getchar ();
    c6 = getchar ();

    c7 = getchar ();
    putchar (c6);
    putchar (c7);
    putchar ('\n') ;

    printf ("\n***SECTION 4 ****************************************\n");

/*****************************************************************
**      SECTION 4
*****************************************************************/

    printf ("Enter two more characters (without spaces) then press return:\n");
    fflush (stdin);
    c8 = getchar ();
    c9 = getchar ();
    fflush (stdin);
    printf ("%c%c \n", c8, c9);

    printf ("\n***SECTION 5 ****************************************\n");

/*****************************************************************
**      SECTION 5
*****************************************************************/

    printf ("Enter two more characters (without spaces) DO NOT press return:\n");

    c10 = getche ();
    c11 = getche ();
    putchar ('\n');
    putchar (c10) ;
    putchar (c11);
}
