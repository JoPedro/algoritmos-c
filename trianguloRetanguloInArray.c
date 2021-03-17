#include <stdio.h>

int triRet(int, int, int);
int triRetInArr(int[], int);
int indexOfMaxInArray(int[], int);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    if (triRetInArr(arr, n))
        printf("S\n");
    else
        printf("N\n");

    return 0;
}

int triRet(int a, int b, int c) {
    int aux;

    if (b >= a && b >= c) {
        aux = a;
        a = b;
        b = aux;
    }
    else if (c >= a && c >= b) {
        aux = a;
        a = c;
        c = aux;
    }

    int resp = 0;

    if (a*a == b*b + c*c)
        ++resp;
    
    return resp;
}

int triRetInArr(int arr[], int n) {
    if (n >= 3) {
        int maior = indexOfMaxInArray(arr, n);
        int aux = 0;

        if (maior > 0) {
            aux = arr[0];
            arr[0] = arr[maior];
            arr[maior] = aux;
        }

        for (int i = 1; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (triRet(arr[0], arr[i], arr[j]))
                    return 1;
            }
        }

        int arr2[n-1];
        int k = 0;
        for (int i = 1; i < n; ++i) {
            arr2[k] = arr[i];
            ++k;
        }
        return triRetInArr(arr2, n-1);
    }
    else 
        return 0;
}

int indexOfMaxInArray(int arr[], int n) {
    int maior = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > arr[maior])
            maior = i;
    }

    return maior;
}
