#include <stdio.h>

// Algoritmo para determinar se um número é primo

int primo(long long n) {
    long long i = 0;
    if (n % 2 == 0)
        return 0;
    if (n % 3 == 0)
        return 0;
    for (i = 5; i * i < n + 1; i += 6) {
        if ((n % i == 0) || (n % (i + 2) == 0))
            return 0;
    }
    return 1;
}

int main() {
    long long n = 0;
    scanf("%lld", &n);

    if (primo(n) == 0) 
        printf("N\n");
    else 
        printf("S\n");

    return 0;
}