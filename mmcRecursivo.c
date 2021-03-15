#include <stdio.h>
#include <time.h>

long long mmcRecursivo_(long long a, long long b) {
    static long long multiplo = 0;

    multiplo += b;

    if ((multiplo % a == 0) && (multiplo % b == 0))
        return multiplo;
    else 
        return mmcRecursivo_(a, b);
}

long long mmcRecursivo(long long a, long long b) {
    if (a > b)
        return mmcRecursivo_(b, a);
    else
        return mmcRecursivo_(a, b);
}

int main() {
    long long a, b, mmc;
    clock_t inicio, fim;
    scanf("%lld %lld", &a, &b);
    inicio = clock();
    mmc = mmcRecursivo(a, b);
    fim = clock();
    printf("MMC: %lld\n", mmc);
    printf("Tempo: %.6lfms\n", ((double)(fim - inicio)/(CLOCKS_PER_SEC/1000)));
    return 0;
}