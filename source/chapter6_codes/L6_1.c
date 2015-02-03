/* Program for Lesson 6_1 */

#define N 10
void main (void)
{
    int a[2];
    double b[N];

    a[0] = 11;
    a[1] = 22;

    b[3] = 777.7;
    b[6] = 888.8;

    printf ("a[0] = %3d, a[1] = %3d\n", a[0], a[1]);
    printf ("b[3] = %8.2lf, b[6] = %8.2lf \n", b[3], b[6]);
    printf ("b[2] = %lf\n", b[2]);
    printf ("a[3] = %d\n", a[3]);
}
