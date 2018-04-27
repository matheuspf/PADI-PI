#include <stdio.h>


int main ()
{
    int v1[5], v2[5], v3[5], r[5], i;

    for(i = 0; i < 5; ++i)
        scanf("%d", &v1[i]);

    for(i = 0; i < 5; ++i)
        scanf("%d", &v2[i]);

    for(i = 0; i < 5; ++i)
        scanf("%d", &v3[i]);

    for(i = 0; i < 5; ++i)
        r[i] = v1[i] * v2[i] * v3[i];

    for(i = 0; i < 5; ++i)
        printf("%d\n", r[i]);



    return 0;
}