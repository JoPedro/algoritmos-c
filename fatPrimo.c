#include <stdio.h>

// Algoritmo para fatorar um número em números primos

void fatPrimo (unsigned long long n) {
    unsigned long long f = 2;
    int expo = 0;

    while (n != 1) {
        if (!(n % f)) {
            expo++;
            n /= f;
        } 
        else {
            if (expo == 1)
                printf("%llu * ", f);
            else if (expo > 1)
                printf("%llu^%d * ", f, expo);
            expo = 0;
            f += (f % 2 == 0) + 2 * (f % 2 == 1); // if f > 2, f += 2
        }
    }
    if (expo == 1)
        printf("%llu", f);
    else 
        printf("%llu^%d", f, expo);
}

int main() {
    unsigned long long n = 0;
    scanf("%llu", &n);
    fatPrimo(n);
    return 0;
}