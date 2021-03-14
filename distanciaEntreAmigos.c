#include <stdio.h>

// Pedir pra Thales o enunciado da questão

int main()
{
    int np = 0;
    int i, k, j = 0;
    scanf("%d", &np);
    char input[30] = { 0 };
    scanf(" %[^\n]29s", input);
    char andares[15] = { 0 };

    for (i = 0; i <= np * 2; i++)
    {
        if (input[i] != 32) {
            andares[j] = input[i];
            j++;
        }
    }

    int dist = 0;
    int aux = 0;

    for (i = 0; i < np; i++)
    {
        for (k = i + 1; k < np; k++)
        {
            aux = (andares[i] - '0') + (k - i) + (andares[k] - '0');
            if (aux > dist)
                dist = aux;
        }
    }

    printf("%d", dist);
}