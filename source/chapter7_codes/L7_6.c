/* Program for Lesson  7_6 */

#include <stdio.h>
void main (void)
{
    char *aa = "We can use a pointer to a string constant.";
    char bb[ ] = "We can also use an array.";

    char *cc[ ] = {"We can","use an array","of pointers to a constant."};
    char dd[ ][11] = {"Or we can","use a 2-D","array."};
    int i ;

    printf ("Addresses: \n\taa=%p \n\tcc[0]=%p \n\tcc[1]=%p \n\tcc[2]=%p"
            "\n\tbb=%p \n\tdd[0]=%p \n\tdd[1]=%p \n\tdd[2]=%p \n",
            aa, cc[0], cc[1], cc[2], bb, dd[0], dd[1], dd[2]);

    puts (aa);
    puts (bb);

    for (i=0; i<3; i++) 
        puts(cc[i]);
    for (i=0; i<3; i++) 
        puts(dd[i]);
}
