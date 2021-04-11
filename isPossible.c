#include <stdio.h>

/* Tells if a queen is under attack by another queen */

int isPossible(char[8][8], int, int);

int main()
{
    char tab[8][8];
    int i, j;
    for (i = 0; i < 8; ++i)
    {
        for (j = 0; j < 8; ++j)
        {
            scanf(" %c", &tab[i][j]);
        }
    }
    for (i = 0; i < 8; ++i)
    {
        for (j = 0; j < 8; ++j)
        {
            printf("%c", tab[i][j]);
        }
        printf("\n");
    }
    printf("\n%d", isPossible(tab, 4, 4));
    return 0;
}

int isPossible(char arr[8][8], int linha, int col)
{
    int i, j;
    for (i = 0; i < 8; ++i) {
        for (j = 0; j < 8; ++j) {
            if ((j == col && i != linha) && arr[i][j] == 'Q') return 0;
            if ((i-j == linha-col && (linha != i && col != j) && arr[i][j] == 'Q') || (i+j == linha+col && (linha != i && col != j) && arr[i][j] == 'Q')) return 0;
        }
    }
    return 1;
}