/* For Chapter 4 application 4_4 */

#include <stdio.h>
void main (void)
{
int input;
char cORf;
double convertedDeg;

printf ("Enter a degree (use C to denote Celsius, F to denote Fahrenheit), negative value to stop the process \n");
scanf ("%d%c", &input, &cORf);

while (input >= 0)
{
      if (cORf == 'C')
     {
            convertedDeg = input * 9 / 5.0 + 32;
            printf ("%7.2f F\n", convertedDeg);
      }
     else  if (cORf == 'F')
     {
            convertedDeg = (input - 32) * 5 / 9.0;
            printf ("%7.2f C\n", convertedDeg);
      } 
      printf ("\nEnter a degree (use C to denote Celsius, F to denote Fahrenheit), negative value to stop the process \n");
      scanf ("%d%c", &input, &cORf);
}
}

