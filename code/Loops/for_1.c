#include <stdio.h>


int main ()
{
    int i;
    double d;

    for(i = 0; i < 5; ++i)
    {
        printf("%d\n", i);
    }

    for(; i >= 0; --i)
        printf("%d\n", i);

    for(i = 0; i < 10)
    {
        printf("%d\n", i);
    }

    for(d = 0.1; d < 2.0; d += 1.0 / 3)
    {
        printf("%lf\n", d);
    }

    for(d > 2.0; d -= 0.5)
    {
        printf("%lf\n", d);
    }



    return 0;
}