/*For Lesson 4_ 2*/

#include <math.h>
void main (void)
{
    double income, expenses, savings, deficit, interest;

    printf ("Enter your income and expenses:\n");
    scanf ("%lf %lf", &income, &expenses);
    printf ("\n\n");

    if (income>expenses)
    {
        savings = income - expenses;
        printf ("\nYou are saving money.\n"
                "Your savings for this month are: $%8.2f", savings);
    }

    else
    {
        deficit = expenses - income;
        printf ("\nYou are running a deficit.\n"
                "Your deficit for this month is: $%8.2f", deficit);
    }

        interest = (deficit > 0.0) ? (0.05*deficit) : (0.0);
        printf ("\nThe interest you owe on your debt is $%.2f\n",
                interest);
}
