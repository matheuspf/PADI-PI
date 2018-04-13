#include <stdio.h>


int main ()
{
    int N = 1000;

    int count = 0;

    int i, j;


    // Testamos todos os números até N
    for(i = 2; i <= N; ++i)
    {
        int primo = 1;
        
        // Caso o número i seja divisível por j (i % j == 0), este número não é primo
        for(j = 2; j < i; ++j)
        {
            if(i % j == 0)
            {
                // O número i não é primo
                primo = 0;
                break;
            }
        }

        if(primo == 1)
            count++;

        //count += primo;
    }


    printf("%d\n", count);



    return 0;
}