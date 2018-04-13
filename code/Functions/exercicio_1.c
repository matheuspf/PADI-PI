#include <stdio.h>


// A sequência de Fibonacci é:

// F(0) = 1, F(1) = 1,
// F(x) = F(x-1) + F(x-2)


/*F(0) = 1
F(1) = 1
F(2) = F(1) + F(0) = 1 + 1 = 2
F(3) = F(2) + F(1) = 2 + 1 = 3
F(4) = F(3) + F(2) = 3 + 2 = 5
F(5) = F(4) + F(3) = 5 + 3 = 8
*/


/*int fib (int n)
{
    int f, f_1 = 1, f_2 = 1, i;

    if(n == 0 || n == 1)
        return 1;


    for(i = 2; i <= n; ++i)
    {
        f = f_1 + f_2;
        f_2 = f_1;
        f_1 = f;
    }

    return f;
}*/








int fib2 (int x)
{
    // Se x == 0, retornar 1. Se x == 1, retornar 1
    if(x <= 1)
        return 1;

    // Caso contrário, retornar o valor da sequência: F(x-1) + F(x-2)
    return fib2(x - 1) + fib2(x - 2);
}


int main ()
{
    int N;

    scanf("%d", &N);

    printf("%d\n", fib2(N));

    return 0;
}