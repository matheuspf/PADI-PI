#include <stdio.h>

#define N 50

long f[N + 1];


// É possível perceber que calculamos o valor da sequência de Fibonacci várias vezes para a mesma
// entrada. Por exemplo, para x = 5, a sequência é:
//
//                      F(5) = F(4) + F(3)
//                              /       \
//              F(4) = F(3) + F(2)     F(3) = F(2) + F(1)  
//
// Ou seja, só nesse pequeno caso calculamos F(3) e F(2) duas vezes. Podemos então salvar o resultado
// já calculado em um vetor, e usar esse resultado em vez de calcular a sequência de novo.


long fib (int x)
{
    // Se x == 0, retornar 0. Se x == 1, retornar 1
    if(x <= 1)
        return x;

    // Se a sequência na posição x já foi calculada, isso é, o valor de f[x] é diferente de -1,
    // retornamos esse valor em vez de calcular de novo a sequência
    if(f[x] != -1)
        return f[x];

    // Caso a sequência na posição x não foi calculada ainda, nós a calculamos agora e salvamos
    // o seu valor em f[x], para que possa ser usado novamente sem a necessidade de outro cálculo
    return (f[x] = fib(x - 1) + fib(x - 2));
}


int main ()
{
    int i;
    
    // Inicializamos o vetor f, que contém os valores da sequência, com valores simbólicos, no caso -1
    for(i = 0; i <= N; ++i)
        f[i] = -1;

    printf("%ld\n", fib(N));

    return 0;
}