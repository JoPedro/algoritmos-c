#include <stdio.h>

/* Expotential(2^n) */

int eightQueens(char[8][8]);
int eightQueensRecur(char[8][8], int, int);
int isPossible(char[8][8], int, int);

int main() {
    char tab[8][8];
    int i, j;
    for (i = 0; i < 8; ++i) {
        for (j = 0; j < 8; ++j) {
            scanf(" %c", &tab[i][j]);
        }
    }
    eightQueens(tab);
    for (i = 0; i < 8; ++i) {
        for (j = 0; j < 8; ++j) {
            printf(" %c ", tab[i][j]);
        }
        printf("\n");
    }    
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

int eightQueens(char arr[8][8]) {
    return eightQueensRecur(arr, 0, 0);
}

int eightQueensRecur(char arr[8][8], int linha, int col) {
    /* Rejeita */
    int c, exists = 0;
    for (c = 0; c < 8; ++c) {
        if (arr[linha][c] != 'Q') exists = 0;
        else {
            arr[linha][c] = '.';
            exists = 1;
            col = c;
            break;
        }
    }
    if (exists == 0) col = -1;
    int column;
    int possible = 0;
    for (column = col+1; column < 8; ++column) {
        if (isPossible(arr, linha, column)) {
            possible = 1;
            col = column;
            break;
        }
    }
    if (possible == 0) return 0;
    /* Aceita */
    arr[linha][col] = 'Q';
    if (linha == 7 && possible == 1) return 1;
    /* Chamadas Recursivas */
    int ans = eightQueensRecur(arr, linha+1, col);
    if (!ans) ans = eightQueensRecur(arr, linha-1, col);
    return ans;
}