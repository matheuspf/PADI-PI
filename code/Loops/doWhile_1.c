#include <stdio.h>


int main ()
{
    int i = 0;

    do
    {
        ++i;
        printf("%d\n", i);

    } while(i < 5);

    do
    {
        printf("%d\n", ++i);

    } while(i >= 0)

    do
    {
        puts("10");
        
    } while(0);


    return 0;
}