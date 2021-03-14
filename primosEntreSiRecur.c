#include <stdio.h>

// 1..Menor(a, b)

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

int primosRecur(int a, int b) {
    if (a > b)
        return primosRecur_(b, a, b);
    else
        return primosRecur_(a, b, a);
}

int main() {
    int a, b, isPrimos;
    scanf("%d %d", &a, &b);
    isPrimos = primosRecur(a, b);
    if (isPrimos > 0)
        printf("S\n");
    else 
        printf("N\n");
    return 0;
}