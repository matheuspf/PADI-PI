#include <stdio.h>


int main ()
{
    int A[10], B[10], r = 0, i;

    for(i = 0; i < 10; ++i)
        scanf("%d", &A[i]);

    for(i = 0; i < 10; ++i)
        scanf("%d", &B[i]);

    for(i = 0; i < 10; ++i)
        r += A[i] * B[i];

    printf("%d\n", r);

    
    return 0;
}