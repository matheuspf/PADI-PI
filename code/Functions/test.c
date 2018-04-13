#include <stdio.h>


double retangulo (double l1, double l2)
{
    return l1 * l2;
}



int main ()
{
    double x, y;

    scanf("%lf %lf", &x, &y);

    double area = retangulo(x, y);

    printf("%lf\n", area);


    return 0;
}