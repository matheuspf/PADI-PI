#include <stdio.h>


int main ()
{
    const int N = 1000000;

    char primos[N];

    int i, j, count = 0;

    // Inicialmente, consideramos todos os números como primos
    for(i = 2; i < N; ++i)
        primos[i] = 1;


    for(i = 2; i <= N / 2; ++i)
    {
        // Se um número é primo, obviamente todos os seus múltiplos não são primos
        if(primos[i])
        {
            // Para cada múltiplo de i menor do que N, nós sabemos que i * j não é primo
            for(j = 2; i * j <= N; ++j)
                primos[i * j] = 0;
        }
    }

    // Contamos todos os primos
    for(i = 2; i < N; ++i)
        count += primos[i];


    printf("%d\n", count);



    return 0;
}