#include <stdio.h>

int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    char mapa[25][25] = {'0'};

    for (int i = 1; i <= rows; i++)
    {
        char linha[50] = {0};
        scanf(" %[^\n]49s", linha);

        for (int j = 1; j <= cols; j++)
        {
            mapa[i][j] = linha[j];
        }
    }

    int x, y;
    char facing;
    scanf("%d %d %c", &x, &y, &facing);
    x--;
    y--;
    int moves;
    scanf("%d", &moves);

    while (moves > 0)
    {
        if (facing == 'N') {
            if (mapa[x - 1][y] == '.')
            {
                x = x - 1;
                moves--;
            }
            else if ((mapa[x - 1][y] == '_' || mapa[x - 1][y] == '|') || mapa[x - 1][y] == '0')
            {
                y = y + 1;
                moves--;
            }
            else if (mapa[x - 1][y] == '*')
            {
                y = y - 1;
                moves--;
            }
        }
        if (facing == 'S') {
            if (mapa[x + 1][y] == '.')
            {
                x = x + 1;
                moves--;
            }
            else if ((mapa[x + 1][y] == '_' || mapa[x + 1][y] == '|') || mapa[x + 1][y] == '0')
            {
                y = y - 1;
                moves--;
            }
            else if (mapa[x + 1][y] == '*')
            {
                y = y + 1;
                moves--;
            }
        }
        if (facing == 'L') {
            if (mapa[x][y + 1] == '.')
            {
                y = y + 1;
                moves--;
            }
            else if ((mapa[x][y + 1] == '_' || mapa[x][y + 1] == '|') || mapa[x][y + 1] == '0')
            {
                x = x - 1;
                moves--;
            }
            else if (mapa[x][y + 1] == '*')
            {
                x = x + 1;
                moves--;
            }
        }
        if (facing == 'O') {
            if (mapa[x][y - 1] == '.')
            {
                y = y - 1;
                moves--;
            }
            else if ((mapa[x][y - 1] == '_' || mapa[x][y - 1] == '|') || mapa[x][y - 1] == '0')
            {
                x = x + 1;
                moves--;
            }
            else if (mapa[x][y - 1] == '*')
            {
                x = x - 1;
                moves--;
            }
        }  
    }

    printf("Posição final: %d %d", x + 1, y + 1);
}
