#include <stdio.h>

// Algoritmo para determinar o número de divisores de um número

int qtd_divisores(int n)
{
    int i;
    int qtd = 0;

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            qtd++;
    }
    return qtd;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", qtd_divisores(n));
    return 0;
}