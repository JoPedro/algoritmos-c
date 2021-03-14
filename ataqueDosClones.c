#include <stdio.h>
int main()
{
    int rows, cols, jedix, jediy;
    int i, j, k;
    scanf("%d %d", &rows, &cols);
    scanf("%d %d", &jedix, &jediy);

    char linha[cols];
    char planeta[rows+2][cols+2];

    k = 0;
    for (i = 1; i <= rows; i++)
    {
        scanf(" %[^\n]s", linha);
        k = 0;
        for (j = 1; j <= cols * 2; j++)
        {
            if (linha[j] != ' ')
            {
                planeta[i][k] = linha[j];
                k++;
            }
        }
    }

    int cordBomba[][2] = { 0 };
    int v = 0;
    int numBombas = 0;
    
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            // Qualquer canto sem ser extremidades
            if ((planeta[i][j] > planeta[i - 1][j] && planeta[i][j] > planeta[i + 1][j]) && (planeta[i][j] > planeta[i][j - 1] && planeta[i][j] > planeta[i][j + 1]) && (planeta[i][j] > planeta[i - 1][j - 1] && planeta[i][j] > planeta[i + 1][j + 1]) && (planeta[i][j] > planeta[i + 1][j - 1] && planeta[i][j] > planeta[i - 1][j + 1]))
            {
                cordBomba[v][0] = i;
                cordBomba[v][1] = j;
                v++;
                numBombas++;
            }
        }
    }

    for (i = 0; i < numBombas; i++) {
        printf("Local %d: %d %d\n", i, cordBomba[i][0], cordBomba[i][1]);
    }

    if (jedix == cordBomba[0] && jediy == cordBomba[1])
        printf("Descanse na Força...");
    else
        printf("Ao resgate!");
}