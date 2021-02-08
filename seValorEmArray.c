#include <stdio.h>

// Algoritmo para verificar se determinado elemento V está em um array com N elementos

int seValorEmArray (int v, int n, int arr[]) {
    int i;

    for (i = 0; i < n; i++) 
        if (arr[i] == v)
            return 1;

    return 0;
}

int main() {
    int arr[64], i, n, v;

    scanf("%d", &v);
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (seValorEmArray(v, n, arr))
        printf("S");
    else
        printf("N");

    return (0);
}