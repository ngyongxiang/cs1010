/* Program for Application 7_2 */

#include <stdio.h>
#include <string.h>
void main (void)
{
    double conv_fc[14] = {0.001,0.01,1.0,1000.,
            0.0254,0.3048,0.9144,1609.,
            1.0,1000.,1.0e+06,0.2782,4.452,8905.};
    char units[14][7] ={"mm","cm","m","km",
            "inches","ft","yd","miles",
            "N","kN","MN",
            "ounces","lb","ton"};
    char from_units[7], to_units[7];
    double from_value, to_value;
    int from_index, to_index;

    printf ("Enter request in the form \"5.2 cm to inches\":\n\n"\
            "\tAllowable units are mm, cm, m, km, inches, ft, yd, miles,\n"
            "\tN, kN, MN, ounces, lb, and ton.\n");
    scanf ("%lf%s%*s%s",&from_value,from_units,to_units);

    from_index=0;
    to_index=0;
    while (strcmp (from_units,units[from_index]))
        from_index++;
    while (strcmp (to_units,units[to_index]))
        to_index++;

    to_value = from_value/conv_fc[to_index]*conv_fc[from_index];

    printf ("%lf %s is equal to %lf %s\n",
            from_value, from_units, to_value, to_units); 
}
