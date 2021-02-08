#include <stdio.h>
#include <math.h>

// Algoritmo para determinar se dois números são 'colegas'
// Definição de números colegas abaixo:

int soma_divisores(int n)
{
    int i = 1;
    int soma = 0;

    while (i < n / 2)
    {
        if (n % i == 0)
            soma += i;
        i++;
    }
    return soma;
}

int is_colegas(int a, int b)
{
    int soma1, soma2;
    soma1 = soma_divisores(a);
    soma2 = soma_divisores(b);

    // Definição dos números colegas: |D(A) - B| <= 2 e |D(B) - A| <= 2
    // D(A) = Soma dos divisores próprios de A

    if (abs(soma1 - b) <= 2 && abs(soma2 - a) <= 2)
        return 1;
    else 
        return 0;    
}

int main()
{
    int x = 0, y = 0;
    scanf("%d %d", &x, &y); 
    if (is_colegas(x, y) == 1)
        printf("S");
    else
        printf("N");

    return 0;            
}