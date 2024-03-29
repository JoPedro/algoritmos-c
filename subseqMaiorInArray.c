#include <stdio.h>

int subseqMaiorInArray(int[], int);
int subseqMaiorInArray_(int[], int, int);

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    printf("%d\n", subseqMaiorInArray(arr, n));

    return 0;
}

int subseqMaiorInArray(int arr[], int n) {
    subseqMaiorInArray_(arr, n, n);
}

int subseqMaiorInArray_(int arr[], int n, int sub) {
    int soma = 0; 

    if (sub >= 1) {
        int aux = 0; 

        for (int i = 0; i <= (n - sub); ++i) {
            for (int j = i; j < (i + sub); ++j) {
                aux += arr[j];
            }
        }
        
        aux = subseqMaiorArray_(arr, n, sub-1);
        if (aux > soma)
            soma = aux;
    }
    return soma;
}
