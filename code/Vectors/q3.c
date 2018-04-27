#include <stdio.h>

int main ()
{
    int v[5], i, j;

    for(i = 0; i < 5; ++i)
    {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 5; ++i)
    {
        for(j = i + 1; j < 5; ++j)
        {
            if(v[i] < v[j])
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    for(i = 0; i < 5; ++i)
        printf("%d ", v[i]);
    
    puts("");

    
    for(i = 0; i < 5; ++i)
    {
        for(j = i + 1; j < 5; ++j)
        {
            if(v[i] > v[j])
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    for(i = 0; i < 5; ++i)
        printf("%d ", v[i]);

    puts("");


    return 0;
}