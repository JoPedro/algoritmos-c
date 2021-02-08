#include <stdio.h>

// Algoritmo que calcula o MDC (Máximo Divisor Comum) de dois números usando o algoritmo de Euclides

int mdc(int a, int b) {
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("\nMDC: %d", mdc(a, b));
    return 0;
}