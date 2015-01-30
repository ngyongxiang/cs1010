/*For Lesson 4_10 */

#include <stdio.h>
void main (void)
{
    int day, hour, minutes;

    for (day=1; day<=3; day++)
        printf ("Day=%2d\n", day);

    for (hour=5; hour>2; hour--)
    {
        minutes = 60 * hour;
        printf ("Hour = %2d, Minutes=%3d\n", hour, minutes);
    }
}
