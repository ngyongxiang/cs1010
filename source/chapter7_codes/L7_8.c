/* Program for Lesson  7_8*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void main (void)
{
    int pos, len, ia, ib;
    char hello[50]="Good", token_separator[]="!,\n \t...";
    char *pa, *pb, *pc;
    double da;
    long la;
    unsigned long ula;
    FILE *infile;

    printf ("/****** A - function atoi *********************************/\n");
    ia = atoi ("-123.45xyz");
    printf ("A--- atoi() converts -123.45xyz to ia=%5d\n\n\n",ia);

    printf ("/****** B - function atof *********************************/\n");
    da = atof ("-987.65E+01pqr");
    printf ("B--- atof() converts -987.65E+01pqr to da=%8.2lf\n\n\n",da);

    printf ("/****** C - function atol *********************************/\n");
    la = atol ("-456.89abc");
    printf ("C--- atol converts -456.89abc to la=%5ld\n\n\n",la);

    printf ("/****** D - function strcat ********************************/\n");
    pa = strcat (hello," morning!");
    printf ("D--- hello=%s $$$ String at pa=%s\n\n\n",hello, pa);

    printf ("/****** E - function strchr ********************************/\n");
    pb = strchr (hello,'m');
    pos = pb-hello+1;
    printf ("E--- Character 'm' is the %1dth character of string %s, string at "
            "pb=%s\n\n\n",pos,hello,pb);
    printf ("/****** F - function strcmp ********************************/\n");
    ia = strcmp (hello,"Good xyz");
    if (ia<0)  
        printf ("F--- ia=%2d, %s is less than    Good xyz!\n\n",ia, hello);
    if (ia==0) 
        printf ("F--- ia=%2d, %s is identical to Good xyz!\n\n",ia,hello);
    if (ia>0)  
        printf ("F--- ia=%2d, %s is greater than Good xyz!\n\n\n",ia,hello);

    printf ("/****** H - function strcspn *******************************/\n");
    pos = strcspn (hello, "dog");
    printf ("H--- The first occurance of any character in substring, dog,  \n"
            "     in string %s is the %1dnd character, o\n\n\n",hello,pos+1);

    printf ("/****** I - function strerror ******************************/\n");
    errno = 0;
    infile = fopen ("abcdefgh.ijk","r");
    if (errno)
    {
        pa = strerror (errno);
        printf ("I--- Does file  abcdefgh.ijk exist? strerror() says %s\n",pa);
    }

    printf ("/****** J - function strlen ********************************/\n");
    len = strlen (hello);
    printf ("J--- Not including the null character, %s has %2d characters\n\n\n",
            hello,len);

    printf ("/****** K - function strncat *******************************/\n");
    pb = strncat (hello," John. How are you!",5);
    printf ("K--- hello=%s $$$ String at pb=%s\n\n\n",hello, pb);

    printf ("/****** L - function strncmp ********************************/\n");
    ib = strncmp (hello,"Good car",15);
    if (ib>0)
        printf ("L--- ib=%1d, %s is greater than Good car\n\n\n",ib,hello);

    printf ("/****** M - function strncpy *******************************/\n");
    pa = strncpy (hello+14,"Linda. How are you!", 6);
    printf ("M--- hello=%s $$$ String at pa=%s\n\n\n",hello,pa);

    printf ("/****** N - function strpbrk *******************************/\n");
    pb = strpbrk(hello,"dear");
    printf ("N--- hello=%s $$$ String at pb=%s\n\n\n",hello,pb);

    printf ("/****** O - function strrchr *******************************/\n");
    pa = strrchr(hello,'m');
    printf ("O--- hello=%s, String at pa=%s\n\n\n\n",hello,pa);

    printf ("/****** P - function strspn ********************************/\n");
    ia = strspn ("Good year",hello);
    printf ("P--- The %dth character 'y' is the first character in oGdo year\n"
        "     that is not present in %s\n\n\n",ia+1, hello);

    printf ("/****** Q - function strstr ********************************/\n");
    pa = strstr(hello,"Linda");
    ia = pa-hello+1;
    printf ("Q--- Linda was found at position %d of %s @@@ String at pa=%s\n\n\n",
           ia,hello,pa);

    printf ("/****** R - function strtod ********************************/\n");
    da = strtod ("123.45abc",&pb);
    printf ("R--- Find double number %6.2lf in 123.45abc $$$ String at "
            "pb=%s\n\n\n",da,pb);

    printf ("/****** S - function strtol ********************************/\n");
    la = strtol ("98765xyz",&pa, 10);
    printf ("S--- Find long number %6ld in 98765xyz $$$ String at"
            "pa=%s\n\n\n",la,pa);

    printf ("/****** T - function strtoul ********************************/\n");
    ula = strtoul ("45678pqr",&pc,10);
    printf ("T--- Find unsigned long %6ld in 45678pqr $$$ String at "
            "pc=%s\n\n\n",ula,pc);

    printf ("/****** U - function strtok ********************************/\n");
    printf ("hello=%s,     token_separator=%s\n",hello,token_separator);
    pa = strtok (hello,token_separator);
    while (pa!=NULL)
    {
        printf ("U--- String at pa=%10s pa=%5u\n",pa,pa);
        pa = strtok (NULL,token_separator);
    }
}
