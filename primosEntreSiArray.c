#include <stdio.h>

int primosRecur(int, int);
int primosRecur_(int, int, int);
int parPrimosInArr(int[], int);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) 
        scanf("%d", &arr[i]);
        
    if (parPrimosInArr(arr, n))
        printf("S\n");
    else
        printf("N\n");

    return 0;
}

int primosRecur(int a, int b) {
    if (a > b)
        return primosRecur_(b, a, b);
    else
        return primosRecur_(a, b, a);
}

int primosRecur_(int a, int b, int a2) {
    if ((a % a2 == 0) && (b % a2 == 0))
        return 0;
    
    if (a2 > 2) {
        a2--;
        return primosRecur_(a, b, a2);
    }
    else
        return 1;
}

int parPrimosInArr(int arr[], int n) {
    int resp = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (primosRecur(arr[i], arr[j])) {
                ++resp;
                break;
            }
        }
    }

    return resp;
}