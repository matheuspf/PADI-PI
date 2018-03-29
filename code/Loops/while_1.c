#include <stdio.h>


int main ()
{
    int i = 0;

    while(i < 5)
    {
        ++i;
        printf("%d\n", i);
    }

    while(i >= 0)
        printf("%d\n", i--);


    while(i)
        ++i;
        printf("%d\n", i);


    i = 10;

    while(i--)
        printf("%d\n", i);




    return 0;
}