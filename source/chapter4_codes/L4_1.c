/*For Lesson 4_1 */

#include <stdio.h>
void main (void)
{
    int i, guess, jackpot=8;

    printf ("Try to guess the jackpot number \nbetween 1 and 10!\n");
    printf ("Please type a number.\n");
    scanf ("%d",&guess);

    if (guess<jackpot)
        printf ("Try a bigger number\n");
    
    if (guess>jackpot)
        printf ("Try a smaller number\n");

    if (guess==jackpot)
        printf ("Verify your guess by typing it one more time\n");

    scanf ("%d", &guess);

    if (guess==jackpot)
    {
        printf ("You hit the \n");
        printf ("JACKPOT!\n");
    }

    if (guess!=jackpot)
        printf ("You have not guessed correctly.\nYou lose.\n");
}
