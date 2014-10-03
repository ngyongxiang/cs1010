/* Lesson for 2_4 */

#include <stdio.h>
#define DAYS_IN_YEAR 365
#define PI 3.14159

void main (void)
{
    float income = 1234567890.12;

    printf ("CONVERSION SPECIFICATIONS FOR INTEGERS \n\n");
    printf ("Days in year = \n"
            "[[%1d]] \t(field width less than actual)\n"
            "[[%9d]] \t(field width greater than actual)\n"
            "[[%d]]  \t(no field width specified)  \n\n\n",
            DAYS_IN_YEAR, DAYS_IN_YEAR, DAYS_IN_YEAR);

    printf ("CONVERSION SPECIFICATIONS FOR REAL NUMBERS\n\n");
    printf ("Cases for precision being specified correctly \n");
    printf ("PI = \n"
            "[[%1.5f]] \t\t(field width less than actual) \n"
            "[[%15.5f]] \t(field width greater than actual)\n"
            "[[%.5f]] \t\t(no field width specified) \n\n",
            PI,PI,PI);

    printf ("Cases for field width being specified correctly \n");
    printf ("PI = \n"
            "[[%7.2f]] \t\t(precision less than actual) \n"
            "[[%7.8f]] \t\t(precision greater than actual)\n"
            "[[%7.f]] \t\t(no precision specified) \n\n",
            PI,PI,PI);

    printf ("PRINTING SCIENTIFIC NOTATION \n\n");
    printf ("income = \n"
            "[[%18.2e]] \t(field width large, precision small) \n"
            "[[%8.5e]]  \t(field width and precision medium size)\n"
            "[[%4.1e]]  \t\t(field width and precision small) \n"
            "[[%e]      \t(no specifications)  \n\n",
            income, income, income, income);

    printf ("USING A FLAG IN CONVERSION SPECIFICATIONS \n\n");
    printf ("Days in year= \n"
            "[[%-9d]] \t\t(field width large, flag included)\n",
            DAYS_IN_YEAR);
}
