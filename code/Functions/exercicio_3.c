#include <stdio.h>

#define N 1000000

// Este é um exemplo de busca binária. A busca binária consiste em separar espaços de busca em vetores
// ordenados. É basicamente a mesma forma que usamos para buscar em um dicionário, por exemplo.
//
// Dado um vetor 'v' ordenado de tamanho N, o nosso objetivo é achar a posição em que o valor 'value' se encontra
// nesse vetor.
//
// Inicialmente buscamos no meio do vetor, isso é, na posição N/2. Caso value < v[N/2], isso significa que
// nenhum valor maior do que v[N/2] (considerando que o nosso vetor seja ordenado) pode ser igual a 'value'.
// Então, podemos eliminar todo o espaço de N/2 - N, e buscar somente em 0 - N/2.
//
// Caso value > v[N/2], então o valor que procuramos está claramente entre N/2 - N. Ignoramos então o espaço
// 0 - N/2. Por fim, se value == V[N/2], encontramos o nosso valor e retornamos sua posição.
//
// Essa operação pode ser realizada várias vezes, cada vez mais reduzindo o espaço de busca. Essa é uma operação
// extremamente eficiente, e pode ser realizada em vetores muito grandes.



// Temos o vetor 'v[]', a posição inicial a ser buscada (inicialmente 0), a posição final (inicialmente N)
// e o valor a ser encontrado, 'value'
int find (int v[], int start, int end, int value)
{
    // Esse é o valor central, sendo que na primeira iteração seu valor é N/2
    int mid = (start + end) / 2;

    // Caso value < v[mid], procuramos somente entre start - mid
    if(value < v[mid])
        return find(v, start, mid, value);

    // Caso value > v[mid], procuramos somente entre mid - end
    else if(value > v[mid])
        return find(v, mid, end, value);

    // Caso contrário, value == v[mid] e retornamos a posição
    return mid;
}


int main ()
{
    int v[N], i;

    for(i = 0; i < N; ++i)
        v[i] = i * 2;

    
    printf("%d\n", find(v, 0, N, 3000));


    return 0;
}