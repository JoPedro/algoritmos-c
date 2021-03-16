#include <stdio.h>

int maiorElemRecur(int arr[], int n) {
    static int i = 0, max = -1;

    if (i < n) {
        if (max < arr[i]) {
            
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    int maior = maiorElemRecur(arr, n);
    return 0;
}