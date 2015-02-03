/*For Lesson 4_ 6, part1*/ 

#include <stdio.h>
void main (void)
{
    int option;

    printf ("Please type 1, 2, or 3\n"
            "1. Breakfast\n"
            "2. Lunch\n"
            "3. Dinner\n");
    scanf ("%d", &option);

    if (option==1)
    {
        printf ("Good morning\n");
        printf ("Order breakfast\n");
    }
    else if (option==2)
    {
        printf ("Order lunch\n");
    }
    else if (option==3)
    {
        printf ("Order dinner\n");
    }
    else
    {
        printf ("Order nothing\n");
    }
}
