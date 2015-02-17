// Unit6_Caution1_Corrected.c
#include <stdio.h>

int main(void) {    
    double one_seventh = 1.0/7.0;
    double f = 0.0;

    while (!(f >= 0.99 && f <= 1.01)) {
        printf("%f\n", f);
        f += one_seventh;
    }

    return 0;
}

