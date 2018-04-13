#include <stdio.h>



void funcao (int n)
{
    int i, j;

    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= i; ++j)
            printf("%d\t", i*j);

        printf("\n");
    }
}


int main ()
{
    int n = 9;

    //scanf("%d", &n);

    funcao(n);


    return 0;
}