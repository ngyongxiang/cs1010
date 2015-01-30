/* Program for application 6_1 */

#include <stdio.h>

void adder1bit (char x, char y, char carryIn, char *sum, char *carryOut);
void adder16bit (char x[], char y[], char answer[]);
void readinput (char in[]);


void main (void)
{
    int i;
    char dummy;
    char inputX[16];    /* inputX simulates a 16 bit binary number */
    char inputY[16];    /* inputY simulates a 16 bit binary number */
    char answer[17];    /* inputY simulates a 16 bit binary number plus carry out as the MSB */
    /* MSB = index 15, LSB = index 0 */

    printf ("Enter 2 16-bit binary numbers:\n");
    readinput (inputX);

    scanf ("%c", &dummy);    /* dummy to read the space */

    readinput (inputY);
    adder16bit(inputX, inputY, answer);

    printf ("The addition result is: ");
    for (i=16; i>=0; i--) 
        printf ("%d", answer[i]);
    printf ("\n");
}

void readinput (char in[])
{
    int i;
    char bit;

    for (i=15; i>=0; i--)
    {
        scanf ("%c", &bit);
        in[i] = bit - '0';
    }
}

void adder1bit (char x, char y, char carryIn, char *sum, char *carryOut)
/* sum = x xor y xor carryIn */
/* carry = xy + carryIn (x xor y) */
/* xor is ^ */
/* and is & */
/* or  is | */
{
    *sum = (x^y) ^ carryIn;
    *carryOut = x & y | carryIn & (x^y);
}

void adder16bit (char x[], char y[], char answer[])
{
    int i;
    char cin, cout, sum;

    cin = 0;
    for (i=0; i<16; i++) {
        adder1bit (x[i], y[i], cin, &sum, &cout);
        cin = cout;
        answer[i] = sum;
    }
    answer[16] = cout;
}
