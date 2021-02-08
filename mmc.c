#include <stdio.h>

// Algoritmo que calcula o MMC (Mínimo Múltiplo Comum) de dois números usando a fórmula (a * b) / mdc(a, b) 

int mmc(int a, int b) {
    int x = a;
    int y = b;
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return (x * y) / a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("\nMDC: %d", mmc(a, b));
    return 0;
}