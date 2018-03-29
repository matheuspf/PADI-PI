#include <stdio.h>


// A sequência de Fibonacci é:

// F(0) = 0, F(1) = 1,
// F(x) = F(x-1) + F(x-2)


int fib (int x)
{
    // Se x == 0, retornar 0. Se x == 1, retornar 1
    if(x <= 1)
        return x;

    // Caso contrário, retornar o valor da sequência: F(x-1) + F(x-2)
    return fib(x - 1) + fib(x - 2);
}


int main ()
{
    int N = 12;

    printf("%d\n", fib(N));

    return 0;
}