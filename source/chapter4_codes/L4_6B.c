/*For Lesson 4_6, part2 */

#include <stdio.h>
void main (void)
{
    int option;

    printf ("Please type 1, 2, or 3\n"
            "1. Breakfast\n"
            "2. Lunch\n"
            "3. Dinner\n");
    scanf ("%d",&option);

    switch (option)
    {
        case 1: 
            printf ("Good morning\n");
            printf ("Order breakfast\n");
            break;

        case 2: 
            printf ("Order lunch\n");
            break;

        case 3: 
            printf ("Order dinner\n");
            break;
                
        default:
            printf ("Order nothing\n");
    }
}
