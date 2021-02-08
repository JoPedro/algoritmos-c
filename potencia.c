#include <stdio.h>

// Algoritmo que calcula a potência de expoente B da base A (a^b)

int potencia(int base, int expo) {
    int potencia = 1;
    while (expo > 0) {
        if (expo % 2 == 0) {
            expo /= 2;
            base *= base;
        }
        else {
            expo -= 1;
            potencia *= base;
        }
    }
    return potencia;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", potencia(a, b));
    return 0;
}