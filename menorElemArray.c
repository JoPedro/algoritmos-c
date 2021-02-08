#include <stdio.h>

// Algoritmo que retorna o menor elemento em um array de N elementos

int menorElemArray (int n, int arr[]) {
    int i;
    int menor = arr[0];

    for (i = 0; i < n; i++) {
        if (arr[i] < menor)
            menor = arr[i];
    }

    return menor;
}

int main() {
    int arr[64], i, n;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nMenor elemento: %d", menorElemArray(n, arr));
    return (0);
}