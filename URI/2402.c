#include <stdio.h>

// Aluno: João Pedro Silva de Queiroz
// Questão: URI - 2402

int primo(long long n) {
    long long i = 0;
    if (n % 2 == 0)
        return 0;
    for (i = 3; i * i < n + 1; i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    long long n = 0;
    scanf("%lld", &n);

    if (primo(n) == 0) 
        printf("S\n");
    else 
        printf("N\n");

    return 0;
}