#include <stdio.h>

// 1..Maior(a, b)

int mmcRecursivo_(int a, int b) {
    static int multiplo = 0;

    multiplo += b;

    if ((multiplo % a == 0) && (multiplo % b == 0))
        return multiplo;
    else 
        return mmcRecursivo_(a, b);
}

int mmcRecursivo(int a, int b) {
    if (a > b)
        return mmcRecursivo_(b, a);
    else
        return mmcRecursivo_(a, b);
}

int main() {
    int a, b, mmc;
    scanf("%d %d", &a, &b);
    mmc = mmcRecursivo(a, b);
    printf("%d\n", mmc);
    return 0;
}